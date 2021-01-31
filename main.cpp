#include <iostream>
#include <string>
#include "movies.h"

using namespace std;


string rated [5] = {"R-18", "R-16", "R-13", "R-18", "R-18"};
string MovieTitle [5] = {"Otlum", "Her", "Him", "Grudge", "White Lady"};
int price [5] = {400, 350, 300, 450, 360};



void movieAvailable(){

        int counter = 1;

            cout << "                                 --------------------------------------------------------------\n";
            cout << "                                |                  Movies that are now showing                  |\n";
            cout << "                                 --------------------------------------------------------------\n";

        for (int x=0; x<5;x++){
            if (price[x]!=0){

            cout<<"                                                    #"<<counter<<"                            \n";
            cout<<"                                                       Title:"<<MovieTitle[x]<<"               \n";
            cout<<"                                                       Price:"<<price[x]<<"                    \n";
            cout<<"                                                       Rating:"<<rated[x]<<"                   \n";
            cout<<"                                  --------------------------------------------------------------\n";
        counter++;
}
}
}

int main()
{
string name;
int choice;

    do{
        system ("cls");
            cout << "                                               ----------------------------------\n";
            cout << "                                              |  Welcome to Movie Ticket System   |                   \n";
            cout << "                                               ----------------------------------\n";

            cout << "                                                                                             \n";
            movieAvailable();
            cout<<  "                                  ______________________________________________________________\n";
            cout<<  "                                ||                   What would you like to do?                 ||\n";
            cout<<  "                                || [1] SHOW MOVIE INFORMATION      [4] CANCEL RESERVED TICKET   ||\n";
            cout<<  "                                || [2] BOOK A TICKET               [5] CONTACT US               ||\n";
            cout << "                                || [3] SHOW RESERVED TICKET        [6] EXIT                     ||\n";
            cout<<  "                                  ______________________________________________________________  \n";
            cout<<  "                                                                                               \n";
            cout<<  "                                             Please enter your desired transaction: ";
            cin >> choice;

    return 0;
}
while(choice!=6);
}
