//
//  main.cpp
//  conways-game-of-life
//
//  Created by Artem Batalov on 16.07.2025.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // System variables
    int x_len = 8, y_len = 8;
    vector<vector<int> >space(y_len);
    string com;
    
    // Introduction:
    cout << "Welcome to Conway's game of life!\n";
    cout << "Enter <Break> to end the game.\n";
    cout << "Enter <Start> to start the random game.\n";
    
    // Game logic
    while(cin >> com){
        if(com == "Break"){
            cout<<"Ending the game...\n";
            return 0;
        }
    }
}
