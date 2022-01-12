#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//C 库函数 char *strcpy(char *dest, const char *src) 把 src 所指向的字符串复制到 dest

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

    return 0;
}
