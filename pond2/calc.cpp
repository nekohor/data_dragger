#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <math.h>
using namespace std;
#include "DCAlib.h"

// --- basic functions ---
static float max(float a,float b){
	return a >= b ? a : b;
}

static float max_abs(float a,float b){
	return fabs(a) >= fabs(b) ? a : b; 
}

static float min(float a,float b){
	return a <= b ? a : b;
}

///////normal function///////
string calc_aimrate(ValueData* pData, int start, int end,int upper,int lower){
	float aimpoint = 0.0;float totalpoint = 0.0; float rate;
	for(int i = start;i < end; i++){
		if((pData[i].data <= upper) && (pData[i].data >= lower)){
			aimpoint += 1.0;
		}
		totalpoint += 1.0;
	}
	rate = aimpoint / totalpoint; rate *= 100.0;
	stringstream stream;
	stream << rate;
	string value = stream.str();
	return value;
}

string calc_max(ValueData* pData, int start, int end){
	float tmp;
	tmp = pData[start].data;
	for(int i = start; i < end; i++){
		tmp = max(tmp,pData[i].data);
	}
	stringstream stream;
	stream << tmp;
	return stream.str();
}

string calc_max_abs(ValueData* pData, int start, int end){
	float tmp;
	tmp = pData[start].data;
	for(int i = start; i < end; i++){
		tmp = max_abs(tmp,pData[i].data);
	}
	stringstream stream;
	stream << tmp;
	return stream.str();
}

string calc_min(ValueData* pData, int start, int end){
	float tmp;
	tmp = pData[start].data;
	for(int i = start; i < end; i++){
		tmp = min(tmp,pData[i].data);
	}
	stringstream stream;
	stream << tmp;
	return stream.str();
}

string calc_std(ValueData* pData, int start, int end){
	float average = 0.0;float sum = 0.0;float square_sum = 0.0;
	float variance = 0.0;float stddev = 0.0;
	for(int i = start; i < end; i++){
		sum += pData[i].data;
	}
	average = sum / (float)(end - start);
	for(int i = start; i < end; i++){
		square_sum += pow(pData[i].data - average,2);
	}
	variance = square_sum / (float)(end - start);
	stddev = sqrt(variance);
	stringstream stream;
	stream << stddev;
	string value = stream.str();
	return value;
}

string calc_mean(ValueData* pData, int start, int end){
	float average = 0.0;float sum = 0.0;
	float variance = 0.0;float stddev = 0.0;
	for(int i = start; i < end; i++){
		sum += pData[i].data;
	}
	average = sum / (float)(end - start);
	stringstream stream;
	stream << average;
	string value = stream.str();
	return value;
}

string calc_all(ValueData* pData, int start, int end){
	stringstream stream;
	for(int i = start; i < end; i++){
		stream << pData[i].data;
		stream << ",";
	}
	string value = stream.str();
	return value;
}

//////get_start_and_end//////
int get_start(long num,int head_len){
	return head_len;
}

int get_end(long num,int tail_len){
	return (num - tail_len);
}


//////segment_selection//////
void seg_select( long num, 
	const char* segment, 
	int head_len, 
	int tail_len, 
	int &start,
	int &end){
		if(!strcmp(segment,"head")){
			start = 0; end = get_start(num,head_len);
		} else if(!strcmp(segment,"tail")){
			start = get_end(num, tail_len); end = num;
		} else if(!strcmp(segment,"total")){
			start = 0; end = num;
		} else if(!strcmp(segment,"main")){
			start = get_start(num, head_len); end = get_end(num, tail_len);
		} else {}
}

//////calc_selection//////
void calculate(const char* stat,
	ValueData* pData,
	int start, 
	int end,
	int upper,
	int lower, 
	string &result){
		if(!strcmp(stat, "aimrate")){
			result = calc_aimrate(pData, start, end, upper, lower);
		} else if(!strcmp(stat, "max")){
			result = calc_max(pData, start, end);
		} else if(!strcmp(stat, "min")){
			result = calc_min(pData, start, end);
		} else if(!strcmp(stat, "std")){
			result = calc_std(pData, start, end);
		} else if(!strcmp(stat, "mean")){
			result = calc_mean(pData, start, end);
		} else if(!strcmp(stat, "all")){
			result = calc_all(pData, start, end);
		} else {}
}

