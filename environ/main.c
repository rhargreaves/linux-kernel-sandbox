#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[], char *envp[])
{
	char *endOfArgs = argv[argc - 1];
	while (*endOfArgs != '\0')
	{
		endOfArgs++;
	}
	endOfArgs++;

	printf("end of args: %p\n----------------\n", endOfArgs);
	for (char *env = (char *)endOfArgs; *env != NULL; env++)
	{
		puts(env);
		while (*env != '\0')
		{
			env++;
		}
	}
	printf("----------------\n");

	printf("environ: %p\n", environ);
	for (char **env = environ; *env != NULL; env++)
	{
		puts(*env);
	}
	printf("----------------\n");

	printf("envp: %p\n", envp);
	for (char **env = envp; *env != NULL; env++)
	{
		puts(*env);
	}
	printf("----------------\n");

	return 0;
}