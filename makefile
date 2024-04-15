
CC = g++
CFLAGS = -g 
CPPFLAGS =  -O3

%.o  :  %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@


clean:
	rm *.o

SHR.o	: SHR.h SHR.cpp

SHR  : SHR.o

