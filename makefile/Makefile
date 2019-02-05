CC = g++
CFLAGS = -g
LIBS = -lm

OBJS = main.o hello.o factorial.o

.cpp.o:
	$(CC) $(CFLAGS) -c $<

hello: main.o hello.o factorial.o
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)


clean:
	rm *.o
