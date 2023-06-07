#include <stdio.h>
#include <math.h>


int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha){
    if (izquierda > derecha) return -1;
 
    int indiceDeLaMitad = floor((izquierda + derecha) / 2);
 
    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
    if (busqueda == valorQueEstaEnElMedio){
        return indiceDeLaMitad;
    }
    
    if (busqueda < valorQueEstaEnElMedio){
        // Entonces está hacia la izquierda
        derecha = indiceDeLaMitad - 1;
    }else{
        // Está hacia la derecha
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}

int main(){
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arreglo[n];
    printf("Ingrese los elementos del arreglo: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arreglo[i]);
    }
    
    int busqueda;
    printf("Ingrese el valor a buscar: ");
    scanf("%d", &busqueda);
    int resultado = busquedaBinariaRecursiva(arreglo, busqueda, 0, n-1);
    if(resultado == -1){
        printf("El valor %d no se encuentra en el arreglo\n", busqueda);
    }else{
        printf("El valor %d se encuentra en el índice %d\n", busqueda, resultado);
    }
    return 0;
}
