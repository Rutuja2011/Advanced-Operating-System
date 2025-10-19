//Write a C program to create an unnamed pipe the child process will write followimg Message to pipe and parent process will write following Message to pipe and parent process display it. Message : "HELLO WORLD"

#include<unistd.h>
int main()
{
	char msg[] = "Message = HELLO WORLD\n";
	write(STDOUT_FILENO, msg, sizeof(msg)-1); // system call
	return 0;
}

/*output : 
Message = HELLO WORLD
*/

