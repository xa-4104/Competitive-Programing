#include <iostream>
using namespace std;

int Euclid(int x, int y){
    if(y == 0){
        return x;
    } else {
        return Euclid(y, x % y);
    }
}
int main(){
    int A, B, C, D, E, F, FPB;
    cin >> A >> B >> C >> D;
    E = (A * D) + (B * C);
    F = B * D;

    FPB = Euclid(E, F);

    if (FPB == 1){
        cout << E << " " << F;
    } else {
        cout << E / FPB << " " << F / FPB;
    }
}