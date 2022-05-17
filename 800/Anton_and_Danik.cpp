#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a_count=0, b_count=0;
    cin >> n;
    char scores[n];
    cin >> scores;
    for (int i=0; i<n; i++){
        if (scores[i] == 'A'){
            a_count++;
        }
        else{
            b_count++;
        }
    }
    if (a_count==b_count){
        cout << "Friendship";
    }
    else if (a_count<b_count){
        cout << "Danik";
    }
    else{
        cout << "Anton";
    }
}
