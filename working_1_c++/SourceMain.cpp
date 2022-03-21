#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;//nam gozari fazai ejra
void printtext() {
	//سلام سجاد را چاپ کنید الگوریتم ان به شرح زیر می باشد
	//1.شروع
	//2.کلمه سلام را دریافت و چاپ کنید 
	//3.پایان

	cout << "salam Sajad \n";
}
void getnumber() {
	//1.شروع 
	//2. عدد را دریافت
	//3. عدد را بخوان 
	//4.عدد را چاپ کن
	//5.خروج
	int a;
	cout << "Enter Number:  ";
	cin >> a;
	cout << a<<endl;
}
void sumnumber(){
	//1.شروع کن
	//2.عدد آ و بی را بخوان 
	//3.حاصل sum =a+b
	//4.عدد sum  را چاپ کنید
	// 5. پایان
int a = 2;
int b = 3;
int sum = a + b;
cout << sum << endl;

}
void multiaction() {
	//برنامه بنویسید که 4 عمل اصلی  را انجام دهد.
	//1.start
	//2.get & read numbers A_B
	//3.result sum=a+b
	//4.result sub=a-b
	//5.result div=a/b
	//6.result mult=a*b
	//7. numbers sum,sub,mult,div
	//8.End

	int a, b;
	int mult, sub, sum;
	double div;
	cout << "Enter number A: \n";
	cin >> a;
	cout << "Enter number B: \n";
	cin >> b;
	mult = a * b;
	div = a / b;
	sub = a - b;
	sum = a + b;
	cout <<"Sum number:" <<sum<<"\n";
	cout << "sub numbers:" <<sub <<"\n" ;
	cout << "mult numbers:" << mult<<"\n" ;
	cout << "div numbers:" << div ;
}
void calcAvrage() {
	//نمرات سه درس به همراه تعدا واحد ان را گرفته و محاسبه کنید 
	int Rcountunit,Ocountunit,SHcountunit;//ریاضی علوم شیمی
	int Rscore, Oscore, SHscore;//نمرات سه درس
	int calcR, calcO, calcSH;
	int SumcalcROSH,SumUnit;
	double avrage;
	cout << " Enter 1.unit2.score RIyazi: \n";
	cin >> Rcountunit >> Rscore;
	cout << " Enter 1.unit2.score Olom: \n";
	cin >> Ocountunit >> Oscore;
	cout << " Enter 1.unit2.score Olom: \n";
	cin >> SHcountunit >> SHscore;
	calcR = Rcountunit * Rscore;
	calcO = Ocountunit * Oscore;
	calcSH = SHcountunit * SHscore;
	SumcalcROSH = calcR + calcO + calcSH;
	SumUnit = Rcountunit + Ocountunit + SHcountunit;
	avrage = SumcalcROSH / SumUnit;
	cout << "moadel: " <<avrage;
}
int main() {
	//printtext();
	//getnumber();
	//sumnumber();
	//multiaction();
	calcAvrage();
}

