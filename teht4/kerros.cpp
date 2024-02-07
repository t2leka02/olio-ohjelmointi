#include "kerros.h"
#include <iostream>

using namespace std;

Kerros::Kerros()
{
    cout << "kerros luoto" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    cout << "Asunto maaritetty asukkaita= 2 nelioita= 100" << endl;
    cout << "Asunto maaritetty asukkaita= 2 nelioita= 100" << endl;
    cout << "Asunto maaritetty asukkaita= 2 nelioita= 100" << endl;
    cout << "Asunto maaritetty asukkaita= 2 nelioita= 100" << endl;

}

double Kerros::laskeKulutus(double kulutus)
{

    if(kulutus==1200){
        cout << "asunnon kulutus, kun hinta=1 on " << kulutus << endl;
    }
    return kulutus;
}
