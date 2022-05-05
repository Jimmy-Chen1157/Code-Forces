#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, h;
    cin >> n >> h;
    int height[n], width=0;
    for (int i=0; i<n; i++){
        cin >> height[i];
    }
    for (int i=0; i<n; i++){
        if (height[i] > h){
            width += 2;
        }
        else{
            width++;
        }
    }
    cout << width;

}
