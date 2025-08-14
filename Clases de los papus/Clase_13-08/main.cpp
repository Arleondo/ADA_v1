#include <iostream>

using namespace std;


class Vector {
    int * Vectorsito;
    int Contador;
    int Maximo;
    int Aumento;

    void Resize(){
        int *TempVec= nullptr;
        TempVec = new int[Maximo+Aumento];

        for (int i = 0;i<Contador;i++){
            TempVec[i] = Vectorsito[i];
        }
        delete [] Vectorsito;
        Vectorsito = TempVec;
        Maximo += Aumento;
    }

public:

    Vector(int grow = 10):Vectorsito(nullptr),Contador(0),Maximo(0),Aumento(grow) {};

    ~Vector() {
        delete[] Vectorsito;
    }


    void Insertar(int elemento){
        if (Contador==Maximo) Resize();

        Vectorsito[Contador++]=elemento;
    };

};

int main() {
    Vector waza;

    for (int i = 10,j=0; j<6 ; i+=10,j++ ){
        waza.Insertar(i);
    }

}
