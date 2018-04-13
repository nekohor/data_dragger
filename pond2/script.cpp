#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
#include "summary.h"
#include "config.h"


void yh_feedback(string& coil, ofstream &outfile) {
	get_pond(coil, "thick", "thick_clg","all", "total",0,0,0,0,"THK_CLG", outfile);
}


void silicon_feedback(string& coil, ofstream &outfile) {
	get_pond(coil, "wedge", "wedge_40", "all", "total", 0, 0, 0, 0, "wedge", outfile);
}


void thk_wid_aimrate(string& coil, ofstream &outfile) {
	//thick_0.05_aimrate
	get_pond(coil, "thick_0.05", "thick_clg", "aimrate", "total", 0, 0, -0.05, 0.05, "THICK_0.05_AIMRATE", outfile);
	//width_0_16_aimrate
	get_pond(coil, "width_0_16", "width_flt", "aimrate", "total", 0, 0, 0.0, 16.0, "WIDTH_0_16_AIMRATE", outfile);
}

void pos_shft_stat(string& coil, ofstream &outfile) {
	//pos_shft_f1_mean
	get_pond(coil, "pos_shft_f1", "shift_f1", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F1_MEAN", outfile);
	//pos_shft_f2_mean
	get_pond(coil, "pos_shft_f2", "shift_f2", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F2_MEAN", outfile);
	//pos_shft_f3_mean
	get_pond(coil, "pos_shft_f3", "shift_f3", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F3_MEAN", outfile);
	//pos_shft_f4_mean
	get_pond(coil, "pos_shft_f4", "shift_f4", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F4_MEAN", outfile);
	//pos_shft_f5_mean
	get_pond(coil, "pos_shft_f5", "shift_f5", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F5_MEAN", outfile);
	//pos_shft_f6_mean
	get_pond(coil, "pos_shft_f6", "shift_f6", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F6_MEAN", outfile);
	//pos_shft_f7_mean
	get_pond(coil, "pos_shft_f7", "shift_f7", "mean", "main", 2, 2, 0.0, 0.0, "POS_SHFT_F7_MEAN", outfile);
}


void lp_ang4_stat(string& coil, ofstream &outfile) {
	//lp_ang4_max
	get_pond(coil, "lp_ang4", "looper_angle4", "max", "main", 40, 20, 0, 0, "LP_ANG4_MAX", outfile);
	//lp_ang4_min
	get_pond(coil, "lp_ang4", "looper_angle4", "min", "main", 40, 20, 0, 0, "LP_ANG4_MIN", outfile);
}


void r2dt_stat(string& coil, ofstream &outfile) {
	//r2dt_max
	get_pond(coil, "r2dt", "r2dt", "max", "main", 4, 20, 0, 0, "R2DT_MAX", outfile);
	//r2dt_min
	get_pond(coil, "r2dt", "r2dt", "min", "main", 4, 20, 0, 0, "R2DT_MIN", outfile);
	//r2dt_mean
	get_pond(coil, "r2dt", "r2dt", "mean", "main", 4, 20, 0, 0, "R2DT_MEAN", outfile);
	//r2dt_1050_aimrate
	get_pond(coil, "r2dt_1050", "r2dt", "aimrate", "main", 4, 20, 1030, 1070, "R2DT_1050_AIMRATE", outfile);
	//r2dt_1040_aimrate
	get_pond(coil, "r2dt_1040", "r2dt", "aimrate", "main", 4, 20, 1020, 1060, "R2DT_1040_AIMRATE", outfile);
	//r2dt_1030_aimrate
	get_pond(coil, "r2dt_1030", "r2dt", "aimrate", "main", 4, 20, 1010, 1050, "R2DT_1030_AIMRATE", outfile);
	//r2dt_1020_aimrate
	get_pond(coil, "r2dt_1020", "r2dt", "aimrate", "main", 4, 20, 1000, 1040, "R2DT_1020_AIMRATE", outfile);
	//r2dt_1010_aimrate
	get_pond(coil, "r2dt_1010", "r2dt", "aimrate", "main", 4, 20, 990, 1030, "R2DT_1010_AIMRATE", outfile);
	//r2dt_1000_aimrate
	get_pond(coil, "r2dt_1000", "r2dt", "aimrate", "main", 4, 20, 980, 1020, "R2DT_1000_AIMRATE", outfile);
	//r2dt_990_aimrate
	get_pond(coil, "r2dt_990", "r2dt", "aimrate", "main", 4, 20, 970, 1010, "R2DT_990_AIMRATE", outfile);
	//r2dt_1055_aimrate
	get_pond(coil, "r2dt_1055", "r2dt", "aimrate", "main", 4, 20, 1035, 1075, "R2DT_1055_AIMRATE", outfile);
	//r2dt_1045_aimrate
	get_pond(coil, "r2dt_1045", "r2dt", "aimrate", "main", 4, 20, 1025, 1065, "R2DT_1045_AIMRATE", outfile);
	//r2dt_1025_aimrate
	get_pond(coil, "r2dt_1025", "r2dt", "aimrate", "main", 4, 20, 1005, 1045, "R2DT_1025_AIMRATE", outfile);
}

void flatness_aimrate(string& coil, ofstream &outfile) {
	//sym_flt_30IU_aimrate
	get_pond(coil, "sym_flt_30IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150, 0, -30.0, 30.0, "SYM_FLT_30IU_AIMRATE", outfile);
	//sym_flt_28IU_aimrate
	get_pond(coil, "sym_flt_28IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150, 0, -28.0, 28.0, "SYM_FLT_28IU_AIMRATE", outfile);
	//sym_flt_18IU_aimrate
	get_pond(coil, "sym_flt_18IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150, 0, -18.0, 18.0, "SYM_FLT_18IU_AIMRATE", outfile);
	//asym_flt_30IU_aimrate
	get_pond(coil, "asym_flt_30IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150, 0, -30.0, 30.0, "ASYM_FLT_30IU_AIMRATE", outfile);
	//asym_flt_28IU_aimrate
	get_pond(coil, "asym_flt_28IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150, 0, -28.0, 28.0, "ASYM_FLT_28IU_AIMRATE", outfile);
	//asym_flt_18IU_aimrate
	get_pond(coil, "asym_flt_18IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150, 0, -18.0, 18.0, "ASYM_FLT_18IU_AIMRATE", outfile);

}

void temp_related(string& coil, ofstream& outfile) {
	cout << "" << endl;
	outfile << "" << endl;
	//ct_all
	get_pond(coil, "ct", "ct", "all", "total", 0, 0, 0.0, 0.0, "CT_ALL", outfile);
	cout << "" << endl;
	outfile << "" << endl;
	//fdt_all
	get_pond(coil, "fdt", "fdt", "all", "total", 0, 0, 0.0, 0.0, "FDT_ALL", outfile);
	cout << "" << endl;
	outfile << "" << endl;
	//speed7_all
	get_pond(coil, "speed7", "speed7", "all", "total", 0, 0, 0.0, 0.0, "SPEED7_ALL", outfile);
}

void flat_stat(string& coil, ofstream& outfile) {
	if (get_line() == 2250) {
		//sym_flt_75IU_aimrate
		get_pond(coil, "sym_flt_75IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -75.0, 75.0, "SYM_FLT_75IU_AIMRATE", outfile);
		//sym_flt_50IU_aimrate
		get_pond(coil, "sym_flt_50IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -50.0, 50.0, "SYM_FLT_50IU_AIMRATE", outfile);
		//sym_flt_30IU_aimrate
		get_pond(coil, "sym_flt_30IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -30.0, 30.0, "SYM_FLT_30IU_AIMRATE", outfile);
		//sym_flt_20IU_aimrate
		get_pond(coil, "sym_flt_20IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -20.0, 20.0, "SYM_FLT_20IU_AIMRATE", outfile);
		//sym_flt_10IU_aimrate
		get_pond(coil, "sym_flt_10IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -10.0, 10.0, "SYM_FLT_10IU_AIMRATE", outfile);
		//sym_flt_5IU_aimrate
		get_pond(coil, "sym_flt_5IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -5.0, 5.0, "SYM_FLT_5IU_AIMRATE", outfile);
		//sym_bdy_flt_5IU_aimrate
		get_pond(coil, "sym_bdy_flt_5IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "main", 150.0, 0.0, -5.0, 5.0, "SYM_BDY_FLT_5IU_AIMRATE", outfile);
		//asym_flt_75IU_aimrate
		get_pond(coil, "asym_flt_75IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -75.0, 75.0, "ASYM_FLT_75IU_AIMRATE", outfile);
		//asym_flt_50IU_aimrate
		get_pond(coil, "asym_flt_50IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -50.0, 50.0, "ASYM_FLT_50IU_AIMRATE", outfile);
		//asym_flt_30IU_aimrate
		get_pond(coil, "asym_flt_30IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -30.0, 30.0, "ASYM_FLT_30IU_AIMRATE", outfile);
		//asym_flt_20IU_aimrate
		get_pond(coil, "asym_flt_20IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -20.0, 20.0, "ASYM_FLT_20IU_AIMRATE", outfile);
		//asym_flt_10IU_aimrate
		get_pond(coil, "asym_flt_10IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -10.0, 10.0, "ASYM_FLT_10IU_AIMRATE", outfile);
		//asym_flt_5IU_aimrate
		get_pond(coil, "asym_flt_5IU", "flt_ro1", "flt_ro5", "aimrate", "head", 150.0, 0.0, -5.0, 5.0, "ASYM_FLT_5IU_AIMRATE", outfile);
		//asym_bdy_flt_5IU_aimrate
		get_pond(coil, "asym_bdy_flt_5IU", "flt_ro1", "flt_ro5", "aimrate", "main", 150.0, 0.0, -5.0, 5.0, "ASYM_BDY_FLT_5IU_AIMRATE", outfile);
	} else {
		//sym_flt_75IU_aimrate
		get_pond(coil, "sym_flt_75IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -75.0, 75.0, "SYM_FLT_75IU_AIMRATE", outfile);
		//sym_flt_50IU_aimrate
		get_pond(coil, "sym_flt_50IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -50.0, 50.0, "SYM_FLT_50IU_AIMRATE", outfile);
		//sym_flt_30IU_aimrate
		get_pond(coil, "sym_flt_30IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -30.0, 30.0, "SYM_FLT_30IU_AIMRATE", outfile);
		//sym_flt_20IU_aimrate
		get_pond(coil, "sym_flt_20IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -20.0, 20.0, "SYM_FLT_20IU_AIMRATE", outfile);
		//sym_flt_10IU_aimrate
		get_pond(coil, "sym_flt_10IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -10.0, 10.0, "SYM_FLT_10IU_AIMRATE", outfile);
		//sym_flt_5IU_aimrate
		get_pond(coil, "sym_flt_5IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -5.0, 5.0, "SYM_FLT_5IU_AIMRATE", outfile);
		//sym_bdy_flt_5IU_aimrate
		get_pond(coil, "sym_bdy_flt_5IU", "flt_ro3", "flt_ro1", "flt_ro5", "aimrate", "main", 120.0, 0.0, -5.0, 5.0, "SYM_BDY_FLT_5IU_AIMRATE", outfile);
		//asym_flt_75IU_aimrate
		get_pond(coil, "asym_flt_75IU", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -75.0, 75.0, "ASYM_FLT_75IU_AIMRATE", outfile);
		//asym_flt_50IU_aimrate
		get_pond(coil, "asym_flt_50IU", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -50.0, 50.0, "ASYM_FLT_50IU_AIMRATE", outfile);
		//asym_flt_30IU_aimrate
		get_pond(coil, "asym_flt_30IU", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -30.0, 30.0, "ASYM_FLT_30IU_AIMRATE", outfile);
		//asym_flt_20IU_aimrate
		get_pond(coil, "asym_flt_20IU", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -20.0, 20.0, "ASYM_FLT_20IU_AIMRATE", outfile);
		//asym_flt_10IU_aimrate
		get_pond(coil, "asym_flt_10IU", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -10.0, 10.0, "ASYM_FLT_10IU_AIMRATE", outfile);
		//asym_flt_5IU_aimrate
		get_pond(coil, "asym_flt_5IU", "flt_ro1", "flt_ro5", "aimrate", "head", 120.0, 0.0, -5.0, 5.0, "ASYM_FLT_5IU_AIMRATE", outfile);
		//asym_bdy_flt_5IU_aimrate
		get_pond(coil, "asym_bdy_flt_5IU", "flt_ro1", "flt_ro5", "aimrate", "main", 120.0, 0.0, -5.0, 5.0, "ASYM_BDY_FLT_5IU_AIMRATE", outfile);
	}
}

