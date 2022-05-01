#include<bits/stdc++.h>

using namespace std;

int main(){
    long long num, count=0;
    cin >> num;
    string string_num = to_string(num);
    for (int i=0; i<string_num.size(); i++){
        if (string_num[i]=='4' || string_num[i]=='7'){
            count++;
        }
    }
    if (count==7||count==4){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
