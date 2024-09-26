#include <stdio.h>

int main() {
int n,s=0;
int T[50],val,i ;
    printf("Entrer le nombre des élément de tableau: \n");
    scanf("%d",&n);
    for ( i=0;i<n;i++){
        printf("Entrer la valeur %d \n",i+1);
        scanf("%d",&T[i]);
        s+=T[i];
}
printf("voila le totale %d: \n",s);


    return 0;
}
