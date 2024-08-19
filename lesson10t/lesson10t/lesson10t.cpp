#include <iostream>
using namespace std;
int main()
{


	cout << "tap1" << endl << endl;

	srand(time(NULL));
	
	int myNum[5] = {};
	for (unsigned int i = 0; i < 5; i++)
	{
		cin >> myNum[i];
	}
	for (int i = 4; i >= 0; i--)
	{
		cout << myNum[i]<<" ";
	}
	cout << endl;


	cout << "tap2" << endl << endl;

	int arr[20];
	int min = 0;
	int max = 100;
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr[i] = random;
	}
	for (int i = 0; i < 20; i+=2)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	
	cout << "tap3" << endl << endl;



	int arr3[10] = {};
	min = -20;
	max = 20;
	
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr3[i] = random;
	}
	int mus=0;
	int say = 0;
	for (int i : arr3) {
		if (i > 0) {
			mus += i;
			say++;
		}
		cout << i << " ";

	}

	int edeort = mus / say;
	cout << "\nmusbet ededi orta = " << edeort;


	cout << endl;



	cout << "tap4" << endl << endl;

	int arr4[20] = {};
	min = -5;
	max = 5;

	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr4[i] = random;
	}
	int sifir=0;
	int menf = 0;
	int musb = 0;
	for (int i : arr4) {
		if (i > 0) {
			musb++;
		}
		else if (i < 0) {
			menf++;
		}
		else
			sifir++;
		cout << i << " ";
	}
	cout << "\nMusbetlerin sayi " << musb << " menfilerin " << menf << " sifirlarin " << sifir;



	cout << endl;
	cout << "tap5" << endl << endl;




	int arr5[10] = {};
	min = 0;
	max = 100;

	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr5[i] = random;
	}
	int tek3 = 0;
	int cut3 = 0;
	int say3 = 0;
	for (int i = 0; i < 10; i++) {
		if (i%2==0)
		{
			cut3+=arr3[i];
		}
		else {
			tek3 += arr3[i];
			say3++;
		}
		cout << arr3[i] << " ";
	}
	int ededort3 = tek3 / say3;
	cout << "tek ededi orta = " << tek3 << "  cut ededlerin cemi =" << cut3;


	cout << endl;



	cout << "tap6" << endl << endl;



	char arrisare[10];
	min = 0;
	max = 255;
	int herf=0;
	int reqem=0;
	int punkt=0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arrisare[i] = random;
	}

	for (char i: arrisare)
	{
		cout << i<<" ";
		if ((int)i >= 48 && (int)i <= 57)
			reqem++;
		else if (((int)i >= 65 && (int)i <= 90) || ((int)i >= 97 && (int)i <= 122))
			herf++;
		else
			punkt++;
	}
	cout << endl;
	cout << "reqemlerin sayi = " << reqem << endl << "hereflerin sayi" << herf << endl << "punktlarin sayi" << punkt<<endl;

	cout << "tap7" << endl << endl;





	int arr100[50];
	min = 0;
	max = 50;
	for (int i = 0; i < 50; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr100[i] = random;
	}
	int a;
	cin >> a;
	int saya=0;
	for (int i : arr100) {
		cout << i << " ";
		if (a == i)
			saya++;

	}
	cout <<endl<<"eyni ededlerin = "<< saya<<endl;



	cout << "tap8" << endl << endl;

	int arr357[10];
	min = 0;
	max = 100;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr357[i] = random;
	}
	int uce = 0;
	int yeddiye = 0;
	int bese = 0;
	for (int i: arr357)
	{
		if (i%3==0)
		{
			uce++;
		}
		if (i % 5 == 0)
			bese++;
		if (i%7==0)
		{
			yeddiye++;
		}
		cout << i << " ";

	}
	cout << endl << "uce bolunen" << uce << " bese bolunen" << bese << " yediyye " << yeddiye << endl;

	cout << "tap9" << endl << endl;

	int arr3x5[10];
	min = 0;
	max = 100;
	int ucebeseyox = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr3x5[i] = random;
	}
	for (int i : arr357)
	{
		cout << i << " ";
		if (i % 3 == 0&&i%15!=0)
		{
			ucebeseyox++;
		}
	}
	cout << endl << "uce bolunur bese bolunmeyen = " << ucebeseyox;



	cout << "tap10" << endl << endl;


	int arry[10];
	min = -10;
	max = 30; 
	int inde = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry[i] = random;
	}
	for (int i : arry)
	{
		cout << i << " ";
	}
	for (int i : arry) {
		if (i < 0)
		{
			break;
		}
		inde++;
	}int top = 0;
	for (int i = inde+1; i < 10; i++)
	{
		top += arry[i];
	}
	cout << "toplam = " << top<<endl;


	cout << "tap11" << endl << endl;


	int arry2[10];
	min = -30;
	max = 20;
	int inde2 = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry2[i] = random;
	}
	for (int i : arry2)
	{
		cout << i << " ";
	}
	for (int i : arry2) {
		if (i > 0)
		{
			break;
		}
		inde2++;
	}
	int top2 = 0;
	for (int i = inde2+1; i < 10; i++)
	{
		top2 += arry2[i];
	}
	cout << "toplam = " << top2<<endl;

	cout << "tap12" << endl << endl;


	int arry3[10];
	min = -100;
	max = 100;
	int inde3 = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry3[i] = random;
	}
	int maxi = arry3[0];
	int maxind = 0;
	int mini = arry3[0];
	int minid = 0;
	for (int i = 1; i < 10; i++)
	{
		if (maxi<arry3[i])
		{
			maxi = arry3[i];
			maxind = i;
		}
		if (mini > arry3[i])
		{
			mini = arry3[i];
			minid = i;
		}
		cout << arry3[i] << " ";

	}
	cout << endl << " maximum = " << maxi << "  maximum index = " << maxind << "   minimum = " << mini << "   minimum index = " << minid<<endl;



	cout << "tap13"<<endl<<endl;

	double arry4[10];
	min = 0;
	max = 200;
	for (int i = 0; i < 10; i++)
	{
		double random = min + rand() % (max - min + 1);
		random = random * 0.1;
		arry4[i] = random;
	}
	for (double i: arry4)
	{

		cout << i << " ";
	}
	cout << endl << endl;
	cout << " tam eddedler ";
	for (double i : arry4)
	{
		if((int)(i*10)%10==0)
			cout << i << " ";
	}

	cout << endl << "tap14" << endl<<endl;
	min = 1;
	max = 200;
	int arry5[20];
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry5[i] = random;
	}
	int birreq = 0;
	int ikireq = 0;
	int ucreq = 0;
	for (int i: arry5)
	{
		if (i/100!=0)
		{
			ucreq++;
		}
		else if (i/10!=0)
		{
			ikireq++;
		}
		else
		{
			birreq++;
		}
		cout << i <<" ";
	}
	cout << endl << "birreqemle faiz nisbeti = " << birreq * 5;
	cout << endl << "ikireqemle faiz nisbeti = " << ikireq * 5;
	cout << endl << "ucreqemle faiz nisbeti = " << ucreq * 5 << endl;


	cout << endl << "tap15" << endl << endl;
	min = 2;
	max = 200;
	int arry6[20];
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry6[i] = random;
	}
	for (int i : arry6) {
		cout << i << " ";
	}
	cout << endl<<" sade eddedler: ";
	for (int i : arry6)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i == j)
			{
				cout << i << " ";
			}
			else if(i%j==0){
				break;
			}
			else
			{
				continue;
			}
		}
	}


	cout << endl << "tap16" << endl << endl;
	min = 0;
	max = 200;
	int arry7[10];
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry7[i] = random;
	}
	int arry7t[10];
	int j = 0;
	cout << endl;
	for (int i : arry7) {
		cout << i << " ";
	}
	for (int i = 9; i >= 0; i--)
	{
		arry7t[j] = arry7[i];
		j++;
	}
	for (int i = 0; i < 10; i++)
	{
		arry7[i] = arry7t[i];
	}
	cout << endl;
	for (int i : arry7) {
		cout << i << " ";
	}



	cout << endl << "tap17" << endl << endl;
	min = 0;
	max = 200;
	int arry8[10];
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry8[i] = random;
	}
	int arry8q[10];
	cout << endl;
	for (int i : arry8) {
		cout << i << " ";
	}
	for (int i =0; i<10;i++)
	{
		if (i==9)
		{
			arry8q[i] = arry8[0];

		}
		else
		{
			arry8q[i] = arry8[i + 1];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		arry8[i] = arry8q[i];
	}
	cout << endl;
	for (int i : arry8) {
		cout << i << " ";
	}

	cout << endl << "tap18" << endl << endl;

	int massA[5];
	int massB[5];
	int massC[10];
	min = 0;
	max = 100;
	for (int i = 0; i < 5; i++)
	{
		int random = min + rand() % (max - min + 1);
		massA[i] = random;
	}
	for (int i = 0; i < 5; i++)
	{
		int random = min + rand() % (max - min + 1);
		massB[i] = random;

	}
	int p = 0;
	for (int i = 0; i < 5; i++)
	{
		massC[p] = massA[i];
		p++;
		massC[p] = massB[i];
		p++;
	}
	cout << endl << "Massiv A = ";
	for (int i : massA) {
		cout << i << " ";
	}
	cout << endl << "Massiv B = ";
	for (int i : massB) {
		cout << i << " ";
	}
	cout << endl << "Massiv C = ";
	for (int i : massC) {
		cout << i << " ";
	}
	
	cout << endl << "tap19" << endl << endl;
	min = -70;
	max = 70;
	int arry9[20];
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry9[i] = random;
	}
	cout << endl << "kohne massiv: ";
	for (int i : arry9) {
		cout << i << " ";
	}
	int narry9[20];
	int h=0;
	for (int i = 0; i < 20; i++)
	{
		if (arry9[i]<0)
		{
			narry9[h] = arry9[i];
			h++;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (arry9[i] == 0)
		{
			narry9[h] = arry9[i];
			h++;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (arry9[i] > 0)
		{
			narry9[h] = arry9[i];
			h++;
		}
	}
	
	cout << endl<<"yeni massiv: ";
	for (int i : narry9) {
		cout << i << " ";
	}


	cout << endl << "tap20" << endl << endl;

	int massA2[5];
	int massB2[5];
	int massC2[10];
	min = 0;
	max = 100;
	
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		massC2[i] = random;

	}
	int m = 0;
	for (int i = 0; i < 5; i++)
	{
		massA2[i] = massC2[m];
		m++;
		massB2[i] = massC2[m];
		m++;
	}
	cout << endl << "Massiv C = ";
	for (int i : massC2) {
		cout << i << " ";
	}
	cout << endl << "Massiv A = ";
	for (int i : massA2) {
		cout << i << " ";
	}
	cout << endl << "Massiv B = ";
	for (int i : massB2) {
		cout << i << " ";
	}
	
}