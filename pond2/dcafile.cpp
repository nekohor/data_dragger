
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
        if(!strcmp(part, "thick_ct")){
            return "CLG";
        }
    }
    if(line == 2250){
        if(!strcmp(part, "thick_ct")){
            return "CLG";
        }
    }
    cerr << "Nothing meet dcafile name" << endl;
}
