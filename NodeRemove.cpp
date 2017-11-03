// Demo: Erase-remove idiom with std::vector

#include <algorithm>	// for std::remove_if
#include <iostream>	    // for std::cout
#include <ostream>      // for std::ostream
#include <vector>       // for std::vector
using namespace std;

ostream& operator<<(ostream& os, const vector<int>& v) {
    os << "[ ";
    for (auto x : v) {
        os << x << ' ';
    }
    os << ']';
    return os;
}

inline bool IsOdd(int x) {
    return x % 2 == 1;
}

int main() {
    vector<int> v{11, 22, 33, 44, 55, 66};
    cout << " Initial vector: " << v << "\n\n";
    
    cout << " Removing the odd numbers from the vector.\n\n";

    v.erase(remove_if(begin(v), end(v), IsOdd),
            end(v));

    cout << " Vector content after erase-remove: " << v << "\n\n";
}

