
# include <string>
# include <iostream>
# include <sstream>
# include "dcafile.h"
using namespace std;

void get_dcafile(int line,
                 const char* part,
                 string& coil,
                 string& dcafile)
{
    stringstream stream;
    stream << coil << "/" << get_dca_name(line, part)  <<"_POND.dca";
    dcafile = stream.str();
}

const char* get_dca_name(int line, const char* part)
{
    if(line == 1580){
        if(!strcmp(part, "thick_clg")){
            return "CLG";
        }
        if(!strcmp(part, "width_flt")){
            return "FLT";
        }
        if(!strcmp(part, "width_mfg")){
            return "MFG";
        }
        if(!strcmp(part, "wedge_40")){
            return "MFG";
        }
        if(!strcmp(part, "crown_40")){
            return "MFG";
        }
        if(!strcmp(part, "shift_f1")){
            return "F1";
        }
        if(!strcmp(part, "shift_f2")){
            return "F2";
        }
        if(!strcmp(part, "shift_f3")){
            return "F3";
        }
        if(!strcmp(part, "shift_f4")){
            return "F4";
        }
        if(!strcmp(part, "shift_f5")){
            return "F5";
        }
        if(!strcmp(part, "shift_f6")){
            return "F6";
        }
        if(!strcmp(part, "shift_f7")){
            return "F7";
        }
        if(!strcmp(part, "flt_ro1")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro2")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro3")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro4")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro5")){
            return "FLT";
        }
        if(!strcmp(part, "looper_angle1")){
            return "F1";
        }
        if(!strcmp(part, "looper_angle2")){
            return "F2";
        }
        if(!strcmp(part, "looper_angle3")){
            return "F3";
        }
        if(!strcmp(part, "looper_angle4")){
            return "F4";
        }
        if(!strcmp(part, "looper_angle5")){
            return "F5";
        }
        if(!strcmp(part, "looper_angle6")){
            return "F6";
        }
        if(!strcmp(part, "r2dt")){
            return "R2DT";
        }
    }
    if(line == 2250){
        if(!strcmp(part, "thick_clg")){
            return "CLG";
        }
        if(!strcmp(part, "width_flt")){
            return "FLT";
        }
        if(!strcmp(part, "width_mfg")){
            return "MFG";
        }
        if(!strcmp(part, "wedge_40")){
            return "MFG";
        }
        if(!strcmp(part, "crown_40")){
            return "MFG";
        }
        if(!strcmp(part, "shift_f1")){
            return "F1";
        }
        if(!strcmp(part, "shift_f2")){
            return "F2";
        }
        if(!strcmp(part, "shift_f3")){
            return "F3";
        }
        if(!strcmp(part, "shift_f4")){
            return "F4";
        }
        if(!strcmp(part, "shift_f5")){
            return "F5";
        }
        if(!strcmp(part, "shift_f6")){
            return "F6";
        }
        if(!strcmp(part, "shift_f7")){
            return "F7";
        }
        if(!strcmp(part, "flt_ro1")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro2")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro3")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro4")){
            return "FLT";
        }
        if(!strcmp(part, "flt_ro5")){
            return "FLT";
        }
        if(!strcmp(part, "looper_angle1")){
            return "F1";
        }
        if(!strcmp(part, "looper_angle2")){
            return "F2";
        }
        if(!strcmp(part, "looper_angle3")){
            return "F3";
        }
        if(!strcmp(part, "looper_angle4")){
            return "F4";
        }
        if(!strcmp(part, "looper_angle5")){
            return "F5";
        }
        if(!strcmp(part, "looper_angle6")){
            return "F6";
        }
        if(!strcmp(part, "r2dt")){
            return "R2DT";
        }
    }
    cerr << "Nothing meet dcafile name" << endl;
}
