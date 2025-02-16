#ifndef UTILS.H
#define UTILS.H

struct structDate{
    char day[2];
    char month[2];
    char year[4];
   
};
structDate parseDate(const char* date);
#endif