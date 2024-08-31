/*
Name : Mohit Gupta
Roll No. : MT2024049
Write a program to copy file1 into file2 ($cp file1 file2).
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argv,char *argc[]){

	int f1=open(argc[1],O_RDONLY);
	if(f1==-1){
		printf("Error in f1");
		close(f1);
	}
	int f2=open(argc[2],O_WRONLY | O_CREAT,S_IRWXU);
	if(f2==-1){
		printf("Error in f2");
		close(f2);
	}
	char a;
	while(read(f1,&a,1)){
		write(f2,&a,1);
	}
	printf("File Copied");
	close(f1);
	close(f2);
	return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog7.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out prog7.txt prog7b.txt
File Copiedmohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ cat prog7b.txt
This is the content in the file for prgram 7

*/
