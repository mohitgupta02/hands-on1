/*
Name : Mohit Gupta
Roll No. : MT2024049
    Write a program to perform Record locking.
    a. Implement write lock
    b. Implement read lock
    Create three records in a file. Whenever you access a particular record, first lock it then modify/access
    to avoid race condition.
*/
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
typedef struct record
{
    int id;
    int ticket;
} record;

int main(int argc, char *argv[])
{
    record r1 = {1, 1};
    record r2 = {2, 2};
    record r3 = {3, 3};
    int fd = open(argv[1], O_WRONLY | O_CREAT, S_IRWXU);
    char buf[17];
    sprintf(buf, "id=%dticket_no=%d\n", r1.id, r1.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf, 0, sizeof(buf));
    sprintf(buf, "id=%dticket_no=%d\n", r2.id, r2.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf, 0, sizeof(buf));
    sprintf(buf, "id=%dticket_no=%d\n", r3.id, r3.ticket);
    write(fd, &buf, sizeof(buf));
    return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc 18.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out 18.txt
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ cat 18.txt
id=1ticket_no=1
id=2ticket_no=2
id=3ticket_no=3
*/
