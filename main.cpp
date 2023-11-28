#include "functions.h"

int main() {
    const std::string inputFilename = "input.txt";
    const std::string outputFilename = "output.txt";

    writeWordsToFile(inputFilename);
    filterAndWriteToFile(inputFilename, outputFilename);

    return 0;
}
