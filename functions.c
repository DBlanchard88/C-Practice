#include <stdio.h>
#include <stdlib.h>


int main()
{   
    printf("top\n");
    sayHi();
    printf("bottom");

    return 0;
}

void sayHi(){
    printf("Hello User\n");
}