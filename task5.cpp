#include<iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double e, s;

    cout << "Введите e\n";
    cout << "e = ";
    cin >> e;

    s = 0.0;

    for (int i = 1, z = 1; fabs(1.0 / i > e) ; i += 2, z = -z) {
        s += z * 1.0 / i;
    }
    cout << s;
}