#include <iostream>
#include <string>
#include "movies.h"

using namespace std;

int main()
{
    string user; int selection = -1;
    cout << "\n       Enter your name: ";
    cin >> (user);

    movies funcmovies;

    while (selection < 0){
        system("CLS");
        cout << "\n       Hi " + user + "! Thank you for choosing the Movie Ticket System: A place for your movie ticket needs!" << endl;
        cout << "\n       !: Please select your transaction below. " << endl;
        cout << "\n          [1] Show List of All Movies.";
        cout << "\n          [2] Check/Edit Ticket status.";
        cout << "\n          [0] Exit." << endl;

        cout << "\n       Type here: "; cin >> selection;

        switch (selection){
        case 1:
            funcmovies.listOfAllMovies();
            break;
        case 2:
            system("CLS");
            int option;
            cout << "\n       What would you like to do " + user + "?" << endl;
            cout << "\n       1. Check Ticket Status";
            cout << "\n       2. Edit Ticket Details";
            cout << "\n       3. Cancel Ticket";
            cout << "\n       0. Return to Menu." << endl;
            cout << "\n       Type here: "; cin >> option;

            switch (option){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                selection = -1;
                break;
            default:
                break;
            }

            break;
        case 0:
            cout << "\n       Thank you for trusting Movie Ticket System. See you next time!";
            selection = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}

