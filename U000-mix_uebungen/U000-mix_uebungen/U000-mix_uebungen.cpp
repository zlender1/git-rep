// U000-mix_uebungen.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <stdio.h>
#include <float.h>


int main()
{
	//Zahlen vergleich

	int i, j;

	printf("Zahl1:\t");
	scanf("%d", &i);

	printf("Zahl2:\t");
	scanf("%d", &j);


	while (i >= j)
	{
		printf("Zahl noch einmal:\t");
		scanf("%d", &j);
	}

	
	return 0;
}

