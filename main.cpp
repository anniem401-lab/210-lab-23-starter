// COMSC-210 | Lab 23 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <fstream> // For file operation
#include <iomanip>
#include <list> // To use std::list
#include "Goat.h" // A complete class for Goat objects
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu(); // Main menu function that loops in main.

int main() {
    srand(time(0)); // For random number generation
    bool again;

    // Reads & populates arrays for names and colors
    ifstream fin("names.txt"); // Opens txt of names
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt"); // Opens txt of colors
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close(); // Closes out of the files

    // Task two
    // Write a GM3K1 engine that loops on this menu.
    // Write a main_menu() function that outputs this and then obtains,
    // validates, and returns the user's choice.
    main_menu();

    return 0;
}

// main_menu outputs a menu allowing the user to choose from four options.
// arguments: none.
// returns: user choice from number input.
int main_menu(){
    cout << endl << "** GOAT MANAGER 3001 **" << endl;
    cout << "[1] Add a goat" << endl;
    cout << "[2] Delete a goat" << endl;
    cout << "[3] List goats" << endl;
    cout << "[4] Quit" << endl;

    int choice;
    cout << "Choice --> ";
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4){
        cout << "Invalid choice. Please enter 1, 2, 3, or 4: ";
        cin >> choice;
    }
    if (choice = 1){
        cout << "You chose to add a goat." << endl;
        // Code to add a goat
    }
    if (choice = 2){
        cout << "You chose to delete a goat." << endl;
        // Code to delete a goat
    }
    if (choice = 3){
        cout << "You chose to list goats." << endl;
        // Code to list goats
    }
    if (choice = 4){ // To exit the program
        cout << "You have chosen to exit the program, goodbye!" << endl << endl;
        return 1; // Ends program
    }
}