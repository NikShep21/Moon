#include "utils.h"
#include <string.h>
structDate parseDate(const char* date){
    structDate parsedDate;
    strncpy(parsedDate.day, date, 2);
    parsedDate.day[2] = '\0';
    strncpy(parsedDate.month, date + 3, 2);
    parsedDate.month[2] = '\0';
    strncpy(parsedDate.year, date + 6, 4);
    parsedDate.year[4] = '\0';
    return parsedDate;
}