#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>

using namespace std;

class italianChef: public Chef
{
public:

     italianChef(string);
    ~italianChef();

     string getName();
     void makePasta();



};

#endif // ITALIANCHEF_H
