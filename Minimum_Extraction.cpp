#include<iostream>
#include <vector>


using namespace std;


void find_min(vector<int> v, int& min, int& min_idx)
{
    min = v[0];
    int size = v.size();
    for (int idx=0; idx < size; idx++){
        if (v[idx] < min){
            min = v[idx];
            min_idx = idx;
        }
    }
}

void subtract_and_remove( vector<int>& v, int min, int min_idx)
{
    v.erase(v.begin()+min_idx-1,v.begin()+min_idx);
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
        for (int k=0; k<n; k++){
            cin >> input;
            v.push_back(input);
        }
        while(v.size()>1){
            find_min(v, min, min_idx);
            cout << "min:" << min << endl;
            subtract_and_remove(v, min, min_idx);
            for(int i=0; i<v.size(); i++){
                cout << v[i] << endl;
            }
        }
        cout << v[0];
    }

    return 0;
}




