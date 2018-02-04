#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h> 

int main() {
	char input[1024];

	scanf("%s*c",input);
	//input of the terminal

   char cwd[1024];
   if(strcmp(input,"dir")==0){
   	printf("directory");
   if (getcwd(cwd, sizeof(cwd)) != NULL)
       fprintf(stdout, "Current working dir: %s\n", cwd);
   else
       perror("getcwd() error");
}

else if(strcmp(input,"parent")==0){
	int p_id,p_pid;
    
    p_id=getpid();  /*process id*/
    p_pid=getpid(); /*parent process id*/
    
    printf("Process ID: %d\n",p_id);
    printf("Parent Process ID: %d\n",p_pid);

   return 0;
}
}
