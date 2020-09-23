fighter: main.o fighter.o
		g++ -o fighter main.o fighter.o
main.o: main.cpp fighter.h
		g++ -c -o main.o main.cpp
fighter.o: fighter.cpp fighter.h
		g++ -c -o fighter.o fighter.cpp
clean:
		rm fighter main.o fighter.o
