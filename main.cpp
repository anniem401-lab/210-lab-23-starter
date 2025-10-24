// COMSC-210 | Lab 23 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <fstream> // For file operation
#include <iomanip>
#include <list> // To use std::list
#include "Goat.h" // A complete class for Goat objects
#include <ctime>
#include <cstdlib>
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

// Function prototypes
int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip); // Deletes a goat on trip.
void add_goat(list<Goat> &trip, string [], string []); // Adds a goat on trip.
void display_trip(list<Goat> trip); // Displays the goats on trip.
int main_menu(); // Main menu function that loops in main.

int main() {
    srand(time(0)); // For random number generation
    bool again;

    // Reads & populates arrays for names and colors
    ifstream fin("names.txt"); // Opens names.txt
    string names[SZ_NAMES]; // String array of 200 names
    int i = 0;
    while (fin >> names[i++]);
    fin.close(); // Closes out of names.txt
    ifstream fin1("colors.txt"); // Opens colors.txt
    string colors[SZ_COLORS]; // String array of 25 colors
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close(); // Closes out of colors.txt

    // Default construction
    list<Goat> trip; // Initialized std::list of goats on the trip

    // Task two
    // Write a GM3K1 engine that loops on this menu.
    // Write a main_menu() function that outputs this and then obtains,
    // validates, and returns the user's choice.
    while (true){ // Loop of the menu
        int choice = main_menu();

        switch(choice){
            case 1: cout << "You chose to add a goat." << endl; add_goat(trip, names, colors);
                    break;
            case 2: cout << "You chose to delete a goat." << endl;
                    break;
            case 3: cout << "You chose to list goats." << endl;
                    break;
            case 4: cout << "You have chosen to exit the program, goodbye!" << endl << endl;
                    return 0;      
        }
        return 1; // Ends program to break infinite loop
    }

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

    return choice;
}

// Task Three
// Write functions to add a goat to the trip, delete a a goat from the trip, and
// display the current trip.
// When adding a goat, randomly select a name and color from main()'s arrays and
// select a random age between 0 and MAX_AGE.
// When asking user to select a certain goat, display a formatted submenu, allowing
// the user to input an interger to reference the correct goat.

// add_goat adds a goat to the list.
// arguments: list of goats, string array of names, string array of colors.
// returns: void
void add_goat(list<Goat>& trip, string names[], string colors[]){
    // Select random name, color, and age
    string name = names[rand() % SZ_NAMES];
    string color = colors[rand() % SZ_COLORS];
    int age = 1 + (rand() % MAX_AGE);

    trip.push_back(Goat(name, age, color));

    cout << "Goat added: " << name << age << color << endl;
}

// delete_goat deletes a goat from the list.
// arguments: list of goats.
// returns: void
void delete_goat(list<Goat> &trip){

}

// display_trip outputs a display of the goats on the trip.
// arguments: list of goats.
// retuns: void
void display_trip(list<Goat> trip){
    if (trip.empty()){
        cout << "The list is empty, therfore no goats are on a trip.";
    }

    for ( Goat list : trip){
        cout << "Goat added: " << endl;
    }
}