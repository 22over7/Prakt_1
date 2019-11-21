/*
 ============================================================================
 Name        : sudoku_test.c
 Author      : Lorenz Sommer
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include </home/lorenz/git/Prakt_1/header_files/sudoku.h>

int main(void)
{
	char sudoku_test[MATRIXSIZE][MATRIXSIZE] = {{1,2,3,4,5,6,7,8,9},
												{2,3,4,5,6,7,8,9,1},
												{3,4,5,6,7,8,9,1,2},
												{4,5,6,7,8,9,1,2,3},
												{5,6,7,8,9,1,2,3,4},
												{6,7,8,9,1,2,3,4,5},
												{7,8,9,1,2,3,4,5,6},
												{8,9,1,2,3,4,5,6,7},
												{9,1,2,3,4,5,6,7,8}};

	/*if(columnTest(sudoku_test,0,9) == 1)
	{
		printf("ok\n");
	}
	else if (columnTest(sudoku_test,0,9) == 0)
	{
		printf("not ok\n");
	}
	*/

	if(sudokuTest(sudoku_test,9) == 1)
	{
		printf("ok\n");
	}
	else if(sudokuTest(sudoku_test,9) == 0)
		printf("not ok\n");

}
