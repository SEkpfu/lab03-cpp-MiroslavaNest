#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 0;
    do
     {
        cout << "x = " << x << endl << "y = " << log(x+1)*sin(x) << endl;
        x = x + 0.5;
        cout << endl;
    } while (x <= 5.0);
    return 0;
}