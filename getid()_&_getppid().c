//Write a C program for execution of getid() and getppid()
//slip5_2,, slip12_2
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h> 

int main() {
    pid_t child_pid;


    child_pid = fork();

    if (child_pid < 0) {

        perror("fork failed");
        exit(1);
    } 
    else if (child_pid == 0) {

        printf("--- CHILD PROCESS ---\n");
        printf("Child Process ID: %d\n", getpid());
        printf("Parent Process ID: %d\n", getppid());
      
    } 
    else {

        wait(NULL);
        printf("\n--- PARENT PROCESS ---\n");
        printf("Parent Process ID: %d\n", getpid());
        printf("Child Process ID: %d\n", child_pid);
        
    }

    return 0;
}
