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
    cout << "\n         1. Violet Evergarden: The Movie ";
    cout << "\n         2. ";
    cout << "\n         3. ";
    cout << "\n         4. ";
    cout << "" << endl;
    cout << "\n       Enter the movie number to show the movie's info. Otherwise, enter 0 to return to Main Menu.";
    cout << "\n       Type here: "; cin >> selection;

    switch (selection) {
    case 0:
        break;
    case 1:
        cout << "\n Violet Evergarden: The Movie";
        cout << "" << endl;
        cout << "\n Sypnosis:";
        cout << "\n------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << " An original sequel to the TV anime which aired in 2018, the movie will follow - auto memory doll Violet," << endl;
        cout << " still unable to forget about her former employer Gilbert, who taught her of love. One day, she meets his" << endl;
        cout << " older brother Dietfried, who tells her that she should forget about Gilbert and move on - but it is" << endl;
        cout << " impossible for her.Shortly after, Violet receivesa call from a young client, while the post office  " << endl;
        cout << " discovers a letter with no address sitting in their warehouse." << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\n Duration: 2hr. 20 min";
        cout << "\n Genre: | Animation, Drama, Fantasy |";
        cout << "\n";
    default:
        break;
    }
}
