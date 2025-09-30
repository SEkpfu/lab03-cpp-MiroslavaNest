#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main(){
    const double pi = 3.14159265358979323846;
    for (double x = 0; x <= 2*pi+1; x = x + pi/6.0){
        cout << "x = " << x << endl << "y = " << cos(x) << endl << endl;  
    }   
    return 0;
}