
#ifndef FILE_H
#define FILE_H
using namespace std;
struct MoonData {
    char YMD[9];
    char HMS[7];
    double T;
    double R;
    double El;
    double Az;
    double FI;
    double LG;
};
MoonData getDataFile(const char* year, const char* month, const char* day);


#endif
 