all : strlwr_strupr strlen

strlwr_strupr : strlwr_strupr.o
	cc -o strlwr_strupr strlwr_strupr.o

strlwr_strupr.o : strlwr_strupr.c
	cc -c strlwr_strupr.c

strlen : strlen.o
	cc -o strlen strlen.o

strlen.o : strlen.c
	cc -c strlen.c

clean : 
	rm strlen.o strlen strlwr_strupr.o strlwr_strupr
