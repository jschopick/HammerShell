COMPILE = g++
FLAGS = -Wall -Werror -ansi -pedantic
OBJS = Connector.o Command.o AND.o OR.o SEMICOLON.o Exit.o

all:
	mkdir -p ./bin
	$(COMPILE) $(FLAGS) src/main.cpp -o ./bin/rshell

# main:
# 	$(COMPILE) $(FLAGS) src/main.cpp

Connector.o: Connector.cpp Connector.h
	$(COMPILE) $(FLAGS) -c src/Connector.cpp

Command.o: Command.cpp Command.h
	$(COMPILE) $(FLAGS) -c src/Cmd.cpp

AND.o: AND.cpp AND.h
	$(COMPILE) $(FLAGS) -c src/AND.cpp

OR.o: OR.cpp OR.h
	$(COMPILE) $(FLAGS) -c src/OR.cpp

SEMICOLON.o: SEMICOLON.cpp SEMICOLON.h
	$(COMPILE) $(FLAGS) -c src/Semicolon.cpp

Exit.o: Exit.cpp Exit.h
	$(COMPILE) $(FLAGS) -c src/Exit.cpp

clean:
	rm -rf ./bin
