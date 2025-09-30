#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int na;
    double xa, ya;
    cout << "Пункт a)" << endl;
    cout << "Введите n: "; cin >> na;
    cout << "Введите x: "; cin >> xa;
    ya = cos(xa);
    for ( ; na > 1; na--){
        ya = cos(xa + ya);
    }
    cout << "a) " << ya << endl;

}
