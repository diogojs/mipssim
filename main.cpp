/*
MIPS Simulator
Author: Diogo Junior de Souza
*/

#include <iostream>
#include <vector>
#include <string>

#include "parser.h"

int main(int argc, const char* argv[]) {
	// Read input File
	if (argc != 2) {
		std::cout << "Invalid arguments.\n";
		std::cout << "Usage:\nmipssim input.txt" << std::endl;
		return 1;
	}

	string filename (argv[1]);
	std::vector<Instruction> instructions = parseInstructions(filename);
	// contains all instructions in order

	// loop through vector decoding
	// disassembly file
	string outfilename = filename + ".deasm";
	// declare outFile
	for (auto instr: instructions) {
		// write assembly instruction in outFile
	}
	
	// declare registers
	// create memory base
	// create simulator

	// loop through vector simulating
	for (auto pc = 0u; pc < instructions.size(); ++pc) {
		Instruction& currInstruction = instructions[0];

		unsigned int category = Decoder.category(currInstruction);

		switch (category) {
			case CAT_1: { // jump and memory instructions

				break;
			}
			case CAT_2: { // ALU instructions
				unsigned int opcode = Decoder.opcode(currInstruction);


				simulator.execute(currInstruction);

				break;
			}
			case CAT_3: { // ALU Immediate instructions

				break;
			}
		}
	}

	return 0;
}