#include  <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 *
 */

int main(int argc, char **argv)
{
	char **av = argv;
	char *envp[] = {"#!/usr/bin/env bash", NULL};
	printf("before execve\n");
	if (execve(av[1], av, envp) == -1)
	{
		perror("Error");
	}
	printf("after execve\n");
	return 0;
}
