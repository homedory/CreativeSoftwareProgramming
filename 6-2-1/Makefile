draw_shape: main.o canvas.o
		g++ -o draw_shape main.o canvas.o
main.o: main.cpp canvas.h
		g++ -c -o main.o main.cpp
canvas.o: canvas.cpp canvas.h
		g++ -c -o canvas.o canvas.cpp
clean:
		rm draw_shape main.o canvas.o
