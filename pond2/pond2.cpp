// pond2.cpp 
//

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
#include "DCAlib.h"
#include "summary.h"
#include "script.h"

int main(int argc, char *argv[])
{
  // --- IO position ---
  //string coil_list = "e:/data_inter/yh_data_inter.txt";
  //string result = "e:/data_out/20171106_yh_data.csv";

  // --- silicon feedback ---
  string coil_list = "e:/silicon_fb/20180410/data_inter.txt";
  string result = "e:/silicon_fb/20180410/data_output.csv";

  // --- yehui feedback --- 
  //string coil_list = "e:/yh_fb/20171229/data_inter.txt";
  //string result = "e:/yh_fb/20171229/data_output.csv";

  // --- luna stat --- 
  //string coil_list = "e:/dca_inter/dcadata_inter_2250_201712to201802.txt";
  //string result = "e:/dca_output/dca_data_2250_201712to201802_flt.csv";

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
	//cout << "" << endl;
	//outfile << "" << endl;
    //getline(infile,coil);

    // different demand (from script.h)
	// ===================================================================
    //get_pond(coil, "thick", "thick_clg","all", "total",0,0,0,0,"THK_CLG", outfile);
    get_pond(coil, "wedge", "wedge_40", "all", "total", 0, 0, 0, 0, "wedge", outfile);
	//thk_wid_aimrate(coil, outfile);
	//pos_shft_stat(coil, outfile);
	//flat_stat(coil, outfile);
	//flatness_aimrate(coil, outfile);

	//temp_related(coil,outfile);
	// ===================================================================

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
