all : strlwr_strupr strlen strcat strcpy strcmp snprintf

strlwr_strupr : strlwr_strupr.o
	cc -o strlwr_strupr strlwr_strupr.o

strcat : strcat.o
	cc -o strcat strcat.o

snprintf : snprintf.o
	cc -o snprintf snprintf.o

strcmp : strcmp.o
	cc -o strcmp strcmp.o

strcpy : strcpy.o
	cc -o strcpy strcpy.o

strlwr_strupr.o : strlwr_strupr.c
	cc -c strlwr_strupr.c

strlen : strlen.o
	cc -o strlen strlen.o

strlen.o : strlen.c
	cc -c strlen.c

strcat.o : strcat.c
	cc -c strcat.c

strcpy.o : strcpy.c
	cc -c strcpy.c

strcmp.o : strcmp.c
	cc -c strcmp.c

snprintf.o : snprintf.c
	cc -c snprintf.c

clean : 
	rm strlen.o strlen strlwr_strupr.o strlwr_strupr strcat.o strcat strcpy strcpy.o strcmp strcmp.o snprintf snprintf.o
