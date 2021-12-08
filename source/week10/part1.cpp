#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* array, int length)
{
    for (int i = 0; i < length; ++i) os << array[i] << '\n';
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v) os << vv << '\n';
    return os;
}

int main()
try {
    int* arr20 = new int[20];

    int x = 100;
    for (int i = 0; i < 20; ++i) {
        arr20[i] = x++;
    }

    print_array(cout, arr20, 20);
    delete[] arr20;

    vector<int> v10(10);

    int y = 100;
    for (int& v : v10) {
        v = y;
        ++y;
    }

    print_vector(cout, v10);
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}