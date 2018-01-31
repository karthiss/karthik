#include<stdio.h>
int main()
{
    char c;
    printf("Enter the charactor :");
    scanf("%c,\n", &c);
    
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    printf("Alphabet\n");
    else
    printf("No");
    return 0;
}
