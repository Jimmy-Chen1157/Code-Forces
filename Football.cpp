#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    int prev=4,idx,count=1;
    cin >> s;
    for (int i=0;i<s.size();i++){
        idx = int(s[i]);
        if(idx==prev){
            count++;
        }
        else if(count < 7){
            count = 1;
        }
        prev=idx;
    }
    if(count>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
