#include <iostream>
#include <string>

int main(){
    int tut = 6 ;
    int tahmin ;
    std::cout << "bu program yazmıs olduğumuz sayıyı tahmin etme programıdır." << std::endl;

        std::cout << "tahmin girin: ";
        std::cin >> tahmin ;
        if (tahmin == tut)
        std::cout << "tebrikler!"<< std::endl;
        else {
            std::cout << "tekrar deneyiniz!" << std::endl;
        }
        return 0;
    }
