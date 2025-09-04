#pragma region 단축키



// LEI_WULONG.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 소스파일
// 주석(Comment):컴파일러가 무시하는 문장
// (프로그램에서 실행이 되지 않는 영향을 미치지 않는 부분)

/* 이건 다 주석이다 몇줄이
되더라고 굳이 쳌쳌안해도 됨*/

//단축키

// ctr+ 위아래 는 페이지 업다운
// ctr+ 양옆 단어단위로
// 컨트롤+D 는 한줄 복사 추가			 
// SHIFT + DELETE 는 한줄 삭제		 
// SHIFT + 화살표 는 블럭잡기		   
// ALT + SHIFT + 화살표 는 세로블럭잡기 
// ctr + space 는 자동환성기능 (인텔리센스) 창 띄우기
// art + 방향키 위아래 는 줄바꾸기
// crt + k,c 는 전체 주석
// f5는 프로그램 디버그 
// clt+ bb 는 프로젝트 빌드
// using namespace std;
// c++ 메인 함수는 하나만 존재해야함
// {}는 항상 쌍으로 열었으면 닫아야함(일치하는 토큰을 찾을 수 없습니다 라는 오류설명)
// 오류가 이해가 안가면 코드 번호를 누르면 친절하게 알려줌
// 빌드 : 실행파일 생성하기
// 리빌드: 전체 다시 빌드하기 (정리+빌드)
// 헤더는 순서를 신경써서 정리해야함.
// 변수 이름은 직관적인 것으로 영어로 첫글자는 대문자!!
#pragma endregion


/* 컴파일러: 번역기(사람이 써놓은 코드를 기계가 알아듣게 번역해줌) 컴파일러는 종류별로 따로 있음 표준기능은 다 있음. >목적코드 생성*/

#pragma region 이스케이프 시퀀스

// \n 줄바꾸기
// \t 탭넣기
// \" 쌍따움표 한게
// \\ \ 찍기
// \r 캐리지 리턴(윈도우에는 의미없음 리눅스에서 중요)
// 변수(variabl)
#pragma endregion

#pragma region 연산자(operator),제어문,반복문



/*
- 계산을 하기위한 기호
- 대입 연산자
  = 오른쪽에 있는 값을 왼쪽에 넣어라
  a = b; // b에 있는 값을 a에 넣어라
  
- 산술연산자
   사칙연산
   +(더하기) -(빼기) *(곱하기) /(나누기) %(나머지 연산)
   a = 5%3;
   a 에는 2가 들어간다.(5를 3으로 나누었을 때 나머지가 2)

- 복합대입연산자
  줄여쓰기용
  a += b;   //아래와 같은 코드
  a = a + b;

- 증감 연산자

		*/



