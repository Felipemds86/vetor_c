#include<stdio.h>

int main(){
int N[4],i,aux;

for(i=0;i<4;i++)
scanf("%d",&N[i]);

for(i=0;i<2;i++){
aux=N[i];
N[i]=N[4-i];
N[4-i]=aux;
}
for(i=0;i<4;i++)
printf("N[%d] = %d\n",i,N[i+1]);

return 0;
}

