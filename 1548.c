#include <stdio.h>
#define MAX 51

void troca(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void quicksort(int p, int r, int v[MAX])
{
    int q;
    if (p < r) {
        q = separa(p, r, v);
        quicksort(p, q, v);
        quicksort(q+1, r, v);
    }
}

int separa(int p, int r, int v[MAX])
{
    int x, i, j;
    x = v[p];
    i = p - 1;
    j = r + 1;
    while (i < j) {

        do {
            j--;
        } while (v[j] < x);
        do {
            i++;
        } while (v[i] > x);

        if (i < j)
        troca(&v[i], &v[j]);
    }
    return j;
}

int main() {

    int n;
    int qtd;
    int count = 0;

    scanf("%d", &qtd);

    for(int j = 0; j < qtd; j++){

        scanf("%d", &n);
        int v[n];
        int v1[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);
            v1[i] = v[i];
        }

        quicksort(0, n - 1, v);

        for(int i = 0; i < n; i++){
            if(v[i] == v1[i]){
                count ++;
            }
        }


        printf("%d\n", count);

        count = 0;
    }



    return 0;
}
