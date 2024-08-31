/*
Name : Mohit Gupta
Roll No. : MT2024049
8. Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[]) {

    int file = open(argv[1], O_RDONLY);
    char buffer[256];
    char a;
    int i = 0;

    while ((read(file, &a, 1)) > 0) {
        buffer[i++] = a;
        if (a == '\n' || i == 255) {
            buffer[i] = '\0';
            printf("%s", buffer);
            i = 0;
        }
    }

    close(file);
    return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog8.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out prog8.txt
this
is
new
file
for
prog8

*/
