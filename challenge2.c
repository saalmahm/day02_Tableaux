#include <stdio.h>

int main() {
int n;
int T[50],val,i ;
    printf("Entrer le nombre des élément de tableau: \n");
    scanf("%d",&n);
    for ( i=0;i<n;i++){
        printf("Entrer la valeur %d \n",i+1);
        scanf("%d",&T[i]);
}
printf("voila les éléments du tableaux: \n");
for(i=0;i<n;i++){
    printf("%d \n",T[i]);
}

    return 0;
}
