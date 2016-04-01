#include <iostream>
#include <list>
#include "Cartas.h"

using namespace std;

list<Cartas> cartas;
Cartas cartas;

int main()
{
    Cartas n1 = new Cartas(1);
    Cartas n2 = new Cartas(2);
    Cartas n3 = new Cartas(6);
    Cartas n4 = new Cartas(2);
    Cartas n5 = new Cartas(1);
    cartas.push_back(n1);
    cartas.push_back(n2);
    cartas.push_back(n3);
    cartas.push_back(n4);
    cartas.push_back(n5);

    while(cartas->buscar(cartas)!= NULL){
        cout<<cartas->buscar(cartas)<<endl;
    }
    return 0;
}
