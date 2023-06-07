#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(int n) {
	printf("Ingrese el numero que desee saber el factorial:");
	scanf("%d",&n);
    printf("El factorial de %d es %d", n, factorial(n));
    return 0;
}

