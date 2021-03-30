/*
배열을 선언하고 배열의 순서대로 값을 출력해주는 프로그램을 만드세요
알고리즘 정의: 배열을 사용하세요
입력: 4 5 2 5 3 8 2 5 3 7
출력: 4->5->2->5->3->8->2->5->3->7
*/

#include <stdio.h>

int arr[11];

int insert_value()
{
	int num, addarr;
	scanf("%d", &num);
	printf("%d 번째에 어떤 값을 넣으시겠어요?\n", num);
	
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
	
	printf("\n몇번째에 값을 넣으시겠어요?\n");
	
	insert_value();
	
	for(int k=0;k<11;k++)
	{
		printf("%d", arr[k]);
		if(k==10) break;
		printf("->");
	}
	
	return 0;
}
