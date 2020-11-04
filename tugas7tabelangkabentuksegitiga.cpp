/*NAMA  : MOHAMAD BAGOES ALI YUDDIN  */
/*NIM   : 20051397048                */
/*KELAS : MI_2020B                   */

#include <iostream>
using namespace std;
int main()
{

 int nilai;
cout <<"======================================================="<< endl;
cout <<"======================================================="<< endl;
cout <<"==                                                   =="<< endl;
cout <<"==   --------TABEL ANGKA BERBENTUK SEGITIGA-------   =="<< endl;
cout <<"==                                                   =="<< endl;
cout <<"======================================================="<< endl;
cout <<"======================================================="<< endl << endl;
cout <<"Masukkan Batas Nilai Segitiga : ";cin>>nilai;
cout <<endl;
	
	for (int a=1 ; a<=(nilai*2)-1; a++) {
     if (a <= nilai)  {
     for(int b = 1; b<=a; b++)
     cout<<b;
	 }
		else{
        for(int c=1; c <=nilai*2-a; c++)
            cout<<c;
     }
        cout<<endl;
	
	}
cout <<endl <<"======================================================="<< endl;
	cout <<   "======================================================="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==             MOHAMAD BAGOES ALI YUDDIN             =="<< endl;
	cout <<   "==                    20051397048                    =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                         Penk_Zpk  =="<< endl;
	cout <<   "======================================================="<< endl;
	cout <<   "======================================================="<< endl;	
}
