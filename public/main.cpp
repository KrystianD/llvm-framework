#include <stdio.h>

#include "public.h"

int library_getTime() {
	printf("library_getTime() called\n");
	return 50;
}

int main() {
	printf("test %d %d %d\n", foo1(), foo2(), foo3());
	return 0;
}