#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    double S = 0;
    cout << "Введите число n: "; cin >> n;
    for (double i = 1; i <= n; i++){
        S = S + (1.0/(2.0*i));
    }
    cout << "S = " << S;
    return 0;
}