#include <iostream> 

int main() {
	//底层const 和顶层const ，默认忽略顶层const 从左往右依次为底层const和顶层const
	//若引用不是对象且不进行拷贝，则不满足上述原则
	const  int* const a = new int{10};
	int* const b = a;  //报错
	const int* c = a;  //正确 ，

	const int num = 10;
	const int* p = &num;   //&num相当于一个底层const。


	//1.常量引用在左侧，右边可接任何东西
	int b = num;
	const int& a1 = 10;
	const int& a2 = num;

	

	//2.非常量引用等于常量引用,报错‘
	int& r1 = 50;  //报错因为r1是个引用  只能接引用，除非常量引用。

	//3.非常量 == 常量引用成立
	const int& b1 = 100;
	int b2 = b1;

	


}