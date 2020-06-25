#include <iostream>
#include"produs_mixt.h"
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    Piesa *b1=new Piesa[2];
    b1[0]=Piesa("34256",150);
    b1[1]=Piesa("12345",145);
    vector<Piesa>b(2);
    for(int i=0;i<2;i++)
        b[i]=b1[i];
    string *c1=new string[2];
    c1[0]="chestii1";
    c1[1]="chestii2";
    vector<string> c(2);
    for(int i=0;i<2;i++)
        c[i]=c1[i];
    Produs *l=new produs_software(1000);
    vector<Produs*>stoc(3);
    stoc[0]=new produs_software(200);
    stoc[1]=new modul_hardware(b, 2, 100,3);
    stoc[2]=new produs_mixt(b, 2, 100,3,produs_software(1000),c,2);
    for(int i=0;i<3;i++)
        stoc[i]->afis();
    int suma_totala=0;
    for(int i=0;i<3;i++)
        suma_totala=suma_totala+stoc[i]->getPret();
    cout<<"suma_totala = "<<suma_totala<<endl;
    ofstream f("date.out");
    for(int i=0;i<3;i++)
        f<<stoc[i];
    stoc.erase(stoc.begin());
    stoc.erase(stoc.begin()+1);

    stoc.push_back(l);
    for(int i=0;i<3;i++)
        stoc[i]->afis();
    return 0;
}
