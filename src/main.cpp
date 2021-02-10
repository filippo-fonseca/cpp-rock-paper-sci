#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    string player_name;
    cout << "Enter your name:";
    cin >> player_name;
    system("cls");
    int rounds;
    cout << player_name << " How many rounds would you like to play? :";
    cin >> rounds;
    int player_score = 0, computer_score = 0;
    for (int round = 1; round <= rounds; round++)
    {
        system("cls");
        int player_choice, computer_choice;
        cout << "Round No:" << round << "/" << round << endl;
        cout << player_name << "'s Score = " << player_score << endl;
        cout << "Computer Score = " << computer_score << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissor" << endl;
        do {
            cout << "Select your choice: ";
            cin >> player_choice;
        } while {
            player_choice != 1 && player_choice != 2 && player_choice != 3
        }
        srand(time(0));
        computer_choice = (rand() % 3) + 1;
        if (player_choice == 1 && computer_choice == 3)
        {
            cout << "Player Wins." << endl;
            player_score++;
        }
        else if (player_choice == 2 && computer_choice == 1)
        {
            cout << "Player wins." << endl;
            player_score++;
        }
        else if (player_choice == 3 && computer_choice == 3)
        {
            cout << "Player wins." << endl;
            player_score++;
        }
        else if (player_choice == computer_choice)
        {
            cout << "Draw." << endl;
        } else {
            cout << "Computer wins." << endl;
            computer_score++;
        } cout << "Press any key to continue..."

        if (computer_score == player_score) {
            cout << "Gane is Drawn." << endl;
        } else if (player_score > computer_score) {
            cout << player_name << "won the game." << endl;
        } else if (computer_score > player_score) {
            cout << "The computer has won." << endl;
        }

        return 0;
    }