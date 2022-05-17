#include <iostream>
#include <string>


using namespace std;

int main()
{
    int input;
    bool done = false;
    cin >> input;

    for (int a = 2; a < input; a += 2){
        if ((input - a)%2 == 0){
            cout << "YES";
            done = true;
            return 0;
        }
    }

    if (!done){
        cout << "NO";
        return 0;
    }
}
