//Demonstrate the use of atexit() function.
//slip1_2, slip4_1, slip9_2
#include<stdio.h>
#include<stdlib.h>

void goodbye1(void)
{
 printf("GoodBye from function 1!\n");
}

void goodbye2(void)
{
 printf("GoodBye from function 2!\n");
}

int main()
{
 if(atexit(goodbye1)!=0)
 {
     fprintf(stderr, "Failed to register goodbye1\n");
     return 1;
 }
 if(atexit(goodbye2)!=0)
 {
     fprintf(stderr, "Failed to register goodbye2\n");
     return 1;
 }
 printf("Main function is running...\n");
 printf("Existing program now...\n");
 
 return 0;//exit(0);
}
