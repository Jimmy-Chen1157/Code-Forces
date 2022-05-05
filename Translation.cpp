#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    int len;
    bool yes = true;
    cin >> a;
    cin >> b;
    len = a.size();
    for (int i=0; i<len; i++){
        if (a[i] != b[len-i-1]){
            cout << "NO";
            yes = false;
            break;
        }
    }
    if (yes){
        cout << "YES";
    }

}
