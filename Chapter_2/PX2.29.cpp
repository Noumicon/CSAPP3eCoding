//2.30
#include "iostream"

int tadd_ok(int x, int y){

    std::cout << x+y << std::endl;

    if((x > 0 && y > 0 && x+y < 0) || (x < 0 && y < 0 && x+y > 0)){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    std::cout << tadd_ok(2000000000,300000000);
    std::cout << tadd_ok(-2000000000,-300000000);
    std::cout << tadd_ok(-2000000000, 300000000);
}

