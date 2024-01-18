#include <iostream>
using namespace std;



void afisare(int a[100][100], int m, int n) {


	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {


			cout << a[i][j] << " ";
		}
		cout << endl;
	}
 }

int contorElementeParePePozitie2si3(int a[100][100], int l, int c) {

	int ct = 0;


	for (int i = 0; i < l; i++) {

		for (int j = 0; j < c; j++) {
			if (i + j % 6 == 0 && a[i][j]%2==0) {
				ct++;
			}
		}
	}
	return ct;
}

int nrDivizori(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {

		if (nr % i == 0) {
			ct++;
		}

	}
	return ct;
}

bool isNrPrim(int nr) {

	if (nrDivizori(nr) == 2) {
		return true;
	}
	else {
		return false;
	}

}

int sumaElemPrimePeLinieParaColImpara(int a[100][100], int l, int c) {

	int s = 0;

	for (int i = 0; i < l; i++) {
		for (int j = 0; i < c; i++) {
			if (i % 2 == 0 && j % 3 == 0) {
				if (isNrPrim(a[i][j]) == true) {
					s = s + a[i][j];
				}
			}
		}
	}
	return s;
}

bool isPatratPerfect(int nr) {

	if (sqrt(nr) * sqrt(nr) == nr) {
		return true;
	}
	return false;
}

int sumaLinieMatricePatratPerfect(int a[100][100], int l, int c) {

	int s = 0;
	
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (isPatratPerfect(a[i][j]) == true) {
				s = s + a[i][j];
			}
		}
	}
	return s;
}

void frecventaCifre(int nr, int f[]) {


	while (nr != 0) {

		int cifra = nr % 10;

		f[cifra]++;


		nr = nr / 10;

	}
}

void afisareFrecventa(int f[]) {

	for (int i = 0; i < 1000; i++) {
		if (f[i] != 0) {

			cout << i << " apare de " << f[i] << " ori in numar" << endl;
		}
	}
}

void frecventaVector(int v[], int dim, int f[]) {

	for (int i = 0; i < dim; i++) {

		f[v[i]]++;
	}

}

void frecventaCifraVector(int v[], int dim, int f[]) {

	for (int i = 0; i < dim; i++) {

		int aux = v[i];
		while (v[i] != 0) {
			int cifra = v[i] % 10;
			f[cifra]++;
			v[i] = v[i] / 10;
		}
		v[i] = aux;
	}
}

int frecventaMaxNr(int f[]) {

	int max = INT_MIN;

	for (int i = 0; i < 10001; i++) {
		if (f[i] != 0 && max < f[i]) {
			max = f[i];
		}
	}
	return max;
}

int frecventaMinNr(int f[]) {

	int min = INT_MAX;

	for (int i = 0; i < 1001; i++) {
		if (f[i] != 0 && min > i) {
			min = f[i];
		}
	}
	return min;
}

int frecventaMaxCifra(int f[]) {

	int max = INT_MIN;

	for (int i = 0; i < 10; i++) {
		if (f[i] != 0 && max < i) {

			max = f[i];

		}
	}
	return max;
}

int frecventaMinCifra(int f[]) {

	int min = INT_MAX;

	for (int i = 0; i < 10; i++) {
		if (f[i] != 0 && min > f[i]) {

			min = f[i];

		}
	}
	return min;
}

int pozitieMax(int v[], int dim) {

	int max = v[0];
	int imax = 0;

	for (int i = 1; i < dim; i++) {

		if (v[i] > max) {
			max = v[i];
			imax = i;
		}
	}
	return imax;
}

int pozitieMin(int v[], int dim) {

	int min = INT_MAX;
	int imin = INT_MAX;

	for (int i = 0; i < dim; i++) {

		if (v[i] < min && v[i] != 0) {
			min = v[i];
			imin = i;
		}
	}
	return imin;
}

void frecventaElemente(int v[], int dim, int f[]) {


	for (int i = 1; i < dim; i++) {

		f[v[i]]++;


	}

}

int nuSeGasesteInVector(int v[], int dim) {

	int f[100]{};
	frecventaElemente(v, dim, f);
	for (int i = 99; i >= 10; i--) {
		if (f[i] == 0) {
			return i;
		}
	}
	return -1;
}

void nuSeGasesteCifra(int v[], int dim) {

	int f[10]{};
	frecventaCifraVector(v, dim, f);

	for (int i = 1; i <= 9; i++) {
		if (f[i] == 0) {
			cout << i << " ";
		}
	}



}

