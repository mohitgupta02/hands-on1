/*
Name :  Mohit Gupta
Roll No. : MT2024049
Program :c. FIFO (mkfifo Library Function or mknod system call)
*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	const char*file="fifo.txt";

	if(mknod(file,S_IFIFO | 0666,0) == -1){
		perror("mknod");
		return 1;
	}

	printf("Fifo file creted : %s\n", file);
	return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog1_c.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out 
Fifo file creted : fifo.txt
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ 

*/
