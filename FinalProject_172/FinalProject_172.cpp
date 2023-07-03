#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() {}
	void setX(int a) {
		this->x = a;
	}
	void setY(int b) { 
		this->y = b;
	}
	
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "Lingkaran Dibuat" << endl;
		cout << "Masukan Jejari : ";
		int r;
		cin >> r;
		setX(r);
	}
	float Luas() {
		int r = getX();
		return 3.14 * r * r;
	}
	float Keliling() {
		int r = getX();
		return 2 * 3.14 * r;
	}
	void cekUkuran() {
		float keliling = Keliling();
		if (keliling > 40)
			cout << "Ukuran Lingkaran Besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran Lingkaran Sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran Lingkaran Kecil" << endl;
	}
};

	class Persegipanjang :public bidangDatar {
	public:
		void input() {
			cout << "Persegipanjang Dibuat" << endl;
			cout << "Masukan Panjang : " << endl;
			int p;
			cin >> p;
			setX(p);
			cout << "Masukan Lebar : " << endl;
			int l;
			cin >> l;
			setY(l);
		}
		float Luas() {
			int p = getY();
			int l = getY();
			return p * l;
		}
		float Keliling() {
			int p = getY();
			int l = getY();
			return 2 * (p + l);
		}
		void cekUkuran() {
			float keliling = Keliling();
			if (keliling > 40)
				cout << "Ukuran Persegipanjang Besar" << endl;
			else if (keliling < 20)
				cout << "Ukuran Persegipanjang Sedang" << endl;
			else if (keliling < 10)
				cout << "Ukuran Persegipanjang Kecil" << endl;

		}

	};
	
		
int main() {

	Lingkaran lingkaran;
	lingkaran.input();
	cout << "Luas Lingkaran =" << lingkaran.Luas() << endl;
	cout << "Keliling Lingkaran =" << lingkaran.Keliling() << endl;
	lingkaran.cekUkuran();

	Persegipanjang persegipanjang;
	persegipanjang.input();
	cout << "Persegipanjang =" << persegipanjang.Luas() << endl;
	cout << "Keliling Persegipanjang =" << persegipanjang.Keliling() << endl;
	persegipanjang.cekUkuran();

	return 0;
}