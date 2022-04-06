#include <iostream>
#include <fstream>
using namespace std;

class Proses{
	public :
		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
			bool ayam_goreng = true;
			bool udang_goreng = true;
			bool cumi_goreng = true;
			bool ayam_bakar = true;
			while(!ambil_data.eof()){
				if(ayam_geprek){
					ambil_data>>byk_aymgp;
					ayam_geprek =false;
				}
				else if(ayam_goreng){
					ambil_data>>byk_aymgr;
					ayam_goreng =false;
				}
				else if (udang_goreng){
					ambil_data>>byk_udg;
					udang_goreng =false;
				}
				else if(cumi_goreng){
					ambil_data>>byk_cmgr;
					cumi_goreng =false;
				}
				else{
					ambil_data>>byk_aymbk;
				}
				}
			ambil_data.close();
			}
		void toFile(){
			int total =(hrg_aymgp*byk_aymgp)+(hrg_aymgr*byk_aymgr)+(hrg_udg*byk_udg)+(hrg_cmgr*byk_cmgr)+(hrg_aymbk*byk_aymbk);
			float batas =15000;
			float t2 =float(total);
			float diskon =t2*0.1;
			if(total>=batas)
				t2 =t2-diskon;

			tulis_data.open("api_data.txt");
			tulis_data <<total<<endl;
			tulis_data <<diskon<<endl;
			tulis_data <<t2<<endl;
			tulis_data <<byk_aymgp<<endl;
			tulis_data <<byk_aymgr<<endl;
			tulis_data <<byk_udg<<endl;
			tulis_data <<byk_cmgr<<endl;
			tulis_data <<byk_aymbk;
			tulis_data.close();
		};
	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int byk_aymgp;
		int byk_aymgr;
		int byk_udg;
		int byk_cmgr;
		int byk_aymbk;
		int hrg_aymgp =21000;
		int hrg_aymgr =17000;
		int hrg_udg =19000;
		int hrg_cmgr =20000;
		int hrg_aymbk =25000;
};
