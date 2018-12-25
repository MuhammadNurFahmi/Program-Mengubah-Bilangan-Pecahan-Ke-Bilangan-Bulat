#include <iostream>
using namespace std;
typedef struct pecahan{
           int pb;
           int py;
		   };
int main(int argc, char *argv[])
{  
pecahan P1,P2; 
	cout<<"************************************************************"<<endl;
	cout<<"	 MENGUBAH BILANGAN PECAHAN MENJADI BILANGAN BULAT	   "<<endl;
	cout<<"************************************************************"<<endl;   
    cout<<"Masukkan Pembilang = ";
    cin >> P1.pb;              
    cout<<"Masukkan Penyebut = ";
    cin >> P1.py;              
    cout << "\t     " << P1.pb <<endl;
    cout << "\tP1 = -" <<endl;
    cout<< "\t     " <<  P1.py<<endl;
    	if ("/")
	{
		cout<<" Hasilnya = "<<(P1.pb)/(P1.py)<<endl;
	}
return 0;
}
