#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void){

	pid_t pid = fork();
	printf("")
	char *argv[] = {"/bin/ls", "-l","/tmp", NULL};
	char *exe[] = {"#!/usr/bin/env bash", NULL};
	if (execve(argv[0], argv, exe) == -1 )
	{
		perror("Error:");
	}
	
	return 0;
}
