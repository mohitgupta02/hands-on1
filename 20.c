/*
Name : Mohit Gupta
Roll No. : MT2024049
Find out the priority of your running program. Modify the priority with nice command.
*/


#include <stdio.h>       // For printf()
#include <unistd.h>      // For getpid() and nice()
#include <sys/resource.h>// For getpriority() and PRIO_PROCESS

int main(int argc, char *argv[]) {
  
  int pid = getpid();
	int niceVal = getpriority(PRIO_PROCESS, 0);
	
	printf("nice value = %d\n", niceVal);
	
	nice(10); // updating the priority(nice value) to 10 of the current process 
	niceVal = getpriority(PRIO_PROCESS, 0); //first argument : priority of the process is being queried , second argument : 0 : means we are refering to the current process

	
	printf("priority %d\n", niceVal);

  return 0;
}


/*
3
nice value = 0
priority = 20

*/
