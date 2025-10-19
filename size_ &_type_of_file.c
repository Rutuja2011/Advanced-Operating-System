//Write a c program that will print the size of a given file.
//slip4_2, slip6_2,slip12_1
#include<stdio.h>
#include<string.h>
#include<sys/stat.h>

void main()
{
	struct stat filestat;
	FILE *f1;
	char s1[100];
	printf("Enter the file name::");
	scanf("%s",&s1);
	f1=fopen(s1,"r");
	printf("Size=%ld bytes",filestat.st_size);
	printf("\ntype=");
	
	if(strstr(s1,".html"))
	printf("html type");
	
	if(strstr(s1,".csv"))
	printf("CSV type");
	
	if(strstr(s1,".php"))
	printf("php type");
	
	if(strstr(s1,".c"))
	printf("C type");
}
