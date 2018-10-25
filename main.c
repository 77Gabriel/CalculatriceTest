#include <stdio.h>

int addition(int, int);

int main() {

    int a=1, b=4;

    addition(a,b);
    printf("L'addition de a et b vaut %d", addition(a,b));
    return 0;
}

int addition(a, b){
    int resultat;
    resultat = a+b;
    return resultat;
}
