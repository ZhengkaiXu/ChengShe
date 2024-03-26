//
// Created by xuzhengkai on 2024/3/27.
//
#include <iostream>
using namespace std;

int main() {
    int i;
    long m;
    float f;
    double d;
    cout << "sizeof(int)=" << sizeof(int) << ", sizeof(i)="
    << sizeof(i) << ", &i=" << &i << endl;
    cout << "sizeof(long)=" << sizeof(long) << ", sizeof(m)="
    << sizeof(m) << ", &m=" << &m << endl;
    cout << "sizeof(float)=" << sizeof(float) << ", sizeof(f)"
    << sizeof(f) << ", &f=" << &f << endl;
    cout << "sizeof(double)=" << sizeof(double) << ", sizeof(d)="
    << sizeof(d) << ", &d=" << &d << endl;

    return 0;
}