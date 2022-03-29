#include<iostream>

using namespace std;

int main()
{
    int n,k,v[100],count;
    count=0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int idx=0; idx<n; idx++){
        if (v[idx] >= v[k-1] && v[idx] > 0){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
