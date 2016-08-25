#include<csv-lib.h>

int csv_import(char filename[100])
{
	FILE *csv_input
	csv_input = fopen(filename, "w");
	if(csv_input == NULL)
	{
		return 1;
	}
	/*
	 * Do something here!
	 */
	return 0;
}
	
