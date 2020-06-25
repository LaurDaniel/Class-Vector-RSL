#include<iostream>
#include <string.h>
#include "Produs.h"
using namespace std;
class Piesa
{
    char cod[6]  ;
          int pret ;
public:
    Piesa();
    Piesa(char[],int);
    int getPret();
    void afis();
};

Piesa::Piesa()
{
    pret=0;
}
Piesa::Piesa(char c[6], int i)
{
    strcpy(cod,c);
    pret=i;
}
int Piesa::getPret()
{
    return pret;
}
void Piesa::afis()
{
    cout<<cod<<endl;
    cout<<pret<<endl;
}
