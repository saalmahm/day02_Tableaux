#include <stdio.h>

int main() {
int T[8],i,j,tmp;
printf("Entrer les valeurs de tableau:\n");
for(i=0;i<8;i++){
    printf("T[%d]=",i+1);
    scanf("%d",&T[i]);
}
for(i=0;i<8;i++){
    for(j=i+1;j<8;j++){
        if(T[i]>T[j]){
            tmp=T[i];
            T[i]=T[j];
            T[j]=tmp;
        }
    }
}
printf("Voila les valeurs de tableux en ordre croissant:\n");
for(i=0;i<8;i++){
    printf("%d \n",T[i]);
}
    return 0;
}
