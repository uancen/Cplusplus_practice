#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v1[] {1,2,3};
    vector<int> v2 {1,2,3,4};
    vector<string> s1 {"a","b","c","d"};
    for(int a:v1) cout << a << endl;
}
