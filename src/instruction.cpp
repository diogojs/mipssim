#include "instruction.h"

Instruction::Instruction(unsigned int value):
    _value{value}
{
}

InsType Instruction::type() {
    return InsType::INVALID;
}