#include<iostream>

using namespace std;

//�������� ����� inline
//inline int foo(int a,int b) {
//	return (a>b? a:b);
//}//���������� ����� ��� -> cout<<(n>m?n:m);

//���������� �������
//int foo(int a, int b) {
//	cout << "����� �����\n";
//	return (a > b ? a : b);
//}
//double foo(double a, double b) {
//	cout << "������� �����\n";
//	return (a > b ? a : b);
//}

//��������� �������
//� ������� �� ����������� �� �� ����� �������� ���� ������� � ������ ����������
template <typename t, typename t2> t foo2(t n, t2 m) {
	return (n > m ? n : m);
}

int main() {
	setlocale(LC_ALL, "Ru");
	
	double n,m;
	cin >> n >> m;
	cout << "max = " << foo2(n, 9);
	return 0;
}