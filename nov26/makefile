CXXARGS = -pedantic-errors -Wall -Wconversion
program: mylib.o main.cpp
	g++ $(CXXARGS) main.cpp mylib.o -o runme
mylib.o: mylib.cpp mylib.h
	g++ $(CXXARGS) -c mylib.cpp
all: clean program
clean:
	-rm -f *.o runme *~
