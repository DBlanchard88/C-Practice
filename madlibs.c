#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char color[50];
    char pluralNoun[50];
    char noun[50];

    printf("Enter in a color: \n");
    scanf("%s", color);
    printf("Enter in a plural noun: \n");
    scanf("%s", pluralNoun);
    printf("Enter in a noun: \n");
    scanf("%s", noun);


    printf("roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("i love %s.\n", noun);

    return 0;
}