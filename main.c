#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];
<<<<<<< HEAD
    askname(first, last);
    printf("Hello Nika%s %s!\n", first, last);
=======
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */
    printf("Hello %s %s!\n", first, last);
>>>>>>> parent of c181b2c (Move the ask name code into its own function and file.)
    return 0;
}