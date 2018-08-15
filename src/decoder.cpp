#ifndef DECODER_H_
#define DECODER_H_

#include <fstream>
#include <vector>
#include "instruction.h"
#include "data.h"

Decoder::Decoder(string filename):
    _filename{filename}
{
    parseFile();
}

void Decoder::parseFile() {
    std::vector<Instruction> instructions;
    std::vector<Data> data;

    // TODO: parse file

}

#endif /* DECODER_H_ */