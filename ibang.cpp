#include <iostream>
#include <math.h>

using namespace std;

class Gaji
{
	public:
		int anak;
		int gaji;
		int tunjangan;
		
	void Input()
	{
		cout<<"Jumlah Anak = ";cin>>anak;
		cout<<"Gaji Pokok = ";cin>>gaji;
	}
	
	void Proses()
	{
		if(anak<4)
		{
			tunjangan=0.1*3*gaji;
		}
		else if(anak>3)
		{
			tunjangan=0.1*3*gaji;
		}
		else
		{
			tunjangan=0;
		}
}
void Output(){
	cout<<"Tunjangan Anak = "<<tunjangan<<endl;
}
		

};

int main()
{
	Gaji a;
	a.Input();
	a.Proses();
	a.Output();

}
	