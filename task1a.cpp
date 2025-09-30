#include <iostream>

using namespace std;

int main(){
    double tC = 0;
    while (tC <= 100)
    {
        cout << tC << " C = " << (9.0/5.0)*tC + 32 << " F" << endl;
        tC = tC + 10;
    }
    return 0;
}