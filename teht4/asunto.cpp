#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukasMaara,int neliot)
{

    cout << "Asunto maaritetty asukkaita= " << asukasMaara << " nelioita= " << neliot << endl;
}

double Asunto::laskeKulutus(double kulutus)
{

    if(kulutus==1200){
        cout << "asunnon kulutus, kun hinta=1 on " << kulutus << endl;
    }
    return kulutus;

}
