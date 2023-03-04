#include "shell.h"

void prompt_user(void)
{
	char *line = NULL;
	size_t len = 100;
	ssize_t nread;

	printf("$ ");
	if ((nread = getline(&line, &len, stdin)) == -1)
	{
		perror("Error: ");
	}
	printf("%s", line);
	free(line);
}
