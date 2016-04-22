CC = g++

all: main.o ComplexNumber.o
	$(CC) -o runMain $? 

main.o: main.cpp
	$(CC) -c $?

Student.o: ComplexNumber.cpp
	$(CC) -c $?

clean:
	rm -f *.o runMain
