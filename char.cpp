// char.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE

using namespace std;
void char1() {
	char a[] = "hello";
	cout << a[1] << endl;
	//cout << a[1][0] << endl;//错误，，编译器不通过
	cout << "&a[1]:" << (&a[1]) << endl;
	//cout << &a[1][0] << endl;//错误,指针。。。
	cout << (&a[1])[0] << endl;
	cout << strcmp(&((&a[1])[0]), "e") << endl;//错误，返回值1，应该0
	string b;
	//b = &a[1]; //b=ello
	b = a[1];//b=ee
	cout << "b:" << b << endl;
	//cout << strcmp(b,"e")<< endl;//错误，编译器不通过

	cout << "(&((&a[1])[0]) =='e'):" << (&((&a[1])[0]) == "e") << endl;
	cout << "(&((&a[1])[0]) =='h'):" << (&((&a[1])[0]) == "h") << endl;

	cout << "((&a[1])[0] =='e'):" << ((&a[1])[0] == 'e') << endl;
	cout << "((&a[1])[0] =='l'):" << ((&a[1])[0] == 'l') << endl;
	cout << "((&a[1])[1] =='l'):" << ((&a[1])[1] == 'l') << endl;
	cout << "(a[2] =='l'):" << (a[2] == 'l') << endl;
	cout << "(a[2] =='e'):" << (a[2] == 'e') << endl;
}



void char2() {

	char a[5][5];
	a[0][0] = 'h';
	cout << "a:" << a << endl;
	cout << "&a:" << &a << endl;
	cout << "a[0][0]:" << a[0][0] << endl;
	cout << "a[0][1]:" << a[0][1] << endl;
	cout << "a[1][0]:" << a[1][0] << endl;
	cout << "(a[0][0]='h'):" << (a[0][0]=='h') << endl;
	cout << "(a[0][0]='p'):" << (a[0][0] == 'p') << endl;

	//a[1]= "abcde";//错误，左值
	//a[1][0] = "abcde";//错误，char* 实体
	strcpy_s(a[1], "abcd");
	//a[1][0] = 'a';
	//a[1][1] = 'b';
	cout << "a:" << a << endl;
	cout << "&a:" << &a << endl;
	cout << "a[1][0]:" << a[1][0] << endl;
	cout << "a[1][1]:" << a[1][1] << endl;
	cout << "a[1]:" << a[1] << endl;
	cout << "(a[1][0]='a'):" << (a[1][0] == 'a') << endl;
	cout << "(a[1][0]='b'):" << (a[1][0] == 'b') << endl;




	cout << "ok" << endl;
}


void char3() {

	char d[6][6];
	strcpy_s(d[0], "abcde");

	//strcpy_s(d, "gggg");//错误
	
	cout << "d:" << d << endl;
	cout << "&d:" << &d<< endl;
	cout << "d[0][0]:" << d[0][0] << endl;
	cout << "d[0][1]:" << d[0][1] << endl;
	cout << "d[0]:" << d[0] << endl;
	cout << "(d[0][0]='h'):" << (d[0][0] == 'h') << endl;
	cout << "(d[0][0]='a'):" << (d[0][0] == 'a') << endl;
	cout << "d[2]:" << d[2] << endl;
	//scanf_s("%s",d[3]);//运行异常
	cin >> d[3];
	cout << "d[3]:" << d[3] << endl;
	cout << "d[3][0]:" << d[3][0] << endl;
	//cout << "s:" << s << endl;
	cout << "ok" << endl;
}
int main()
{
	//char1();
	//char2();
	char3();
}

