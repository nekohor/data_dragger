#ifndef _SUMMARY_H_
#define _SUMMARY_H_

void coil_id(string& coil,ofstream &outfile);

void get_pond_1(string& coil, const char* item, const char* part,
	const char* stat, const char* segment,
	int head_len, int tail_len, int lower, int upper,
	const char* head, ofstream &outfile
	);

void get_pond_2(string& coil, const char* item, const char* part_os, const char* part_ds,
	const char* stat, const char* segment,
	int head_len, int tail_len, int lower, int upper,
	const char* head, ofstream &outfile);

void get_pond_3(string& coil, const char* item, 
	const char* part_cl,const char* part_os, const char* part_ds,
	const char* stat, const char* segment,
	int head_len, int tail_len, int lower, int upper,
	const char* head, ofstream &outfile);


extern string header;
#endif //_SUMMARY_H_