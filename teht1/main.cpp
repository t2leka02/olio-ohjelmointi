#include <iostream>
#include <ctime>
using namespace std;


int game(int maxnum){


    int player_guess=0;
    int tries=0;
    srand(time(NULL));
    int satluku = rand() % maxnum;



    do{

       cout << "Arvaa luku" << endl;
       cin>>player_guess;
       tries++;


       if (player_guess>satluku){
           cout << "Luku on pienempi" << endl;
        }


       else if(player_guess<satluku){
           cout << "Luku on suurempi" << endl;
        }


       else if(player_guess == satluku){
           cout << "Oikea vastaus! Sait oikean luvun " << tries << " yrityksella" << endl;
       }

    } while (player_guess != satluku);
    return tries;

}


int main() {
int maxnum;
cout << "anna arvattavien numeroiden maara" << endl;
cin >> maxnum;
game(maxnum);

    return 0;
}
