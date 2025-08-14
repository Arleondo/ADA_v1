#include <iostream>

using namespace std;


int Vector[50];
int Contador;

void Insertar(int elemento){
    if (Contador<50){
        Vector[Contador++] = elemento;
    }
}

int main() {

    for (int i = 10,j=0; j<6 ; i+=10,j++ ){
        Insertar(i);
    }

}
