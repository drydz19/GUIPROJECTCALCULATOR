#pragma once
#include <iomanip>
#include <iostream>

using namespace std;

int Notes() {
    //initializing variables for program
    int SIZE;
    int x;
    int y;
    int choice;

    //input to get size of array
    cout << "How many notes would you like to make: ";
    cin >> SIZE;
    //user validation for SIZE
    while (!cin) {
        cout << "Please enter a number this time: ";
        cin >> SIZE;
    }

    //declaring string array
    string numNotes[SIZE];

    //allows to edit the array and store strings
    while (x < SIZE) {
        cout << "What would you like to store in your first note: ";
        cin >> numNotes[x];
        x++;
    }

    //prints indexes of array in order
    for (int i = 0; i < x; i++) {
        cout << numNotes[i] << "\n";
    }

    //loop to edit certain array indexes
    while (choice >= 1) {
        //asks which index you would like to edit
        cout << "what number note would you like to edit: ";
        cin >> y;


        //allows you to edit the array index
        cout << "please enter what you would like to edit for note" << y << ": ";
        cin >> numNotes[y];

        //asks if you want to continue the while loop
        cout << "would you like to edit any other notes enter 1 to edit or 0 to stop";
        cin >> choice;
    }

}