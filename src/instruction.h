#ifndef INSTRUCTION_H_
#define INSTRUCTION_H_

#include "data.h"

enum InsType {
	INVALID,
	INST_R,
	INST_J,
	INST_I,
	NOP
}

class Instruction: public Data {
 public:
    Instruction(unsigned int value);
 	InsType type();
 private:
    string _representation;
    string _opcode;
}

#endif /* INSTRUCTION_H_ */