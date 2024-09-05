/*	Mohit Gupta
	MT2024049
	Write a program to open a file, duplicate the file descriptor and append the file with both the
	descriptors and check whether the file is updated properly or not.
	a. use dup
	b. use dup2
	c. use fcntl
*/
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argv,char *argc[]){

	int fd=open(argc[1],O_WRONLY|O_APPEND|O_CREAT,S_IRWXU);
	int a1=dup(fd);
	write(fd,"Hi, written using original fd\n",31);
	write(a1,"Hi, written using dup() fd\n",28);
	int a2=dup2(fd,10);
	write(a2,"Hi, written using dup2() fd\n", 29);
	int a3 = fcntl(fd, F_DUPFD, 5); 
	write(a3,"Hi, written using fcntl() fd\n",30);

	return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog11.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ nano prog11.txt
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog11.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out prog11.txt
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ cat prog11.txt

Hi, written using original fd
Hi, written using dup() fd
Hi, written using dup2() fd
Hi, written using fcntl() fd

*/
