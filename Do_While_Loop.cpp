/*
In do-while loops also the loop execution is terminated on the basis of test conditions. The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop is exit controlled whereas the other two loops are entry controlled loops. 
Note: In a do-while loop, the loop body will execute at least once irrespective of the test condition.
*/

#include <iostream>

int main(){
    int x = 10;
    do{
        std::cout<<x<<std::endl;
        x--;
    }while(x > 0);
    return 0;
}


/*
# Important Points:


Use for loop when a number of iterations are known beforehand, i.e. the number of times the loop body is needed to be executed is known.
Use while loops, where an exact number of iterations is not known but the loop termination condition, is known.
Use do while loop if the code needs to be executed at least once like in Menu-driven programs
*/