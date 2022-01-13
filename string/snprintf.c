#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//C 库函数 int snprintf(char *str, size_t size, const char *format, ...) 设将可变参数(...)按照 format 格式化成字符串，并将字符串复制到 str 中，size 为要写入的字符的最大数目，超过 size 会被截断。

int main()
{
    char a[20]="Program"; //stored in stack section compiler will automatic add \0 at the end
    char b[20]={'P','r','o','g','r','a','m','\0'};
    char c[20]={'P','r','o','g','r','a','m','\0'};

    char *s1="head";
    char *s2="tail";
    char res[100]={"\0"};

    //结论1：sprintf/snprintf是按照printf的格式，将字符串拷贝到res中的方法，拷贝最多n个字符
    snprintf(res,20,"|%s|",s1);
    printf("res:%s\n",res);


    return 0;
}
