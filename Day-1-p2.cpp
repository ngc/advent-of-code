#include <bits/stdc++.h>

using namespace std;

int main(){

    int input;
    int c = 0;
    queue<int> q;
    int sum = 0, old_sum = -1;
    while(cin >> input){
        q.push(input);
        sum += input;

        if(q.size() == 3){
            if(old_sum != -1){
                c += sum > old_sum;
            }
            old_sum = sum;
            sum -= q.front();
            q.pop();
        }
    }
    cout << c << endl;
}