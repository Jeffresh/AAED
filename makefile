CXX = clang++
OBJS =  cmpstr.o pilas.o

v0.1: $(OBJS)
	$(CXX) $(OBJS) -o pilasv0.1


.PHONY: clean
clean:
	@rm -f $(OBJS) *.o core