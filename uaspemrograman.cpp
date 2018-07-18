#include <iostream>
using namespace std;
class jus{
	protected:
		float apel;
		float mangga;
		float jeruk;
		float lemon;
	public:
		string jus[4];
		void setapel(float x){
			apel=x;
		}
		float getapel(){
			return apel;
		}
		void setlemon(float x){
			lemon=x;
		}
		float getlemon(){
			return lemon;
		}
		void setmangga(float x){
			mangga=x;
		}
		float getmangga(){
			return mangga;
		
		}
		void setjeruk(float x){
			jeruk=x;
		}
		float getjeruk(){
			return jeruk;
		}
		
};
class admin : public jus{
	private:
		string nama;
		string password;
	public:
		void setnama(string x){
			nama=x;
		}
		string getnama(){
			return nama;
		}
		void setpassword(string x){
			password=x;
		}
		string getpassword(){
			return password;
		}
};

class pembeli{
	public:
	int jwb[100];
	float pesanan[100];
	string jus[100];
	string nama[100];
	float total[100];
	int jml[100];
};
void stdg(){
	cout<<"========================\n";
}
main(){
	admin a;
	pembeli p;
	jus j;
	j.jus[0]="Apel";j.jus[1]="Jeruk";j.jus[2]="Lemon";j.jus[3]="Mangga";
	int pil;int k=0;int arr=0;
	char jwb;
	j.setapel(10000);
	j.setjeruk(8000);
	j.setlemon(9000);
	j.setmangga(8000);
	a.setnama("Alvaro");
	a.setpassword("1234");
	lobby:
		stdg();
		cout<<"|1| DAFTAR JUS\n";
		cout<<"|2| LAPORAN PESANAN\n";
		cout<<"|3| SET HARGA\n";
		stdg();
		cout<<"Masukkan pilihan : ";cin>>pil;
		if(pil==1){
			system("cls");
			int jawab;
			daftar:
				cout<<"========================\n";
				cout<<"\tDAFTAR JUS\n";
				cout<<"========================\n";
				cout<<"\n|1| Jus Apel\t"<<j.getapel();
				cout<<"\n|2| Jus Jeruk\t"<<j.getjeruk();
				cout<<"\n|3| Jus Lemon\t"<<j.getlemon();
				cout<<"\n|4| Jus Mangga\t"<<j.getmangga();
				cout<<"\n\n========================\n";
				cout<<"Pilih pesanan : ";cin>>p.jwb[k];
				if(p.jwb[k]==1){
					p.pesanan[k]=j.getapel();
				}
				else if (p.jwb[k]==2){
					p.pesanan[k]=j.getjeruk();
				}
				else if (p.jwb[k]==3){
					p.pesanan[k]=j.getlemon();
				}
				else if (p.jwb[k]==4){
					p.pesanan[k]=j.getmangga();
				}
				else {
					cout<<"wrong";
					}
				cout<<"jumlah : ";cin>>p.jml[k];
				cout<<"atas nama : ";cin>>p.nama[k];
				p.total[k]=p.pesanan[k]*p.jml[k];
				k++;
				arr++;
				cout<<"terimakasih \n\ningin pesan lagi...?(y)/(n)/(Loby)";cin>>jwb;
					if(jwb=='y'){
						system("cls");
						goto daftar;}
					else if(jwb=='l'){
						system("cls");
						goto lobby;}
					else
						cout<<"thank";
		}
		else if (pil==2){
			char jbb;
			for(int i=0;i<arr;i++){
				cout<<"\tpesanan -"<<i;
				cout<<"\nNama\t: "<<p.nama[i];
				cout<<"\nJus\t: "<<j.jus[p.jwb[i]-1];
				cout<<"\nJumlah\t: "<<p.jml[i];
				cout<<"\nTotal\t: "<<p.total[i];
				cout<<"\n";
			}
			cout<<"kembali (y): ";cin>>jbb;
				if(jbb=='y'){
					goto lobby;
					system("cls");
				}
					
				else
					cout<<"thank";
		}
		else if(pil==3){
			string pass;
			char jjb;
			float apel,jeruk,lemon,mangga;
			cout<<"admin : "<<a.getnama();
			ulangi:
			cout<<"\npassword : ";cin>>pass;
			if (pass==a.getpassword()){
				cout<<"harga jus apel : ";cin>>apel;
				cout<<"harga jus jeruk : ";cin>>jeruk;
				cout<<"harga jus lemon : ";cin>>lemon;
				cout<<"harga jus mangga : ";cin>>mangga;
				j.setapel(apel);
				j.setjeruk(jeruk);
				j.setlemon(lemon);
				j.setmangga(mangga);
				cout<<"data tersimpan\n";
				cout<<"kembali (y): ";cin>>jjb;
				if(jjb=='y')
					goto lobby;
				else
					cout<<"thank";
			}
			else{
				cout<<"\npassword salah\n";
				goto ulangi;
				
			}
			
		}
		else
			cout<<"tidak ada pilihan";
	
}
