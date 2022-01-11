#include <stdio.h>
#include <string.h>

int print_char_hex(char* s ){
   
   int i=0;
   while (i < sizeof(s)){
       printf("0X%x ", s[i]);
       i++;
    }
    printf("\n");

    return 0; 
    }

int main()
{
    char a[20]="Program"; //stored in stack section compiler will automatic add \0 at the end
    char b[20]={'P','r','o','g','r','a','m','\0'};
    char c[20]={'P','r','o','g','r','a','m'};
    char* d="Program\0";  //d is stored at stack but Program stored at code section
    char* e="Program";
    char f[] ="Program"; //compiler will automatic add \0 at the end

    // 结论1: \0不算长度
    // 结论2：char* 和 数组的方式都可以定义字符串
    // 结论3：char* 可以重新赋值
    // 结论4：strlen返回size_t(unsigned int) strlen不统计\0
    // 结论5：sizeof作用于数组，返回数组的总长度，1base
    // 结论6：sizeof作用于char*，返回char*的真实长度，包括\0,如果没有定义\0,编译器会补足\0
    printf("Length of string a = %zu \n",strlen(a));
    printf("size of string a = %lu \n",sizeof(a));
    printf("Length of string b = %zu \n",strlen(b));
    printf("size of string b = %lu \n",sizeof(b));
    printf("Length of string c = %zu \n",strlen(c));
    printf("size of string c = %lu \n",sizeof(c));
    printf("Length of string d = %zu \n",strlen(d));
    printf("size of string d = %lu \n",sizeof(d));
    printf("Length of string e = %zu \n",strlen(e));
    printf("size of string e = %lu \n",sizeof(e));
    printf("Length of string f = %zu \n",strlen(f));
    printf("size of string f = %lu \n",sizeof(f));

    printf("---------------------------------------\n");
    print_char_hex(d);
    print_char_hex(e);

    return 0;
}
