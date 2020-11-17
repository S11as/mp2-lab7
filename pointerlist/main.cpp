#include <iostream>
#include "TList.h"
int main()
{
    TList<int>c;
    for (int i = 0; i < 10; ++i) {
        c.InsLast(i);
    }
    TList<int>b = c.multiplesToK(2);
    std::cout<<b<<std::endl;
    return 0;
}
