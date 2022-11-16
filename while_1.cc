#include <iostream>

int main(){
    int sum=0,val=10, initl=0;
    while(initl<10){
        sum=sum+initl;
        initl=initl+1;
    }
    std::cout<<"Total Sum ="<<sum<<std::endl;
    return 0;
}