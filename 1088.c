#include <stdio.h>
#define MAX 100000


void troca(int* a, int* b, int *count)
{
    *count += 1;
    int t = *a;
    *a = *b;
    *b = t;
}

int separa(int p, int r, int v[MAX], int *count)
{
    int x, i, j;
    x = v[p];
    i = p - 1;
    j = r + 1;

    while (i < j) {
        do {
            j--;
        } while (v[j] > x);
        do {
            i++;
        } while (v[i] < x);

        if (i < j && (v[i] + 1 != v[j]))
            troca(&v[i], &v[j], count);
    }
    return j;
}

void quicksort(int p, int r, int v[MAX], int *count)
{
    int q;
    if (p < r) {
        q = separa(p, r, v, count);
        quicksort(p, q, v, count);
        quicksort(q+1, r, v, count);
    }
}


int main(){

    int n;
    int count = 0;
    scanf("%d", &n);
    
    do{
        
        int v[n];

        for(int i = 0; i < n; i++)
            scanf("%d", &v[i]);
        
        quicksort(0, n - 1, v, &count);
        
        if(count % 2 != 0)
            printf("Marcelo\n");
        else
            printf("Carlos\n");
            
        count = 0;
        scanf("%d", &n);

    }while(n != 0);

    return 0;
}
