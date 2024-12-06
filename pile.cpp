#include <iostream>
#include "ListaPuntatori.cpp"
using namespace std;

//def. classe pila come template
template <typename T>
class Pila {
    private:
    listapuntatori <T> lista;

    public:
    void push (T elem){
        lista.inslista(elem,1);
    }

    T pop(){
        T elem= lista.leggilista(1);
        lista.canclista(1);
        return elem;
    }
     T top(){
        T elem= lista.leggilista(1);
        return elem;
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
