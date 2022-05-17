#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, num=0;
    string curr, prev="";
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> curr;
        if (prev!=curr){
            num++;
        }
        prev = curr;
    }
    cout << num;
}
