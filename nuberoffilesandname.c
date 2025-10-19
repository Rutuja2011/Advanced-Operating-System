//Read the current directory and display the name of the files , no of files in current directory.
//slip3_2 , slip7_2, slip10_1
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<dirent.h>
#include<stdio.h>
#include<sys/stat.h>
int main()
{
	DIR *dr;
	struct dirent *en;
	int c=0;
	dr=opendir(".");
	printf("Directory Files\n");
	if(dr)
	{
		while((en=readdir(dr))!=NULL)
		{
			printf("\n%s", en->d_name);
			c++;
		}
	}
	printf("\n\nTotal no of files=%d",c);
}
