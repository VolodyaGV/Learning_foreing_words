.PHONY: all clean
all: build/src build/test bin bin/main bin/testing
		./bin/testing
clean:

	-rm -f bin/main build/src/*.o
	-rm -f bin/testing build/test/*.o

bin/main: build/src/main.o build/src/learning.o

	gcc -Wall -Werror build/src/main.o build/src/learning.o -o bin/main -lm

build/src/main.o: src/main.c

	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/learning.o: src/learning.c

	gcc -Wall -Werror -c src/learning.c -o build/src/learning.o



bin/testing: build/test/main.o build/test/learning_test.o build/src/learning.o

		gcc -I thirdparty build/test/main.o build/test/learning_test.o build/src/learning.o -o bin/testing -lm

build/test/main.o: test/main.c

		gcc -I thirdparty -c test/main.c -o build/test/main.o

build/test/learning_test.o: test/learning_test.c

		gcc -I thirdparty -c test/learning_test.c -o build/test/learning_test.o

bin:
	mkdir bin
build/src:
	mkdir -p build/src
build/test:
	mkdir -p build/test
