LIBS = -lm
OBJS = single_linklist.o
OBJS1 = circular_linklist.o
OBJS2 = doubly_linklist.o
OBJS3 = stack.o
OBJS4 = queue.o
main: $(OBJS) $(OBJS1) $(OBJS2) $(OBJS3) $(OBJS4)
	gcc -o single_linklist $(OBJS) $(LIBS)
	gcc -o circular_linklist $(OBJS1) $(LIBS)
	gcc -o doubly_linklist $(OBJS2) $(LIBS)
	gcc -o stack $(OBJS3) $(LIBS) 
	gcc -o queue $(OBJS4) $(LIBS)
clean: 
	rm -f single_linklist circular_linklist doubly_linklist stack queue $(OBJS) $(OBJS1) $(OBJS2) $(OBJS3) $(OBJS4)
	
