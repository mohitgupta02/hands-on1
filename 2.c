/*
Name :  Mohit Gupta
Roll no.:MT2024049
 Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
identify all the process related information in the corresponding proc directory.
*/

#include<stdio.h>
#include<unistd.h>

int  main(){
    while(1){

    }
    return 0;
}


/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog2.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out &
[1] 12068
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ cat /proc/12068/status
Name:	a.out
Umask:	0002
State:	R (running)
Tgid:	12068
Ngid:	0
Pid:	12068
PPid:	11271

*/
