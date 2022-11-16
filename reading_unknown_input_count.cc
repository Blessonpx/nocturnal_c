#include <iostream>

int main(){
    int sum=0;
    int j;
    while(std::cin>>j){
        sum=sum+j;
    }
    std::cout<<sum<<std::endl;
    return 0;
}