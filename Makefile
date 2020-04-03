UNAME=$(shell uname -s)
LIBNAME:=libactionet.a


CXXFLAGS=-g3 -std=c++11 -pthread -fopenmp -w -m64 -fPIC -march=native -O4 -DUSE_BLAS_LIB -DAXPBY -DINT_64BITS
LINALG=-lopenblas -llapack
#LINALG=-L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_ilp64 -lmkl_gnu_thread -lmkl_core -lgomp -lpthread -lm -ldl	
LIB_FLAGS+=-lstdc++ ${LINALG} -lpthread
INCLUDE=-I./include

SRC=src/FengSVD.cc src/HalkoSVD.cc src/my_utils.cc
OBJ=$(SRC:.cc=.o)

PROGRAM=test
	
all: $(PROGRAM) message
	
src/%.o: src/%.cc
	$(CXX) $(CXXFLAGS) ${INCLUDE} -c -o $@  $<


$(LIBNAME): $(OBJ)
	ar -rcs $@ $(OBJ)

test: $(LIBNAME) src/test.o
	$(CXX) $(CXXFLAGS)  -o $@ src/test.o -L. $(LIBNAME) $(LIB_FLAGS)	

.PHONY: clean ar

clean:
	rm -f $(PROGRAM)  src/*.o src/*~ include/*~ *~ $(LIBNAME) 

ar:
	make clean
	tar -czvf ../$(PROGRAM)"(`date`)".tar.gz *

message:
	@echo "Executables: $(PROGRAM) have been created"	
