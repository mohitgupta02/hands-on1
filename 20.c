/*
Name : Mohit Gupta
Roll No. : MT2024049
Find out the priority of your running program. Modify the priority with nice command.
*/
#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>
#include<sys/resource.h>
int main()
{
	int i;
	scanf("%d", &i);
	printf("nice value = %d\n", getpriority(PRIO_PROCESS, i));
	printf("priority = %d\n", (20+getpriority(PRIO_PROCESS, i)));
	return 0;
}

/*
3
nice value = 0
priority = 20

*/
