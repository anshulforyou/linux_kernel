// Name: Anshul Yadav
// Roll no. 2019023
#include<string.h>
// #include<unistd.h>
// #include<time.h>
// #include<dirent.h>
// #include <sys/wait.h>
// // #include <conio.h> 
// #include <sys/types.h> 
// #include <sys/stat.h>
#include<errno.h>

#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

/*
 * Put your syscall number here.
 */
#define sh_task_info 440

void main(){
	char filename[256];
	scanf("%s", filename);
	int pid;
	scanf("%d", &pid);
	int a = syscall(sh_task_info, filename, pid);
	if(a!=0){
		printf("%s\n", strerror(errno));
	}
	// sh_task_info("anshul", 20);
}