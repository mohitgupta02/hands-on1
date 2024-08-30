// Gupta Mohit
// MT2024049
/*
	Create the following types of a files using (i) shell command (ii) system call
	a.soft link(symlink system call)
*/
#include<stdio.h>
#include<unistd.h>
	int main(int argc, char *argv[]){
	int o= symlink(argv[1],argv[2]);
	if(o==0){
		printf("SoftLink is created succsesfully");
	}
	else
	perror("Link not created");
	return 0;
}
