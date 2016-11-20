#include <stdio.h>
#include "Arraylist.h"

void ListInit(List * list)
{
	list->numOfData=0;
	list->curPosition=-1;
}

void LInsert(List * list, LData data)
{
	if(list->numOfData>=LIST_LEN)
	{
		printf("It's full");
		return;
	}
	list->arr[list->numOfData]= data;
	list->numOfData++;
}

int LFirst(List * list, LData * data)
{
	if(list->numOfData==0)
	{
		return FALSE;
	}
	list->curPosition=0;
	*data = list->arr[0];
	return TRUE;
}

int LNext(List * list, LData * data)
{
	if(list->curPosition >= list->numOfData-1)
	{
		return FALSE;
	}

	list->curPosition++;
	*data = list->arr[list->curPosition];
	return TRUE;
}

LData LRemove(List * list)
{
	LData tmp = list->arr[list->curPosition];
	int i;

	for(i=list->curPosition; i<list->numOfData-1; i++)
	{
		list->arr[i] = list->arr[i+1];
	}
	list->numOfData--;
	list->curPosition--;
	return tmp;
}

int LCount(List * list)
{
	return list->numOfData;
}
