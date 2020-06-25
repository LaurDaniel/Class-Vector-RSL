#include<iostream>
#include<string>
#include "modul_hardware.h"
#include "produs_software.h"
#include <vector>

class produs_mixt: public modul_hardware  //PM
{     produs_software ps ;
       vector<string> functionalitati;
       int nr_functionalitati;
   public:
    produs_mixt(vector<Piesa>,int,int,int,produs_software, vector<string>,int);
    int getPret();
    void afis();
};    //pret = pret ps+pret MH

produs_mixt::produs_mixt(vector<Piesa> vp, int nrp, int man, int nro, produs_software sof, vector<string> vec, int nr):modul_hardware(vp,nrp,man,nro),ps(sof),functionalitati(vec),nr_functionalitati(nr){
}
int produs_mixt::getPret()
{
    return ps.getPret()+modul_hardware::getPret();
}
void produs_mixt::afis()
{
    ps.afis();
    for(int i=0;i<nr_functionalitati;i++)
        cout<<functionalitati[i]<<endl;
    cout<<nr_functionalitati<<endl;
    modul_hardware::afis();
}
