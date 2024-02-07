#ifndef ASUNTO_H
#define ASUNTO_H


class Asunto
{
public:
    Asunto();
    ~Asunto();

    void maarita(int,int);
    double laskeKulutus(double);

private:
    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
