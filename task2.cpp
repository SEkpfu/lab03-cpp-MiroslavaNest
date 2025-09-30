#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n, sum2 = 0;
    int c = 0;
    int min = INT_MAX;
    cout << "Введите 7 целых чисел: \n";
    for(int i = 1; i <= 7; i++){
        cout << i << " : ";
        cin >> n;
        if (n < 0) c++;
        if (abs(n) >= 10 && abs(n) <= 99) sum2 = sum2 + n;
        if (n < min) min = n;
    }
    cout << "a) " << c << endl << "b) " << sum2 << endl << "c) " << min; 
    return 0;
}