my_clock: main.o clock.o
		g++ -o my_clock main.o clock.o
main.o: my_clock_main.cc my_clock.h
		g++ -c -o main.o my_clock_main.cc
clock.o: my_clock.cc my_clock.h
		g++ -c -o clock.o my_clock.cc
clean:
		rm my_clock main.o clock.o
