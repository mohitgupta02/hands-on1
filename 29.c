/*
Name : Mohit Gupta
Roll No. : MT2024049
    Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
    SCHED_RR).
*/
#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

void print_sched_policy(int policy) {
    switch (policy) {
        case SCHED_FIFO:
            printf("Current scheduling policy: SCHED_FIFO\n");
            break;
        case SCHED_RR:
            printf("Current scheduling policy: SCHED_RR\n");
            break;
        case SCHED_OTHER:
            printf("Current scheduling policy: SCHED_OTHER\n");
            break;
        default:
            printf("Unknown scheduling policy: %d\n", policy);
            break;
    }
}

int main() {
    int pid = getpid();
    int sched_policy = sched_getscheduler(pid);
    if (sched_policy == -1) {
        perror("Failed to get scheduling policy");
        return 1;
    }

    print_sched_policy(sched_policy);

    int choice;
    printf("To change scheduling policy, select:\n1: SCHED_FIFO\n2: SCHED_RR\n3: SCHED_OTHER\n");
    scanf("%d", &choice);

    struct sched_param s;
    s.sched_priority = (choice == 3) ? 0 : 99;
    int new_policy;
    switch (choice) {
        case 1:
            new_policy = SCHED_FIFO;
            break;
        case 2:
            new_policy = SCHED_RR;
            break;
        case 3:
            new_policy = SCHED_OTHER;
            break;
        default:
            fprintf(stderr, "Invalid choice.\n");
            return 1;
    }

    if (sched_setscheduler(pid, new_policy, &s) == -1) {
        perror("Failed to set scheduling policy");
        return 1;
    }

    sched_policy = sched_getscheduler(pid);
    if (sched_policy == -1) {
        perror("Failed to get scheduling policy after change");
        return 1;
    }

    print_sched_policy(sched_policy);

    return 0;
}

/*
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ nano prog29.c
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ sudo su
[sudo] password for mohit: 
root@mohit-VMware-Virtual-Platform:/home/mohit/Desktop/Handson List1# gcc prog29.c
root@mohit-VMware-Virtual-Platform:/home/mohit/Desktop/Handson List1# ./a.out
Current scheduling policy: SCHED_OTHER
To change scheduling policy, select:
1: SCHED_FIFO
2: SCHED_RR
3: SCHED_OTHER
2
Current scheduling policy: SCHED_RR
root@mohit-VMware-Virtual-Platform:/home/mohit/Desktop/Handson List1# 
*/
