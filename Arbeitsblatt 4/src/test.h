/*
 * test.h
 *
 *  Created on: Nov 29, 2019
 *      Author: lorenz
 */

#ifndef TEST_H_
#define TEST_H_

#pragma once
#include "list.h"

void test_PushPrint(void)
{
	List* tList = listCreate();
	listPrint(tList);

	for(int i = 1; i < 10; i++)
	{
		listPush(tList, i);
	}

	listPrint(tList);

}

void testListFindElement(void)
{
	List* tList = listCreate();

	if(listFindElement(tList,0) == NULL)
	{
		printf("true\n");
	}
	else printf("false\n");

	for(int i = 9; i > 0; i--)
	{
		listPush(tList,i);
	}
	listPrint(tList);

	if(listFindElement(tList,5)->value == 5)
	{
		printf("true\n");
	}
	else printf("false\n");

	if(listFindElement(tList,20) == NULL)
	{
		printf("true\n");
	}
	else printf("false\n");

}
void testListGetElementAtIndex(void)
{
	List* tList = listCreate();
	if(listGetIndexOfElement(tList,0) == (-1))
	{
		printf("true\n");
	}
	else printf("false\n");

	for(int i = 9; i > 0; i--)
	{
		listPush(tList,i);
	}

	if(listGetIndexOfElement(tList,1) == 0)
	{
		printf("true\n");
	}
	else printf("false\n");

	if(listGetIndexOfElement(tList,4) == 3)
	{
		printf("true\n");
	}
	else printf("false\n");

	if(listGetIndexOfElement(tList,25) == (-1))
	{
		printf("true\n");
	}
	else printf("false\n");

}
unsigned testListGetIndexOf(void)
{
	List* tList = listCreate();
	if(listGetElementAtIndex(tList,5) == NULL)
	{
		printf("true\n");
	}
	else printf("false\n");

	for(int i = 10; i > 0; i--)
	{
		listPush(tList,i);
	}

	if(listGetElementAtIndex(tList,5)->value == 6)
	{
		printf("true\n");
	}
	else printf("false\n");

	if(listGetElementAtIndex(tList,15) == NULL)
	{
		printf("true\n");
	}
	else printf("false\n");

}

#endif /* TEST_H_ */
