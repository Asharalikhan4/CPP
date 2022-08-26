vector<int>::iterator it = v.begin();  // it means it is pointing to the memory address. if you print the it then it will print the memory address.
it++;
cout << *(it) << " ";

vector<int>::iterator it = v.end();  // this point at the memory location that is after the last element memory location.

vector<int>::iterator it = v.rend();

vector<int>::iterator it = v.rbegin();