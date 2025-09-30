#include<iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    string x = "0";
    int x1, n, cht;
    n = 0;
    cht = 0;
    cout << "Вводите x - целые числа. \nЕсли ввод чисел окончен, написать '-'" << endl;
    cout << "Введите x: "; cin >> x;
    while(x != "-"){
        x1 = stoi(x);
        n++;
        if(!(x1&1)){
            cht++;
        }
        cout << "Введите x: "; cin >> x;
    }
    cout << endl << "Кол-во чисел: " << n << endl << "Кол-во чётных чисел: " << cht;
}