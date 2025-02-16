#ifndef CALCDATA_H
#define CALCDATA_H

struct values{
    char date[11];
    char moonrise[11];
    char climax[11];
    char moonset[11];
};
values calcData(const char* date);
#endif