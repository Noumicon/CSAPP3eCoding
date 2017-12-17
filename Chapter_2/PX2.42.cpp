#include <iostream>


using namespace std;
int div16up(int number) {
	return (number + (1 << 4 ) -1)>> 4;
}

int div16down(int number) {
	return number >> 4;
}

unsigned div16Unsigned(unsigned number){
    return number >> 4;
}

int div16ToZero(int number){
    return (number < 0? (number + (1 << 4 ) -1): number)>>4;
}

int main() {
	std::cout << div16up(-17);
    std::cout << div16down(-17);

    std::cout << endl;
    std::cout << div16up(17);
    std::cout << div16down(17);

    std::cout << endl;
    std::cout << div16Unsigned(17);

    std::cout << endl;
    std::cout << div16ToZero(31);
    std::cout << div16ToZero(-31);
}

