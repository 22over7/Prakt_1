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
	printf("listcreate\n");
	return pList;
}

void listPush(List* list, unsigned int value)
{
	Element* old_head = list->head;
	Element* new_element = elementCreate();

	printf("push\n");


	new_element->value = value;
	list->head = new_element;
	new_element->pSuccessor = old_head->pSuccessor;
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
		printf("Liste leer!");
	}

	while(current != NULL)
	{
		printf("%d", current->value);
		current = current->pSuccessor;
	}
}

void listFillRandom(List* list, int seed, int anzahlWerte, int min, int max)
{
	srand(seed);
	int i = 0;

	do
	{
		listPush(list, min + rand() % (max+1 - min));
		i++;
	}
	while(i < anzahlWerte);
}

//Aufgabe 2
Element* listFindElement(List* list, unsigned int value);
int listGetIndexOfElement(List* list, unsigned int value);
Element* listGetElementAtIndex(List* list, unsigned int index);
//Aufgabe 3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex);
boolean listDeleteElement(List* list, unsigned int value);

#endif /* LIST_H_ */
