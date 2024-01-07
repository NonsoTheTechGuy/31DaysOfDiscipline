#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[] = "stephanie";
	char input[20];
	int match;

	printf("Enter your Password: ");
	scanf("%s", input);
	match = strcmp(input, password);

	if (match == 0)
		puts("Password Accepted\n");
	else
		puts("Invalid password\n");
	return (0);
}
