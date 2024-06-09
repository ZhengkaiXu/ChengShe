//
// Created by ZhengkaiXu on 2024/6/9.
//
#include <iostream>
using namespace std;
int main() {
    int akey = 0, b = 0; // 定义整型变量
    int *p = NULL, *q = NULL; // 定义指针变量
    akey = 66; // 赋值给变量akey
    p = &akey; // 赋值给指针变量p，让p指向变量akey
    q = &b; // 赋值给指针变量q，让q指向变量b
    *q = *p; // 将p所指向的akey的值赋给q所指向的变量b
    cout << "b=" << b << endl; // 输出b的值
    cout << "*q=" << *q << endl; // 输出b的值
}