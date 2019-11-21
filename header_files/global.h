/*
 * global.h
 * Porgrammieren 1 Arbeitsblatt 3
 *
 *  Created on: 	Nov 12, 2019
 *  Author: 		Lorenz Sommer
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_
#endif /* GLOBAL_H_ */

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// Makros

#define MATRIXSIZE 10
#define ARRAYSIZE 200
#define CHAR 0
#define VALUE 1
#define SEED 5


/* Aufgabe – Printausgaben */
void printArray(const char* array, int length)
{
	for(int i = 0; i < length; i++)
	{
		if(i == length-1)
		{
			printf("%c", array[length-1]);
		}
		else
		{
			printf("%c,",array[i]);
		}

	}
	printf("\n");
}

void printMatrix(const char matrix[MATRIXSIZE][MATRIXSIZE], int length, int type)
{
	for(int i2 = 0; i2 < length; i2++)
	{
		for(int i3 = 0; i3 < length; i3++)
		{
			if(type == CHAR)
			{
				printf("%c  ",(char)matrix[i2][i3]);
			}
			else if(type == VALUE)
			{
				printf("{%02d} ", (int)matrix[i2][i3]);
			}

		}
		printf("\n");
		printf("\n");
	}
	printf("\n");
}

/*Aufgabe – Zufallszahlen*/

unsigned char myRand(int max)
{
	/*int randn;
	int increment = 0;

	for(int i_increment = 0; i_increment < max; i_increment++)
	{
		if(i_increment % max != 0)
			increment = i_increment;
	}

	printf("%d\n", increment);


	randn = (unsigned int)(randn + increment) % max;
	*/

	return rand() % max;


}

void randArray(char* array, int length, int max)
{
	srand(time(NULL));
	for(int i_ran_arr_len = 0; i_ran_arr_len < length; i_ran_arr_len++)
	{
		array[i_ran_arr_len] = myRand(max);
	}

}
void randMatrix(char matrix[MATRIXSIZE][MATRIXSIZE], int length, int max)
{
	srand(getpid());
	for(int height = 0; height < length; height++)
	{
		for(int width = 0; width < length; width++)
		{
			matrix[height][width] = myRand(max);
		}
	}
}

void countArray(const char* array,int length, char occurrence[256])
{
	for(int i_occ = 0;i_occ < length; i_occ++)
	{
		occurrence[(int)array[i_occ]]++;
	}
}


// Aufgabe - Wortspiel
void setArray(char* array, int length, char value)
{
	for(int i_set = 0; i_set < length; i_set++)
	{
		array[i_set] = value;
	}
}

void readInputAsString(char* array, int length)
{
	char string[20];

	printf("String eingeben: \n");
	scanf("%s", string);

	for(int i_string = 0; i_string < length; i_string++)
	{
		array[i_string] = (char)string[i_string];
	}
	array[length] = '\0';
}
void toUpperCase(char* array, int length)
{
	for(int i_str_upper = 0; i_str_upper < length; i_str_upper++)
	{
		if((char)array[i_str_upper] >= (char)0x61)
		{
			array[i_str_upper] = (char)(array[i_str_upper] - 0x20);
		}
		else
		{
			array[i_str_upper] = (char)array[i_str_upper];
		}
	}
}

void countUpperCase(char* array, int length)
{
	int upper_cnt = 0;
	for(int i_upper_cnt = 0;i_upper_cnt < length; i_upper_cnt++)
	{
		if(array[i_upper_cnt] <= 0x5A)
		{
			upper_cnt++;
		}
	}

	printf("Die ersten %d Stellen enthalten %d Grossbuchstaben.\n",length,upper_cnt);
}
void toLowerCase(char* array, int length)
{
	for(int i_str_upper = 0; i_str_upper < length; i_str_upper++)
	{
		if((char)array[i_str_upper] <= (char)0x5A)
		{
			array[i_str_upper] = (char)(array[i_str_upper] + 0x20);
		}
		else
		{
			array[i_str_upper] = (char)array[i_str_upper];
		}
	}
}
void countLowerCase(char* array, int length)
{
	int lower_cnt = 0;
	for(int i_lower_cnt = 0;i_lower_cnt < length; i_lower_cnt++)
	{
		if(array[i_lower_cnt] >= 0x61)
		{
			lower_cnt++;
		}
	}

	printf("Die ersten %d Stellen enthalten %d Kleinbu.\n",length,lower_cnt);
}
char isUpperCase(char* array, int index)
{

	if((array[index] >= 0x41) && (array[index] <= 0x5A))
		return 1;
	else
		return 0;

}
char isLowerCase(char* array, int index)
{

	if((array[index] >= 0x61) && (array[index] <= 0x7A))
		return 1;
	else
		return 0;

}


void caesarChiffre(const char* array, int length, int shift)
{
	char ccc[length];

	for(int i_cc = 0; i_cc < length; i_cc++)
	{
		ccc[i_cc] = array[i_cc];
	}

	for(int i_shift = 0;i_shift < length; i_shift++)
	{
		if(((ccc[i_shift] + shift) > 0x5A) && ccc[i_shift] < 0x61)
		{
			ccc[i_shift] = 0x41 + ((ccc[i_shift] + shift) - 0x5A - 1);
		}
		else if((ccc[i_shift] + shift) > 0x7A)
		{
			ccc[i_shift] = 0x61 + ((ccc[i_shift] + shift) - 0x7A - 1);
		}
		else
			ccc[i_shift] = (char)array[i_shift] + shift;
	}

	printf("Original: ");
	printArray(array,length);
	printf("\n");
	printf("Chiffre: ");
	printArray(ccc,length);
	printf("\n");
}



// Aufgabe - ASCII Art – Bilder drehen


void rotateMatrixLeft(char matrix[MATRIXSIZE][MATRIXSIZE], int length)
{
	char mat_clone_l[MATRIXSIZE][MATRIXSIZE];

	//Erstellen einer Kopie
	for(int mc = 0; mc < length ; mc++)
	{
		for(int nc = 0; nc < length; nc++)
		{
			mat_clone_l[mc][nc] = matrix[mc][nc];
		}
	}

	//Algorithmus
	for(int mr = 0; mr < length ; mr++)
	{
		for(int nr = 0; nr < length; nr++)
		{
			mat_clone_l[mr][nr] = matrix[nr][length - mr - 1];
		}
	}

	//Überschreiben des Originials mit der bearbeiteten Kopie
	for(int mc = 0; mc < length ; mc++)
		{
			for(int nc = 0; nc < length; nc++)
			{
				matrix[mc][nc] = mat_clone_l[mc][nc];
			}
		}
}


void rotateMatrixRight(char matrix[MATRIXSIZE][MATRIXSIZE], int length)
{
	char mat_clone_r[MATRIXSIZE][MATRIXSIZE];

	//Erstellen einer Kopie
	for(int mc = 0; mc < length ; mc++)
	{
		for(int nc = 0; nc < length; nc++)
		{
			mat_clone_r[mc][nc] = matrix[mc][nc];
		}
	}

	//Algorithmus
	for(int ml = 0; ml < length ; ml++)
	{
		for(int nl = 0; nl < length; nl++)
		{
			mat_clone_r[ml][nl] = matrix[length - nl -1][ml];
		}
	}

	//Überschreiben des Originials mit der bearbeiteten Kopie
	for(int mc = 0; mc < length ; mc++)
		{
			for(int nc = 0; nc < length; nc++)
			{
				matrix[mc][nc] = mat_clone_r[mc][nc];
			}
		}
}
