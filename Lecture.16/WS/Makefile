CC = g++
C_FLAGS = -std=c++11 -Wall -g

all:
	make sfl
	make rfl

sfl: sender-fl.cpp
	$(CC) $(C_FLAGS) sender-fl.cpp -o sfl

rfl: receiver-fl.cpp
	$(CC) $(C_FLAGS) receiver-fl.cpp -o rfl

reset:
	-rm sharedch*

clean:
	-rm r1 sfl
	-rm r2 rfl
	make reset
	-rm *.o
