#include <fstream>
#include "file.h"
#include <iostream>
#include <sstream>
using namespace std;
bool isValidDateFormat(){
    return true;
}
int getDate(const string& date, MoonData& data){
    if(isValidDateFormat() == false){
        return -1;
    }
    string day = date.substr(0,2);
    string month = date.substr(3,2);
    string year = date.substr(6,4);
    string ymd = year + month + day;
    string fileName = "moon" + year;
    ifstream file("../moon/"+fileName);

    if(!file.is_open()){
        return -1;
    }
    string line;
    int count = 0;
    while (getline(file, line)) {
        if (line.substr(0, 8) == ymd) {
            count++;
        }
    }
    data = new MoonData[count];
    file.clear();
    file.seekg(0, ios::beg);
    int index = 0;
    while (getline(file, line)) {
        if (line.substr(0, 8) == ymd) {
            stringstream ss(line);
            ss >> data[index].YMD >> data[index].HMS >> data[index].T >> data[index].R >> data[index].El >> data[index].Az >> data[index].FI >> data[index].LG;
            index++;
        }
    }

    file.close();

}