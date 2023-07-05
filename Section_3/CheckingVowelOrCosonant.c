/*This program checks whether a character is vowel or consonant*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    char c;
    int up,lr;
    printf("This program checks whether a character is vowel or consonant.");
    printf("\nEnter a character: ");
    scanf("%c",&c);
    lr=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'); /*evaluate to 1 if c is a lower case*/
    up=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'); /*evaluate to 1 if c is a upper case*/
    lr==1||up==1?printf("Vowel"):printf("Consonant");
    getch ();
}
/*End of the program*/
