
# include <string>
# include <iostream>
# include <sstream>
# include "signal.h"
using namespace std;

void get_signal(int line,
                const char* part,
                string& signal)
{
    stringstream stream;
    stream << get_sig_name(line, part);
    signal = stream.str();
}

const char* get_sig_name(int line, const char* part)
{
    if(line == 1580){
        if(!strcmp(part, "thick_ct")){
            return "TN\\L2_AGC_F7XTHKCDEVCLG";
        }
        if(!strcmp(part, "wedge_40")){
            return "PR\\FM_DEL_WEDGE40";
        }
        if(!strcmp(part, "crown_40")){
            return "PR\\FM_DEL_CROWN40";
        }
    }
    if(line == 2250){
        if(!strcmp(part, "thick_ct")){
            return "TN\\L_AG2_F7XTHKCDEVCLG";
        }
    }
    cerr << "Nothing meet signal name" << endl;
}
