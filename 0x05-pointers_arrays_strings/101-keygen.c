#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int len = 10;
char password[len + 1];
char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[];:<>,.?/";

srand(time(NULL));

for (i = 0; i < len; i++)
password[i] = charset[rand() % (sizeof(charset) - 1)];

password[len] = '\0';

printf("%s\n", password);

return (0);
}
