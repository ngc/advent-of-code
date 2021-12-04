// Copyright (c) 2021 Nathan Coulas
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include <bits/stdc++.h>

using namespace std;

vector<string> oxygen(vector<string> diag, int n){

    if(diag.size() == 1){
        return diag;
    }

    vector<string> zeros;
    vector<string> ones;

    for(int i = 0; i < diag.size(); i++){
        if(diag[i][n] == '1'){
            ones.push_back(diag[i]);
        }else{
            zeros.push_back(diag[i]);
        }
    }

    if(zeros.size() > ones.size()){
        return oxygen(zeros, n+1);
    }else{
        return oxygen(ones, n+1);
    }
} 

vector<string> co2(vector<string> diag, int n){

    if(diag.size() == 1){
        return diag;
    }

    vector<string> zeros;
    vector<string> ones;

    for(int i = 0; i < diag.size(); i++){
        if(diag[i][n] == '1'){
            ones.push_back(diag[i]);
        }else{
            zeros.push_back(diag[i]);
        }
    }

    if(ones.size() < zeros.size()){
        return co2(ones, n+1);
    }else{
        return co2(zeros, n+1);
    }
} 

int bin2int(string bin){
    int accum = 0;

    for(int i = 0; i < bin.length(); i++){
        accum += (bin[i] == '1') * pow(2, (bin.length() - 1 - i));
    }
    return accum;
}

int main(){
    // Life support rating = oxygen generator rating * CO2 scrubber rating

    //Before searching for the either rating value, start with the full list of binary numbers from your diagnostic report
    //Just consider the first bit of those numbers
    //Then:
    // - Keep only numbers selected by the bit criteria for the type of rating value for which you are searching.
    // - Discard numbers which do not match the bit criteria.
    // - If you only have one number left, stop; this is the rating value for which you are searching
    // - Otherwise, repeat the process, considering the next bit to the right. 

    //Bit Criteria:
    // Oxygen Generator:
    //      - Determine the most common value (0 or 1) in the current position 
    //      - Keep only number with that bit in that position. 
    //      - If 0 and 1 are equally common, keep values with a 0 in the position being considered

    //CO2 Scrubber rating value
    //  - Determine the least common value.


    //Length of each bin string is 12

    string input;
    vector<string> diag;

    while(cin >> input){
        diag.push_back(input);
    }

    cout << bin2int(oxygen(diag, 0)[0]) * bin2int(co2(diag, 0)[0]) << endl;

    return 0;
}