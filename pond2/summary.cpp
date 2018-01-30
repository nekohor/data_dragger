#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

#include "dcafile.h"
#include "signal.h"
#include "calc.h"


string header;


int get_line(){
	return 1580;
}


void coil_id(string& coil,ofstream &outfile){
	string coilname = coil.substr(coil.find_last_of('/') + 1,
		coil.length() - coil.find_last_of('/'));
	cout << coilname << ",";
	outfile << coilname << ",";
	//string get_millline_head = coilname.substr(0,1);
	header = "ÈÈ¾íºÅ";
	cout << get_line() << "line" << endl;
}

void output(string& result, ofstream &outfile, const char* head){
	cout << result;
	outfile << result;
	header += ",";
	header += head;
}

void get_pond(string& coil, const char* item, const char* part,
		const char* stat, const char* segment,
		int head_len, int tail_len, double lower, double upper,
		const char* head, ofstream &outfile){
		string dca_name;string signal_name;string result;
		get_dcafile(get_line(), part, coil, dca_name);
		get_signal(get_line(), part, signal_name);
		ifstream exist(dca_name,ios::in);
		if(exist){
			cout << "dca_name:" << dca_name << endl;
			cout << "signal_name:" << signal_name << endl;
			result += along_stat(dca_name, signal_name,
				stat, segment,
				head_len, tail_len, upper, lower);
		}else{
			cerr << coil << "doesn't exist!" << endl;
			result += "";
		}
		result += ",";  // don't forget this step
		output(result, outfile , head);
}

void get_pond(string& coil, const char* item, const char* part_os, const char* part_ds,
	     const char* stat, const char* segment,
	     int head_len, int tail_len, int lower, int upper,
	     const char* head, ofstream &outfile){
		string dca_name;string signal_os;string signal_ds;string result;
		get_dcafile(get_line(), part_os, coil, dca_name);
		get_signal(get_line(), part_os, signal_os);
		get_signal(get_line(), part_ds, signal_ds);
		ifstream exist(dca_name,ios::in);
		if(exist){
			result += differ_stat(dca_name, signal_os, signal_ds,
				stat, segment,
				head_len, tail_len, upper, lower);
		}else{
			result += "";
		}
		result += ",";  // don't forget this step
		output(result, outfile, head);
}

void get_pond(string& coil, const char* item, 
	const char* part_cl,const char* part_os, const char* part_ds,
	const char* stat, const char* segment,
	int head_len, int tail_len, int lower, int upper,
	const char* head, ofstream &outfile){
		string dca_name;string result;
		string signal_cl;string signal_os;string signal_ds;
		get_dcafile(get_line(), part_cl, coil, dca_name);
		get_signal(get_line(), part_cl, signal_cl);
		get_signal(get_line(), part_os, signal_os);
		get_signal(get_line(), part_ds, signal_ds);
		ifstream exist(dca_name,ios::in);
		if(exist){
			result += triple_stat(dca_name, signal_cl, signal_os, signal_ds,
				stat, segment,
				head_len, tail_len, upper, lower);
		}else{
			result += "";
		}
		result += ",";  // don't forget this step
		output(result, outfile, head);
}