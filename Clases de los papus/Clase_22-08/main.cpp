#include <iostream>

using namespace std;

int n=6;
int C1, C2, C3, C4, C5;
int main() {
    int i = 3; //1
    int j = 4; //1
    while (i < n) { C1++;
        j= i; C2++;
        while (j <= 2 * n) {C3++;
            j = j + 1;
            C4++;
        }C3++;
        i=i+1; C5++;
    } C1++;

    cout << C1 <<"\n";
    cout << C2 <<"\n";
    cout << C3 <<"\n";
    cout << C4 <<"\n";
    cout << C5;
}