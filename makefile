all: testmap testlibrary

testmap: employee.o testmap.o testmap.cpp
	g++ -g -Wall -pedantic $^ -o $@

testmap.o: map_template.h testmap.cpp
	g++ -g -c -Wall -pedantic $< -o $@
employee.o: employee.cpp employee.h
	g++ -g -c -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm employee.o testmap testmap.o
