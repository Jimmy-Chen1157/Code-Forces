#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    char s[n];
    for (int i=0; i<n; i++){
        cin >> s[i];
    }
    while(t>0){
        for (int i=1; i<n; i++){
            if (s[i-1]=='B'&&s[i]=='G'){
                char temp = s[i-1];
                s[i-1] = s[i];
                s[i] = temp;
                i++;
            }
        }
        t--;
    }
    cout << s;
}
