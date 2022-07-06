#include <iostream>

int main(int argc, char* argv[]) {
    if ( argc <= 1 ) return 0;
    std::cout << "Debug ===>" << argv[1] << std::endl;
    return 0;
}
