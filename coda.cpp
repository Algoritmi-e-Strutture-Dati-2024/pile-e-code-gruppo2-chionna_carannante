#include <iostream>
#include "ListaPuntatori.cpp"
using namespace std;

//def. classe pila come template
template <typename T>
class Coda {
    private:
    listapuntatori <T> lista;

    public:
    void enqueque (T elem){
        fondo=lista.lunghezza();
        lista.inslista(elem,fondo+1);
    }

    T dequque(){

        T elem= lista.leggilista(1);
        lista.canclista(1);
        return elem;
    }
     T front(){
        return lista.leggilista(1); ;
    }
     boole isempty(){
        T elem= lista.listavuota();
        if (lung==0) return true;
        else return false;
    }
    int size(){
        return lista.lunghezza();
    }

}
