#include<iostream>

using namespace std;

//Ключевое слово inline
//inline int foo(int a,int b) {
//	return (a>b? a:b);
//}//компилятор видит так -> cout<<(n>m?n:m);

//Перегрузка функции
//int foo(int a, int b) {
//	cout << "Целые числа\n";
//	return (a > b ? a : b);
//}
//double foo(double a, double b) {
//	cout << "Дробные числа\n";
//	return (a > b ? a : b);
//}

//Шаблонная функция
//В отличии от перегрузыки мы не можем изменить тело функции в разных экземлярах
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