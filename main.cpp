#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showMenu();
void firstFunction(int userChoice);
void winner(int userChoice, int computerChoice);

int main()
{
    int userChoice, computerChoice;
    srand(time(0));
    computerChoice = rand()%5 +1;

    showMenu();
    cin >> userChoice;

   while (userChoice < 1 || userChoice > 3)
   {
        cout << "\nYou did not enter a valid choice!\n"
             << "Enter 1 for Rock, 2 for Paper, or 3 for Scissors\n"
             << "Enter your choice: ";
        cin >> userChoice;
   }

    firstFunction(userChoice);
    winner(userChoice, computerChoice);

return 0;
}

void showMenu()
{
    cout << "\n\t\tRock, Paper, Scissors Menu\n\n"
         << "To choose Rock, enter 1.\n"
         << "To choose Paper, enter 2.\n"
         << "To choose Scissors, enter 3.\n\n"
         << "Enter your choice: ";
}

void firstFunction (int userChoice)
{
    if (userChoice == '1')
    cout << "You chose Rock!\n";
    else if (userChoice == '2')
    cout << "You chose Paper!\n";
    else if (userChoice == '3')
    cout << "You chose Scissors!\n";
}

void winner (int userChoice, int computerChoice)
{
    if (userChoice == 1)
    {
        if (computerChoice == 1)
        cout << "You tied the computer!\n";
        else if (computerChoice == 2)
        cout << "The computer chose paper!  You lost this time!\n";
        else if (computerChoice == 3)
        cout << "The computer chose scissors!  You win the game!\n";
    }
    else if (userChoice == 2)
    {
        if (computerChoice == 1)
        cout << "The computer chose rock!  You win the game!\n";
        else if (computerChoice == 2)
        cout << "You tied the computer!\n";
        else if (computerChoice == 3)
        cout << "The computer chose scissors!  You lost this time!\n";
    }
    else if (userChoice == 3)
    {
        if (computerChoice == 1)
        cout << "The computer chose rock!  You lose this time!\n";
        else if (computerChoice == 2)
        cout << "The computer chose paper!  You win the game!!\n";
        else if (computerChoice == 3)
        cout << "You tied the computer!\n";
    }
}
