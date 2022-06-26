/*
Header files available in C++ for Input/Output operations are: 


#IOSTREAM: iostream stands for standard input-output stream. This header file contains definitions of objects like cin, cout, cerr, etc.

#IOMANIP: iomanip stands for input-output manipulators. The methods declared in these files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.

#FSTREAM: This header file mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.

<bits/stdc++.h> - is a header file which include many file inside it is recommended to use this in the cp.
*/

#include <iostream>
#include <bits/stdc++.h>

int main(){
    // cout is used to print things on screen.
    // char sample[] = " - a cs guy";
    // std::cout<< "Ashar" << sample;



    // example of cin, which is used to take the input.
    // we use the endl to change the line.
    // int age;
    // std::cout<<"Enter your age: "<<std::endl;
    // std::cin>>age;
    // std::cout<<"Your age is : " << age;

    // example <bits/stdc.h> library
    std::cout<< sqrt(4);


    return 0;
}

// endl and \n do the same thing but the endl flushes the buffer and occupy no memory while the \n occupy on byte memory.