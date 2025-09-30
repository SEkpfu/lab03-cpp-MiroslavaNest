#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = -1.5;
    for ( ; x < -0.5; x = x + 0.25){
        cout << "x = " << x << endl << "y = " << 1.0 - pow(x,2) << endl << endl;
    }
    for ( ; x <= 1; x = x + 0.25){
        cout << "x = " << x << endl << "y = " << x + 1.0 << endl << endl;
    }
    for( ; x <= 1.5; x = x + 0.25){
        cout << "x = " << x << endl << "y = " << 1.0 + sqrt(abs(cos(x))) << endl << endl;
    }
    return 0;
}