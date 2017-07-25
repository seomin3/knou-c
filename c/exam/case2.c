/* 기본 입출력 헤더 파일을 기본 선행 처리기로 프로그램에 포함 */
#include <stdio.h>

/* 반환 자료형이 void, 매개변수를 받지 않는 main() 함수 선언 */
void main(void) {
    /* int형 변수 num을 선언, 0으로 초기화 */
    int num = 0;
    /* int형 변수 odd_total_num을 선언, 0으로 초기화 */
    int odd_total_num = 0;
    /* int형 변수 even_total_num을 선언, 0으로 초기화 */
    int even_total_num = 0;
    /* 함수 printf를 호출, 화면에 입력한 문자열이 출력되고 개행 */
    printf("1 ~ 100 사이 숫자를 입력하세요: \n");
    /* 함수 scanf를 호출, 키보드를 통해 정수형을 입력받아 num 변수에 저장 */
    scanf("%d", &num);

    /* num 변수에 저장된 값이 100보다 작거나 같은지 확인하여 명령문 실행
    만약 100보다 크다면 else 아래에 있는 명령문 실행 */
    if(num <= 100) {
      /* do while 루프 */
      do {
        /* num 변수를 2로 나누어 홀수이면 명령문 실행 */
        if(num % 2 == 1) {
          /* odd_total_num 변수에 num 변수의 값을 더함 */
          odd_total_num = odd_total_num + num;
        }
        /* num 변수를 2로 나누어 짝수이면 명령문 실행 */
        else if(num % 2 == 0) {
          /* even_total_num 변수에 num 변수의 값을 더함 */
          even_total_num = even_total_num + num;
        }
        /* num 변수의 값에 1을 빼고 저장 */
        num--;
      /* num 변수의 값이 1보다 크거나 같다면 do while 루프를 계속 실행 */
      } while(num >= 1);
    /* 함수 printf를 호출, odd_total_num에 저장되어 있는 값을 출력 */
    printf("홀수 값의 총 합계: %d\n", odd_total_num);
    /* 함수 printf를 호출, even_total_num에 저장되어 있는 값을 출력 */
    printf("짝수 값의 총 합계: %d\n", even_total_num);
    }
    /* if 조건문에 의해 num 변수에 저장된 값이 100보다 크면 실행되는 명령문 */
    else {
      /* 함수 printf를 호출, 화면에 입력한 문자열이 출력되고 개행 */
      printf("입력값이 100이 넘습니다\n");
    }
}
