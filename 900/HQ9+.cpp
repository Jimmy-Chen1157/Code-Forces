#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    char c;
    for(int i=0; i<n; i++){
        c = s[i];
        if (c == 'H' || c == 'Q' || c == '9'){
            cout << "YES" << endl;
            break;
        }
        else if(i == n-1){
            cout << "NO" << endl;
        }
    }
}
