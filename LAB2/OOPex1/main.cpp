#include "NumberList.h"

int main() {
    NumberList list;
    list.Init();

    list.Add(5);
    list.Add(3);
    list.Add(8);
    list.Add(1);
    list.Add(9);
    list.Add(2);
    list.Add(7);
    list.Add(4);
    list.Add(6);
    list.Add(0);

    list.Print();
    list.Sort();
    list.Print();

    return 0;
}