/*
�迭�� �����ϰ� �迭�� ������� ���� ������ִ� ���α׷��� ���弼��
�˰��� ����: �迭�� ����ϼ���
�Է�: 4 5 2 5 3 8 2 5 3 7
���: 4->5->2->5->3->8->2->5->3->7
*/

#include <stdio.h>

int arr[11];

int insert_value()
{
	int num, addarr;
	scanf("%d", &num);
	printf("%d ��°�� � ���� �����ðھ��?\n", num);
	
	for(int l=9;l>=(num-1);l--)
	{
		arr[(l+1)]=arr[l];
	}
	
	scanf("%d", &addarr);
	arr[(num-1)] = addarr;
	
	return 0;
}

int main()
{
	
	for(int i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int j=0;j<10;j++)
	{
		printf("%d", arr[j]);
		if(j==9) break;
		printf("->");
	}
	
	printf("\n���°�� ���� �����ðھ��?\n");
	
	insert_value();
	
	for(int k=0;k<11;k++)
	{
		printf("%d", arr[k]);
		if(k==10) break;
		printf("->");
	}
	
	return 0;
}
