#include "pch.h"
#include "funkcje.h"

uint8_t hammingDistance(uint8_t n1, uint8_t n2);

int main(int argc, char * argv[])
{
    std::cout << "BER Calc v1.0" << std::endl;
    std::cout << "argc =  : " << argc << std::endl; 
    int iter = 0;
    for (iter = 0; iter < argc; iter++) {
        std::cout << "argv[" << iter << "] =" << argv[iter] << std::endl;
    }

    std::cout << (int)hammingDistance(0xFF, 0x01) << std::endl;

    return 0;
}