/*이진수(binary)
 - 컴퓨터는 0과1만 알수 있기 때문에 기본적으로 이진수를 사용
int number = 10; //사람이 알아보기 위해 10진수로 값을 대입
                 //실제 메모리에는 0000 0000 0000 0000 0000 0000 0000 1010  

ex) 13 = 2^3 *1 + 2^2 * 1 + 2^1 * 0 + 2^0 * 1 =1101
				 
/* 데이터타입
   int: 정수형(소수점 무시) 32 bit 한계를 넘어서면 오버플로우 발생(범위는 -21억+21억)
   float: 실수형(소수점이 있는것).32bit. 태생적으로 오차가 있는 타입. 대략 소수점 7자리부터 오차발생
   double: 실수형.64bit. 대략 소수점 15자리부터 오차발생
   bool:불리언. true/false만 저장
   char: 캐릭터. 글자하나를 저장하는 타입. 
         char alpha = 'a'; // 글자 하나만 저장
		 char alpha2 = 64; // 숫자로도 저장가능. 아스키코드표 참고
   std::string : 스트링. 문자열을 쉽게 다룰 수 있는 자료형
     문자열: 글자 여러개가 연결된 것
   std::string str = "Hello World"; 
   /*
   
   /*상수(constant)
   - 변하지 않는 값(수) ,변수는 변화하는 값
   - 코드의 안정성과 기독성을 높여준다.
   (매직넘버 회피에 도움)
   (매크로와는 달리 타입체크가 가능하다)
   /*
   
   /*비교연산자
    - 비교를 하는 연산자. 참이냐 거짓이냐가 결과로 나온다.
	a=10;
	b=20;
	bool result = a > b; // a가 b보다 크냐? 거짓(false)이니까 result = false

	a=20;
	b=10;
	bool result = a>b // b가 a보다 크다. 참(true) result = true


	int a = 50;
	int b = 50;
    bool result = a == b; // a와 b가 같냐? 참(true) result = true
 
 // 실수형 자료형은 비교 연산자를 사용하면 안된다?
    정확하게 얘기하면  "값이 같은지를 비교하는 ==



	a > b // a가 b보다 크다
   /*제어문
   - 프로그램의 흐름을 제어하는 문(statement)

   - 조건문 : 조건에 따라 프로그램의 흐름을 변경하는 문
	  -if, else, else if, switch

   - 반복문: 일정 조건에 따라 코드를 반복하는 문

   /* 논리 연산자
    - bool 값을 양변에 받아 bool로 된 결과를 낸다.
	&& (and):&&의 양	쪽이 true면 결과가 true. 그 외에는 false
	|| (or):||의 양쪽 중 하나만 true여도 결과가 true. 둘다 false일 때만 false
	! (not):!뒤의 bool이 true면 false, false면 true
   */
	/* 비트 연산자
	 & (and) 두 비트가 모두 1이면 1, 아니면 0
	   특정 비트가 세팅이 되어 있는지 확이하는데 사용(플래그 검사)
	   ex) int a = 10;    //0b1010
	       int b = 9;     //0b1001
		   int c = a % b; //0b1000

	 | (or) 두 비트가 하나라도 1이면 1, 둘다 0이면 0
	   특정 비트에 플래그를 세팅하고 싶을 때(플래그 설정)
    ex) int a = 10;     //0b1010
	    int b = 9;      //0b1001
	    int c = a % b;  //0b1011

	 ^ (xor) 두 비트가 서로 다르면 1, 같으면 0
	   특정 비트를 토글하고 싶을 때 사용
	ex) int a = 10;     //0b1010
		int b = 9;      //0b1001
		int c = a % b;  //0b0011

	 ~ (not) 비트값을 반전 시킨다. 0>1, 1>0
	 ex) int a = 10;     //0b1010
	     a= ~a;          //0b1010

	 << (Left Shift) 비트들을 왼쪽으로 이동
	    한번 움직일 때마다 수가 두배가 된다.
	 ex) int a = 7;     //0b0111
	     a =a << 1;     //0b1110

	 >> (Rightt Shift) 비트들을 오른쪽으로 이동
	    한번 움직일 때마다 수가 절반이 된다.
	 ex) int a = 7;     //0b0111
		 a =a << 1;     //0b0011

	 */



/* 반복문
* - 제어문 중의 하나
* - 특정코드 블록을 조건에 따라 여러번 반복해서 실행할 수 있게 해주는 문
* for 반복횟수가 명확할 때 좋음
* while 반복획수가 명확하지 않고 조건에 따라 반복할 때 사용
* do-while 최소 한번은 무조건 실행해야 할 때 사용.( while과 거의 같음)
*/

// == 양변이 같다.
#pragma endregion

#include <iostream> // 입출력 관련(cout)
#include <cstdio>

#pragma region 실습1



	///std::cout << "HelloWoreld"; // c++ 출력방법
	// number 라는 이름을 가진 int변수를 선언하고 거기에 0을 대입한다.

	//int number; //변수선언
	//number = 0; //변수에 값을 대입

	//// int : 정수형(소수점이 없는 숫자, 5,10,-2,0,66...)
	//number = 5.3; // number 에는 5가 저장된다. 소수점 날림
	//number = 5 / 2; // number에는 2가 저장된다. 위와 동일

	//int number1 = 0;
	//std::cin >> number;   //숫자를 하나 입력 받기
	//printf("무엇 : %d\n", number);

	//int number2 = 0;
	//std::cin >> number;   //숫자를 하나 입력 받기
	//printf("무엇 : %d\n", number);


	//printf("숫자 1을 입력하시오 : ");
	//std::cin >> number1;
	//printf("숫자 2를 입력하시오 : ");
	//std::cin >> number2;
	//int number3 = number1 + number2;
	//printf("두 숫자의 합은 %d입니다.", number3);

	//int a = 0;
	//std::cin >> a;   //숫자를 하나 입력 받기

	//int b = 0;
	//std::cin >> b;   //숫자를 하나 입력 받기

	//int c = a;
	//
	//a = b;
	//b = c;

	/*printf("%d,%d", a, b);*/



	//int a = 0;
	//std::cin >> a;   //숫자를 하나 입력 받기

	//int b = 0;
	//std::cin >> b;   //숫자를 하나 입력 받기

	//printf("%d", a * b);

	//int a = 153;
	//std::cin >> a;   //숫자를 하나 입력 받기

	//int b = 15;
	//std::cin >> b;   //숫자를 하나 입력 받기

	//int devide=a/b, mod; // devide = 10
	//mod = a - b * devide;

	//printf("%d", mod);

