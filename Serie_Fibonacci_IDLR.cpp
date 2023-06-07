#include <stdio.h>
int main()
{
    int n, i = 0, j = 1, Sigterm;
    printf("Ingrese el numero de Terminos: ");
    scanf("%d", &n);
    printf("Terminos: ");
    for (int k = 1; k <= n; ++k)
    {
        printf("%d, ", i);
        Sigterm = i + j;
        i = j;
        j = Sigterm;
    }
    return 0;
}
