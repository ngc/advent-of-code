// Copyright (c) 2021 Nathan Coulas
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include <bits/stdc++.h>

using namespace std;

vector<int> parse_ints(string input){
    return {7, 4, 9, 5, 11, 17, 23, 2, 0, 14, 21, 24, 10, 16, 13, 6, 15, 25, 12, 22, 18, 20, 8, 19, 3, 26, 1};
}

void peak_2d_array(vector<vector<int>> board){
    cout << endl;
    cout << "BEGIN OUTPUT\n----------" << endl;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "END OUTPUT\n------------" << endl;
}

void mark(vector<vector<int>> &board, int call){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(board[i][j] == call){
                board[i][j] = -call;
            }
        }
    }

}

bool check_bingo(vector<vector<int>> board){

    // Check rows
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(board[i][j] >)
        }
    }

}

int main(){

    // 5x5 grid


    //Number of islands algorithm on each board to look for consist rows in each board.
    //Vector of 2D board arrays

    vector<int> calls;
    //Parse number calls
    string input;
    cin >> input;
    calls = parse_ints(input);

    //New line;
    
    vector<vector<vector<int>>> boards; 
    for(int z = 0; z < 3; z++){ //3 boards in the example case
        vector<vector<int>> board = {};
        for(int i = 0; i < 5; i++){
            vector<int> line = {};
            for(int j = 0; j < 5; j++){
                int temp;
                cin >> temp;
                line.push_back(temp);
            }
            board.push_back(line);
        }

        boards.push_back(board);
    }

    // Process calls
    for(int i = 0 ; i < calls.size(); i++){
        for(int j = 0; j < boards.size(); j++){
            mark(boards[j], calls[i]);
            if(check_bingo(boards[i])){
                cout << "bingo\n";
            }
            peak_2d_array(boards[j]);
        }
        cin >> input;
    }

    cout << endl << endl;

    return 0;
}

/* Possible edge cases:
1. Multiple bingos
2. 0
*/