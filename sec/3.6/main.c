#include "head.h"

int main(void)
{
 
        int fd;
        char buf1[20]; 
        char buf2[10]="onetwothre";
        if ((fd = open("abc.c",2|O_APPEND)) < 0)/*使用追加方式打开文件*/
                printf("open error! \n");
        if (lseek(fd,3,SEEK_SET) < 0) 
                printf("lseek error! \n");
        if (read(fd,buf1,7) < 0)        /*读出7位字符串*/
                printf("read error! \n");
        else
                printf("read:%s",buf1);/*将读出的字读输出*/
        if (write(fd,buf2,10) < 0)    /*将字符串buf2写入文件*/
                printf("write error! \n");
}
