#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

void writeStringToFile(const std::string& filename);
void caesarCipherEncrypt(const std::string& inputFilename, const std::string& outputFilename, int key);

#endif // FUNCTIONS_H
