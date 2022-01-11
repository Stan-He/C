#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strupr(char *str){
    char *orign=str;
    for (; *str!='\0'; str++){
        *str = toupper(*str);
    }
    return orign;
}

char *strlwr(char *str){
    char *orign=str;
    for (; *str!='\0'; str++)
        *str = tolower(*str);
    return orign;
}

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
    char c[20]={'P','r','o','g','r','a','m','\0'};
    //char* d="Program\0";  //d is stored at stack but Program stored at code section
    //char* e="Program";
    //char f[] ="Program"; //compiler will automatic add \0 at the end

    printf("a %s\n",strlwr(a));
    printf("b %s\n",strlwr(b));
    printf("c %s\n",strupr(c));
    //printf("d %s\n",strupr(d));
    //printf("e %s\n",strlwr(e));
    //printf("f %s\n",strupr(f));

    return 0;
}
