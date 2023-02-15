#include "shell.h"

/**
 * @author: Ufuoma Egbetamah and Dukeson Ehigboria
 * main - entry point of the shell project
 * Return: Always Success (0)
 */

int main(int argc, char **argv)
{
	char *shell_prompt = "$ ";
	(void)argc;
	(void)argv;

	printf("We will start with the basic shell prompt:\t%s", shell_prompt); 
	return (0);
}
