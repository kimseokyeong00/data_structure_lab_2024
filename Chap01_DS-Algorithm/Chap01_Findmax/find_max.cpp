#include<cstdio>

int findArrayMax(int score[], int n) //함수명, 입력 형태, 인자 추가 스코어와 개수 입력을 받아 함수 실행
{
	int tmp = score[0]; // tmp 값을 배열의 0번째로 설정
	for (int i = 1; i < n; i++) { //반복문 i는 일로 설정, i가 n보다 작을때까지 n을 1더하고 아래 실행
		if (score[i] > tmp) { // tmp에는 1, 스코어에는 10 
			tmp = score[i];
		}
	}
	return tmp; //함수에 출력이 있는 경우 리턴을 해야함, 만약 출력이 없다면 void function(void)로 해야함
}

//주함수
void main()
{
	int score[5] = { 1, 11, 2, 4, 5 }; //배열 생성
	int out; // out이라는 값 생성
	out = findArrayMax(score, 5); // 함수에 값을 입력 
	printf("result = %d", out);
}