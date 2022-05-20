#include <iostream>
using namespace std;
class CMyclass{
    int n;
    static int s;
};
/* 知识点：
1.静态成员变量一共就一份，被所有对象共享
2.sizeof不会计算静态成员变量
3.静态成员函数不具体作用与某个对象
4.静态成员不需要创建对象就能访问
5.访问静态成员语法：  类名::成员名;
                    对象名.成员名;
                    指针-> 成员名;
                    引用.成员名;
6.静态成员变量本质上是全局变量
7.静态成员函数本质上是全局函数
8.静态成员函数中，不能访问非静态成员变量，也不能调用非静态成员函数
*/