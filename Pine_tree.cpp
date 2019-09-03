#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

std::vector<int> Range(int start, int end, int spacing);

int main(){
    /*
    How tall is the tree : 5
            #
           ###
          #####
         #######
        #########
            #
    */
    int nrows;
    int spaces;
    int hash_vals;
    std::string draw;
    std::cout<< "Enter the no of rows you require: ";
    std::cin>>nrows;
    std::cout<<"Enter the characater you would like to draw: ";
    std::cin>>draw;
    spaces = nrows - 1;
    hash_vals = 2*nrows - 1;
    for(auto y:Range(1,hash_vals,2)){
        for(int i=0;i<spaces;i++){
            std::cout<<" ";
        }
        for(int i=0;i<y;i++){
            std::cout<<draw;
        }
        std::cout<<"\n";
        spaces-=1;
    }
    for(int i=0;i<nrows-1;i++){
        std::cout<<" ";
    }
    std::cout<<draw<<"\n";
    return 0;
}

std::vector<int> Range(int start, int end, int spacing){

    std::vector<int> vect;
    int val = start;
    while(val<=end){
        vect.push_back(val);
        val = val + spacing;
    }

    return vect;

}
