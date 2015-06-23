#include<stdio.h>

//Matrice patratice
int main()
{
//Declararea datelor
int m1[20][20], m2[20][20], rez[20][20];
int i,j,k,n,s;

//Se citesc datele de intrare de la tastatura
printf("Introduceti dimensiunea matricelor: ");
scanf("%d",&n);
printf("Introduceti prima matrice:\n");
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&m1[i][j]);
		
printf("Introduceti a doua matrice:\n");
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&m2[i][j]);

//Se calculeaza fiecare element din matricea rezultat
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		s=0;
		for(k=0;k<n;k++)
			s+=m1[i][k]*m2[k][j];
		rez[i][j]=s;
	}
	
printf("Am modificat:\n");
printf("Rezultatul este:\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
		printf("%d ",rez[i][j]);
	printf("\n");
}
return 0;
}
