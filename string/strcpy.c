#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//C 库函数 char *strcpy(char *dest, const char *src) 把 src 所指向的字符串复制到 dest
//C 库函数 char *strncpy(char *dest, const char *src, size_t n) 把 src 所指向的字符串复制到 dest，最多复制 n 个字符。当 src 的长度小于 n 时，dest 的剩余部分将用空字节填充。

int main()
{
    char a[20]="Program"; //stored in stack section compiler will automatic add \0 at the end
    char b[20]={'P','r','o','g','r','a','m','\0'};
    char c[20]={'P','r','o','g','r','a','m','\0'};

    char *s1="head";
    char *s2="tail";
    char res[100]={"\0"};
    strcpy(res,s1);
    printf("res:%s\n",res);
    strcpy(res,c);
    printf("res:%s\n",res);
    strcpy(res,s2);
    printf("res:%s\n",res);
    strcpy(res,a);
    printf("res:%s\n",res);

    memset(res,0,sizeof(res));

    strncpy(res,s1,2);
    printf("res:%s\n",res);
    strncpy(res,c,2);
    printf("res:%s\n",res);
    strncpy(res,s2,2);
    printf("res:%s\n",res);
    strncpy(res,a,2);
    printf("res:%s\n",res);


    return 0;
}
