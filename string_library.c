#include<stdio.h>
#include<string.h>

//strlen(const char *str); - string ���� int������ ��ȯ
/* int main(){
		char arr[100] = "ABCDE";
		int box;

		box = strlen(arr);
		printf("%d",box);
		return 0;
	}
*/

//strcpy(char* dest, const char* src); - arr src�� ���� arr dest�� ����.
//strcpy()�Լ��� ���ϰ��� arr dest�� �����Ͱ��̴�.
/* int main(){
	char arr[100] = "abcdefg";
	char arr2[100] = "ABCDEFG";

	strcpy(arr,arr2);

	printf("%s",arr);
}
*/

//strcmp(const char *leftStr, const char *rightStr); - string ��ġȮ��.
//string�� ���� ��ġ�ϸ� int���� 0����
/*int main(){
	char arr[100] = "ABC";
	char arr2[100] = "ABC";

	int box;

	box  = strcmp(arr,arr2);

	if(!box)	printf("Same");
	else		printf("Diff");
}
*/

//strcat(char *s1, const char *s2); - string ���̱� s1�� �������� s2�� ����.
//strcat�� ���ϰ��� s1�� �����Ͱ��� �����Ѵ�.
/*int main(){
	char arr[100] = "ABC";
	char arr2[100] = "DEF";

	strcat(arr,arr2);

	printf("%s", arr);

	return 0;
}
*/

//strchr(const char *str, int c); - string������ ���� ã�� �Լ�.
//strchr()�� ���ϰ��� ã������ ���� ó������ �߰��� index�� �����͸� ������. ������ NULL����.
int main(){
	char arr[100] = "ABCDEFG";
	char ch = 'D';
	
	char *pch;

	pch = strchr(arr,ch);

	printf("%s",pch);

	/* strchr Ȱ��
	 1. index ���� ã�� �ڵ�� index = pch - str;
	 2. �ϳ��� �� �Ӹ� �ƴ϶� ��� ���� ã������ �Ʒ��� �ڵ带 Ȱ��.
			pch = strchr(str,'s');
			while(pch!=NULL){
				printf("found at %d\n",pch - str + 1);
				pch = strchr(pch+1,'s');
			}
		��ȯ�Ǵ� ������ ������ ���ο� pch��� ����迭�� ����.
		���ο� �迭 ������ ���� ã�� �����Ͱ� ��ȯ. - �̸� �ݺ��ϴ� �˰���.
	*/
}
