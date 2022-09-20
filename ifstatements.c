#include <stdio.h>
#include <stdlib.h>

/* && is a logical operator.. allows to put more than one condition into a function*/
/* || is an or statement. allows to check two conditions. whole thing is going to be true only if of condition is true 
! is a negation opperator if used in this context if(!(3 > 2))  printf("true") .. it wont show anything. but if(!(3 <2)) it will show up as true ! 
<= or >= works 
== is equality  is 3 == 2 .. no
!= means not equal if 3 != 2 its true.  printf("true")
*/


int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int main()
{
    printf("%d", max(4, 2, 3)); 
    /* 
    if(3 >2 || 2 > 5){
        printf("True");
    } 
    */

    return 0;
}