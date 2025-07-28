#include <iostream>
#include <vector>
using namespace std;

// System variables
int x_len = 8, y_len = 8, delay = 1;
vector<vector<int> >space;
vector<pair<int, int> >conf;
vector<pair<int, int> >change;
string com;

void print_conf(){
    cout << "(I, J): ";
    for(pair<int, int> a: conf) {
        cout<<"("<<a.first<<", "<<a.second<<"), ";
    }
    cout<<"\n";
}

void show_settings(){
    cout << "Current settings:\n"
    << "X-dimension: " << x_len << "\n"
    << "Y-dimension: " << y_len << "\n"
    << "Delay: " << delay << "\n";
    print_conf();
}

void change_settings(){
    cout << "Tip: leave empty not to change the value!\n";
    cout << "X-dimension: " << "[current value is " << x_len << " ]\n";
    cout << "Y-dimension: " << "[current value is " << x_len << " ]\n";
    cout << "Delay " << "[current value is " << x_len << " ]\n";
}

void start(){
    int i = 1;
    while(!conf.empty()){
        cout << "Stage: " << i << "\n";
    }
}

int main() {
    
    // Introduction:
    cout << "Welcome to Conway's game of life!\n"
    << "Enter <Break> to end the game.\n"
    << "Enter <Start> to start the random game.\n"
    << "Enter <Settings> to see the settings.\n"
    << "Enter <Change> to set up the game.\n"
    << "Enter <Info> to get more info about the game.\n"
    << "Enter <About> to get info about developer.\n";
    
    // Game logic
    while(cin >> com){
        if(com == "Break"){
            cout<<"Ending the game...\n";
            return 0;
        }
        if(com == "Settings"){
            show_settings();
            continue;
        }
        if(com == "Change"){
            change_settings();
        }
        if(com == "Start"){
            start();
            continue;
        }
        if(com == "Info"){
            cout << " The Game of Life is a cellular automaton created by British mathematician John Conway in 1970. It’s a zero-player game, meaning that its evolution is determined by its initial state, with no further input. The “game” is played on a grid of cells, where each cell is either alive or dead. With each step (or generation), the state of each cell is updated based on a set of simple rules related to the number of alive neighbors:\n"
            << "* A live cell with 2 or 3 live neighbors survives.\n"
            << "* A dead cell with exactly 3 live neighbors becomes alive."
            << "* n all other cases, the cell dies or remains dead.\n"
            << " Despite its simplicity, the Game of Life can produce incredibly complex and fascinating patterns, making it a popular example in computer science and mathematics.\n";
            
            continue;
        }
        if(com == "About"){
            cout << "Artem Batalov, 2025\n";
            continue;
        }
        cout<< "An error happened. Please, try again!";
    }
}
