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
  string coil_list = "e:/silicon_fb/20171207/data_inter.txt";
  //string coil_list = "e:/yh_fb/20171031/data_inter.txt";

  //string result = "e:/data_out/20171106_yh_data.csv";
  string result = "e:/silicon_fb/20171207/data_output.csv";
  //string result = "e:/yh_fb/20171031/data_output.csv";
  // setup data(1580 or 2250)
  int mill_line = 1580;

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

    //get_pond(coil, "thick", "thick_ct","all", "total",0,0,0,0,"THK_CLG", outfile);
    get_pond(coil, "wedge", "wedge_40", "all", "total", 0, 0, 0, 0, "wedge", outfile);


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
