#include <iostream>
#include <vector>

struct A{
    A(int a=0){
        _a=a;
    }
    int _a;
};
void F(int&& a){
    a+=1;
    std::cout<<"abcd"<<std::endl;
}
int main(int argc, char* argv[]){
   
   int b=3;
    F(b);
std::cout<<b<<std::endl;

}