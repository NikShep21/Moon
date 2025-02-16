#include "file.h"
#include <string.h>
#include <fstream>
#include <iostream>
MoonData getDataFile(const char* year, const char* month, const char* day){
    MoonData data;
    char path[24] = "../../Moon/moonYYYY.dat";
    strncpy(path + 14, year, 4);

    std::ifstream file(path);
    if (!file.is_open()) {
        std::cerr << "Не удалось открыть файл: " << path << std::endl;
        return data;
    }
    return data;
}