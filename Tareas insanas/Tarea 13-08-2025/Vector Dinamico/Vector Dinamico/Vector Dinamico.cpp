#include <iostream>

using namespace std;

int* Vector = nullptr;
int Contador = 0;
int Maximo = 0;


void Resize() {
    const int Aumento = 5;
    int* TempVec = nullptr;
    TempVec = new int[Maximo + Aumento];

    for (int i = 0; i < Maximo; i++) {
        TempVec[i] = Vector[i];
    }
    delete[] Vector;
    Vector = TempVec;
}

void Insertar(int elemento) {
    if (Contador == Maximo) Resize();

    Vector[Contador++] = elemento;
};


int main() {

    for (int i = 10, j = 0; j < 6; i += 10, j++) {
        Insertar(i);
    }

}
