#include "lib/Math.hpp"

int main(int argc, char** argv) {
    std::cout << Sum(atoi(argv[1]), atoi(argv[2])) << std::endl;
    std::cout << Diff(atoi(argv[1]), atoi(argv[2])) << std::endl;
    std::cout << Mult(atoi(argv[1]), atoi(argv[2])) << std::endl;

    return 0;
}