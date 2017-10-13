OBJ = main.o display.o
CC = g++ 
LL = -lGL -lGLEW -lSDL2 -lm

simulate : $(OBJ)
	$(CC) $(OBJ) $(LL) -o simulate

main.o : main.cpp
	$(CC) -c main.cpp 

display.o : display.cpp display.h
	$(CC) -c display.cpp 


.PHONY 	: clean
clean : 
	-rm simulate $(OBJ)
