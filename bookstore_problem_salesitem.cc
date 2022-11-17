/*
This problems refers to reading a set of Instruction for a given Book ISBN which at the end result give out the total
of the transactions for the book 
*/


#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item total,trans;

    if (std:cin>>total){
        while(std::cin>>trans){
            if (total.compareIsbn(trans)){
                total=total+trans;
            }else{
                std::cout<<total<<std::endl;
                total=trans;
            }
            std::cout<<total<<std::endl;
        }
    }
    else {
        std::cout<<"No Data"<<std::endl;
        return -1;
    }
    return 0;
}