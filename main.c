#include <stdio.h>

<<<<<<< HEAD
int addition(int, int);
=======
int soustraction(int, int);
>>>>>>> soustraction

int main() {

    int a=1, b=4;

<<<<<<< HEAD
    addition(a,b);
    printf("L'addition de a et b vaut %d", addition(a,b));
=======
    soustraction(a,b);
    printf("Soustraction de a et b %d", soustraction(a,b));
>>>>>>> soustraction
    return 0;
}

int addition(a, b){
    int resultat;
    resultat = a+b;
    return resultat;
}
