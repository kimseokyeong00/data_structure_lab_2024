#include<cstdio>

int findArrayMax(int score[], int n) //�Լ���, �Է� ����, ���� �߰� ���ھ�� ���� �Է��� �޾� �Լ� ����
{
	int tmp = score[0]; // tmp ���� �迭�� 0��°�� ����
	for (int i = 1; i < n; i++) { //�ݺ��� i�� �Ϸ� ����, i�� n���� ���������� n�� 1���ϰ� �Ʒ� ����
		if (score[i] > tmp) { // tmp���� 1, ���ھ�� 10 
			tmp = score[i];
		}
	}
	return tmp; //�Լ��� ����� �ִ� ��� ������ �ؾ���, ���� ����� ���ٸ� void function(void)�� �ؾ���
}

//���Լ�
void main()
{
	int score[5] = { 1, 11, 2, 4, 5 }; //�迭 ����
	int out; // out�̶�� �� ����
	out = findArrayMax(score, 5); // �Լ��� ���� �Է� 
	printf("result = %d", out);
}