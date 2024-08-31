/*
Name : Mohit Gupta
Roll No. : MT2024049
 Write a program to find out the opening mode of a file. Use fcntl.
*/
#include<stdio.h>
#include<fcntl.h>

int main(){
    int fd=open("prog12.txt",O_RDONLY|O_WRONLY);
    int mode=fcntl(fd,F_GETFL);
    switch(mode){
    case 32768 : printf("read only"); break;
    case 32769 : printf("write only"); break;
    case 33792 : printf("append"); break;
    case 32770 : printf("Read and write"); break;
    case 32794 : printf("Read and append"); break;
}
printf("%d",mode);
    return 0;
}


/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ ./a.out prog12.txt
write only32769mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ 
*/
