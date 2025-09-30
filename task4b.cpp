#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
cout << endl << "Пункт b)" << endl;
    int nb;
    double xb, yb;
    cout << "Введите n: "; cin >> nb;
    cout << "Введите x: "; cin >> xb;
    yb = sqrt(xb);
    for ( ; nb > 1; nb--){
        yb = sqrt(xb + yb);
    }
    cout << "b) " << yb;

}
