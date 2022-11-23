#include <stdio.h>
#define MAX 230

int main() {

    int n;
    int qtd;
    int h;
    int v[MAX];

    int aux = 0;

    scanf("%d", &qtd);

    for(int j = 0; j < qtd; j++){

        scanf("%d", &n);

        for(int i = 20; i <= 230; i++){
            v[i] = 0;
        }

        for(int i = 0; i < n; i++){
            scanf("%d", &h);
            v[h] ++;
        }

        for(int i = 20; i <= 230; i++){

            if(v[i] > 0){

                for(int j=0; j < v[i]; j++){

                    if(aux > 0)
                        printf(" ");
                    else
                        aux++;

                    printf("%d", i);
                }
            }
        }
        printf("\n");
        aux = 0;
    }

    return 0;
}
