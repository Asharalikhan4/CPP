/*
While studying for loop we have seen that the number of iterations is known beforehand, i.e. the number of times the loop body is needed to be executed is known to us. while loops are used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test conditions.
Syntax: We have already stated that a loop mainly consists of three statements - initialization expression, test expression, and update expression. The syntax of the three loops - For, while, and do while mainly differs in the placement of these three statements. 
*/

#include <iostream>

int main(){
    int i = 0;
    while(i < 10){
        std::cout<<i<<std::endl;
        i++;
    }
    return 0;
}