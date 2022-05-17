#include<bits/stdc++.h>

using namespace std;

int main(){
    string myString;
    int count = 0;

    cin >> myString;
    sort(myString.begin(), myString.end());
    for (int i=0; i<myString.size(); i++){
        if (myString[i]!=myString[i+1]){
            count++;
        }
    }
    if (count%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}
