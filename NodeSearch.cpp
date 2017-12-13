// Demo: Searching elements in std::vector using std::find

#include <algorithm>    // for std::find
#include <iostream>     // for console I/O
#include <string>       // for std::string
#include <vector>       // for std::vector
using namespace std;

int main() {
    vector<string> v{"Galileo", "C64", "Connie", "Amiga", "C++"};
    
    cout << " String vector contains: \n";
    for (const auto& s : v) {
        cout << "    " << s << '\n';
    }
    cout << '\n';

    cout << " Please enter a string to search for: ";
    string s;
    cin >> s;
    cout << '\n';

    auto pos = find(begin(v), end(v), s);
    if (pos != end(v)) {
        cout << ' ' << s << " was found in the vector! \n";  
    } else {
        cout << " The vector doesn't contain " << s << " \n";
    }
}

