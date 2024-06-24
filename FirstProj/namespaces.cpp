#include <iostream>

using namespace std;

// Namespaces - provides a solution to prevent name conflicts.

namespace second {
    int x = 2;
}

namespace first {
    int x = 1;
}


int main()
{
    using namespace second;
    
    cout << x << endl;

    return 0;
}
