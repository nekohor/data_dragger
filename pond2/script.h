#ifndef _SCRIPT_H_
#define _SCRIPT_H_

// =============================
void yh_feedback(string& coil, ofstream &outfile);
void silicon_feedback(string& coil, ofstream &outfile);

// =============================
void thk_wid_aimrate(string& coil, ofstream &outfile);
void pos_shft_stat(string& coil, ofstream &outfile);
void flat_stat(string& coil, ofstream &outfile);
void flatness_aimrate(string& coil, ofstream &outfile);

void temp_related(string& coil, ofstream& outfile);

#endif //_SCRIPT_H_