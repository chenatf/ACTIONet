#include <ACTIONet.h>

using namespace ACTIONet;

int main(int argc, char ** argv) {
	

	mat A = sampleUnif(100, 20, 0.0, 1.0, 0);
	
	field<mat> out = FengSVD(A, 2, 5, 0);

	out(0).print("U");
	
	
	return 0;
}
