#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeArreglo(int arr[], int n);
void randomArreglo(int arr[], int n);
int busquedaSequencial(int arr[], int n, int x);
void ordenamientoBurbuja(int arr[], int n);

int main()
{
    int n = 5;
    int arr[n];
    randomArreglo(arr, n);
    printf("Arreglo aleatorio:\n");
    imprimeArreglo(arr, n);

    printf("\nIngrese el nuevo tamaño del arreglo: ");
    scanf("%d", &n);
    int arr2[n];
    randomArreglo(arr2, n);
    printf("\nNuevo arreglo aleatorio:\n");
    imprimeArreglo(arr2, n);

    printf("\nIngrese el número a buscar: ");
    int x;
    scanf("%d", &x);
    int result = busquedaSequencial(arr2, n, x);
    if (result == -1)
        printf("\n%d no se encuentra en el arreglo.\n", x);
    else
        printf("\n%d se encuentra en la posición %d del arreglo.\n", x, result);

    ordenamientoBurbuja(arr2, n);
    printf("\nArreglo ordenado:\n");
    imprimeArreglo(arr2, n);

    printf("\nIngrese el número a buscar de nuevo: ");
    scanf("%d", &x);
    result = busquedaSequencial(arr2, n, x);
    if (result == -1)
        printf("\n%d no se encuentra en el arreglo.\n", x);
    else
        printf("\n%d se encuentra en la posición %d del arreglo.\n", x, result);

    return 0;
}

void imprimeArreglo(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void randomArreglo(int arr[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}

int busquedaSequencial(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

void ordenamientoBurbuja(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

