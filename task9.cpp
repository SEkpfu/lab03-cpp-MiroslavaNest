#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, n, m; 
    cout << "Вводите натуральные числа. \nЕсли последовательность закончена, введите 0.\n"; cin >> x;
    n = 0;
    while(x != 0){
        if(m < x){
            n = 1;
            m = x;
        }
        else if (x == m){
            n++;
        }
        cin >> x;
    }
    cout << "Кол-во чисел, равных максимуму: " << n;
    return 0;
}