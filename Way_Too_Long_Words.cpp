#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main()
{
    int n;
    string str;
    cin >> n;
    for (int index=0; index<n; index++){
        cin >> str;
        int len = str.length();
        if (len>10){
            cout << str[0] << len-2 << str[len-1] << endl;
        }
        else{
            cout << str << endl;
        }
    }


    return 0;
}
