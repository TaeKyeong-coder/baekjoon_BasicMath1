//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//전역변수
int N, sum;
int num1[10001], num2[10001];
string s1, s2, tmp;
vector<int> ans;


int main(void) {
	/* 
	//첫째 줄에 A와 B가 주어진다. (0 < A,B < 10^10000)
	//http://melonicedlatte.com/algorithm/2018/03/04/022437.html (c++자료형 크기 참고)

	unsigned long long A, B; //너무 커서 이걸로도 안 됨. => 문자열로 받기
	//예제 A :9,223,372,036,854,775,807
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
//참고 : https://cocoon1787.tistory.com/310