#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class game
{
public:
    game();
    ~game();

    void play();

    int getNumOfGuesses() const;
    void setNumOfGuesses(int newNumOfGuesses);

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();



};

#endif // GAME_H
