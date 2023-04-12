#include <iostream>

void F(int* flag){
    *flag+=2;

}
int main(int argc, char* argv[]){
    int a=3;
    F(&a);
    std::cout<<a<<std::endl;

}