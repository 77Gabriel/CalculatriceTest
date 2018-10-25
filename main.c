#include <stdio.h>

int addition(int, int);
int soustraction(int, int);

int main() {

    int a=1, b=4;

    addition(a,b);
    printf("Soustraction %d", soustraction(a,b));
    return 0;
}

int addition(a, b){
    int resultat;
    resultat = a+b;
    return resultat;
}
int soustraction(a, b){
    return a-b;
}
