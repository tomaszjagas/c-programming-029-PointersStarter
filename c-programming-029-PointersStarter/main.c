#include <stdio.h>

int main(void) {
	int number = 0;
	int* pnumber = NULL;

	printf("number address: %p\n", &number);
	printf("number value: %d\n\n", number);

	printf("pnumber address: %p\n", (void*)&pnumber);
	printf("pnumber size: %d bytes\n", sizeof(pnumber));
	printf("pnumber value: %p\n\n", pnumber);

	number = 10;
	printf("number address: %p\n", &number);
	printf("number value: %d\n\n", number);

	pnumber = &number;

	printf("pnumber address: %p\n", (void*)&pnumber);
	printf("pnumber size: %d bytes\n", sizeof(pnumber));
	printf("pnumber value: %p\n", pnumber);
	printf("value pointed to: %d\n", *pnumber);

	return 0;
}