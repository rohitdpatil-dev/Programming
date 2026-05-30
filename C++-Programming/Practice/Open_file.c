#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main ()
{
    int fd = 0;
    fd = open("Marvellous.txt",O_RWDR);

    if (fd==-1)
    {
        printf("Unable to open file.");
    }

    else
    {
        printf("File gets opend with fd: %d \n",fd);
    }

    open(fd);
    return 0;
}