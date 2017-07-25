/* 기본 입출력 헤더 파일을 기본 선행 처리기로 프로그램에 포함 */
#include <stdio.h>
/* 매크로 상수 yeer의 값을 2017으로 선언 */
#define year 2017

/* 반환 자료형이 void, 매개변수를 받지 않는 main() 함수 선언 */
void main() {
  /* 태어난 연도를 저장할 int형 변수 선언 */
  int age;
  /* 주민번호를 입력 받을 char형 배열 선언 */
  char num[12];
  /* 성별을 저장할 char형 배열 선언, 한글을 저장히기 때문에 배열의 길이는 2 */
  char gender[1];
  /* 함수 printf를 호출, 화면에 입력한 문자열이 출력 */
  printf("주민등록번호를 입력하시오: ");
  /* 함수 scanf를 호출, 키보드를 통해 문자열을 입력받아 num 배열에 저장 */
  scanf("%s", num);

  /* 배열 num에 저장된 0 ~ 6번째 문자를 123456-1@@@@@@ 형식으로 출력 */
  printf("주민등록번호: %c%c%c%c%c%c-%c@@@@@@\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6]);

  /* 첫번째 char에 10을 곱한 값과 두번째 char를 더해 태어난 연도를 int형 birthday 변수에 저장, char를 int로 형 변환은 아래 reference를 참고
  ref: https://stackoverflow.com/questions/439573/how-to-convert-a-single-char-into-an-int */
  int birthday = (num[0] - '0') * 10 + (num[1] -'0');

  /* 주민등록 번호 7째 자리가 1, 2, 5, 6이면 2000년 이전 출생 */
  if(num[6] == '1' || num[6] == '2' || num[6] == '5' || num[6] == '6') {
    /* 매크로 상수 year에 현재 나이와 1900을 뺀 값을 birthday 변수에 입력 */
    age = year - 1900 - birthday;
  /* 주민등록 번호 7째 자리가 3이나 4이면 2000년 이전 출생 */
  } else if(num[6] == '3' || num[6] == '4') {
    /* 매크로 상수 year에 현재 나이와 2000을 뺀 값을 birthday 변수에 입력 */
    age = year - 2000 - birthday;
  }
  /* 함수 printf를 호출, 화면에 age 변수의 값을 출력 */
  printf("나이: %d\n", age);

  /* 주민등록번호 7째 자리가 1, 3, 5이면 남자 */
  if(num[6] == '1' || num[6] == '3' || num[6] == '5') {
    /* gender 배열에 남을 저장 */
    char gender[] = "남";
  /* 주민등록번호 7째 자리가 2, 4, 6이면 여자 */
  } else if(num[6] == '2' || num[6] == '4' || num[6] == '6') {
    /* gender 배열에 여를 저장 */
    char gender[] = "여";
  }
  /* 함수 printf를 호출, 화면에 gender 배열의 값을 출력 */
  printf("성별: %s\n", gender );
}
