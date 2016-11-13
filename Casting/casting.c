#include <stdio.h>
#include <float.h>
#include <stdbool.h>

int main(void) {
	bool t = true;

	printf("Downcast --> loses data\n");
	printf("	DBL_MAX = %E\n", DBL_MAX);
	printf("	DBL_MAX --> int = %d\n", (int)(DBL_MAX) );
	printf("	DBL_MAX --> char = %d\n", (char)(DBL_MAX) );
	printf("	DBL_MAx --> bool = %d\n", (bool)(DBL_MAX) );
	printf("	Casting 7.456 to int --> %d\n\n", (int)(7.456) );
	
	printf("Upcast --> DOES NOT lose data\n");
	printf("	t = %d\n", t);
	printf("	t --> float = %f\n", (float)(t) );
	printf("	t --> double = %f\n", (double)(t) );

	return 0;
}
