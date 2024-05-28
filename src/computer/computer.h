#include<iostream>
using namespace std;
enum Computer
{
 FREE,               //空闲
 BUSY,               //正在使用
 RESERVED,        //已被预约
 BROKEN,             //损坏
};

void Check(Computer status);