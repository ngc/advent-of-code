#include <bits/stdc++.h>

using namespace std;

void peak_vector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ", ";
    }
    return;
}

int main(){
    // Power consumption = gamma * epsilon

    string input;

    vector<int> counters;

    for(int i = 0; i < 12; i++){
        counters.push_back(0);
    }

    int total = 0;
    while(cin >> input){
        total += 1;
        for(int i = 0; i < input.length(); i++){
            if(input[i] == '1'){
                counters[i] += 1;
            }
        }
       // peak_vector(counters);
    }

    int gamma = 0;
    int epsilon = 0;

    for(int i = 0; i < counters.size(); i++){
        if(counters[i] > total/2){
            gamma += pow(2, (counters.size() - 1 - i));
        }else{
            epsilon += pow(2, (counters.size() - 1 - i));
        }
    }

    cout << endl << gamma * epsilon;
    return 0;
}