//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//��������
int N, sum;
int num1[10001], num2[10001];
string s1, s2, tmp;
vector<int> ans;


int main(void) {
	/* 
	//ù° �ٿ� A�� B�� �־�����. (0 < A,B < 10^10000)
	//http://melonicedlatte.com/algorithm/2018/03/04/022437.html (c++�ڷ��� ũ�� ����)

	unsigned long long A, B; //�ʹ� Ŀ�� �̰ɷε� �� ��. => ���ڿ��� �ޱ�
	//���� A :9,223,372,036,854,775,807
	cin >> A >> B;
	cout << A + B;
	*/

	cin >> s1 >> s2;

	if (s1.size() < s2.size()) {
		tmp = s1;
		s1 = s2;
		s2 = tmp;
	}

	for (int i = 0; i < s1.size(); i++) {
		num1[i + 1] = s1[i] - '0';
	}
	for (int i = 0; i < s2.size(); i++) {
		num2[i + 1 + (s1.size() - s2.size())] = s2[i] - '0';
	}

	for (int i = s1.size(); i > 0; i--) {
		sum = num1[i] + num2[i];
		if (sum >= 10) {
			num1[i - 1]++;
			sum = sum - 10;
		}
		ans.push_back(sum);
	}

	if (num1[0] != 0) {
		cout << 1;
	}
	for (int i = ans.size() - 1; i >= 0; i--) {
		cout << ans[i];
	}
}
//���� : https://cocoon1787.tistory.com/310