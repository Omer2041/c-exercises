W = -Wall -g


all: mymaths mymathd mains maind

mains:libmyMath.a main.o
	gcc $(W)  -o mains main.o libmyMath.a

maind: libmyMath.so main.o
	gcc $(W)  -o maind main.o libmyMath.a

mymaths: power.o basicMath.o
	ar rcs -o libmyMath.a power.o basicMath.o  

mymathd: power.o basicMath.o
	gcc $(W) -shared  -o libmyMath.so power.o basicMath.o


basicMath.o: basicMath.c myMath.h
	gcc $(W)  -c basicMath.c

power.o: power.c myMath.h
	gcc $(W)  -fPIC -c power.c
	
main.o: main.c 
	gcc $(W)  -c main.c
	
clean:
	rm *.o *.so *.a mains maind
	
