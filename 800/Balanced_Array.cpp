#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    for (int i=0; i<n; i++){
        if ((arr[i]/2) % 2 != 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            long long s=0;
            for (int k=1; k<=(arr[i]/2); k++){
                cout << 2*k << " ";
                s += 2*k;
            }
            s = 4*s/arr[i];
            for (int k=1; k<=(arr[i]/4); k++){
                cout << 2*k-1 << " ";
            }
            for (int k=arr[i]/4; k>=1; k--){
                cout << s-2*k+1 << " ";
            }
            cout << endl;
        }
    }
}
