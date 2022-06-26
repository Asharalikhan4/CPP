/*In for loop, a loop variable is used to control the loop. First, initialize this loop variable to some value, then check whether this variable is less than or greater than the counter value. If the statement is true, then the loop body is executed and the loop variable gets updated. Steps are repeated till the exit condition comes. 


Initialization Expression: In this expression, we have to initialize the loop counter to some value. for example: int i=1;
Test Expression: In this expression, we have to test the condition. If the condition evaluates to true then we will execute the body of the loop and go to update expression otherwise we will exit from the for a loop. For example: i <= 10;
Update Expression: After executing the loop body this expression increments/decrements the loop variable by some value. for example: i++;*/

#include <iostream>

int main(){
    for(int i = 0; i < 10; i++){
        std::cout<<i<<std::endl;
    }
    return 0;
}