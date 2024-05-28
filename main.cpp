#include <iostream>
#include <string>
#include <vector>

#include "Buffer_Manager.h"

using namespace std;

int main(){


    Buffer_Manager p(3);
    p.llamarABloque("Bloques/BLOQUE_01.txt");
    cout<<endl;
    p.llamarABloque("Bloques/BLOQUE_04.txt");
    cout<<endl;
    p.llamarABloque("Bloques/BLOQUE_06.txt");
    cout<<endl;
    p.llamarABloque("Bloques/BLOQUE_02.txt");
    cout<<endl;
    //p.imprimirEstado();

    p.llamarABloque("Bloques/BLOQUE_04.txt");
    //p.imprimirEstado();

    return 0;
}

