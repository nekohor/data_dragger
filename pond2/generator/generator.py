# coding:utf-8
import pandas as pd
import matplotlib.pyplot as plt
import matplotlib
import numpy as np
import os
import sys
# import seaborn as sns  # 学院派风格的话，这个用不到
import docx   # 注意是python-docx
from docx.shared import Inches
import re
import asyncio
import aiofiles
matplotlib.style.use('ggplot')


plt.rcParams["font.sans-serif"] = ["Microsoft Yahei"]
plt.rcParams["axes.unicode_minus"] = False


INDENT = "    "
line_list = [1580, 2250]
df = pd.read_excel("gene_part.xlsx")
df.index = df["PART"]

# dcafile generation
with open("../dcafile.cpp", "w") as f:
    f.write(
        """
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
"""
    )
    for line in line_list:
        df_line = df.loc[df["LINE"] == line]
        f.write(INDENT)
        f.write("if(line == %d){\n" % line)
        for item in df_line.index:
            f.write(INDENT * 2)
            f.write(r'if(!strcmp(part, "%s")){' % item)
            f.write("\n")
            f.write(INDENT * 3)
            f.write('return "{}";\n'.format(df_line.loc[item, "DCAFILE"]))
            f.write(INDENT * 2)
            f.write('}\n')
        f.write(INDENT)
        f.write('}\n')
    f.write(INDENT)
    f.write('cerr << "Nothing meet dcafile name" << endl;\n')
    f.write("}\n")


# signal generation
with open("../signal.cpp", "w") as f:
    f.write(
        """
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
"""
    )
    for line in line_list:
        df_line = df.loc[df["LINE"] == line]
        f.write(INDENT)
        f.write("if(line == %d){\n" % line)
        for item in df_line.index:
            f.write(INDENT * 2)
            f.write(r'if(!strcmp(part, "%s")){' % item)
            f.write("\n")
            f.write(INDENT * 3)
            f.write('return "{}";\n'.format(df_line.loc[item, "SIGNAL"]))
            f.write(INDENT * 2)
            f.write('}\n')
        f.write(INDENT)
        f.write('}\n')
    f.write(INDENT)
    f.write('cerr << "Nothing meet signal name" << endl;\n')
    f.write("}\n")
