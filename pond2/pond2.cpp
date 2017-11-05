// pond2.cpp : 定义控制台应用程序的入口点。
//

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
#include "DCAlib.h"
#include "summary.h"


int main(int argc, char* argv[])
{
	// --- IO position ---
	string coil_list = "c:/work/pond/data_inter.txt";
	string result = "c:/work/pond/output.csv";

	// setup data(1580 or 2250)
	int mill_line = 1580;

	// --- file stream set up ---
	ifstream infile(coil_list.c_str());
	ofstream outfile(result.c_str(),ios::trunc);
	//outfile << header << endl;  don't use anymore

	// initialization
	int init_flag = 0;
	string coil;

	// while statement
	while (!infile.eof())
	{
		//info print
		cout << coil << endl;

		//热卷号
		coil_id(coil, outfile);
		
		// normal procedure
		getline(infile,coil);
		get_pond_1(coil, "thick", "thick_ct","all", "total",0,0,0,0,"IKI", outfile);

		// build columns
		if(!init_flag)
		{	
			cout << "" <<endl;
			outfile << "" << endl;
			outfile << header;
			init_flag = 1;
			infile.seekg(0, ios::beg);
		}

		// tuple end
		cout << "" <<endl;
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

