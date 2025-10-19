//Fork(), vfork()n system call execution.;
//slip5_1, slip8_1
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int global;
int main()
{
	int local;
	local=1;
	if(vfork()==0)
	{
		global = 2;
		local = 3;
		exit(0);
	}
	
	printf("global=%d\nlocal=%d\n", global,local);
	return(0);
}