ValueData* horizontal_differ(string dca_name,string signal_os,string signal_ds){
	long num;
	ReadDCA(dca_name.c_str(), signal_os.c_str(), NULL, &num);
	ValueData* pData    = new ValueData[num];
	ValueData* pData_os = new ValueData[num];
	ValueData* pData_ds = new ValueData[num];
	ReadDCA(dca_name.c_str(), signal_os.c_str(), pData_os, &num);
	ReadDCA(dca_name.c_str(), signal_ds.c_str(), pData_ds, &num);

	for(int i = 0;i <= num; i++){
		pData[i].length = pData_os[i].length;
		pData[i].data = pData_os[i].data - pData_ds[i].data;
	}
	delete [] pData_os;delete [] pData_ds;
	return pData;
}

ValueData* horizontal_triple(string dca_name,string signal_cl,string signal_os,string signal_ds){
	long num;
	ReadDCA(dca_name.c_str(), signal_os.c_str(), NULL, &num);
	ValueData* pData = new ValueData[num];
	ValueData* pData_cl = new ValueData[num];
	ValueData* pData_os = new ValueData[num];
	ValueData* pData_ds = new ValueData[num];
	ReadDCA(dca_name.c_str(), signal_cl.c_str(), pData_cl, &num);
	ReadDCA(dca_name.c_str(), signal_os.c_str(), pData_os, &num);
	ReadDCA(dca_name.c_str(), signal_ds.c_str(), pData_ds, &num);		
	for(int i = 0;i < num; i++){
		pData[i].length = pData_cl[i].length;
		pData[i].data = pData_cl[i].data - (pData_os[i].data + pData_ds[i].data) / (float)2;
	}
	delete [] pData_cl;delete [] pData_os;delete [] pData_ds;
	return pData;
}

string differ_stat(string dca_name,string signal_os,string signal_ds,
	const char* stat, const char* segment,
	int head_len, int tail_len, int upper ,int lower){
		long num;int start; int end;string result;
		if(!(ReadDCA(dca_name.c_str(), signal_os.c_str(), NULL, &num))){
			
			return "";
		} else {}
		ValueData* pData = horizontal_differ(dca_name,signal_os, signal_ds);
		seg_select(num, segment, head_len, tail_len, start, end);
		calculate(stat, pData, start, end, upper, lower, result);
		delete [] pData;
		return result;
}


string triple_stat(string dca_name,string signal_cl,string signal_os,string signal_ds,
	const char* stat, const char* segment,
	int head_len, int tail_len, int upper ,int lower){
		long num;int start; int end;string result;
		if(!(ReadDCA(dca_name.c_str(), signal_cl.c_str(), NULL, &num))){
			return "";
		} else {}
		ValueData* pData = horizontal_triple(dca_name,signal_cl,signal_os, signal_ds);
		seg_select(num, segment, head_len, tail_len, start, end);
		calculate(stat, pData, start, end, upper, lower, result);
		delete [] pData;
		return result;
}

string along_stat(string dca_name,string signal_name,
	const char* stat, const char* segment,
	int head_len, int tail_len, int upper ,int lower){
		long num;int start; int end;string out;
		if(!(ReadDCA(dca_name.c_str(), signal_name.c_str(), NULL, &num))){
			return "";
		} else {}
		ValueData* pData = new ValueData[num];
		ReadDCA(dca_name.c_str(), signal_name.c_str(), pData, &num);
		seg_select(num, segment, head_len, tail_len, start, end);
		cout << "start:"<< start << " --- end:"<< end << endl;
		cout << " --- num:" << num << endl;
		calculate(stat, pData, start, end, upper, lower, out);
		delete [] pData;
		//cout << out;
		return out;
}