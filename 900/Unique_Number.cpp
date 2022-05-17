#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    stack<int> st;
    cin >> t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
    }
    for (int i=0; i<t; i++){
        int sum = 0;
        if (arr[i]>45){
            cout << -1 << '\n';
        }
        else{
            for (int s=9; s>=1; s--){
                if (arr[i] - sum > s){
                    sum += s;
                    st.push(s);
                }
                else{
                    st.push(arr[i]-sum);
                    break;
                }
            }
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            cout << '\n';
        }
    }

}
