#include <iostream>
#include <fstream>
#include "Library/input.h"
#include "Library/proses.h"
#include "Library/output.h"

int main(){
	Input input;
	input.cetak();
	input.toFile();

	Proses proses;
	proses.getData();
	proses.toFile();

	Output output;
	output.getData();
	output.cetak();

	return 0;
	
}
