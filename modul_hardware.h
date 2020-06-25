#include<iostream>
#include "Produs.h"
#include <vector>
#include "Piesa.h"
using namespace std;
class modul_hardware: public Produs //MH
{ protected:  vector<Piesa> vec;  //vector piese
                     int nr_piese;             //nr piese din vec
                     int pm;             //pret manopera pe ora
                     int nr_ore;                //ore dezvoltare
public:
    modul_hardware(vector<Piesa> , int, int, int);
    int getPret();
    void afis();
};// pret=suma preturilor pieselor+pm*nr_ore

modul_hardware::modul_hardware(vector<Piesa> vp, int nrp, int man, int nro ):vec(vp)
{

    //vec=vp;
    nr_piese=nrp;
    pm=man;
    nr_ore=nro;
}
int modul_hardware::getPret()
{
    int s=0;
    for(int i=0;i<nr_piese;i++)
        s=s+vec[i].getPret();
    return s+(pm*nr_ore);
}
void modul_hardware::afis()
{
    for(int i=0;i<nr_piese;i++)
        vec[i].afis();
    cout<<nr_piese<<endl;
    cout<<pm<<endl;
    cout<<nr_ore<<endl;
}
