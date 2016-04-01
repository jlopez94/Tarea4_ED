#ifndef CARTAS_H
#define CARTAS_H
#include <list>

using namespace std;

class Cartas
{
    public:
        Cartas(int numero);

        int numero;
        bool revisa = false;

        std::list<Cartas> buscar(list<Cartas> cartas);
        void revisarDuplicados(list<Cartas>, Cartas n);

        virtual ~Cartas();
};

#endif // CARTAS_H
