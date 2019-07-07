#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    pid_t child;
    char *newargv[] = {NULL};
    char *newenviron[]={NULL};
    child = fork();
    if (child == 0) {
        if(open("/etc/shadow", O_RDONLY) == -1)
            printf("failed to open shadow\n");
        else 
            printf("open shadow\n");    
        execve("/home/eric/LearnLinux/hello_world",
                newargv, newenviron);
    }else{
        exit(0);
    }
    return 0;
}
