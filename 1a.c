//Gupta Mohit
//MT2024049
// Create the following types of a files using (i) shell command (ii) system call
// a. soft link (symlink system call
#include<stdio.h>
#include<unistd.h>

int main(){
	const char*target="text1.txt";
	const char*link="hello_link.txt";

	if(symlink(target,link)!=0){
		perror("symlink");
		return 1;
	}

	printf("Symbolic link created: %s -> %s\n",link,target);
	return 0;
}
