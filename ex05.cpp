#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas = 3, colunas = 3;
    int* matriz = NULL;
    matriz = (int*) calloc(linhas * colunas, sizeof(int));
    if(matriz == NULL) return 1;
    printf("Matriz %dx%d:\n\n", linhas, colunas);
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i*colunas + j]);
        }
        printf("\n");
    } 
    getchar();
    return 0;
}