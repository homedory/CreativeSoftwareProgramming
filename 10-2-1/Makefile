calendar: calendar_main.o calendar.o
		g++ -o calendar calendar_main.o calendar.o
calendar_main.o: calendar_main.cc calendar.h
		g++ -c -o calendar_main.o calendar_main.cc
calendar.o: calendar.cc calendar.h
		g++ -c -o calendar.o calendar.cc
clean:
		rm calendar calendar_main.o calendar.o
