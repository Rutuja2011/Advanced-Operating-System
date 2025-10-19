 
 //Write a c program that accept a string as an argument and return all the files that begins with that name in the current directory .
// for ex ./a.out sss will return all file name that begins with sss.
//slip2_2, slip9_1, slip11_2
#include<sys/stat.h>
#include<sys/types.h>
#include<dirent.h>
#include<string.h>
#include<stdio.h>

int main()
{
  DIR *dr;
  
  struct dirent *en;
  char s1[20];
  
  dr= opendir(".");
  printf("Enter the string to match");
  scanf("%s", &s1);
  
  if(dr)
  {
  	while((en=readdir(dr))!=NULL)
  	{
  		if(strstr(en->d_name,s1)!=NULL)
  		printf("\n %s", en->d_name);
  	}
  }
}
