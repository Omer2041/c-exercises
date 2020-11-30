W = -Wall -g

mbo: myBank.o main.o 	
	gcc $(W) main.o myBank.o -o mbo


myBank.o: myBank.c myBank.h
	gcc $(W)  -c myBank.c
	
main.o: main.c 
	gcc $(W) -c main.c
	
		
clean:
	rm *.o mbo
