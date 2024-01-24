#include "game.h"


game::game()
{

    cout << "Give max value" << endl;
    cin >> maxNumber;
    cout << "Object initialized with " << maxNumber << " as max value" << endl;

}

game::~game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;

}

void game::play()
{
    srand(time(0));
    randomNumber = rand()%maxNumber+1;



    bool stayInLoop = true;



    while(stayInLoop){
        cout << "Guess a number between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess==randomNumber){
            printGameResult();
            stayInLoop = false;
        }
        else if(playerGuess<randomNumber){
            cout << "Your guess is too small" << endl;
        }

        else if(playerGuess>randomNumber){
            cout << "Your guess is too big" << endl;
        }
    }


}

void game::printGameResult()
{
    cout << "Your guess is right = " << playerGuess << endl;
    cout << "You guessed the right answer " << playerGuess << " with " << numOfGuesses << " guesses" <<endl;
}
