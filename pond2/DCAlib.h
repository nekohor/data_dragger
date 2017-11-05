
#ifndef _DCALIB_H_
#define _DCALIB_H_

#pragma  comment (lib, "DCALib.lib")
#pragma  comment (lib, "CppRtu70.lib")

struct ValueData
{
	float length;
	float data;
};

bool ReadDCA(const char* DcaFile, const char* SignalName, ValueData* SignalValues, long* num);


#endif //_DCALIB_H_