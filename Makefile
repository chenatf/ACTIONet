LIBNAME:=libactionet.a

CXX=g++
CXXFLAGS=-O4 -w -std=c++17 -DMKL_ILP64 -m64 -I${MKLROOT}/include
LDFLAGS=-fPIC -Wl,--start-group ${MKLROOT}/lib/intel64/libmkl_intel_ilp64.a ${MKLROOT}/lib/intel64/libmkl_intel_thread.a ${MKLROOT}/lib/intel64/libmkl_core.a -Wl,--end-group -liomp5 -lpthread -lm -ldl
INCLUDE=-I./include/ -I./include/arma/ -I./include/ACTIONet/ -I./include/ACTIONet/SPAMS -I./include/ACTIONet/hnsw -I./include/ACTIONet/HDBSCAN -I${MKLROOT}/include

SRC=$(shell find src/ACTIONet -type f -name "*.cc")
OBJ=$(SRC:.cc=.o)

PROGRAM=run_test
	
all: $(PROGRAM) message
	
src/%.o: src/%.cc
	$(CXX) $(CXXFLAGS) ${INCLUDE} -c -o $@  $<


run_test: $(OBJ) src/run_test.o
	$(CXX) $(CXXFLAGS)  -o $@ src/run_test.o -L. $(OBJ) $(LDFLAGS)	

.PHONY: clean ar

clean:
	rm -f $(PROGRAM) $(OBJ) $(LIBNAME) 

ar:
	make clean
	tar -czvf ../$(PROGRAM)"(`date`)".tar.gz *

message:
	@echo "Executables: $(PROGRAM) have been created"	
