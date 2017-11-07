#include <iostream>
using namespace std;

int main(){
	int jk;
	int gpj;
	int l;
	int jl;
	int jkt;
	int gt;
	int gb;
	cout <<"Masukan jam kerja anda:"; cin >> jk;
	cout <<"Masukan gaji anda:"; cin >> gpj;
	l=jk-40;
	jl=l*1.5;
	jkt=40+jl;
	gt=jkt*gpj;
	gb=gt-(0.15*gt);
	cout <<"jam lembur anda:"<<l<<endl;
	cout <<"bonus dari lembur anda:"<<jl<<endl;
	cout <<"jam kerja total anda:"<<jkt<<endl;
	cout <<"gaji total anda:"<<gt<<endl;
	cout <<"gaji bersih anda di potong pajak:"<<gb<<endl;
}
