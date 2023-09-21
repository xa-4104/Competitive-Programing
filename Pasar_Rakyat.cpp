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

int LCM(int x, int y){
    return x * y / Euclid(x,y);
}
int main(){
    int N, FPB, KPK;
    cin >> N;
    int D[N];

    for (int i = 0; i < N; i++){
        cin >> D[i];
    }
    KPK = D[0];
    for (int i = 0; i < N; i++){
        KPK = LCM(KPK, D[i]);
    }
    cout << KPK;
}