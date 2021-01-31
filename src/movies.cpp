#include "movies.h"

movies::movies()
{
    //ctor
}

movies::~movies()
{
    //dtor
}

void movies::listOfAllMovies()
{
    int selection;
    system("CLS");
    cout << "\n       The available Movies are: " << endl;
    cout << "\n         1. ";
    cout << "\n         2. ";
    cout << "\n         3. ";
    cout << "\n         4. ";
    cout << "" << endl;
    cout << "\n       Enter the movie number to show the movie's info. Otherwise, enter 0 to return to Main Menu.";
    cout << "\n       Type here: "; cin >> selection;

    switch (selection) {
    case 0:
        break;
    default:
        break;
    }
}
