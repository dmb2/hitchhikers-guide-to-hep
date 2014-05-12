CC=$(shell root-config --cxx)
# Build this library the same way root was compiled/linked
INCDIR=$(PWD)/include
LIBDIR:=$(shell root-config --libdir)
ROOTINCDIR:=$(shell root-config --incdir)
LDFLAGS:=$(shell root-config --libs) #-L ./lib #-lgcov
WFLAGS= -Wextra -Wall 
DFLAGS=-O2 #-fprofile-arcs -ftest-coverage 
CXXFLAGS=$(shell root-config --ldflags) -pg -I$(INCDIR) -I$(ROOTINCDIR)	\
$(DFLAGS) $(WFLAGS) -ansi

.PHONY: all clean 
all: runAnalysis

runAnalysis: analysis.o runAnalysis.o
	$(CC) $? -o runAnalysis $(LDFLAGS) 
runAnalysis.o: ./bin/main.C
	$(CC) $(CXXFLAGS) -c $< -o $@
analysis.o: ./src/analysis.C
	$(CC) $(CXXFLAGS) -c $< -o $@
clean:
	-rm *.o runAnalysis
