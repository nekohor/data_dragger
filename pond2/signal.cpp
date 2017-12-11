
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
        if(!strcmp(part, "thick_clg")){
            return "TN\\L2_AGC_F7XTHKCDEVCLG";
        }
        if(!strcmp(part, "width_flt")){
            return "TN\\L2_FA_FLTWDEV";
        }
        if(!strcmp(part, "width_mfg")){
            return "TN\\L2_CF_F7XWIDDEVMFG";
        }
        if(!strcmp(part, "wedge_40")){
            return "PR\\FM_DEL_WEDGE40";
        }
        if(!strcmp(part, "crown_40")){
            return "PR\\FM_DEL_CROWN40";
        }
        if(!strcmp(part, "shift_f1")){
            return "TN\\L2_CF_F1WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f2")){
            return "TN\\L2_CF_F2WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f3")){
            return "TN\\L2_CF_F3WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f4")){
            return "TN\\L2_CF_F4WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f5")){
            return "TN\\L2_CF_F5WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f6")){
            return "TN\\L2_CF_F6WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f7")){
            return "TN\\L2_CF_F7WRSTPOSFBK";
        }
        if(!strcmp(part, "flt_ro1")){
            return "TN\\L2_CF_F7XFLTRO1";
        }
        if(!strcmp(part, "flt_ro2")){
            return "TN\\L2_CF_F7XFLTRO2";
        }
        if(!strcmp(part, "flt_ro3")){
            return "TN\\L2_CF_F7XFLTRO3";
        }
        if(!strcmp(part, "flt_ro4")){
            return "TN\\L2_CF_F7XFLTRO4";
        }
        if(!strcmp(part, "flt_ro5")){
            return "TN\\L2_CF_F7XFLTRO5";
        }
    }
    if(line == 2250){
        if(!strcmp(part, "thick_clg")){
            return "TN\\L_AG2_F7XTHKCDEVCLG";
        }
        if(!strcmp(part, "width_flt")){
            return "TN\\L_FA_F7XWIDDEVFLT";
        }
        if(!strcmp(part, "width_mfg")){
            return "TN\\L_FA_F7XWIDDEVMFG";
        }
        if(!strcmp(part, "wedge_40")){
            return "L2\\FMX_MFT_PROFB_WEDGE2";
        }
        if(!strcmp(part, "crown_40")){
            return "L2\\FMX_MFT_PROFB_CROWN2";
        }
        if(!strcmp(part, "shift_f1")){
            return "TN\\L_CF_F1WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f2")){
            return "TN\\L_CF_F2WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f3")){
            return "TN\\L_CF_F3WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f4")){
            return "TN\\L_CF_F4WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f5")){
            return "TN\\L_CF_F5WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f6")){
            return "TN\\L_CF_F6WRSTPOSFBK";
        }
        if(!strcmp(part, "shift_f7")){
            return "TN\\L_CF_F7WRSTPOSFBK";
        }
        if(!strcmp(part, "flt_ro1")){
            return "TN\\L_CF_F7XFLTRO1";
        }
        if(!strcmp(part, "flt_ro2")){
            return "TN\\L_CF_F7XFLTRO2";
        }
        if(!strcmp(part, "flt_ro3")){
            return "TN\\L_CF_F7XFLTRO3";
        }
        if(!strcmp(part, "flt_ro4")){
            return "TN\\L_CF_F7XFLTRO4";
        }
        if(!strcmp(part, "flt_ro5")){
            return "TN\\L_CF_F7XFLTRO5";
        }
    }
    cerr << "Nothing meet signal name" << endl;
}
