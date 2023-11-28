// main.cpp
#include "functions.h"

int main() {
    const std::string inputFilename = "input.txt";
    const std::string encryptedFilename = "encrypted.txt";
    const int caesarKey = 3;

    writeStringToFile(inputFilename);
    caesarCipherEncrypt(inputFilename, encryptedFilename, caesarKey);

    return 0;
}
// ключ шифрування 3)))