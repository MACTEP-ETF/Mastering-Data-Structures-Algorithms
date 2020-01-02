/******************************************
Autors: Vladimirs Fedorovičs
Mērķis: Apgūt massīvus un tā šķirošana
******************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Print(int *a, int N)
{
	int i;
	for (i=0; i<N; i++)
	{
		printf("%d\t", a[i]);
	}
}
void Generate(int *a, int N)
{
	int i;
	srand(1);
	
	//Ģenerē un iegaumē skaitļus diapazonā no 0 līdz N skaitlim
	for (i=0; i<N; i++)
	{
		a[i]=rand() %10; //ieraksta masīvā gadījumskaitli no 0 līdz norādītam skaitlim aiz '%' zīmes
	}
}
void BubbleSort(int *a,int N)
{
	int i, j, Temp;
	for (i=0; i<N; i++)
	{
	    for (j=0; j<N-1; j++)
	    {
	        if (a[j] > a[j+1])
	        {
	            Temp = a[j];
	            a[j] = a[j+1];
	            a[j+1] = Temp;
	        }
	    }
	}
}

int main ()
{
	int i, N;
	N = (2+1)*3;
	int a[N];
	Generate(a,N); //Gadijumskaitļa ģenerācija un ierakstīšana
	Print(a,N);
	printf("\n");
	BubbleSort(a,N); //Bubble sort
	Print(a,N);
	printf("\n");
	return 0;
}