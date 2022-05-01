#include<bits/stdc++.h>


using namespace std;


pair<int, int> find_min(vector<int> v)
{
    int min, min_idx;
    min = v[0];
    int size = v.size();
    for (int idx=1; idx < size; idx++){
        if (v[idx] < min){
            min = v[idx];
            min_idx = idx;
        }
    }
    return {min, min_idx};
}

void subtract_and_remove( vector<int>& v, int min, int min_idx)
{
    v.erase(v.begin()+min_idx);
    int size = v.size();
    for (int index = 0; index<size; index++){
        v[index] = v[index]-min;
    }
}




int main()
{
    int t,n,input;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n;
        vector<int> v;
        int min, min_idx;
        pair<int, int> p;
        for (int k=0; k<n; k++){
            cin >> input;
            v.push_back(input);
        }
        while(v.size()>1){
            p = find_min(v);
            min = p.first;
            min_idx = p.second;
            subtract_and_remove(v, min, min_idx);
        }

        cout << v[0];
    }

    return 0;
}




