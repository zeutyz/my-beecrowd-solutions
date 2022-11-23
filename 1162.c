#include <stdio.h>

void swap(int *p1, int *p2){
    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main() {

    int n;
    int qtd;
    int count = 0;
    int aux;

    scanf("%d", &qtd);

    for(int j = 0; j < qtd; j++){

        scanf("%d", &n);
        int v[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);
        }
        
        for (int l = 0; l < n; l++){
            for(int m = l + 1; m < n; m++){
                if(v[l] > v[m]){
                    swap(&v[l], &v[m]);
                    count ++;
                }
            }
        }
        
        printf("Optimal train swapping takes %d swaps.\n", count);
        count = 0;
    }



    return 0;
}
