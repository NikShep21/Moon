#include <string>
#ifndef FILE_H
#define FILE_H
using namespace std;
struct MoonData {
    string YMD;
    string HMS;
    double T;
    double R;
    double El;
    double Az;
    double FI;
    double LG;
};
void getDate(const string& date);

#endif
 