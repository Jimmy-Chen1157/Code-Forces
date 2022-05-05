#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        string s;
        cin >> s;
        bool check=true, yes=true;
        int a_count=0, b_count=0;
        int len = s.size();

        if (s[len-1] == 'A' || s[0] == 'B'){
            cout << "NO" << endl;
            check = false;
        }
        if (check){
            for (int i=0; i<len; i++){
               if (s[i] == 'A'){
                    a_count++;
                }
                else{
                    b_count++;
                }
                if (a_count<b_count){
                    cout << "NO" << endl;
                    yes = false;
                    break;
                }
            }
        }
        if(yes && check){
            cout << "YES" << endl;
        }


        t--;
    }

}
