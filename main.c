#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "hello world";
    int len = strlen(s);
    int i = len -1;
    printf("reversed: ");
    do
    {
        printf("%c",s[i]);
        i--;
    }
    while(i>=0);
    {
    printf("\n");
    }
    return 0;
}
