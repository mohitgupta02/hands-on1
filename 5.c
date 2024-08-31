/*
Name : Mohit Gupta
Roll NO. : MT2024049
	Write a program to create five new files with infinite loop. Execute the program in the background
	and check the file descriptor table at /proc/pid/fd.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv)
{
	int f1 = creat("file1", S_IRWXU);
	int f2 = creat("file2", S_IRWXU);
	int f3 = creat("file3", S_IRWXU);
	int f4 = creat("file4", S_IRWXU);
	int f5 = creat("file5", S_IRWXU);
	while(1){}

	return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out &
[1] 6819
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ls -l /proc/6819/fd
total 0
lrwx------ 1 mohit mohit 64 Aug 30 11:38 0 -> /dev/pts/2
lrwx------ 1 mohit mohit 64 Aug 30 11:38 1 -> /dev/pts/2
lrwx------ 1 mohit mohit 64 Aug 30 11:38 2 -> /dev/pts/2
l-wx------ 1 mohit mohit 64 Aug 30 11:38 3 -> '/home/mohit/Desktop/Handson List1/file1'
l-wx------ 1 mohit mohit 64 Aug 30 11:38 4 -> '/home/mohit/Desktop/Handson List1/file2'
l-wx------ 1 mohit mohit 64 Aug 30 11:38 5 -> '/home/mohit/Desktop/Handson List1/file3'
l-wx------ 1 mohit mohit 64 Aug 30 11:38 6 -> '/home/mohit/Desktop/Handson List1/file4'
l-wx------ 1 mohit mohit 64 Aug 30 11:38 7 -> '/home/mohit/Desktop/Handson List1/file5'

*/
