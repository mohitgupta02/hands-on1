/*
Name : Mohit Gupta
ROll No. : MT202049
Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char *exc = "./a.out";
    char *arg1 = "string is passed as value";
    char *args[] = {exc, arg1, NULL};

    if (execvp(exc, args) == -1) {
        perror("Error in executing the program");
        exit(EXIT_FAILURE);
    }
    return 0;
}

/*

mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog26_a.c -o a.out
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog26_b.c -o prog26
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./prog26
string is passed as value
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$


*/
