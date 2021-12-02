#include <bits/stdc++.h>

using namespace std;

int main(){

    string type;

    int aim = 0;
    int horizontal = 0;
    int depth = 0;

    while(cin >> type){
        int value;
        cin >> value;

        if(type == "forward"){
            horizontal += value;
            depth += value * aim;
        }else if(type == "down"){
            aim += value;
        }else if(type == "up"){
            aim -= value;
        }
    }
    cout << horizontal * depth << endl;
    return 0;
}