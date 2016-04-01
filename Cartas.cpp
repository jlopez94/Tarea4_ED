#include "Cartas.h"

Cartas::Cartas(int numeros)
{
    this->numero = numero;
}

Cartas::~Cartas()
{
    //dtor
}

std::list<Cartas> Cartas :: buscar(list<Cartas> cartas)
{
    for(Cartas naipe : cartas){
        if(!naipe.revisa && naipe.numero != 1){
            naipe.revisa = true;
            revisarDuplicados(cartas, naipe);
        }
    }
    list<Cartas> suppCards;
    for(Cartas naipe : cartas){
        if(naipe.numero != -1)
            suppCards = cartas;
    }
    return suppCards;
}

void Cartas :: revisarDuplicados(list<Cartas> cartas, Cartas n)
{
    for(Cartas naipe : cartas){
        if(!naipe.revisa && naipe.numero == n.numero && naipe.numero != -1)
            naipe.numero = -1;
    }
}
