CXXARGS = -pedantic-errors -Wall -Wconversion
program: mylib.o time.o main.cpp
	g++ $(CXXARGS) main.cpp time.o mylib.o -o runme
mylib.o: mylib.cpp mylib.h
	g++ $(CXXARGS) -c mylib.cpp
time.o: time.cpp time.h
	g++ $(CXXARGS) -c time.cpp
all: clean program
clean:
	-rm -f *.o runme *~
