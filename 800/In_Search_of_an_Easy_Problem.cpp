#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, num=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> k;
        if(k==1){
            num++;
        }
    }
    if(num>0){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
}
