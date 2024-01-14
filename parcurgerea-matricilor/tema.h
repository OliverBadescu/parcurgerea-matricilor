#include "probleme.h"



// FISA FRECVENTA


// 2. Se citeste un numar de maxim 8 cifre de la tastatura

//a) cate cifre din fiecare are nr citit?

void sol1() {

	int nr = 0;
	cout << " Introduceti numarul: ";
	cin >> nr;

	int f[10]{};
	frecventaCifre(nr, f);

	aparitieCifre(nr, f);

}


// b) Care sunt cifrele care apar de mai mult de k ori in numarul citit

void sol2() {

	int nr = 0;
	cout << " Introduceti numarul: ";
	cin >> nr;
	int k;
	cout << "Introduceti elementul k:";
	cin >> k;


	int f[10]{};
	frecventaCifre(nr, f);
	cout << "Elementele care apar de mai mult de " << k << " ori sunt: ";

	aparitieCifreDeKori(nr, f, k);

}


// c) Realizati cel mai mic numar din cifrele impare care nu apar in numarul citit.

void sol3() {

	int nr = 0;
	cout << " Introduceti numarul: ";
	cin >> nr;

	int f[10]{};

	cout << "Cel mai mic numar din cifrele impare care nu apar in numarul citit este: " << celMaiMicNumar(nr, f);

}


// d) Care este numarul minim de cifre care ar trebui sa le mai adaugam numarului citit, astfel incat numarul rezultat sa aibe exact acelasi numar de cifre din fiecare ???

// e) Realizati cel mai mica numar ce se poate forma din cifrele numaurului initial, fara cifra 0.

void sol4() {

	int nr = 0;
	cout << " Introduceti numarul: ";
	cin >> nr;

	int f[10]{};

	cout << "Cel mai mic numar din cifrele care apar in numarul citit este: " << celMaiMicNumarFaraZero(nr, f);

}



//FISA MATRICI


// 1) Se citeste o matrice de maxim 50 x 100 de elemente numere intregi de la tastatura.

// a) cate elemente pare ce stau pe o pozitie divizbila cu 2 si 3 avem in matrice 

void sol5() {

	int a[100][100]{ {5, 4, 98, 14, 55, 24, 8}, { 24, 13, 88 ,24, 55, 4, 10}, {22, 9, 3, 0, 1, 8, 2} };
	int l = 3;
	int c = 7;

	int ct = contorElementeParePePozitie2si3(a, l, c);

	cout << "Sunt " << ct << " elemente pare ce stau pe o pozitie divizibila cu 2 si 3 in matrice" << endl;


}


// b) Sa se afiseze suma elementelor prime ce stau pe o linie para si o coloana impara

void sol6() {

	int a[100][100]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

	int s = sumaElemPrimePeLinieParaColImpara(a, l, c);

	cout << "Suma elementelor prime ce stau pe o linie para si o coloana impara este: " << s << endl;


}


// c) Inlocuiti fieacre element patrat perfect cu suma elementelor de pe linia pe care se afla

void sol7() {

	int a[100][100]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

}


// d) Sa se gaseasca minimul de pe linia L si maximul de pe coloana C. Sa se interschimbe aceste doua elemente (L si C sunt citite de la tastatura)

void sol8() {

	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

	int L, C;
	cout << "Introduceti elemenetele L si C: ";
	cin >> L >> C;

	cout << " Elementul minim de linia L si maxim de pe coloana C sunt: " << minimDePeLiniaL(a, c, L) << " si " << maximDePeColoanaC(a, l, C);

}


// e) Realizati suma elementelor de pe fiecare linie in parte. Care este maximul dintre acestea.

void sol9() {

	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

	cout << "Suma de pe fiecare linie in parte este: ";
	sumaFiecareLinie(a, l, c);

}


// 2. Se citeste o matrice de maxim 20 x 1000 de elemente numere intregi de la tastatura.

// a) Realizati un nou numar ce sa contina cifra minima din elementul maxim de pe fiecare linie.

void sol10() {
	
	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

	cout << "Noul numar este: " << maxCifElement(a, l, c);
	

}


// b) Care este media aritmetica a elementelor ce au intre 3-5 divizori proprii

void sol11() {

	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

	cout << "Media elementelor este " << mediaAritmeticaDivizori(a, l, c);

}


// c) Afisati toate dubletele palindrome intre ele de pe linia L (L citit de la tastura) ???

// d) Care este cifra de cotrol a elementului din coltul dreapta jos

void sol12() {

	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

	int cifControl = cifraControl(a[l - 1][c - 1]);

	cout << "Cifra de control a elementului din coltut dreapta jos este " << cifControl;

}


// e) Care este frecventa fiecarei cifre in parte a elementelor de pe o coloana para si o linie impara in matricea citita?

void sol13() {

	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;
	int f[10]{};

	cout << "Frecventa fiecarei cifre este: ";
	frecventaColoanaParaLinieImpara(a, l, c, f);


}


// f) Care este cel mai mare numar ce se poat eforma din cifrele de la pct e)?

void sol14() {

	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;
	int f[10]{};

	cout << "Numarul cel mai mare care se poate foarma din cifrele de la pct e) este: " << frecventaNrMax(a, l, c, f) << endl;

}


// g) Care este a k-a aparitie a lui y in matrice (k si y citit de la tastatura) ???

void sol15() {

	int a[10][10]{ {5, 4, 98, 17, 55}, { 17, 13, 39 ,24, 55}, {17, 11, 3, 13, 5} };
	int l = 3;
	int c = 5;

	int y;
	cout << "y= ";
	cin >> y;



}


// h) Sortati crescator coloana pe care aparare elementul de la pct d) ???


// 3. Se citeste o matrice de maxim 20 x 1000 de elemente numere intregi de la tastatura.

// a) Sa se schimbe intre ele liniile matricei astfel incat prima coloana sa fie ordonata crescator ???