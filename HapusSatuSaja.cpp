#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.length(); i++){
        string temp = a;
        temp.erase(i, 1);
        if(temp == b){
            cout << "bisa";
            return 0;
        }

    }
    cout << "tidak bisa";
}