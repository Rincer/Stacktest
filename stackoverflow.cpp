// stackoverflow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <malloc.h>

void Recursive()
{
	int a[10000];
	Recursive();
}

int _tmain(int argc, _TCHAR* argv[])
{
	void* p = NULL;
	p = _aligned_malloc(0, 8);
	Recursive();
	return 0;
}

