#include <iostream> 

int main() {
	//�ײ�const �Ͷ���const ��Ĭ�Ϻ��Զ���const ������������Ϊ�ײ�const�Ͷ���const
	//�����ò��Ƕ����Ҳ����п���������������ԭ��
	const  int* const a = new int{10};
	int* const b = a;  //����
	const int* c = a;  //��ȷ ��

	const int num = 10;
	const int* p = &num;   //&num�൱��һ���ײ�const��


	//1.������������࣬�ұ߿ɽ��κζ���
	int b = num;
	const int& a1 = 10;
	const int& a2 = num;

	

	//2.�ǳ������õ��ڳ�������,����
	int& r1 = 50;  //������Ϊr1�Ǹ�����  ֻ�ܽ����ã����ǳ������á�

	//3.�ǳ��� == �������ó���
	const int& b1 = 100;
	int b2 = b1;

	


}