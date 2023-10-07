#include <iostream>
int main() {
setlocale(0, ""); using namespace std;
    cout << "Нумерация месяцев:" << endl <<"Январь-1" << endl <<"Февраль-2" << endl <<"Март-3" << endl <<
    "Апрель-4" << endl <<"Май-5" << endl <<"Июнь-6" << endl <<"Июль-7" << endl <<"Август-8" << endl 
    <<"Сентябрь-9" << endl <<"Октябрь-10" << endl <<"Ноябрь-11" << endl <<"Декабрь-12" << endl;
    int ms; cout <<"Выберете месяц: "; cin >>ms;
    switch (ms) { case 1: cout <<"Январь" ; break;
    case 2: cout <<"Февраль";break;
    case 3: cout <<"Март";break;
    case 4: cout <<"Апрель";break;
    case 5: cout <<"Май";break;
    case 6: cout <<"Июнь";break;
    case 7: cout <<"Июль";break;
    case 8: cout <<"Август";break;
    case 9: cout <<"Сентябрь";break;
    case 10: cout <<"Октябрь";break;
    case 11:cout <<"Ноябрь";break;
    case 12: cout <<"Декабрь";break;
    default:cout << "Такого месяца нет!";
     }
}    
