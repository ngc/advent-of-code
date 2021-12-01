#include <bits/stdc++.h>

using namespace std;

int main(){
    int input, old_input, c = 0;
    cin >> old_input;

    while(cin >> input){
        c += input > old_input;
        old_input = input;
    }
    cout << c << endl;
}