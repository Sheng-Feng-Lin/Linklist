LIBS = -lm
OBJS = single_linklist.o
OBJS1 = circular_linklist.o
OBJS2 = doubly_linklist.o
main: $(OBJS) $(OBJS1) $(OBJS2)
	gcc -o single_linklist $(OBJS) $(LIBS)
	gcc -o circular_linklist $(OBJS1) $(LIBS)
	gcc -o doubly_linklist $(OBJS2)
clean: 
	rm -f single_linklist circular_linklist doubly_linklist $(OBJS) $(OBJS1) $(OBJS2)
	
