#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#include "Point.h"

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef Point * LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * list);
void LInsert(List * list, LData data);

int LFirst(List * list, LData * data);
int LNext(List * list, LData * data);

LData LRemove(List * list);
int LCount(List * list);

#endif
