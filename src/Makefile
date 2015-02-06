CXX		= g++
CXXFLAGS	= -g -std=c++11 -O2 -lglog -lgflags

#all: 

transport_layer.o: transport_layer.h common.o dmalloc.h
common.o: common.h
dmalloc.o: dmalloc.h

clean:
	rm -rf *.o *_test *.dSYM/
