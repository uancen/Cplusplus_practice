#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v1[]{1, 2, 3};
    // vector(initializer_list<value_type> __l,
    //        const allocator_type &__a = allocator_type())
    //     : _Base(__a)
    // {
    //     _M_range_initialize(__l.begin(), __l.end(),
    //                         random_access_iterator_tag());
    // }
    vector<int> v2{1, 2, 3, 4};
    vector<string> s1{"a", "b", "c", "d"};
    for (int a : v1)
        cout << a << endl;
}
