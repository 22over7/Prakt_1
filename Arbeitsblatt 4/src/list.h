/*
 * list.h
 *
 *  Created on: Nov 29, 2019
 *      Author: lorenz
 */

#ifndef LIST_H_
#define LIST_H_

#pragma once

#include "myboolean.h"
#include "element.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct List
{
	struct Element* head; //Zeiger auf Kopf der jeweiligen Liste
};

typedef struct List List;

//Aufgabe 1

List* listCreate()
{
	List* pList = (List*) malloc(sizeof(List));
	pList->head = NULL;
	//printf(">listcreate @ %x in memory\n", pList);
	return pList;
}

void listPush(List* list, unsigned int value)
{
	Element* old_head = list->head;
	Element* new_element = elementCreate();

	//printf(">push element at %x ", &list->head);


	new_element->value = value;
	list->head = new_element;
	new_element->pSuccessor = old_head;

	//printf("to %x\n",&new_element->pSuccessor);

}

Element* listPop(List* list)
{
	return list->head->pSuccessor;

	Element* new_head = list->head->pSuccessor;
	list->head = new_head;
}

void listPrint(List* list)
{

	Element* current = list->head;

	if(list->head == NULL)
	{
		printf(">listPrint error: list empty\n");
	}

	while(current != NULL)
	{
		printf("%d ", current->value);
		current = current->pSuccessor;
	}
	printf("\n");
}

void listFillRandom(List* list, int seed, int anzahlWerte, int min, int max)
{
	srand(seed + getpid());
	int i2 = 1;

	do
	{
		listPush(list, min + rand() % (max+1 - min));
		i2++;
	}
	while(i2 <= anzahlWerte);

	printf(">End random fill\n");
}

//Aufgabe 2
Element* listFindElement(List* list, unsigned int value)
{
	if(list->head == NULL)
	{
		printf("listFindElement error: list empty!\n");
		return NULL;
	}

	Element* current = list->head;

	while(current->pSuccessor != NULL)
	{
		if(current->value == value)
		{
			return current;
		}
		current = current->pSuccessor;
	}
	printf("listFindElement: element not found\n");
	return NULL;
}


int listGetIndexOfElement(List* list, unsigned int value)
{
	Element* current = list->head;
	int count = 0;

	if(list->head == NULL)
	{
		printf("listGetIndexOfElement error: list empty\n");
		return -1;
	}

	while(current->pSuccessor != NULL)
	{
		if(current->value == value)
		{
			return count;
		}
		current = current->pSuccessor;
		count++;

	}
	printf("listGetIndexOfElement error: %d not in list.\n",value);
	return -1;
}

int countList(List* list)
{
	Element* current = list->head;
	int count = 0;

	if(list->head == NULL)
	{
		printf("Liste Leer!");
	}

	while(current->pSuccessor != NULL)
	{
		count++;
		current = current->pSuccessor;
	}

	return count;
}


Element* listGetElementAtIndex(List* list, unsigned int index)
{
	Element* current = list->head;
	int count_ind = 0;

	if(list->head == NULL)
	{
		printf("listGetElementAtIndex error: list empty\n");
		return NULL;
	}

	if(countList(list) < index)
	{
		printf("listGetElementAtIndex error: list too short\n");
		return NULL;
	}

	while(current->pSuccessor != NULL)
	{
		if(count_ind == index)
		{
			return current;
		}
		current = current->pSuccessor;
		count_ind++;
	}

	return 0;
}
//Aufgabe 3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex)
{
	if(list->head == NULL)
	{
		printf("listSwapElements error: list empty\n");
		return FALSE;
	}

	if(countList(list) < aIndex || countList(list) < bIndex)
	{
		printf("listSwapElements error: list too short\n");
		return FALSE;
	}

	Element* current_a = (Element*)listGetElementAtIndex(list,aIndex);
	Element* current_b = (Element*)listGetElementAtIndex(list,bIndex);
	Element* temp = (Element*) malloc(sizeof(Element));

	temp->value = current_a->value;
	current_a->value = current_b->value;
	current_b->value = temp->value;

	free(temp);

	return TRUE;



}

boolean listDeleteElement(List* list, unsigned int value)
{
	if(list->head == NULL)
	{
		printf("listDelete Element error: list too short\n");
		return FALSE;
	}

	if(listFindElement(list,value) == NULL)
	{
		return FALSE;
	}

	Element* to_delete = listFindElement(list,value);
	Element* previous = listGetElementAtIndex(list,(listGetIndexOfElement(list,value)-1));

	previous->pSuccessor = to_delete->pSuccessor;

	free(to_delete);

	return TRUE;
}

#endif /* LIST_H_ */
