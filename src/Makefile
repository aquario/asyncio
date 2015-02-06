CXX		= g++
CXXFLAGS	= -g -std=c++0x -O2 -lglog -lgflags

#all: 

transport_layer.o: transport_layer.h sprinkler_common.o dmalloc.h
sprinkler_common.o: sprinkler_common.h
dmalloc.o: dmalloc.h

clean:
	rm -rf *.o *_test proxy client *.dSYM/
