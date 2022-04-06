#include <iostream>
#include <fstream>
using namespace std;

class Input{
	public :
		void cetak(){
			cout << "Rumah Makan Sederhana \n";
			cout << "Menu Makanan : \n";
			cout << "1) Ayam geprek   Rp21000 \n";
			cout << "2) Ayam goreng   Rp17000 \n";
			cout << "3) Udang goreng  Rp19000 \n";
			cout << "4) Cumi goreng   Rp20000 \n";
			cout << "5) Ayam bakar    Rp25000 \n\n";
			cout << "Pesan Ayam geprek  ~> ";   cin >>byk_aymgp;
			cout << "Pesan Ayam goreng  ~> ";   cin >>byk_aymgr;
			cout << "Pesan Udang goreng ~> ";   cin >>byk_udg;
			cout << "Pesan Cumi goreng  ~> ";   cin >>byk_cmgr;
			cout << "Pesan Ayam bakar   ~> ";   cin >>byk_aymbk;
		}
		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data <<byk_aymgp<<endl;
			tulis_data <<byk_aymgr<<endl;
			tulis_data <<byk_udg<<endl;
			tulis_data <<byk_cmgr<<endl;
			tulis_data <<byk_aymbk;
			tulis_data.close();
		}
	private :
		ofstream tulis_data;
		int byk_aymgp, byk_aymgr, byk_udg, byk_cmgr, byk_aymbk;
};
