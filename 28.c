/*
Name : Mohit Gupta
Roll No. :MT2024049
	Write a program to get maximum and minimum real time priority.
*/
#include<stdio.h>
#include<sched.h>
int main()
{
	printf("Max priority and Min priority of SCHED_FIFO scheduling is %d and %d\n", sched_get_priority_max(SCHED_FIFO), sched_get_priority_min(SCHED_FIFO));
	printf("Max priority and Min priority of SCHED_RR scheduling is %d and %d\n", sched_get_priority_max(SCHED_RR), sched_get_priority_min(SCHED_RR));
	printf("Max priority and Min priority of SCHED_OTHER scheduling is %d and %d\n", sched_get_priority_max(SCHED_OTHER), sched_get_priority_min(SCHED_OTHER));
	return 0;
}

/*

Max priority and Min priority of SCHED_FIFO scheduling is 99 and 1
Max priority and Min priority of SCHED_RR scheduling is 99 and 1
Max priority and Min priority of SCHED_OTHER scheduling is 0 and 0
*/
