#include <stdio.h>

int main(void){
   
//1차원 배열-----------------------------------------------------------------

    printf("[1d-array]\n");
    // 4bit integer 3개짜리 배열 선언
    int arr[3] = {1,2,3};


    printf("------------------------------------\n");
    printf("::: p = arr :::\n");
    printf("------------------------------------\n");
    // arr은 arr[0]의 주소
    // arr을 할당받으러면 arr[0]과 동일한 사이즈 int를 가리키는 포인터 int *p 필요
    int *p;
    p = arr;

    printf("arr[1] : %d\n", arr[1]);
    // arr 자체를 할당했으므로 포인터로 배열 내 값 즉시 조회 가능
    printf("*(p+1) : %d\n", *(p+1));
    // 혹은 [] 연산자 사용
    printf("p[1] : %d\n", p[1]);

    printf("------------------------------------\n");
    printf("::: p1 = &arr :::\n");
    printf("------------------------------------\n");
    // &arr은 arr의 주소
    // &arr을 할당받으러면 arr과 동일한 사이즈 int[3]를 가리키는 포인터 int (*p)[3] 필요
    int (*p1)[3];
    p1 = &arr;

    printf("arr[1] : %d\n", arr[1]);
    // 주소를 할당했으므로 해당 주소에 먼저 접근(*)하고, 접근한 '배열'에 포인터로 배열 내 값 조회
    printf("*(*p1+1) : %d\n", *(*p1+1));
    // 혹은 [] 연산자 사용
    printf("(*p1)[1] : %d\n", (*p1)[1]);

    printf("\n");

//2차원 배열-------------------------------------------------------------------

    printf("[2d-array]\n");
    // 크기 4의 int 3개짜리 배열
    int arr2[2][3] = {{1,2,3}, {4,5,6}};

    printf("------------------------------------\n");
    printf("::: p2 = arr2 :::\n");
    printf("------------------------------------\n");
    // arr2는 arr2[0]의 주소
    // arr2를 할당받으려면 arr2[0]과 동일한 사이즈 int[3]을 가리키는 포인터 int (*p)[3] 필요
    int (*p2)[3];
    p2 = arr2;

    printf("arr2[1][1] : %d\n", arr2[1][1]);
    // 배열 자체를 할당했으므로 포인터로 배열 내 값 조회 가능
    printf("*(*(p2+1)+1) : %d\n", *(*(p2+1)+1));
    // 혹은 [] 연산자 사용
    printf("p2[1][1] : %d\n", p2[1][1]);

    printf("------------------------------------\n");
    printf("::: p3 = &arr2 :::\n");
    printf("------------------------------------\n");
    // &arr2는 arr2의 주소
    // &arr2를 할당받으려면 arr2와 동일한 사이즈 int[2][3]을 가리키는 포인터 int (*p)[2][3] 필요
    int (*p3)[2][3];
    p3 = &arr2;

    printf("arr2[1][1] : %d\n", arr2[1][1]);
    // 주소를 할당했으므로 해당 주소에 먼저 접근(*)하고, 접근한 '배열'에 포인터로 배열 내 값 조회
    printf("*(*((*p3)+1)+1) : %d\n ",*(*((*p3)+1))+1);
    // 혹은 [] 연산자 사용
    printf("(*p3)[0][0] : %d\n", (*p3)[1][1]);

    return 0;

    
}
