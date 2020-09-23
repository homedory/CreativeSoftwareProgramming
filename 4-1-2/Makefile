simple_account: main.o accounts.o
		g++ -o simple_account main.o accounts.o
main.o: main.cpp accounts.h
		g++ -c -o main.o main.cpp
accounts.o: accounts.cpp accounts.h
		g++ -c -o accounts.o accounts.cpp
clean:
		rm simple_account main.o accounts.o
