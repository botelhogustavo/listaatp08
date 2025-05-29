#include <stdio.h>
#include <stdlib.h>
int main() {
    int* v = NULL;
    int n;
    printf("Seu vetor tera quantas posicoes?\n");
    scanf("%d", &n);
    v = (int*) malloc(n * sizeof(int));
    if(v == NULL) return 1;
    for(int j = 0; j < n; j++){
        printf("Insira um valor para o espaco %d do seu vetor:\n", j);
        scanf("%d", &v[j]);
    }
    printf("Valores do seu vetor: ");
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    free(v);
    getchar();
}