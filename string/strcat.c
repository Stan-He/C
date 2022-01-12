#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//C 库函数 char *strcat(char *dest, const char *src) 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。
//C 库函数 char *strncat(char *dest, const char *src, size_t n) 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。
int main()
{
    char a[20]="Program"; //stored in stack section compiler will automatic add \0 at the end
    char b[20]={'P','r','o','g','r','a','m','\0'};
    char c[20]={'P','r','o','g','r','a','m','\0'};

    char *s1="head";
    char *s2="tail";
    char res[100]={"\0"};
    strcat(res,b);
    strcat(res,c);

    //结论1:strcat可以拼接字符数组，也可以拼接char*字符串
    //结论2:strcat会忽略\0结束符
    printf("res: %s\n",res);
    printf("sizeof res %d\n",sizeof(res));
    printf("strlen res %d\n",strlen(res));
    int i=0;
    for(i=0;i<14;i++)
        printf("%c,",res[i]);
    printf("\n");

    //结论3:strcat不能直接拼接两个char*字符串
    //char *res1;
    //strcat(s1,s2);
    //printf("res1:%s\n",res1);

    //结论4 strcat 可以在char*申请过内存的情况下完成拼接
    char *res2=(char *)malloc(50);
    strcat(res2,s1);
    strcat(res2,s2);
    printf("res2:%s\n",res2);
    free(res2);

    //结论 strncat只extend指定个数的src到src
    memset(&res[0], 0, sizeof(res));
    strncat(res,b,1);
    strncat(res,c,1);
    printf("res: %s\n",res);

    
    memset(&res2[0], 0, sizeof(res2));
    strncat(res2,s1,1);
    strncat(res2,s2,1);
    printf("res2: %s\n",res2);


    return 0;
}
