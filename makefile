all: Clock.o lab3_B.cpp
	g++ -o lab3_B Clock.o lab3_B.cpp

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp -o Clock.o
