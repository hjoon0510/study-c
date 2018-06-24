// how to implement qsort and bsearch with stdlib.h"
// book:  page 207, 검색과 정렬, "C가 보이는 그림책" 
// 2018.06.23

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
// void형 포인터를 int 포인터로 캐스팅해서 그곳에 있는 값을 구한다.
int x =  *((int *)a);
int y =  *((int *)b);

// 오름차순으로 정렬하기 위하여 비교함수를 정의한다.
if      (x>y) return  1;
else if (x<y) return -1;
else return 0;
}


int main(void){
 int nums[] = { 5,8,3,7,4,2,9,1,6,10};
 int a = 7; //search data with binary search tree
 int *p;
 qsort(nums,10, sizeof(int), compare);
 // man qsort 
 // 배열의 시작주소, 배열의요소수, 요소 하나의 크기, 비교함수 
 printf("After doing qsort algorithm:\n");
 for (int i=0; i<10 ; i++) printf("%d ", nums[i]);

 printf ("\n");
 printf ("Searching value %d\n", a);
 p = (int *) bsearch(&a, nums, 10, sizeof(int), compare);
 // man bsearch 
 // 검색할 데이터 , 배열의 시작주소, 배열의요소수, 요소 하나의 크기, 비교함수 

 if (p == NULL) printf("%d is not founded.\n", a);
 else           printf("%d is founded in nums [%d]. \n", a, (p-nums));

 return 0;
}

