#include"csv_lib.h"

int csv_import(char filename[100])
{
	FILE *csv_input;
	csv_input = fopen(filename, "r");
	if(csv_input == NULL)
	{
		return 1;
	}
	/*
	 * Do something here!
	 */
	char buffer[1024];
	char *record;
	char *line;
	int i = 0;
	int j = 0;
	int csv_buffer[100][100];
	while((line = fgets(buffer, sizeof(buffer), csv_input)) != NULL)
	{
		record = strtok(line, ";");
		while(record != NULL)
		{
			printf("Record: %s", record);
			csv_buffer[i][j++] = atoi(record);
			record = strtok(NULL, ";");
		}
		++i;
	}
	return 0;
}
	
