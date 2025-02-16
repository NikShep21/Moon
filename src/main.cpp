#include <iostream>
#include <string.h>
#include "./calcData/calcData.h"
#include "bb.h"
using namespace std;


int main(){
    
   
    char date[11]; 
    cout << "Введите дату в формате дд.мм.гггг: ";
    cin >> date;
    int f = ff();
    cout << f << endl;

    //values result = calcData(date);
    

    // cout << "Дата: " << result.date << endl;
    // cout << "Восход Луны: " << result.moonrise << endl;
    // cout << "Кульминация Луны: " << result.climax << endl;
    // cout << "Заход Луны: " << result.moonset << endl;
    

    return 0;
}