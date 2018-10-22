#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h> 

void ratespiel();

void main() {

	double zahl, zahl1;
	int zeit, i;

	//Verzögeter start + Weiße farbe
	system("color F");


	Sleep(500);

	//lade-animation
	for (i = 0; i < 2; i++)
	{
		printf("Loading");
		Sleep(600);
		printf(".");
		Sleep(400);
		printf(".");
		Sleep(400);
		printf(".");
		Sleep(400);

		system("cls");
	}


	printf("Loading");

	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(1000);

	system("cls");

	Sleep(150);

	//eigentlicher Start
	ratespiel();
	printf("Zahl:");

	//Zahl zwischen 0 und 1000 wird zufällig bei jedem start generiert
	srand(time(NULL));
	zahl1 = rand() % 1000;

	//Einlesen einerZahl und Tips mit kurzem, rotem aufleuchten falls falsch. (wiederholt sich so lange, bis die Zahl stimmt)
	do {

		fflush(stdin);

		scanf_s("%lf", &zahl);
		system("cls");

		if (zahl == zahl1)
		{
			system("color A");
		}
		else if (zahl < zahl1)
		{
			ratespiel();
			printf("Die Zahl ist groeser.\nZahl:");
			system("color c");
			Sleep(300);
			system("color F");
		}
		else if (zahl > zahl1)
		{
			ratespiel();
			printf("Die Zahl ist kleiner.\nZahl:");
			system("color c");
			Sleep(300);
			system("color F");
		}

	} while (zahl != zahl1);


	//Automatisches schließen
	for (zeit = 3; zeit > 0; zeit--)
	{
		ratespiel();
		printf("Die Zahl ist Richtig.");


		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nProgramm schliest sich in 3 Sekunden...");

		Sleep(1000);
		system("cls");
	}
	printf("lol.");
	Sleep(250);
}


//damit man den Text nicht immer wieder schreiben muss
void ratespiel() {

	printf("---==Ratespiel==---\nErraten sie die Zahl!\nViel Glueck.");
	printf("\n==============================================================================================================\n");

}