//	int time;
//	std::cin >> time;   //숫자를 하나 입력 받기
//
//	int hour, min, sec;
//
//	hour = time / 3600;
//	time -= hour * 3600; // time = time - hour
//	min = time / 60;
//	time -= min  * 60;
//	sec = time;
//
//
//	printf("%d,%d,%d", hour,min,sec);
//


//#include <iostream> // 입출력 관련(cout)
//#include <cstdio>
//int main() // 엔트리 포인트(코드가 시작되는 곳)
	//float number1 = 10.0f; // 10이라는 float 타입의 값을 float인 number1에 넣기 (f를 붙여야 float타입으로 인식)
	//float number2 = 15.0; //15라는 double 타입의 값을 float인 number2에 넣기
	//std::cin >> number1 >> number2; 
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);


 //실습: 원의 반지름을 입력 받고 넓이 구하기 
	
	//const float pi = 3.141592f; //상수로 선언하고 정의
	//float pi = 3.14f;
	//float r = 0.0f;
	//std::cin >> r;
	//printf("넓이는 %f", pi * r * r);

	//int square = 0;
	//printtf("정사각형의 한변을 입력하세여 :");
	//std::cin >> square;
	//printf("정사각형의 넓이는 %d", square * square);
	///오버플로우 발생할 수 있음

	/*float a = 123.0f;
	float b = 0.0f;
	std::cin >> b;
	b = b * 123.0f;*/

   //if: 소괄호 안이 true면 중괄호 안의 코드를 실행하라
	// 내가 특정조건을 만족할 때만 어떤 코드를 실행하고 싶을 때 사용.


	//int a = 10;
	//int b = 0;
	//printf("a는 10\nb를 입력하세요 :");
	//std::cin >> b;

	//if (true)
	//{
	//	printf("if가 성공했다.\n");
	//	printf("b가 %d라서 a가 더 크다.",b);



	//	// if- else: 이거 아니면 저거일 때 사용.
	//	if(a > b)
	//	{
	//		printf("a가 b보다 크다.");
	//	}
	//	else
	//	{
	//		printf("a가 b보다 작거나 같다.");
	//	}
	//}

	//bool result = a == b; //f9는 브레이크 포인트 설정/ 해제


	////float 타입을  ==로 비교할 때 반드시 안래와 같이 진행해야함.
	////float epsilon = 0.001f;

	////a < (b + epsilon);
	////a > (b - epsilon);
	//if (a < b)
	//{
	//	//f
	//}


	//else if (b < 70)
	//{
	//	//d
	//}
	//else if (b < 80)
	//{
	//	//c
	//}
	//else if (b < 90)
	//{
	//	
	//}



	//int a = 0;
	//std::cin >> a;   //숫자를 하나 입력 받기
	//switch (a)
	//{
	//case 1:
	//	printf("1이다. \n");
	//	break;
	//case 3:
	//	printf("3이다. \n");
	//	break;
	//case 5:
	//	printf("5이다. \n");
	//	break;
	//default:
	//	printf("1,2,5가 아니다. \n");
	//	break;
	//}

	//int a = 10;
	//int b = 20;
	//int c = 00;
	//if (a > b)
	//{
	//	c = a * 2 + b;
	//}
	//else
	//{
	//	c = a + b * 2;
	//}
	//c = (a > b) ?(a*2+b) : (a+b*2); //삼항연산자
#pragma endregion



#include <iostream> // 입출력 관련(cout)
#include<cstdio>


