#include <iostream>

using namespace std;


struct Vector {
    int* Vectorsito = nullptr;
    int Contador = 0;
    int Maximo = 0;
    const int Aumento = 5;
};

void Resize(Vector* vec) {
    int* TempVec = nullptr;
    TempVec = new int[vec->Maximo + vec->Aumento];

    for (int i = 0; i < vec->Maximo; i++) {
        TempVec[i] = vec->Vectorsito[i];
    }
    delete[] vec->Vectorsito;
    vec->Vectorsito = TempVec;
    vec->Maximo += vec->Aumento;
}

void Insertar(Vector* vec, int elemento) {
    if (vec->Contador == vec->Maximo) Resize(vec);

    vec->Vectorsito[vec->Contador++] = elemento;
};


int main() {
    Vector waza;

    for (int i = 10, j = 0; j < 6; i += 10, j++) {
        Insertar(&waza, i);
    }

}
