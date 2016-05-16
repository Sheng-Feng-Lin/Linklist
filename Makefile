LIBS = -lm
OBJS = linklist.o
main: $(OBJS)
	gcc -o linklist $(OBJS) $(LIBS)
clean: 
	rm -f linklist $(OBJS)