int main(){ // 엔트리 포인트(코드가 시작되는 곳)
	//int a = 0; //변수는 사용하기 전에 선언한다.
	//printf("숫자를 입력하세여."); // 1번
	//std::cin >> a;
	//if (a > 0)
	//{
	//	printf("양수입니다\n");
	//}
	//else if (a<0)
	//{
	//	printf("음수입니다\n");
	//}
	//else
	//{
	//	printf("0입니다\n");
	//}

	//int b = 0;
	//printf("홀짝을 알고 싶으면 숫자를 입력하세여."); // 2번
	//std::cin >> b;
	//if (b % 2 == 0)
	//{
	//	printf("짝수입니다.\n");
	//}
	//else 
	//{
	//	printf("홀수입니다.\n");
	//}

	//printf("숫자를 입력하세요."); // 3번
	//std::cin >> a;
	//std::cin >> b;
	//
	//if (a > b)
	//{
	//	printf("a가 더 큽니다.\n");
	//}

	//else if (a < b)
	//{
	//	printf("b가 더 큽니다.\n");
	//}

	//else
	//{
	//	printf("a 와 b는 같습니다.\n");
	//}

 //   const unsigned int Limitage = 5;      // 올바른 선언
	//const float Limitheight = 120.0f;
	//unsigned int age = 0; //unsigned int: 양수만  저장한다.
	//float height = 0; //암시적 변환(대충 변환해주는 것, 보통 표현 범위가 큰쪽으로 변경됨)
	//printf("키와 나이를 입력하세여.\n"); // 4번
	//std::cin >> age;
	//std::cin >> height;

	//if (Limitage >= 120 && Limitheight >= 6)
	//{
	//	printf(" 타세요.\n");
	//}
	//else
	//{
	//	printf("타지마세요.\n");
	//}

	//printf("점수를 입력하세요.\n"); // 5번
	//std::cin >> a;
	//if (a>=90)
	//{
	//	printf("A");
	//}
	//else if (a>=80)
	//{
	//	printf("B");
	//}
	//else if (a >= 70)
	//{
	//	printf("C");
	//}
	//else if (a >= 60)
	//{
	//	printf("D");
	//}
	//else
	//{
	//	printf("F");
	//}

	//int c = 0;

	//printf("점수를 3개 입력하세요.\n"); // 6번
	//std::cin >> a;
	//std::cin >> b;
	//std::cin >> c;

	//if (((a + b + c) / 3.0f >= 60) && (a >= 40 && b >= 40 && c >= 40)) //괄호는 구분하기 편하게
	//{
	//	printf("합격.");
	//}
	//else
	//{
	//	printf("불합격");
	//}
		//int flag = 0b1010;  
	//// 0b0001 = 왼쪽 키가 눌러졌다.
	//// 0b0010 = 오른쪽 키가 눌러졌다.
	//// 0b0100 = 위쪽 키가 눌러졌다.
	//// 0b1000 = 아래쪽 키가 눌러졌다.

	//if ((flag & 0b0010) != 0b0000)
	//{
	//	// 오른쪽 키가 눌러져 있다.
	//}
	//else
	//{
	//	// 오른쪽 키가 눌러져 있다.
	//}

	//// int flag = 0b1010;
	//flag = flag | 0b0001; //flag = 0b1011

	//// int flag       = 0b1010;
	//int result = flag ^ 0b0001; // 결과 = 0b1011;
	//result = 0b1011 ^ 0b0001; // 결과 = 0b1010

	//flag = 0b1010;
	//int test = 0b0001;
	//test = ~test; // 왼쪽 키를 제외한 나머지 모두 세팅

	//// enum 상수들에게 사람이 알아보기 좋은 이름을 붙여 놓은 것
	//enum key
	//{
	//	Up = 1 << 0   //0b0001
	//	down, =1 << 1  //0b0010
	//	left, =1 << 2, //0b1000
	//	right = 1 << 3  //0b1000
	//};

	// if ((flag & up) != 0)
	// {

	// }

	// int testflag = up;


	//int number = 0;
	//std::cin >> number;
	//printf("테스트할 수 입력")
	//	if ((number & 0b0001) != 0)// 0b0001 이나 1이나 같다)
	//	{
	//		printf("홀수를 입력했습니다..\n)")';
	//	}
	//	else
	//	{
	//		printf("Wkrtnfmf dlqfurgoTdma\n)";
	//	}

	//// hello world 10번 찍기(for)
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("helloworld : %d\n :", i);
	//}


	//int count = 0;
	//while (count % 3) != 0) // whilw()의 조건이 참이면 코드 블럭 실행
	//{
	//	printf("helloworld while: %d\n", count);
	//	count++;
	//}


	//int count = 0;
	//do
	//{ 
	//    printf("helloworld while: %d\n", count);
	//	count++;
	//}while (count % 3) != 0) // whilw()의 조건이 참이면 코드 블럭 실행
	//{


	// 간단 실습
	// 1. 0을 입력받을 때 까지 입력을 계속 받고 0이 입력되면 입력받은 숫자의 합을 출력하기
	// while 이랑 do-while 모두 해보기
	// 2. 입력받은 숫자의 구구단 출력해보기
	//3. 숫자를 하나 입력 받고 입력박은 수까지 있는 숫자 중 홀수만 출력하기.
	//4. 1~100사이의 숫자 중에 7의 배수만 출력하기
	//5. 입력받은 숫자만큼의 층을 가진 피라미드 그리기
	// 3을 입력받았으면 아래와 같이 출력하기
	  //       *
			//***
		 //  *****

//	int number = 0
//		std::cin >> number;
//	printf("숫자를 입력하시오")
//		int count = 0;
//		while (count % 3) != 0) // whilw()의 조건이 참이면 코드 블럭 실행
//	printf("helloworld while: %d\n", count);
//	count++;
//}

	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

