#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main ()
{
    int fd = 0;
    int Ret = 0;
    char Arr[] = 0;


    fd = open("Marvellous.txt",O_RWDR);

    if (fd == -1)
    {
        printf("Unable to open file.");
    }

    else
    {
        printf("File gets opend with fd: %d \n",fd);

        Ret = write(fd,Arr,10);

        printf("%d bytes gets written into the file");
    }

    close(fd);
    return 0;
}