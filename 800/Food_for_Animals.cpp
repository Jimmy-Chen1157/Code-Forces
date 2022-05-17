#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, x, y, dog=0, cat=0, remain;
        cin >> a >> b >> c >> x >> y;
        if (x > a){
            dog = x - a;
        }
        if(y > b){
            cat = y - b;
        }

        remain = dog + cat - c;

        if (remain > 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }


    }

}
