// Write a C program to find the wheather a given file is present in current directory or not.
//slip2_1, slip8_2, slip10_2
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>

void main()
{
  char fn[30];
  int fd=0;
  FILE *f1;
  printf("Enter the Pathname:::");
  scanf("%s", &fn);
  f1=fopen(fn,"r");
  
  if(f1==NULL)
  printf("Not in current");
  else
  printf("in current");
 }
 
