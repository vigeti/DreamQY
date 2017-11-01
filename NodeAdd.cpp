#include <iostream>     // for std::cout
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

int main() {
    vector<int> v{ 11, 22, 33, 44, 55, 66 };

    cout << " Initial vector: " << v << "\n\n";

    cout << " Inserting a single element (99): \n";
    v.insert(begin(v) + 1, 99);
    cout << "    " << v << "\n\n";

    cout << " Inserting 3 copies of 100: \n";
    v.insert(begin(v) + 2, 3, 100);
    cout << "    " << v << "\n\n";

    vector<int> source{ -11, -22, -33 };
    cout << " Inserting values from source range: \n";
    v.insert(begin(v) + 1, begin(source), end(source));
    cout << "    " << v << "\n\n";

    cout << " Inserting values from initializer list: \n";
    v.insert(begin(v) + 4, { 111, 222, 333 });
    cout << "    " << v << "\n\n";
}

