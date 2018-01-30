#ifndef _CALC_H_
#define _CALC_H_

string differ_stat(string dca_name,string signal_os,string signal_ds,
	const char* stat, const char* segment,
	int head_len, int tail_len, int upper ,int lower);

string triple_stat(string dca_name,string signal_cl,string signal_os,string signal_ds,
	const char* stat, const char* segment,
	int head_len, int tail_len, int upper ,int lower);

string along_stat(string dca_name,string signal_name,
	const char* stat, const char* segment,
	int head_len, int tail_len, double upper ,double lower);

#endif //_CALC_H_