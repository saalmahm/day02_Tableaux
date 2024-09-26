#include <stdio.h>

int main() {
int n,s=0,max;
int T[50],val,i ;
    printf("Entrer le nombre des élément de tableau: \n");
    scanf("%d",&n);
    for ( i=0;i<n;i++){
        printf("Entrer la valeur %d \n",i+1);
        scanf("%d",&T[i]);
        s+=T[i];
}
max=T[0];
for(i=1;i<n;i++){
    if(max<T[i]){
        max=T[i];
    }
}
printf("voila le maximum %d \n",max);


    return 0;
}
