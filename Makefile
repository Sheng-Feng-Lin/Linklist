LIBS = -lm
OBJS = single_linklist.o
main: $(OBJS)
	gcc -o single_linklist $(OBJS) $(LIBS)
clean: 
	rm -f single_linklist $(OBJS)
