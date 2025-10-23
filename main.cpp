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

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();

    // Task two
    // Write a GM3K1 engine that loops on this menu.
    // Write a main_menu() function that outputs this and then obtains,
    // validates, and returns the user's choice.


    return 0;
}

int main_menu(){
    cout << endl << "** GOAT MANAGER 3001 **" << endl;
}