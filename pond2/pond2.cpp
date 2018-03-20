// pond2.cpp : ��������̨Ӧ�ó��������ڵ㡣
//

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
#include "DCAlib.h"
#include "summary.h"

int main(int argc, char *argv[])
{
  // --- IO position ---
  //string coil_list = "e:/data_inter/yh_data_inter.txt";
  //string result = "e:/data_out/20171106_yh_data.csv";

  string coil_list = "e:/silicon_fb/20180228/data_inter.txt";
  string result = "e:/silicon_fb/20180228/data_output.csv";

  //string coil_list = "e:/yh_fb/20171229/data_inter.txt";
  //string result = "e:/yh_fb/20171229/data_output.csv";

  //string coil_list = "e:/dca_inter/dca_data_1580_201712_inter.txt";   
  //string result = "e:/dca_output/dca_data_1580_201712_all.csv";

  // setup data(1580 or 2250)
  //int mill_line = 2250/1580;

  // --- file stream set up ---
  ifstream infile(coil_list.c_str());
  ofstream outfile(result.c_str(), ios::trunc);
  //outfile << header << endl;  don't use anymore

  // initialization
  int init_flag = 0;
  string coil;

  // while statement
  while (getline(infile, coil))
  {
    //info print
    cout << coil << endl;

    //output coil id
    coil_id(coil, outfile);

    // normal procedure
    /*getline(infile,coil);*/

    // different demand

    //get_pond(coil, "thick", "thick_clg","all", "total",0,0,0,0,"THK_CLG", outfile);
    get_pond(coil, "wedge", "wedge_40", "all", "total", 0, 0, 0, 0, "wedge", outfile);

	////sym_flt_max
	//get_pond(coil, "sym_flt", "flt_ro3", "flt_ro1", "flt_ro5", "max", "main", 6, 6, 0, 0, "SYM_FLT_MIN", outfile);
	////sym_flt_min
	//get_pond(coil, "sym_flt", "flt_ro3", "flt_ro1", "flt_ro5", "min", "main", 6, 6, 0, 0, "SYM_FLT_MAX", outfile);
	////asym_flt_max
	//get_pond(coil, "asym_flt", "flt_ro1", "flt_ro5", "max", "main", 6, 6, 0, 0, "ASYM_FLT_MIN", outfile);
	////asym_flt_min
	//get_pond(coil, "asym_flt", "flt_ro1", "flt_ro5", "min", "main", 6, 6, 0, 0, "ASYM_FLT_MAX", outfile);
	//
	////lp_ang4_max
	//get_pond(coil, "lp_ang4", "looper_angle4", "max", "main", 30, 10, 0, 0, "LP_ANG4_MAX", outfile);
	////lp_ang4_min
	//get_pond(coil, "lp_ang4", "looper_angle4", "min", "main", 30, 10, 0, 0, "LP_ANG4_MIN", outfile);

	////r2dt_max
	//get_pond(coil, "r2dt", "r2dt", "max", "main", 4, 20, 0, 0, "R2DT_MAX", outfile);
	////r2dt_min
	//get_pond(coil, "r2dt", "r2dt", "min", "main", 4, 20, 0, 0, "R2DT_MIN", outfile);
	////r2dt_mean
	//get_pond(coil, "r2dt", "r2dt", "mean", "main", 4, 20, 0, 0, "R2DT_MEAN", outfile);
	////r2dt_1050_aimrate
	//get_pond(coil, "r2dt_1050", "r2dt", "aimrate", "main", 4, 20, 1030, 1070, "R2DT_1050_AIMRATE", outfile);
	////r2dt_1040_aimrate
	//get_pond(coil, "r2dt_1040", "r2dt", "aimrate", "main", 4, 20, 1020, 1060, "R2DT_1040_AIMRATE", outfile);
	////r2dt_1030_aimrate
	//get_pond(coil, "r2dt_1030", "r2dt", "aimrate", "main", 4, 20, 1010, 1050, "R2DT_1030_AIMRATE", outfile);
	////r2dt_1020_aimrate
	//get_pond(coil, "r2dt_1020", "r2dt", "aimrate", "main", 4, 20, 1000, 1040, "R2DT_1020_AIMRATE", outfile);
	////r2dt_1010_aimrate
	//get_pond(coil, "r2dt_1010", "r2dt", "aimrate", "main", 4, 20, 990, 1030, "R2DT_1010_AIMRATE", outfile);
	////r2dt_1000_aimrate
	//get_pond(coil, "r2dt_1000", "r2dt", "aimrate", "main", 4, 20, 980, 1020, "R2DT_1000_AIMRATE", outfile);
	////r2dt_990_aimrate
	//get_pond(coil, "r2dt_990", "r2dt", "aimrate", "main", 4, 20, 970, 1010, "R2DT_990_AIMRATE", outfile);
	////r2dt_1055_aimrate
	//get_pond(coil, "r2dt_1055", "r2dt", "aimrate", "main", 4, 20, 1035, 1075, "R2DT_1055_AIMRATE", outfile);
	////r2dt_1045_aimrate
	//get_pond(coil, "r2dt_1045", "r2dt", "aimrate", "main", 4, 20, 1025, 1065, "R2DT_1045_AIMRATE", outfile);
	////r2dt_1025_aimrate
	//get_pond(coil, "r2dt_1025", "r2dt", "aimrate", "main", 4, 20, 1005, 1045, "R2DT_1025_AIMRATE", outfile);
	////lp_ang4_max
	//get_pond(coil, "lp_ang4", "looper_angle4", "max", "main", 40, 20, 0, 0, "LP_ANG4_MAX", outfile);
	////lp_ang4_min
	//get_pond(coil, "lp_ang4", "looper_angle4", "min", "main", 40, 20, 0, 0, "LP_ANG4_MIN", outfile);
	////thick_0.05_aimrate
	//get_pond(coil, "thick_0.05", "thick_clg", "aimrate", "total", 0, 0, -0.05, 0.05, "THICK_0.05_AIMRATE", outfile);
	////width_0_16_aimrate
	//get_pond(coil, "width_0_16", "width_flt", "aimrate", "total", 0, 0, 0.0, 16.0, "WIDTH_0_16_AIMRATE", outfile);

	////pos_shft_f1_mean
	//get_pond(coil, "pos_shft_f1", "shift_f1", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F1_MEAN", outfile);
	////pos_shft_f2_mean
	//get_pond(coil, "pos_shft_f2", "shift_f2", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F2_MEAN", outfile);
	////pos_shft_f3_mean
	//get_pond(coil, "pos_shft_f3", "shift_f3", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F3_MEAN", outfile);
	////pos_shft_f4_mean
	//get_pond(coil, "pos_shft_f4", "shift_f4", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F4_MEAN", outfile);
	////pos_shft_f5_mean
	//get_pond(coil, "pos_shft_f5", "shift_f5", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F5_MEAN", outfile);
	////pos_shft_f6_mean
	//get_pond(coil, "pos_shft_f6", "shift_f6", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F6_MEAN", outfile);
	////pos_shft_f7_mean
	//get_pond(coil, "pos_shft_f7", "shift_f7", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F7_MEAN", outfile);


	// build columns
    if (!init_flag)
    {
      cout << "" << endl;
      outfile << "" << endl;
      outfile << header;
      init_flag = 1;
      infile.seekg(0, ios::beg);
    }

    // tuple end
    cout << "" << endl;
    outfile << "" << endl;
  }

  /////////////////////////////////////////////////////////////
  //--- test ---
  //long num;
  //std::cout << "hehe";
  //ReadDCA("c:/work/pond/M17100759P/CLG_POND.dca", "TN\\L2_AGC_F7XTHKCDEVCLG", NULL, &num);
  //std::cout << num << endl;
  //ValueData* pData = new ValueData[num];
  //ReadDCA("c:/work/pond/M17100759P/CLG_POND.dca", "TN\\L2_AGC_F7XTHKCDEVCLG", pData, &num);
  //for(int i = 0; i < 100; i++){
  //	std::cout << pData[i].data;
  //}
  //delete [] pData;

  ///////////////////////////////////////////////////////////////
  infile.close();
  outfile.close();
  getchar();
  return 0;
}
