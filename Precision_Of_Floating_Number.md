# floor() Method -
- Floor rounds off the given value to the closest integer which is less than the given value. It is defined in the <cmath> header file.
-
// C++ program to demonstrate working of floor()
// in C/C++
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    double x = 1.411, y = 1.500, z = 1.711;
    cout << floor(x) << endl;
    cout << floor(y) << endl;
    cout << floor(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << floor(a) << endl;
    cout << floor(b) << endl;
    cout << floor(c) << endl;
    return 0;
}





# ceil() Method -
- Ceil rounds off the given value to the closest integer which is more than the given value. It is defined in the <cmath> header file.
-
// C++ program to demonstrate working of ceil()
// in C/C++
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    double x = 1.411, y = 1.500, z = 1.611;
    cout << ceil(x) << endl;
    cout << ceil(y) << endl;
    cout << ceil(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << ceil(a) << endl;
    cout << ceil(b) << endl;
    cout << ceil(c) << endl;
    return 0;
}



# trunc() Method -
- Trunc rounds remove digits after the decimal point. It is defined in the <cmath> header file.
- 
// C++ program to demonstrate working of trunc()
// in C/C++
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    double x = 1.411, y = 1.500, z = 1.611;
    cout << trunc(x) << endl;
    cout << trunc(y) << endl;
    cout << trunc(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << trunc(a) << endl;
    cout << trunc(b) << endl;
    cout << trunc(c) << endl;
    return 0;
}



# round()
- Rounds gave numbers to the closest integer. It is defined in the header files: <cmath> and <ctgmath>.
-
// C++ program to demonstrate working of round()
// in C/C++
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    double x = 1.411, y = 1.500, z = 1.611;

    cout << round(x) << endl;
    cout << round(y) << endl;
    cout << round(z) << endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << round(a) << endl;
    cout << round(b) << endl;
    cout << round(c) << endl;
    return 0;
}




# setprecision()
- Setprecision when used along with 'fixed' provides precision to floating-point numbers correct to decimal numbers mentioned in the brackets of the setprecision. It is defined in header file <iomanip>.
- 
// C++ program to demonstrate
// working of setprecision()
// in C/C++
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    double pi = 3.14159, npi = -3.14159;
    cout << fixed << setprecision(0) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(1) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(2) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(3) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(4) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(5) << pi << " " << npi
         << endl;
    cout << fixed << setprecision(6) << pi << " " << npi
         << endl;
}


