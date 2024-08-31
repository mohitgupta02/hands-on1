// Gupta Mohit
// MT2024049
/*
	Create the following types of a files using (i) shell command (ii) system call
	a.soft link(symlink system call)
*/
#include<stdio.h>
#include<unistd.h>
	int main(){
	int o= symlink("prog1.txt","softlink.txt");
	if(o==0){
		printf("SoftLink is created succsesfully");
	}
	else
	perror("Link not created");
	return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog1_a.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out 
SoftLink is created succsesfully
lrwxrwxrwx 1 mohit mohit     9 Aug 31 14:48 softlink.txt -> prog1.txt

*/

