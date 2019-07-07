#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    printf("hello world\n");
    if(open("/etc/shadow", O_RDONLY) == -1)
        printf("failed to open shadow\n");
    else 
        printf("open shadow\n");    
    return 0;
}
