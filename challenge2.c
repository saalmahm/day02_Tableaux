#include <stdio.h>

int main() {
	int n,i;
float T[50],val ;
    printf("Entrer le nombre des élément de tableau: \n");
    scanf("%d",&n);
    for ( i=0;i<n;i++){
        printf("Entrer la valeur %d \n",i+1);
        scanf("%f",&T[i]);
}
printf("voila les éléments du tableaux: \n");
for(i=0;i<n;i++){
    printf("%.2f \n",T[i]);
}

    return 0;
}
