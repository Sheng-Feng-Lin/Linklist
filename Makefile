LIBS = -lm
OBJS = single_linklist.o
OBJS1 = circular_linklist.o
main: $(OBJS) $(OBJS1)
	gcc -o single_linklist $(OBJS) $(LIBS)
	gcc -o circular_linklist $(OBJS1) $(LIBS)
clean: 
	rm -f single_linklist circular_linklist $(OBJS) $(OBJS1)
	
