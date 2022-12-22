
main: math.o main.o
	g++ -o main main.o math.o

main.o : main.cpp
	g++ -fPIC -fmodules-ts -std=c++20 -o main.o -c main.cpp

math.o : math.cpp
	g++ -fPIC -fmodules-ts -std=c++20 -o math.o -c math.cpp

clean:
	rm math.o main.o

all: 
	main

