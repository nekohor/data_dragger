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

matplotlib.style.use('ggplot')


plt.rcParams["font.sans-serif"] = ["Microsoft Yahei"]
plt.rcParams["axes.unicode_minus"] = False

INDENT = "    "
line_list = [1580, 2250]
df_origin = pd.read_excel("gene_data.xlsx")
for line in line_list:
    df = df_origin.loc[df_origin["LINE"] == line]
    with open("statements_%d.cpp" % line, "w") as f:
        for idx in df.index:
            s = df.loc[idx, :]
            f.write(INDENT)
            f.write("//")
            f.write("{item}_{calc}\n".format(item=s["ITEM"], calc=s["CALC"]))
            f.write(INDENT)
            f.write('get_pond(coil, "{}", '.format(s["ITEM"]))
            if s["P_COUNT"] == 1:
                f.write('"{}", '.format(s["PART_CL"]))
            if s["P_COUNT"] == 2:
                f.write('"{}", "{}", '.format(s["PART_OS"], s["PART_DS"]))
            if s["P_COUNT"] == 3:
                f.write('"{}", "{}", "{}", '.format(
                    s["PART_CL"], s["PART_OS"], s["PART_DS"]))
            f.write('"{}", "{}", {}, {}, {}, {}, '.format(
                    s["CALC"], s["SEGMENT"],
                    s["HD_LEN"], s["TL_LEN"], s["LOWER"], s["UPPER"]))
            f.write('"{item}_{calc}", outfile);\n'.format(
                item=s["ITEM"].upper(), calc=s["CALC"].upper()))
