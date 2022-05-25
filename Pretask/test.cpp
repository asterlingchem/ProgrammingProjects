#include <iostream>
#include <vector>

using std::cout;
using std::endl;

std::vector<double> vec = {1.0,2.0,3.0,4.0};

int main(int argc, char *argv[])
{   
    cout << " vec = { ";

    for(std::vector<double>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << " " << *it <<" ";
    }

cout << " }\n";
    
    return 0;
}