void aparitieCifre(int nr, int f[]) {

	frecventaCifre(nr, f);

	for (int i = 0; i < 10; i++) {
		cout << i << " apare de " << f[i] << " ori in numar" << endl;
	}

}

void aparitieCifreDeKori(int nr, int f[], int k) {

	frecventaCifre(nr, f);

	for (int i = 0; i < 10; i++) {
		if (k < f[i] && f[i] != 0) {
			cout << i << " ";
		}
	}

}

int celMaiMicNumar(int nr, int f[]) {
	
	frecventaCifre(nr, f);

	int numar = 0;

	for (int i = 0; i < 10; i++) {
		if (f[i] == 0 && i % 2 == 1) {
			numar = numar * 10 + i;
		}
	}
	return numar;
}

int celMaiMicNumarFaraZero(int nr, int f[]) {

	frecventaCifre(nr, f);

	int numar = 0;

	for (int i = 0; i < 10; i++) {
		if (f[i] != 0) {
			numar = numar * 10 + i;
		}
	}
	return numar;
}

int minimDePeLiniaL(int a[10][10], int c, int L) {

	int minim = INT_MAX;

	for (int i = 0; i < c; i++) {
		if (a[L][i] < minim) {
			minim = a[L][i];
		}
	}
	return minim;
}

int maximDePeColoanaC(int a[10][10], int l, int C) {

	int maxim = INT_MIN;

	for (int i = 0; i < l; i++) {
		if (a[i][C] > maxim) {
			maxim = a[i][C];
		}
	}
	return maxim;
}

void sumaFiecareLinie(int a[10][10], int l, int c) {

	int s = 0;
	int max = 0;


	for (int i = 0; i < l; i++) {

		for (int j = 0; j < c; j++) {
			s = s + a[i][j];
		}
		cout << s << " ";
		if (max < s) {
			max = s;
		}
		s = 0;
	}

	cout << endl;
	cout << "Maximul dintre acestea este " << max << endl;
}

int maxCifElement(int a[10][10], int l, int c) {

	int max = 0;
	int min = 9;
	int numar = 0;

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
		while (max != 0) {
			int uc = max % 10;
			if (uc < min) {
				min = uc;
			}
			max = max / 10;
		}
		numar = numar * 10 + min;
		min = 9;
	}

	return numar;

}

int mediaAritmeticaDivizori(int a[10][10], int l, int c) {

	int medie = 0;
	int ct = 0;

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if ( nrDivizori(a[i][j]) <= 5 && nrDivizori(a[i][j]) >= 3) {
				medie = a[i][j] + medie;
				ct++;
			}
		}
	}
	medie = medie;

	return medie / ct; 

}

int cifraControl(int n) {

	int s = 0;

	while (n > 9)
	{
		s = 0;
		while (n > 0)
		{
			s += n % 10;
			n /= 10;
		}
		n = s;
	}

	return n;
}

void frecventaCifraMatrice(int a[10][10], int l, int c, int f[]) {

	for (int i = 0; i < l; i++) {

		for (int j = 0; j < c; j++) {

			int aux = a[i][j];
			while (a[i][j] != 0) {
				int cifra = a[i][j] % 10;
				f[cifra]++;
				a[i][j] = a[i][j] / 10;
			}
			a[i][j] = aux;

		}
	}
}

void frecventaColoanaParaLinieImpara(int a[10][10], int l, int c, int f[]) {

	frecventaCifraMatrice(a, l, c, f);


	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (i % 2 == 1 && j % 2 == 0) {
				for (int k = 0; k < 10; k++) {
					if (f[k] != 0) {

						cout << i << " apare de " << f[i] << " ori" << endl;
					}
				}
			}
		}
	}

}

int frecventaNrMax(int a[10][10], int l, int c, int f[]) {

	frecventaCifraMatrice(a, l, c, f);

	int numar = 0;

	for (int k = 9; k >= 0; k--) {
		if (f[k] != 0) {
			numar = numar * 10 + k;
		}
	}
	return numar; 
}

int nrCif(int nr) {

	int ct = 0;

	while (nr != 0) {

		ct++;
		nr = nr / 10;
	}
	return ct;
}

bool componentaBinara(int nr) {

	int ct = 0;

	while (nr > 0) {
		int uc = nr % 10;
		if (uc == 1 || uc == 0) {
			ct++;
		}
		nr = nr / 10;
	}
	
	if (nrCif(nr) == ct) {
		return true;
	}
	else{
		return false;
	}
}

int numarElementeComponentaBinara(int a[10][10], int l, int c) {

	int ct = 0;

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (componentaBinara(a[i][j]) == true) {
				ct++;
			}
		}
	}
	return ct;
}