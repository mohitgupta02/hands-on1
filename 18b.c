/* 
Name :  Mohit Gupta
Roll No. :MT2024049
    Write a program to perform Record locking.
    b. Implement read lock
    Create three records in a file. Whenever you access a particular record, first lock it then modify/access
    to avoid race condition.
*/

#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int fd = open("/home/mohit/Desktop/Handson List1/18.txt", O_RDONLY);
    struct flock rdlock = {F_RDLCK, SEEK_SET, 0, 34, getpid()};
    int id;
    printf("Enter record id:");
    scanf("%d", &id);
    switch (id)
    {
    case 1:
        rdlock.l_start = 0;
        break;
    case 2:
        rdlock.l_start = 17;
        break;
    case 3:
        rdlock.l_start = 34;
        break;
    default:
        perror("invalid choice of record!!!");
        return 0;
    }
    fcntl(fd, F_SETLKW, &rdlock);
    printf("record %d id locked Enter to unlock it\n", id);
    getchar();
    getchar();
    rdlock.l_type = F_ULOCK;
    fcntl(fd, F_SETLKW, &rdlock);
    printf("record is unlocked\n");
    return 0;
}

/*

mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc 18b.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out 
Enter record id:2
record 2 id locked Enter to unlock it
2
record is unlocked
*/
