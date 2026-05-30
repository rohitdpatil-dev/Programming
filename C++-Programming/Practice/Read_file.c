#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main ()
{
    int fd = 0;
    int Ret = 0;
    char Arr[20];


    fd = open("Marvellous.txt",O_RWDR);

    if (fd == -1)
    {
        printf("Unable to open file.");
    }

    else
    {
        printf("File gets opend with fd: %d \n",fd);

        Ret = read(fd,Arr,6);

        printf("%d bytes gets read from the file");
        printf("%s\n",Arr);
    }

    close(fd);
    return 0;
}