#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//strcmp\strncmp\strcmpi\stricmp\strnicmp
//C 库函数 int strcmp(const char *str1, const char *str2) 把 str1 所指向的字符串和 str2 所指向的字符串进行比较
//C 库函数 int strncmp(const char *str1, const char *str2, size_t n) 把 str1 和 str2 进行比较，最多比较前 n 个字节。
//char * strdup(const char *s); strdup()会先用maolloc()配置与参数s 字符串相同的空间大小，然后将参数s 字符串的内容复制到该内存地址，然后把该地址返回。该地址最后可以利用free()来释放
//C 库函数 char *strchr(const char *str, int c) 在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。

int main()
{
    char a[20]="Program"; //stored in stack section compiler will automatic add \0 at the end
    char b[20]={'P','r','o','g','r','a','m','\0'};
    char c[20]={'P','r','o','g','r','a','m'};

    char *s1="Program";
    char *s2="Prog";
    
    int res;
    //结论1：数组和string可以一起比较
    //结论2：\0不会加入比较
    //结论3：strncmp可以比较前面几个字符
    res=strcmp(a,b);
    printf("a cmp b:%d\n",res);
    res=strcmp(b,c);
    printf("b cmp c:%d\n",res);
    res=strcmp(a,s1);
    printf("a cmp s1:%d\n",res);
    res=strcmp(s1,s2);
    printf("s1 cmp s2:%d\n",res);
    res=strncmp(s1,s2,4);
    printf("s1 ncmp s2 len=4:%d\n",res);
    printf("================strdup===============\n");

    char *dest;
    dest=strdup(a);
    printf("dest:%s\n",dest);
    free(dest);
    
    dest=strdup(s1);
    printf("dest:%s\n",dest);
    free(dest);
    
    dest=strdup(s2);
    printf("dest:%s\n",dest);
    free(dest);

    printf("=================strchr=================\n");
    char *idx;
    idx=strchr(a,'a');
    printf("after a in %s is:%s\n",a,idx);

    return 0;
}
