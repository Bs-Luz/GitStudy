#include <iostream>

using namespace std;

//int main()
//{
//	int Radius = 0;
//
//	cout << "반지름은?" << endl;
//
//	cin >> Radius;
//
//	cout << "원의 넓이는?"<< (Radius * Radius * 3.141592) << endl;
//
//	return 0;
//}

int main()
{
	int A, B, C;
	float X1=0, X2=0;
	A = 0;
	B = 0;
	C = 0;

	cout << "숫자를 입력하세요" << endl;

	cin >> A;
	cin >> B;
	cin >> C;

	//Result = (B * B) - 4 * (A * C);
	X1 = (-B + sqrt(B * B - 4 * A * C)) / (2 * A);
	X2 = (-B - sqrt(B * B - 4 * A * C)) / (2 * A);
	
	//Result = ( -B + -(B * B - 4 * A * C) / 2 * A );

	cout << "근은 "<< X1 << "," << X2 << endl;


	return 0;

}