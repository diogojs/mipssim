#ifndef DECODER_H_
#define DECODER_H_

#include <fstream>
#include <vector>
#include <string>

class Decoder {
 public:
    Decoder(string filename);

    void parseFile();
    void parseInstructions();

    std::vector<Instruction> instructions;
    std::vector<Data> data;
 private:
    string _filename;
}

#endif /* DECODER_H_ */