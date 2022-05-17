#include<bits/stdc++.h>

using namespace std;



int main(){
    string myString;
    // getline(cin, myString);
    cin >> myString;
    if (myString[0] >= 97 && myString[0] <= 122){
        myString[0] -= 32;
    }
    cout << myString;

}
