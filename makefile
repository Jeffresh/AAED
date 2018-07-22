CXX = clang++
OBJSv0.1 = cmpstr.o pilas.o
OBJSv0.2 = cmpstr.o cmpsec.o pilas.o
OBJSv0.3 = invstack.o pilas.o


v0.1: $(OBJSv0.1)
	$(CXX) $(OBJSv0.1) -o pilasv0.1

v0.2: $(OBJSv0.2)
	$(CXX) $(OBJSv0.2) -o pilasv.02
v0.3: $(OBJSv0.3)
	$(CXX) $(OBJSv0.3) -o pilasv0.3


.PHONY: clean
clean:
	@rm -f $(OBJS) *.o core

