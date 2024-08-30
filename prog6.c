// Mohit Gupta
// MT2024049

/*
Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
*/
#include<stdio.h>
#include<unistd.h>
int main(){
	char b[30];
	int n=read(0,b,30);
	write(1,b,n);
}

/*
./a.out
hello
hello
*/
