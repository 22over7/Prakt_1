/*
 * global.h
 *
 *  Created on: Nov 12, 2019
 *      Author: lorenz
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_



#endif /* GLOBAL_H_ */

#pragma once
#include <stdio.h>
#include <stdlib.h>

// Makros

#define MATRIXSIZE 10
#define ARRAYSIZE 200
#define CHAR 0
#define VALUE 1
#define SEED 5

/* Aufgabe – Printausgaben */
void printArray(const char* array, int length)
{
	for(int i; i < length; ++i)
		{
			printf("{%d}",array[i]);
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
				printf("%c ",(char)matrix[i2][i3]);
			}
			else if(type == VALUE)
			{
				printf("%d ", (int)matrix[i2][i3]);
			}

		}
		printf("\n");
	}
	printf("\n");
}

/*//Aufgabe – Zufallszahlen


unsigned char myRand(int max) {  }
void randArray(char* array, int length, int max) {  }
void randMatrix(char matrix[MATRIXSIZE][MATRIXSIZE], int length, int max) {  }
void countArray(const char* array,int length,char occurrence[256]) {  }
// Aufgabe - Wortspiel
void setArray(char* array, int length, char value) {  }
void readInputAsString(char* array, int length) {  }
void toUpperCase(char* array, int length) {  }
void countUpperCase(char* array, int length) {  }
void toLowerCase(char* array, int length) {  }
void countLowerCase(char* array, int length) {  }
char isUpperCase(char* array, int index) { }
char isLowerCase(char* array, int index) { }
void caesarChiffre(const char* array, int length, int shift) {  }
// Aufgabe - ASCII Art – Bilder drehen
void rotateMatrixRight(char matrix[MATRIXSIZE][MATRIXSIZE], int length) {  }
void rotateMatrixLeft(char matrix[MATRIXSIZE][MATRIXSIZE], int length) { }
// Aufgabe - Sudoku Test
char lineTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int line, int length) { }
char columnTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int column, int length)
{  }
char sudokuTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int length)
{ }
void sudokuSolver(char matrix[MATRIXSIZE][MATRIXSIZE], int length)
{ }
*/
