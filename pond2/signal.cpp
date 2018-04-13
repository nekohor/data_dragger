
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
        if(!strcmp(part, "wedge_25")){
            return "PR\\FM_DEL_WEDGE25";
        }
        if(!strcmp(part, "crown_25")){
            return "PR\\FM_DEL_CROWN25";
        }
        if(!strcmp(part, "wedge_40")){
            return "PR\\FM_DEL_WEDGE40";
        }
        if(!strcmp(part, "crown_40")){
            return "PR\\FM_DEL_CROWN40";
        }
        if(!strcmp(part, "wedge_70")){
            return "PR\\FM_DEL_WEDGE70";
        }
        if(!strcmp(part, "crown_70")){
            return "PR\\FM_DEL_CROWN70";
        }
        if(!strcmp(part, "wedge_100")){
            return "PR\\FM_DEL_WEDGE100";
        }
        if(!strcmp(part, "crown_100")){
            return "PR\\FM_DEL_CROWN100";
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
        if(!strcmp(part, "looper_angle1")){
            return "TN\\L2_F1H_L1ANGFB";
        }
        if(!strcmp(part, "looper_angle2")){
            return "TN\\L2_F2H_L2ANGFB";
        }
        if(!strcmp(part, "looper_angle3")){
            return "TN\\L2_F3H_L3ANGFB";
        }
        if(!strcmp(part, "looper_angle4")){
            return "TN\\L2_F4H_L4ANGFB";
        }
        if(!strcmp(part, "looper_angle5")){
            return "TN\\L2_F5H_L5ANGFB";
        }
        if(!strcmp(part, "looper_angle6")){
            return "TN\\L2_F6H_L6ANGFB";
        }
        if(!strcmp(part, "r2dt")){
            return "TN\\L2_R2_R2DTTEMP";
        }
        if(!strcmp(part, "r2_center_ofs")){
            return "TN\\L2_R2_R2XCENTOFS";
        }
        if(!strcmp(part, "ct")){
            return "TN\\L2_ROT_CTTMP";
        }
        if(!strcmp(part, "fdt")){
            return "TN\\L2_FA_FDTTEMP";
        }
        if(!strcmp(part, "speed7")){
            return "TN\\L2_FM_F7_SFB";
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
        if(!strcmp(part, "wedge_25")){
            return "L2\\FMX_MFT_PROFB_WEDGE1";
        }
        if(!strcmp(part, "crown_25")){
            return "L2\\FMX_MFT_PROFB_CROWN1";
        }
        if(!strcmp(part, "wedge_40")){
            return "L2\\FMX_MFT_PROFB_WEDGE2";
        }
        if(!strcmp(part, "crown_40")){
            return "L2\\FMX_MFT_PROFB_CROWN2";
        }
        if(!strcmp(part, "wedge_70")){
            return "L2\\FMX_MFT_PROFB_WEDGE3";
        }
        if(!strcmp(part, "crown_70")){
            return "L2\\FMX_MFT_PROFB_CROWN3";
        }
        if(!strcmp(part, "wedge_100")){
            return "L2\\FMX_MFT_PROFB_WEDGE4";
        }
        if(!strcmp(part, "crown_100")){
            return "L2\\FMX_MFT_PROFB_CROWN4";
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
        if(!strcmp(part, "looper_angle1")){
            return "TN\\L_F1LP_ANGFB";
        }
        if(!strcmp(part, "looper_angle2")){
            return "TN\\L_F2LP_ANGFB";
        }
        if(!strcmp(part, "looper_angle3")){
            return "TN\\L_F3LP_ANGFB";
        }
        if(!strcmp(part, "looper_angle4")){
            return "TN\\L_F4LP_ANGFB";
        }
        if(!strcmp(part, "looper_angle5")){
            return "TN\\L_F5LP_ANGFB";
        }
        if(!strcmp(part, "looper_angle6")){
            return "TN\\L_F6LP_ANGFB";
        }
        if(!strcmp(part, "r2dt")){
            return "TN\\L_R2_R2DT1TEMP";
        }
        if(!strcmp(part, "r2_center_ofs")){
            return "TN\\L_R2_R2XCENTOFS";
        }
        if(!strcmp(part, "ct")){
            return "TN\\L_ROT_CT1TEMP";
        }
        if(!strcmp(part, "fdt")){
            return "TN\\L_FA_FDT1TEMP";
        }
        if(!strcmp(part, "speed7")){
            return "TN\\L_FM_F7_SFB";
        }
    }
    cerr << "Nothing meet signal name" << endl;
}
