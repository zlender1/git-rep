// control_struktur.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	
	//if-(else if)-else
	
	int a = 18, b = 20;

	//Runde klammer ist Bedingung

	
	if (a < 18 > 13)
	{
		printf("Dann bin ich Jugendlich.\n");
	}

	if (a < 14)
	{
		printf("Dann bin ich  Kind.\n");
	}


		//2nd example

	int i = 18;					//kind < 14 jungendlicher < 18 heranwachsen < 21 erwachsen < alte < 80 < ganz alt <100

	printf("Bitte Ihre Jahr eingeben:");
	scanf("%i", &i);

	if (i < 14)
	
	{
		printf("Du bist Kind.%i", i);
	}

	else if (i < 18)

	{
		printf("\nDie bist Jungendlicher.");
	}

	else if (i < 21)

	{
		printf("\nDu bist Heranerwachsen.%i", i);
	}
	
	printf("%i\n", i);


	//3rd example

	
		//Schleifen
	
	//Abweisende - Kopf schleife
	
	int i;															//for (int i = 0; i < 10; i++)

	for (i = 0; i < 10; i ++)										//pseudocode - fuer i bis 10

	{
		printf("Schleifendurchlauf %i\n", i);
	}


	//Aternative - While schleife - keinen start Wert Deklaration ausenhalb - kein Inkrement
	//schleifen zutaten - 1 - startwert, 2 - Abbruchbedingung, 3 - Inkrement oder Dekrement der Laufvariablen

	int y = 0;

	while (y < 10)													//pseudecode - solange
	{
		printf("Schleifendurchlauf %i\n", y);
		y++;
	}																//ENDE SOLANGE
	
	
	//2 te Alternative - fuss gesteuerteschleife - anmehmendeschleife

	int i = 0;
	char psw[10] = " ";
	char benutzername[10] = " ";

	do																//pseudecode - MACHE SOLANGE
	{
		printf("Benutzereingabe:\t");
		scanf("%s\n", &benutzername);
		
		printf("Passeieingabe:\t");
		scanf("%s", &psw);
				
		i++;

	} while ((psw != "Hans" || benutzername != "Hans") && i <2);	//ENDE SOLANGE

	//U001 - 100 zahlen Liste

	int i;

	for (i = 0; i < 100; i++)
	{
		printf("Zahl:\t%i\n", i);
	}

    return 0;
}

