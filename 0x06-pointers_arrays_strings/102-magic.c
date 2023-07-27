/**
 * main - Entry point of the program
 *
 * Description: This function serves as the entry point for the program.
 * It declares and initializes an integer variable 'n' without assigning
 * it any specific value. It also declares an integer array 'a' of size 5,
 * and a pointer 'p' to an integer. The program then assigns a value of 1024
 * to the third element of the 'a' array (index 2). Next, it makes the pointer
 * 'p' point to the address of the integer variable 'n'. However, the program
 * goes into undefined behavior by attempting to write the value 98 to the
 * memory location pointed by 'p + 5', which goes beyond the memory allocated
 * for 'n'. This behavior may result in unpredictable program execution and
 * potential crashes. Finally, the program prints the value of the third
 * element of the 'a' array using the 'printf' function.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
