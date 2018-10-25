#include <stdio.h>

int soustraction(int, int);

int main() {

    int a=1, b=4;

    soustraction(a,b);
    printf("Soustraction de a et b %d", soustraction(a,b));
    return 0;
}

int soustraction(a, b){
    return a-b;
}
