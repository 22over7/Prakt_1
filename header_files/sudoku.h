/*
 * sudoku.h
 *
 *  Created on: Nov 21, 2019
 *      Author: lorenz
 */

#ifndef SUDOKU_H_
#define SUDOKU_H_

//MAKRO
#define MATRIXSIZE 10

//LIBRARIES
#include <stdio.h>
#include <stdlib.h>

// Aufgabe - Sudoku Test
char lineTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int line, int length)
{
	char unq_test[255] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


	for(int i = 0; i < length ; i++)
	{
		if(matrix[line][i] > length)
			return 0;
		else if(matrix[line][i] != -1)
			unq_test[(int)matrix[line][i]]++;
	}

	for(int i2 = 0; i2 < 255; i2++)
	{
		if(unq_test[i2] > 1)
		{
			return 0;
		}
	}

	return 1;

}
char columnTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int column, int length)
{
	char unq_test[255] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

		for(int i = 0; i < length; i++)
		{
			if(matrix[i][column] > length)
			{
				printf("Exceeding permitted integer size.");
				return 0;
			}
			else if (matrix[i][column])
			{
				unq_test[(int)matrix[i][column]]++;
			}
		}

		for(int i2 = 0; i2 < 255; i2++)
		{
			if(unq_test[i2] > 1)
			{
				return 0;
			}
		}

		return 1;
}
char sudokuTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int length)
{
	for(int i = 0; i < length; i++)
	{
		if(lineTest(matrix,i,9) == 0)
		{
			return 0;
		}

		if(columnTest(matrix,i,9) == 0)
		{
			return 0;
		}

	}
	return 1;
}

/*void sudokuSolver(char matrix[MATRIXSIZE][MATRIXSIZE], int length)
{ }*/

#endif /* SUDOKU_H_ */
