#include <stdio.h>
#include <stdlib.h>


/* functions should be defined before the int main function. as int main is the first function to execute when running program*/
double cube(double num){
    return num * num * num;

}


int main()
{
    printf("Answer: %f", cube(7.0));

    return 0;
}