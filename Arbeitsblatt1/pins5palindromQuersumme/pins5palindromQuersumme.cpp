#include <stdio.h>

/*Definition einer Funktion die die Quersumme
einer 5-stelligen Zahl errechnet und diese ausgibt.*/

int qsum(int zahl)
{
	int quersumme = 0;
	quersumme = (zahl/10000) + ((zahl/1000)%10) + ((zahl/100)%10) + ((zahl/10)%10) + ((zahl/1)%10);
	return quersumme;
}


int main()
{

	int i = 0;
	int check = 0;

	printf("Quersumme?\n");  //Einlesen der zu prüfenden Quersumme
	scanf("%d",&check);

	for (i = 0; i < 100000; i = i + 1)  //Iterarion

	{
		if (((i/10000) == ((i/1)%10) && ((i/1000)%10) == ((i/10)%10)) && (qsum(i) == check))
		//Alebraischer Ausdruck zur Prüfung auf Palindrom (1==5, 2==4) UND der Qersumme
		{

		printf("%05d\n", i);  //Ausgabe der zutreffenden Laufzahlen

		}
	}

	return 0;
}

//RRRRRRRRRRRRRRRRRRRRRR
//sdfghnjmkl
