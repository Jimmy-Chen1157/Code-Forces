#include<bits/stdc++.h>

using namespace std;

int main(){
    char s[100];
    int n, countUP=0, countLOW=0;
    cin >> s;
    n = strlen(s);
    for(int i=0; i<n; i++){
        if (s[i] >= 97 && s[i] <= 122){
            countLOW++;
        }
        else{
            countUP++;
        }
    }
    if (countLOW>=countUP){
        for (int i=0; i<n; i++){
            if (s[i]>=65 && s[i]<=90){
                s[i]+=32;
            }
        }
    }
    else{
        for (int i=0; i<n; i++){
            if (s[i]<=122 && s[i]>=97){
                s[i]-=32;
            }
        }
    }

    cout << s;

}
