#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    double x,y,x1,y1,p,x0,y0;
    cout << "Введите количество углов многоугольника: "; cin >> n;
    if (n <= 2){cout << "Такой фигуры не существует, введите больше 2-х углов!"; return 0;}
    cout << "Введите коородинаты:\nx1 = "; cin >> x;
    cout << "y1 = "; cin >> y;
    x0 = x;
    y0 = y;
    p = 0;
    for(int i = 2; i <= n; i++){
        cout << "Введите координаты\nx" << i << " = "; cin >> x1; cout << "y" << i << " = "; cin >> y1;
        p += sqrt(pow((x1 - x),2) + pow(y1 - y, 2));
        x = x1;
        y = y1;
    }
        p += sqrt(pow(x0 - x, 2) + pow(y0 - y,2));
        cout << p;
    return 0;
}


