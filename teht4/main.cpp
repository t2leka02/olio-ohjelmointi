#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    Asunto asunto;
    Kerros kerros;
    Katutaso katutaso;
   /*
    katutaso.maaritaAsunnot();
    kerros.maaritaAsunnot();
    kerros.laskeKulutus(1200);
    */
    Kerrostalo kerrostalo;
    katutaso.maaritaAsunnot();
    kerros.maaritaAsunnot();
    kerros.maaritaAsunnot();
    kerros.maaritaAsunnot();
    kerrostalo.laskeKulutus(2800);






    return 0;
}
