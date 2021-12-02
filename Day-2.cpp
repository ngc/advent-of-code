#include <bits/stdc++.h>

using namespace std;

int main(){

    string type;

    int horizontal = 0;
    int depth = 0;

    while(cin >> type){
        int value;
        cin >> value;

        if(type == "forward"){
            horizontal += value;
        }else if(type == "down"){
            depth += value;
        }else if(type == "up"){
            depth -= value;
        }
    }
    cout << horizontal * depth << endl;
    return 0;
}