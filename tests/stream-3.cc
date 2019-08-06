#include <iostream>
using namespace std;

struct vec{};
ostream& operator<<(ostream &os, const vec &)
{
    return os;
}
int main(void)
{
    cout << vec{} << " "
         << vec{} << " ";
    return 0;
}
