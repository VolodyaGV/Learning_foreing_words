all: build bin bin/main

clean:

	-rm -f bin/main build/*.o

bin/main: build/main.o build/learning.o

	gcc -Wall -Werror build/main.o build/learning.o -o bin/main -lm

build/main.o: src/main.c

	gcc -Wall -Werror -c src/main.c -o build/main.o

build/learning.o: src/learning.c

	gcc -Wall -Werror -c src/learning.c -o build/learning.o

bin:
	mkdir bin
build:
	mkdir build
.PHONY: clean
