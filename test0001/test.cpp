//#include "stdafx.h"
#include<process.h>
#include "test.h"
#include "stdio.h"

void timeProc(void*P);
void timeProc1(void*P) {
	for(;;)
	printf("Hello timeproc\n");
}

ADAPTERDLL_API void init(cbStr* p) {
	goCallback = *p;
	printf("init success!\n");
	_beginthread(&timeProc, 0, 0);
	//_beginthread(&timeProc1, 0, 0);
	printf("End \n");
}

void timeProc(void *p) {
	
	for (;;) {
		goCallback(1, 2, "Hello");
	}
	
}
