#include <iostream>
#include <string>

using namespace std; 

int main()
{
    int NumberToGuess = rand() % 1000;
    string UserGuess;
	int GuessCount = 0;

	bool ContinuePlaying = true;

    while (ContinuePlaying) {

		cout << "Guess a number between 0 and 1000" << endl;
		cin >>  UserGuess;

        int UserNumber = stoi(UserGuess);

        if (UserNumber == NumberToGuess) {

			cout << "Youi guessed correctly. Congratulations you won the game." << endl;
			cout << "It took you " << GuessCount << " guesses to win." << endl;
			cout << "Do you want to play again? (y/n)" << endl;

			string PlayAgain;
			cin >> PlayAgain;

			if (PlayAgain == "y") {

				NumberToGuess = rand() % 1000;
				GuessCount = 0;

			}
			else if (PlayAgain == "n") {

				cout << "Thanks for playing. Goodbye!" << endl;
				ContinuePlaying = false;
			}

        }
		else if (UserNumber > NumberToGuess) {

			cout << "My number us lower, please try again." << endl;
			GuessCount++;

		}
		else if (UserNumber < NumberToGuess) {
		
			cout << "My number us higher, please try again." << endl;
			GuessCount++;

		}

    }

}
