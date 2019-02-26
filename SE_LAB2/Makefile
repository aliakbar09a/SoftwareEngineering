
CC = g++
CFLAGS = -g
LIBS = -lm
CXXFLAGS = -I src
OBJS = main.o heap_create.o heap_insert.o heap_delete.o heap_display.o

heap: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)

.cpp.o:
		$(CC) $(CFLAGS) -c $< $(CXXFLAGS)

clean:
		rm *.o
