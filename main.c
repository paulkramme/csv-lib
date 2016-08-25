#include<stdio.h>
#include"csv_lib.h"

int main(void)
{
	puts("This is the main program. It will be removed, it's just for testing.");
	csv_import("pgklist.csv");
	return 0;
}

