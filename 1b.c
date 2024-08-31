/*
/* Gupta Mohit
    MT2024049
        Create the following types of a files using (i) shell command (ii) system call
       b. hard link (link system call)
*/

*/
#include<unistd.h>
#include<stdio.h>
int main(){
	//hardLink
	int o=link("prog1_b.txt","hardlink.txt");
	if(o==0)
	{
		printf("HardLink created succesfully\n");
	}
	return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ gcc prog1_b.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out 
HardLink created succesfully

*/
