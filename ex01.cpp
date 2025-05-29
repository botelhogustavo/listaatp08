#include <stdio.h>
#include <stdlib.h>
int main() {
    int* v = NULL;
    int n;
    printf("Insira um numero:\n");
    scanf("%d", &n);
    v = (int*) malloc(n * sizeof(int));
    if(v == NULL) return 1;
    for(int j = 0; j < n; j++) v[j] = j;
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    free(v);
    getchar();
    return 0;
}