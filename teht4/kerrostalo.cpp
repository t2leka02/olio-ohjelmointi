
#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
}

double Kerrostalo::laskeKulutus(double kulutus)
{
    if(kulutus == 2800){
        cout << "Kerrostalon kulutus = 2800" << endl;
    }
    return kulutus;
}
