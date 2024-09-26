#include <stdio.h>

int main() {
int n,s=0,min;
int T[50],val,i ;
    printf("Entrer le nombre des élément de tableau: \n");
    scanf("%d",&n);
    for ( i=0;i<n;i++){
        printf("Entrer la valeur %d \n",i+1);
        scanf("%d",&T[i]);
        s+=T[i];
}
min=T[0];
for(i=1;i<n;i++){
    if(min>T[i]){
        min=T[i];
    }
}
printf("voila le minimum :  %d \n",min);


    return 0;
}
