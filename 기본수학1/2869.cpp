#include <iostream>
using namespace std;

/*�� ���� �����̰� �ִ�.
�� �����̴� ���̰� V������ ���� ���븦 �ö� ���̴�.

�����̴� ���� A���� �ö� �� �ִ�. ������, �㿡 ���� �ڴ� ���� B���� �̲�������.
��, ���� �ö� �Ŀ��� �̲������� �ʴ´�.

�����̰� ���� ���븦 ��� �ö󰡷���, ��ĥ�� �ɸ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/


int main(void) {
	int A, B, V;

	cin >> A >> B >> V;

	int dayMeter, day = 1;

	dayMeter = A - B;
	day = day + ((V-A) / dayMeter);

	if ((V-A) % dayMeter == 0) {
		day = day;
	}

	else if(A>=V){
		day = 1;
	}

	else {
		day = day + 1;
	}

	cout << day;

	/*while (V > 0) {
		V = V - A;
		if (V <= 0) {
			break;
		}
		else {
			V = V + B;
		}
		day = day + 1;
	}*/
}