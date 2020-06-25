#include<iostream>
#include "Produs.h"
using namespace std;
class produs_software: public Produs //PS
{protected:
        int pret ;
public:
    produs_software(int);
    int getPret();
    void afis();
};
produs_software::produs_software(int i)
{
    pret=i;
}
int produs_software::getPret()
{
    return pret;
}
void produs_software::afis()
{
    cout<<pret<<endl;
}
