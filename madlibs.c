#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char color[100];
    char pluralNoun[100];
    char celebf[100];
    char celebl[100];

    printf("Enter in a color: \n");
    scanf("%s", color);
    printf("Enter in a plural noun: \n");
    scanf("%s", pluralNoun);
    printf("Enter in a celebrity: \n");
    scanf("%s%s", celebf, celebl);
    
    printf("roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("i love %s %s.", celebf, celebl);

    return 0;
}