#include <iostream>
using namespace std;

int Euclid(int x, int y){
    if (y == 0){
        return x;
    }
    else {
        return Euclid(y, x % y);
    }
}


int main(){
    int a,b,FPB;
    cin >> a >> b;

    FPB = Euclid(a,b);

    cout << FPB;
}