#include <stdio.h>
#include <stdlib.h>

int pares(int* v, int tam){
    int *vpares = NULL;
    vpares = (int*) malloc(tam * sizeof(int));
    if(vpares == NULL) return 1;
    int j = 0;
    printf("\n\nValores pares do seu vetor:\n");
    for(int i = 0; i < tam; i++){    
        if(v[i] % 2 == 0){
            vpares[j] = v[i];
            j++;
        }
    }
    
    for(int i = 0; i < j; i++) printf("%d ", vpares[i]);
    free(vpares);
}

int main(){
    int* v = NULL;
    int n;
    printf("Seu vetor tera quantas posicoes?\n");
    scanf("%d", &n);
    v = (int*) malloc(n * sizeof(int));
    for(int j = 0; j < n; j++){
        printf("Insira um valor para o espaco %d do seu vetor:\n", j);
        scanf("%d", &v[j]);
    }
    printf("Valores do seu vetor:\n");
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    pares(v, n);
    free(v);
    getchar();
}