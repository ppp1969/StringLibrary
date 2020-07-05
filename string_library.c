#include<stdio.h>
#include<string.h>

//strlen(const char *str); - string 길이 int값으로 반환
/* int main(){
		char arr[100] = "ABCDE";
		int box;

		box = strlen(arr);
		printf("%d",box);
		return 0;
	}
*/

//strcpy(char* dest, const char* src); - arr src의 값을 arr dest에 복붙.
//strcpy()함수의 리턴값은 arr dest의 포인터값이다.
/* int main(){
	char arr[100] = "abcdefg";
	char arr2[100] = "ABCDEFG";

	strcpy(arr,arr2);

	printf("%s",arr);
}
*/

//strcmp(const char *leftStr, const char *rightStr); - string 일치확인.
//string의 값이 일치하면 int형인 0리턴
/*int main(){
	char arr[100] = "ABC";
	char arr2[100] = "ABC";

	int box;

	box  = strcmp(arr,arr2);

	if(!box)	printf("Same");
	else		printf("Diff");
}
*/

//strcat(char *s1, const char *s2); - string 붙이기 s1의 끝지점에 s2를 붙임.
//strcat의 리턴값은 s1의 포인터값을 리턴한다.
/*int main(){
	char arr[100] = "ABC";
	char arr2[100] = "DEF";

	strcat(arr,arr2);

	printf("%s", arr);

	return 0;
}
*/

//strchr(const char *str, int c); - string내에서 인자 찾는 함수.
//strchr()의 리턴값은 찾으려는 값을 처음으로 발견한 index의 포인터를 리턴함. 없으면 NULL리턴.
int main(){
	char arr[100] = "ABCDEFG";
	char ch = 'D';
	
	char *pch;

	pch = strchr(arr,ch);

	printf("%s",pch);

	/* strchr 활용
	 1. index 값을 찾는 코드는 index = pch - str;
	 2. 하나의 값 뿐만 아니라 모든 값을 찾으려면 아래의 코드를 활용.
			pch = strchr(str,'s');
			while(pch!=NULL){
				printf("found at %d\n",pch - str + 1);
				pch = strchr(pch+1,'s');
			}
		반환되는 포인터 값으로 새로운 pch라는 서브배열을 생성.
		새로운 배열 내에서 값을 찾고 포인터값 반환. - 이를 반복하는 알고리즘.
	*/
}
