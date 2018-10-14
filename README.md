# praktikum-2

## latihan3 : cara mencari nilai terbesar dari 3 bilangan
1. mendeklarasikan variable a, b, dan c
2. memasukan bilangan ke dalam variable input (a,b dan c) dengan nilai tertentu
3. mencari nilai terbesar dari 3 variable menggunakan "if dan else"
4. mencetak nilai terbesar dari 3 bilangan yang telah di masukan ke dalam variable tersebut ke layar

berikut kode lengkapnya :
#include <iostream>

using namespace std;

int main()
{
	int a,b,c;

	cout << "masukan nilai pertama : ";
	cin >>a;
	cout << "masukan nilai kedua : ";
	cin >>b;
	cout << "masukan nilai ketiga : ";
	cin >>c;

	if (a>b)
	{
		if(a>c)
			cout << "bilangan terbesar adalah : " << a;
		else
			cout << "bilangan terbesar adalah : " << c;
	}
	else
	{
		if(b>c)
			cout << "bilangan terbesar adalah : " << b;
		else
			cout << "bilangan terbesar adalah : " << c;
	}
	return 0;
}

## latihan4 : cara mencari nilai terbesar dari 4 bilangan
1. mendeklarasikan variable a, b, c, dan d
2. memasukan bilangan ke dalam variable input (a,c, d dan d) dengan nilai tertentu
3. mencari nilai terbesar dari 4 variable menggunakan "if dan else"
4. mencetak nilai terbesar dari 4 bilangan yang telah di masukan ke dalam variable tersebut ke layar

berikut kode lengkapnya :
#include <iostream>

using namespace std;


int main()
{
	int a,b,c,d;

	cout << "masukan nilai pertama : ";
	cin >>a;
	cout << "masukan nilai ke-dua : ";
	cin >>b;
	cout << "masukan nilai ke-tiga : ";
	cin >>c;
	cout << "masukan nilai ke-empat : ";
	cin >>d;

	if (a>b)
	{
		if(a>c)
			cout << "bilangan terbesar adalah : " << a;
		else if (a>d)
			cout << "bilangan terbesar adalah : " << a;
		else
			cout << "bilangan terbasar adalah : " << d;
	}

	else if (b>c)
	{
		if(b>d)
			cout << "bilangan terbesar adalah : " << b;
		else if (b>d)
			cout << "bilangan terbesar adalah : " << b;
		else
			cout << "bilangan terbesar adalah : " << d;
	}

	else if (c>d)
		cout << "bilangan terbesar adalah : " << c;

	else
		cout << "bilangan terbesar adalah : " << d ;



	return 0;
}
