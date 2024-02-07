#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"


class Kerros
{
public:
    Kerros();

    virtual void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto as1;
    Asunto as2;
    Asunto as3;


};

#endif // KERROS_H
