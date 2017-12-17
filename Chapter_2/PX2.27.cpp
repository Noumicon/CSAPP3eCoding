#include "iostream"

int uadd_ok(unsigned x, unsigned y){

    std::cout << x+y << std::endl;

    if(x+y > x){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    std::cout << uadd_ok(4000000000,3000000000);
}

