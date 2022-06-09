#include<stdio.h>
int main(int argc, char* argv[]){
int m[5][3], i, j, soma=0;
float divisao;

for(i=0; i<5; i++){
   for(j=0; j<3; j++){
      printf("numeros da matriz: ");
      scanf("%d", &m[i][j]);
   }
}
for(i=0; i<5; i++){
   for(j=0; j<3; j++){
      printf(" %d ", m[i][j]);
   }
   printf("\n");
}
for(i=0; i<5; i++){
   for(j=0; j<3; j++){
    soma = soma+m[i][j];
   }
}
divisao = soma/15;
printf("Divisao eh %.2f", divisao);
return 0;
}
