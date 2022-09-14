#include<stdio.h>
#include<conio.h>
int main()
{
int i;
float notas[20];
for(i=0;i<20;i++){
	printf("Nota[%d]:",i);
	scanf("%f",&notas[i]);}
printf("Mostrando as 20 posições do Vetor\n");
	for(i=0;i<20;i++){
	printf("Notas[%d]= %.1f\n",i,notas[i]);}
getch();
}
	