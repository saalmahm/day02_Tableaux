#include <stdio.h>

int main() {
int T1[8],T2[8],i;
printf("Veueillez saisir les élements de tableau origin:\n");
for(i=0;i<8;i++){
    printf("T[%d]=",i+1);
    scanf("%d",&T1[i]);
}
 for(i=0;i<8;i++){
 T2[i]=T1[i];}
  printf("voila les élément de premier tableau: \n");
 for(i=0;i<8;i++){
     printf("%d \n",T1[i]);
 }
      printf("voila les élément de deuxiéme tableau: \n");
  for(i=0;i<8;i++){
     printf("%d \n",T2[i]);
 }
    return 0;
}
