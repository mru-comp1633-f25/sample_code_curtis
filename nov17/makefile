CXXARGS = -pedantic-errors -Wall -Wconversion
program: time.o main.cpp
	g++ $(CXXARGS) main.cpp time.o -o runme
time.o: time.cpp time.h
	g++ $(CXXARGS) -c time.cpp
all: clean program
clean:
	-rm -f *.o runme *~
