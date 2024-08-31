/*
Name : Mohit Gupta
Roll No. : MT2024049
Program :27. Write a program to execute ls -Rl by the following system calls
e. execvp
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    char *filepath = "ls";
    char *argv[] = {filepath, "-Rl", NULL};
    execvp(filepath, argv);
    return 0;
}
/*
total 168
-rw-rw-r-- 1 mohit mohit   284 Aug 22 08:34 1a.c
-rwxrwxr-x 1 mohit mohit 16008 Aug 31 10:44 a.out
-rw-rw-r-- 1 mohit mohit     2 Aug 29 19:36 d,c
-rw-rw-r-- 1 mohit mohit   253 Aug 29 19:44 d.c
drwxr-xr-x 4 mohit mohit  4096 Aug 20 21:20 Desktop
drwxr-xr-x 2 mohit mohit  4096 Jul 13 10:14 Documents
drwxr-xr-x 2 mohit mohit  4096 Aug 30 10:51 Downloads
-rw-rw-r-- 1 mohit mohit    38 Aug 29 19:39 dup
-rw-rw-r-- 1 mohit mohit   127 Aug 30 11:35 execl.c
drwxrwxr-x 2 mohit mohit  4096 Aug  7 21:31 hello.c
lrwxrwxrwx 1 mohit mohit     9 Aug 22 08:34 hello_link.txt -> text1.txt
-rw------- 1 mohit mohit  2655 Aug 20 11:21 mohitnew.txt
-rw-r--r-- 1 mohit mohit   574 Aug 20 11:21 mohitnew.txt.pub
drwxr-xr-x 2 mohit mohit  4096 Jul 13 10:14 Music
-rw-rw-r-- 1 mohit mohit   253 Aug 28 14:25 o1.c
drwxr-xr-x 2 mohit mohit  4096 Jul 13 10:14 Pictures
-rw-rw-r-- 1 mohit mohit   266 Aug 31 10:21 prog26_a.c
-rw-rw-r-- 1 mohit mohit  7312 Aug 31 10:35 prog27_a.c
-rw-rw-r-- 1 mohit mohit  7510 Aug 31 10:38 prog27_b.c
-rw-rw-r-- 1 mohit mohit   430 Aug 31 10:42 prog27_c.c
-rw-rw-r-- 1 mohit mohit  7575 Aug 31 10:43 prog27_d.c
-rw-rw-r-- 1 mohit mohit   445 Aug 31 10:44 prog27_e.c
-rw-rw-r-- 1 mohit mohit    34 Aug 31 10:41 prog27.txt
drwxr-xr-x 2 mohit mohit  4096 Jul 13 10:14 Public
-rwxrwxr-x 1 mohit mohit 16088 Aug 31 10:27 raj
-rw-rw-r-- 1 mohit mohit   708 Aug 31 10:25 raj.c
-rw-rw-r-- 1 mohit mohit   367 Aug 31 10:25 rajex.c
-rw-rw-r-- 1 mohit mohit    90 Aug 27 11:47 r.c
drwx------ 6 mohit mohit  4096 Aug 20 21:14 snap
-rw-r----- 1 mohit mohit    70 Aug 28 14:23 target
drwxr-xr-x 2 mohit mohit  4096 Jul 13 10:14 Templates
-rw-rw-r-- 1 mohit mohit    53 Aug 27 11:58 test.txt
drwxr-xr-x 2 mohit mohit  4096 Jul 13 10:14 Videos
-rw-rw-r-- 1 mohit mohit   119 Aug 27 11:35 w.c

./Desktop:
total 8
drwxrwxr-x 3 mohit mohit 4096 Aug 30 23:08 'Handson List1'
drwxrwxr-x 2 mohit mohit 4096 Aug  8 10:09 'New Folder'

'./Desktop/Handson List1':
total 140
-rwxrwxr-x 1 mohit mohit 16224 Aug 30 23:05 a.out
prw-rw-r-- 1 mohit mohit     0 Aug 30 14:24 fifo.txt
-rw-rw-r-- 2 mohit mohit    28 Aug 30 12:26 hardlink.txt
-rwx------ 1 mohit mohit     0 Aug 30 14:45 hello2.txt
-rwx------ 1 mohit mohit     0 Aug 30 14:43 hello.txt
-rw-rw-r-- 1 mohit mohit    30 Aug 30 16:16 newfile.txt
-rw-rw-r-- 1 mohit mohit  1026 Aug 30 22:34 prog10.c
-rw-rw-r-- 1 mohit mohit  1288 Aug 30 22:35 prog11.c
-rw-rw-r-- 1 mohit mohit   525 Aug 30 22:36 prog12.c
-rw-rw-r-- 1 mohit mohit   732 Aug 30 22:37 prog13.c
-rw-rw-r-- 1 mohit mohit  1410 Aug 30 22:39 prog14.c
-rw-rw-r-- 1 mohit mohit   274 Aug 30 22:40 prog15.c
-rw-rw-r-- 1 mohit mohit   489 Aug 30 22:42 prog16_a.c
-rw-rw-r-- 1 mohit mohit   490 Aug 30 23:08 prog16_a.c.save
-rw-rw-r-- 1 mohit mohit   491 Aug 30 22:43 prog16_b.c
-rw-rw-r-- 1 mohit mohit   553 Aug 30 22:46 prog19.c
-rw-rw-r-- 1 mohit mohit   362 Aug 30 11:48 prog1_a.c
-rw-rw-r-- 1 mohit mohit   187 Aug 30 12:26 prog1_b.c
-rw-rw-r-- 2 mohit mohit    28 Aug 30 12:26 prog1_b.txt
-rw-rw-r-- 1 mohit mohit   366 Aug 30 14:24 prog1_c.c
-rw-rw-r-- 1 mohit mohit    28 Aug 30 11:50 prog1.txt
-rw-rw-r-- 1 mohit mohit   429 Aug 30 22:51 prog20.c
-rw-rw-r-- 1 mohit mohit   593 Aug 30 22:52 prog21.c
-rw-rw-r-- 1 mohit mohit   612 Aug 30 22:55 prog22.c
-rw-rw-r-- 1 mohit mohit   614 Aug 30 22:59 prog23.c
-rw-rw-r-- 1 mohit mohit   652 Aug 30 23:03 prog24.c
-rw-rw-r-- 1 mohit mohit  1052 Aug 30 23:06 prog25.c
-rw-rw-r-- 1 mohit mohit    88 Aug 30 14:27 prog2.c
-rw-rw-r-- 1 mohit mohit   308 Aug 30 14:45 prog3.c
-rw-rw-r-- 1 mohit mohit   322 Aug 30 16:16 prog4.c
-rw-rw-r-- 1 mohit mohit   259 Aug 30 16:33 prog6.c
-rw-rw-r-- 1 mohit mohit   564 Aug 30 22:24 prog7.c
-rw-rw-r-- 1 mohit mohit   654 Aug 30 22:27 prog8.c
-rw-rw-r-- 1 mohit mohit  1140 Aug 30 22:31 prog9.c
-rw-rw-r-- 1 mohit mohit     0 Aug 20 21:21 Readme.md
lrwxrwxrwx 1 mohit mohit     9 Aug 30 11:51 softlink.txt -> prog1.txt
-rw-rw-r-- 1 mohit mohit    79 Aug 30 22:54 text22.txt

'./Desktop/New Folder':
total 20
-rwxrwxr-x 1 mohit mohit 15952 Aug  8 10:09 a.out
-rw-rw-r-- 1 mohit mohit    64 Aug  8 10:09 hello.c

./Documents:
total 0

./Downloads:
total 107336
-rw-rw-r-- 1 mohit mohit     15992 Aug 30 10:51  1a.out
-rw-rw-r-- 1 mohit mohit 109464716 Aug  7 21:26  google-chrome-stable_current_amd64.deb
-rw-rw-r-- 1 mohit mohit    429969 Aug 22 08:42 'Hands-on List 1.pdf'

./hello.c:
total 4
-rw-rw-r-- 1 mohit mohit  0 Aug  7 21:29 hello.c
-rw-rw-r-- 1 mohit mohit 89 Aug  7 21:31 hello.cpp

./Music:
total 0

./Pictures:
total 0

./Public:
total 0

./snap:
total 16
drwxr-xr-x 5 mohit mohit 4096 Aug 30 10:50 firefox
drwxr-xr-x 4 mohit mohit 4096 Aug 20 21:14 firmware-updater
drwxr-xr-x 5 mohit mohit 4096 Aug 20 21:17 snapd-desktop-integration
drwxr-xr-x 5 mohit mohit 4096 Aug 22 08:24 snap-store

./snap/firefox:
total 12
drwxr-xr-x 4 mohit mohit 4096 Aug 20 11:31 4698
drwxr-xr-x 4 mohit mohit 4096 Aug 30 10:50 4793
drwxr-xr-x 4 mohit mohit 4096 Jul 13 10:14 common
lrwxrwxrwx 1 mohit mohit    4 Aug 30 10:50 current -> 4793

./snap/firefox/4698:
total 0

./snap/firefox/4793:
total 0

./snap/firefox/common:
total 0

./snap/firmware-updater:
total 8
drwxr-xr-x 4 mohit mohit 4096 Aug 20 21:14 127
drwxr-xr-x 3 mohit mohit 4096 Aug 20 21:14 common
lrwxrwxrwx 1 mohit mohit    3 Aug 20 21:14 current -> 127

./snap/firmware-updater/127:
total 0

./snap/firmware-updater/common:
total 0

./snap/snapd-desktop-integration:
total 12
drwxr-xr-x 4 mohit mohit 4096 Aug  7 21:19 157
drwxr-xr-x 4 mohit mohit 4096 Aug 20 21:17 178
drwxr-xr-x 3 mohit mohit 4096 Jul 13 10:14 common
lrwxrwxrwx 1 mohit mohit    3 Aug 20 21:17 current -> 178

./snap/snapd-desktop-integration/157:
total 0
lrwxrwxrwx 1 mohit mohit 19 Jul 13 10:14 Desktop -> /home/mohit/Desktop
lrwxrwxrwx 1 mohit mohit 21 Jul 13 10:14 Documents -> /home/mohit/Documents
lrwxrwxrwx 1 mohit mohit 21 Jul 13 10:14 Downloads -> /home/mohit/Downloads
lrwxrwxrwx 1 mohit mohit 17 Jul 13 10:14 Music -> /home/mohit/Music
lrwxrwxrwx 1 mohit mohit 20 Jul 13 10:14 Pictures -> /home/mohit/Pictures
lrwxrwxrwx 1 mohit mohit 18 Jul 13 10:14 Public -> /home/mohit/Public
lrwxrwxrwx 1 mohit mohit 21 Jul 13 10:14 Templates -> /home/mohit/Templates
lrwxrwxrwx 1 mohit mohit 18 Jul 13 10:14 Videos -> /home/mohit/Videos

./snap/snapd-desktop-integration/178:
total 0
lrwxrwxrwx 1 mohit mohit 19 Jul 13 10:14 Desktop -> /home/mohit/Desktop
lrwxrwxrwx 1 mohit mohit 21 Jul 13 10:14 Documents -> /home/mohit/Documents
lrwxrwxrwx 1 mohit mohit 21 Jul 13 10:14 Downloads -> /home/mohit/Downloads
lrwxrwxrwx 1 mohit mohit 17 Jul 13 10:14 Music -> /home/mohit/Music
lrwxrwxrwx 1 mohit mohit 20 Jul 13 10:14 Pictures -> /home/mohit/Pictures
lrwxrwxrwx 1 mohit mohit 18 Jul 13 10:14 Public -> /home/mohit/Public
lrwxrwxrwx 1 mohit mohit 21 Jul 13 10:14 Templates -> /home/mohit/Templates
lrwxrwxrwx 1 mohit mohit 18 Jul 13 10:14 Videos -> /home/mohit/Videos

./snap/snapd-desktop-integration/common:
total 0

./snap/snap-store:
total 12
drwxr-xr-x 4 mohit mohit 4096 Aug  8 10:59 1124
drwxr-xr-x 4 mohit mohit 4096 Aug  8 10:59 1173
drwxr-xr-x 3 mohit mohit 4096 Aug  8 10:59 common
lrwxrwxrwx 1 mohit mohit    4 Aug  8 10:59 current -> 1124

./snap/snap-store/1124:
total 0

./snap/snap-store/1173:
total 0

./snap/snap-store/common:
total 0

./Templates:
total 0

./Videos:
total 0

*/
