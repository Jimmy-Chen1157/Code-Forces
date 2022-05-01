#include<bits/stdc++.h>

using namespace std;

int main(){
    int d, steps;
    cin >> d;
    if (d%5==0){
        steps=d/5;
    }
    else{
        steps = d/5+1;
    }
    cout << steps;
}
