simple_shape: main.o shapes.o
		g++ -o simple_shape main.o shapes.o
main.o: main.cpp shapes.h
		g++ -c -o main.o main.cpp
shapes.o: shapes.cpp shapes.h
		g++ -c -o shapes.o shapes.cpp
clean:
		rm simple_shape main.o shapes.o
