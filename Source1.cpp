#include <iostream>
using namespace std;
int main() {
	/* 
	//Boolean1◦.Дано целое число A.Проверить истинность высказывания : «Число A является положительным».
	//Boolean1. Дано целое число A.
	//Проверить истинность высказывания : 
	//«Число A является положительным».
	int a;
	cin >> a;
	bool res = a > 0;
	cout << boolalpha << res << endl;
	system("pause");*/
	/* 
	//Boolean2.
	//Дано целое число A.
	//Проверить истинность высказывания : «Число A является нечетным».
	int a;
	cin >> a;
	bool res = a % 2 != 0;
	cout << boolalpha << res << endl;*/
	/* 
	//Boolean3◦.Дано целое число A.
	//Проверить истинность высказывания : «Число A является четным».
	int a;
	cin >> a;
	bool res = a % 2 == 0;
	cout << boolalpha << res << endl;
	system("pause");*/
	/* 
	//Boolean4◦
	//Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Справедливы неравенства A > 2 и B ≤ 3».
	int a, b;
	cin >> a >> b;
	bool res = a > 2 && b <= 3;
	cout << boolalpha << res << endl;
	system("pause");*/
	/* 
	//Boolean5◦
	//.Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Справедливы неравенства A ≥ 0 или B < −2».
	int a, b;
	cin >> a >> b;
	bool res = a >= 0 || b < -2;
	cout << boolalpha << res << endl;
	system("pause");*/ 
	/* 
	//Boolean6◦
	//.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Справедливо двойное неравенство A < B < C».
	int A, B, C;
	cin >> A >> B >> C;
	bool res = A < B && B < C;
	cout << boolalpha << res << endl;
	system("pause"); */
	/* 
	//Boolean7◦
	//.Даны три целых числа : a, b, c.Проверить истинность высказывания : «Число B находится между числами A и C».
	int a, b, c;
	cin >> a >> b >> c;
	bool res = (a < b && b < c) || (c < b&&b < a);
	cout << boolalpha << res << endl;
	system("pause");*/
	/* 
	//Boolean8◦
	//.Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Каждое из чисел A и B нечетное».
	int A, B;
	cin >> A >> B;
	bool res = A % 2 == 0 || B % 2 == 0;
	cout << boolalpha << res << endl;
	system("pause");*/
	/* 
	//Boolean9◦
	//.Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Хотя бы одно из чисел A и B нечетное»
	int A, B;
	cin >> A >> B;
	bool res = A % 2 != 0 || B % 2 != 0;
	cout << boolalpha << res << endl;
	system("pause");*/
	/* 
	//Boolean10◦
	//.Даны два целых числа : A, B.Проверить истинность высказывания : «Ровно одно из чисел A и B нечетное».
	int A, B;
	cin >> A >> B;
	bool res = (A % 2 != 0 && B % 2 = 0) || (A % 2 =0 && b % 2 !=0);
	cout << boolalpha << res << endl;
	system("pause");*/
	/* 
	//Boolean11◦
    //Даны два целых числа : A, B.Проверить истинность высказывания : «Числа A и B имеют одинаковую четность».
	int A, B;
	cin >> A >> B;
	bool res = (A % 2 == 0 && B % 2 == 0 || A % 2 != 0 && B % 2 != 0);
	cout << boolalpha << res << endl;
	system("pause");*/
	//Boolean12◦
	//.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Каждое из чисел A, B, C положительное».	int A, B, C;
	cin >> A >> B >> C;
	bool res = A > 0 && B > 0 && C > 0;
	cout << boolalpha << res << endl;
	system("pause");
}