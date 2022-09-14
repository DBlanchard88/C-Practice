#include <stdio.h>
#include <stdlib.h>

/*
printf prints onto the screen
scanf allows user to enter in information to program
when ever creating string of characters you need [] and you specify how many characters you need to store inside integer if you are not going to give it a value right away
 you dont need "&" when grabbing user input for a sting

 %s is how c requests a sting callout
 %c is how c requests character callout
 %lf is how c requests a double callout
 $d is how c requests an intager callout

 scanf only grabs characters up to the first space when grabbing a string, use fgets to grab a whole line of text in a string


 stdin means standard input. telling fgets where we want to get information from. 

int main()
{
    int age;
    printf("Enter in your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);

    return 0;
}
*/

/*
int main()
{
    double gpa;
    printf("Enter in your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    return 0;
}
*/

/*
int main()
{
    char grade;
    printf("Enter in your Grade: ");
    scanf("%c", &grade);
    printf("Your grace is %c", grade);

    return 0;
}
*/

/*
int main()
{
    char name[20];
    printf("Enter in your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);

    return 0;
}
*/

int main()
{
    char name[20];
    printf("Enter in your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}