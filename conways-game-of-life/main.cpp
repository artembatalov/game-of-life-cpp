//
//  main.cpp
//  conways-game-of-life
//
//  Created by Artem Batalov on 16.07.2025.
//

#include <iostream>
#include <vector>
using namespace std;

// System variables
int x_len = 8, y_len = 8;
vector<vector<int> >space;
vector<pair<int, int> >conf;
string com;

void print_conf(){
    cout << "(I, J): ";
    for(pair<int, int> a: conf) {
        cout<<"("<<a.first<<", "<<a.second<<"), ";
    }
    cout<<"\n";
}

void set_up_game(){
    cout << "Current settings:\n"
    << "X-dimension: " << x_len << "\n"
    << "Y-dimension: " << y_len << "\n";
    print_conf();
    
}

int main() {
    
    // Introduction:
    cout << "Welcome to Conway's game of life!\n";
    cout << "Enter <Break> to end the game.\n";
    cout << "Enter <Start> to start the random game.\n";
    cout << "Enter <Settings> to set up the game.\n";
    
    // Game logic
    while(cin >> com){
        if(com == "Break"){
            cout<<"Ending the game...\n";
            return 0;
        }
        if(com == "Settings"){
            set_up_game();
        }
    }
}
