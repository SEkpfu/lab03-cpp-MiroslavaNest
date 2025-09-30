#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    string x = "*";
    cout << "Введите число n: "; cin >> n;
    if (n%2!=0){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= n; j++){
            if(x == "*"){
                cout << "o ";
                x = "o";
            }
            else if(x == "o"){
                cout << "* ";
                x = "*";
            }
        }
        cout << endl;
    }
}
    else{
        for(int i = 1; i<=n; i++){
        for(int j = 1; j <= n; j++){
            if(x == "*"){
                cout << "o ";
                x = "o";
            }
            else if(x == "o"){
                cout << "* ";
                x = "*";
            }
        }
        if(x == "*"){
            x = "o";
        }
        else if(x == "o"){
            x = "*";
        }
        cout << endl;
    }
    return 0;
}
}

