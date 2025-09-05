#include "TestMath.h"
#include<stdio.h>

//void printhelloworld()
//{
//	printf("helloworld/n");
//	return;
//}
//
//int sum(int test1, int test2) //int sum(int,int) ; 이선언을 정의했다.
//{
//	if (test1 == 1)
//	{
//		return 0;
//	}
//
//	return test1 + test2;
//}
//
//
//int multiply(int number1, int number2)
//{
//	return number1 * number2;
//}
//int TestRecurcive(int number)
//{
//	if (number < 2)
//	{
//		return 1;
//	}
//	printf("Recurcive : %d\n", number);
//	return TestRecurcive(number - 1);
//}
//
//void oldTales()
//{


#pragma region old

// 소스파일
// 주석(Comment):컴파일러가 무시하는 문장
// (프로그램에서 실행이 되지 않는 영향을 미치지 않는 부분)

/* 이건 다 주석이다 몇줄이
되더라고 굳이 쳌쳌안해도 됨*/


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

//* 컴파일러: 번역기(사람이 써놓은 코드를 기계가 알아듣게 번역해줌) 컴파일러는 종류별로 따로 있음 표준기능은 다 있음. >목적코드 생성*/
// \n 줄바꾸기
// \t 탭넣기
// \" 쌍따움표 한게
// \\ \ 찍기
// \r 캐리지 리턴(윈도우에는
// 변수(variabl)
/*
- 계산을 하기위한 기호
- 대입 연산자
  = 오른쪽에 있는 값을 왼쪽에 넣어라
  ex) a = b; // b에 있는 값을 a에 넣어라


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
			* while 반복횟수가 명확하지 않고 조건에 따라 반복할 때 사용
			* do-while 최소 한번은 무조건 실행해야 할 때 사용.( while과 거의 같음)
			*/

			/* continue
			 -반복문 안에서 사용
			 -continue를 만나면 그 이후의 코드는 스킵하고 반복을 진행
			 */
			 /*break
			 -반복문이나 switch문에서 반복문에서 벗어나거나 case를 종료시킨다*/

			 /*랜덤
			 - 무작위로 숫자를 선택하는 법
			 - c스타일
			   - rand () 함수 활용
			   - srand(time(0)); 시드값 설정

			 - c++ 스타일
				-#include <random>
				-c스타일보다 많은 기능을 제공한다.

			 */
			 /*
			 함수(function)
			  - 특정한 기능을 수행하는 코드블럭
			  - 선언을 하고 사용해야 한다.
				 -> 함수의 리턴타입: 함수가 끝났을 때 돌려 받을 값의 종류 ,함수의 이름, 함수의 파라메터를 설정해줘야 한다.
				 함수의 리턴타입: 함수가 끝났을 때 돌려 받을 값의 종류
				 함수의 이름: 함수를 호중(사용) 하고 싶을 때 부르는 이름
				 함수의 파라메터: 함수의 입력값. 0개 이상 들어갈 수 있다.
			 - 선언을 한 후에는 구현을 정의해야 한다.(함수의 실제 동작을 작성)
			  */
 /* 
 재귀호출(Recurcive Call)


*/

/*
템플릿 함수
- 데이터 타입에 관계 없이 동일한 로직을 여러 자료형에 대해 사용할 수 있게 해주는 c++의 기능
- 컴파일 타임에 실제 사용하는 곳이 있으면 해당타입으로 코드를 생성한다.
   -> 레더에 선언과 구현이 함께 있어야 한다.
  
*/


/*
인라인 함수
- 함수 호출문을 해당 함수의 실제 코드로 대체하는 함수
*/

/* 스코프
 - 변수, 함수, 객체 등이 유효하게 사용 될수 있는 범위
 - 일반적으로 선언된 중괄호 안쪽에서만 유효
 - 지역 변수 : 특정 함수 내에서 선언된 변수
 - 전역 변쉬 : 프로그램 전체에서 사용할 수 있는 변수
 */
	 
 // == 양변이 같다.


 
  // 4. 공포 게임의 인벤토리를 비트플래그로 표현하기
//	enum item
//	{
//		key = 1 << 0,
//		fuse = 1 << 1,
//		book = 1 << 2,
//		note = 1 << 3,
//	};
//	const int itemcoun = 4;
//	int inven = 0;
//
//	int playerselect = -1;
//	while (playerselect)
//	{
//
//
//		printf("어떤일을 할까요 [1:아이템 추가, 2아이템 삭제, 3: 종료]");
//		std::cin >> playerselect;
//		switch (playerselect)
//		{
//		case 1:
//		{
//			printf("어떤 아이템을 추가할까요?[0:열쇠, 1:퓨즈, 2:책, 3: 쪽지]");
//			int additem;
//			std::cin >> additem;
//			inven |= (1 << additem);
//		}
//		break;
//		case 2:
//		{
//			printf("어떤 아이템을 제거할까요?[0:열쇠, 1:퓨즈, 2:책, 3: 쪽지]");
//			int removeitem;
//			std::cin >> removeitem;
//			inven &= (~1 << removeitem);
//		}
//		break;
//		}
//
//		printf("인벤토리 :");
//		if ((inven & key) != 0)
//		{
//			printf("열쇠");
//		}
//		if ((inven & key) != 0)
//		{
//			printf("퓨즈");
//		}
//		if ((inven & key) != 0)
//		{
//			printf("책");
//		}
//		if ((inven & key) != 0)
//		{
//			printf("쪽지");
//		
//		break;
//	
//			continue;
//		}
//		//// 5. 주사위 게임 만들기
//	
//		return 0;
//	}
//}
////c++ 스타일
//std::random_device randomdevice;
//std::mt19937 generate(randomdevice());
//std::uniform_int_distribution<> uniformdis(1, 100);
//for (int i = 0; i < 10; i++)
//{
//	int number = uniformdis(generate);
//	printf("%d", number);
//	if (i<9)
//	{
//		printf(",");
//	} 
//	
//	printf("\n");
//}


//	printf("정규분포 : ");
//	std::normal_distribution<> nomaldis(80, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		float number = nomaldis(generate);
//		printf("%d", number);
//		if (i < 9)
//		{
//			printf(",");
//		}
//
//		printf("\n");
//	}
//
//
//	return 0;
//}



	// 엔트리 포인트(코드가 시작되는 곳)

	//int inputnumber = -1;
	//int sum = 0;
	//	while (inputnumber != 0)
	//{
	//	std::cin >> inputnumber;
	//	sum += inputnumber;
	//}
	//	printf("입력받은 숫자의 합 =%d", sum)

	//		/*int number = 1;
	//		int sum = 0;

	//		printf("숫자를 입력하시오.\n");
	//		while (number!=0)
	//		{
	//			std::cin >> number;
	//			sum = sum + number;
	//		}
	//		printf("%d\n", sum);*/


	//	int inputnumber2 = 0;
	//	printf("구구단 단수를 입력하세요 :")
	//	std::cin >> inputnumber2;
	//	for (int i = 0; i < 10; i++)
	//	{
	//		printf("%D * %D = %D \n",inputnumber, i, inputnumber * i)
	//	}

	///*int number2 = 0;

	//printf("숫자를입력하시오.\n");
	//std::cin >> number2;
	//for (int i = 1; i < 10; i++)
	//{
	//	printf(" %d", number2 * i);
	//}*/


	//	int inputnumber3 = 0;
	//	printf("최대치를 입력하세요 :");
	//	std::cin >> inputnumber3;
	//	inputnumber3++; // for문에서 조건에  <=를 쓰기 싫어서 1 더함.
	//	for (int i = 0; i < inputnumber3; i++)
	//	{
	//		if ((i % 2) == 1)
	//		{
	//			printf("%d는 홀수 입니다.\n",i)
	//		}
	//	}


	////int number3 = 0;
	////printf("숫자를 입력하세요\n");
	////std::cin >> number3;
	////while (number3 >= 0)
	////{
	////	std::cin >> number3;

	////}

		//const int minmumber = 1;
		//const int maxnumber = 100;
		//for (int i = 0; i < maxnumber; i++)
		//{
		//	if ((i % 7) == 0)
		//	{
		//		printf("%d는 7의 배수입니다.\n", i);

		//	}
		//}


	//	//5-1 입력을 받아야 한다.(inputnumber)
	//	//5-2 *표가 첫번째 층에서는 1개 두번째 층에서는 3개... 이런식으로 이어지니
	//    //     각층별로 (층수 *2 +1)만큼의 *을 찍어야 한다.
	//	// 5-3 " (공백) " 을 (총층수-(현재 층수+1)) 만큼 추가해야 한다.

		//int inputnumber = 0;
		//printf("최대치를 입력하세요 :");
		//std::cin >> inputnumber;

		//for (int i = 0; i < inputnumber; i++)
		//{
		//	for (int j = 0; j < inputnumber - (i + 1); j++)
		//	{
		//		printf(" ");
		//	}
		//	for (int k = 0; k < (i * 2 + 1); k++)
		//	{
		//		printf("*");
		//	}
		//	printf("\n");
		//}

////c스타일의 랜덤 사용법
	////srand(time(0))
	//srand(0);
	//for (int i = 0; i < 10; i++)
	//{
	//int ramdomnumber = rand();
	//printf("fosejatntwk : %d\n", ramdomnumber);
	//}
	//
	////0~5까지 숫자를 랜덤으로 구하고 싶다.
	//int randomnumber1 = rand() % 6;

	////1~6까지 숫자를 랜덤으로 구하고 싶다.
	//int randomnumber1 = rand() % 6 + 1;


 //1. 주사위 100만번 돌려 6나오는 횟수 카운팅 (기존)
	//int count6 = 0;
	//srand(time(0));

	//for (int i = 0; i < 100; i++)
	//{
	//	int randomnumber = rand() % 6 + 1;
	//	if(randomnumber == 6)
	//	{
	//		count6++;
	//	}
	//	
	//}
	//printf("%d\n", count6);

//1. 주사위(1~6) 100만번 돌려 6나오는 횟수 카운팅 (풀이)

	//const int testcount = 100;
	//	int hitcount = 0;
	//for (int i = 0; i < 100; i++) //100만번 돌려서
	//{
	//	int dice = rand() % 6 + 1; //주사위(1~6)를
	//	
	//	if (dice ==6) // 6일 몇번 나왔는지
	//	{
	//		hitcount++; // 카운팅 해서
	//	}
	//}
	//printf("6이 나온 횟수 = %d", hitcount); //출력

 /* 2. 가위 바위 보

	가위 바위 보
		-두명의 플레이어가 가위,바위,보 중 하나를 선택한다.
		-선택의 결과에 따라 승과 패가 나뉜다.
		-가위는 보를 이긴다.
		-바위는 가위를 이긴다.
		-보는 바위를 이긴다.
  */

  //enum Rockpaperscissors
  //{
  //	Rock,
  //	paper,
  //	scissors
  //};

  //int playerselect = -1;
  //while(playerselect != scissors
  //	&& playerselect != Rock
  //	&& playerselect != paper)
  //{
  //	printf("선택하세요. [0:가위,1:바위,2:보] :");
  //	std::cin >> playerselect;
  //}

	//enum Rockpaperscissors
	//{
	//	Rock,
	//	paper,
	//	scissors,
	//	numofrps
	//};
	//const int wingoal1 = 3;
	//int playerwincount = 0;
	//int comwincount = 0;
	//int playerselect = -1;
	//while (playerwincount < wingoal1 && comwincount < wingoal1)
	//{
	//	while (true)
	//	{
	//		printf("선택하세요. [0:바위,1:보,2:가위] :");
	//		std::cin >> playerselect;
	//		if (playerselect != scissors
	//			|| playerselect != Rock
	//			|| playerselect != paper)
	//		{
	//			break;
	//		}
	//		printf("잘못된 선택 다시 입력");
	//	}
	//	int comselect = rand() % numofrps; //컴퓨터 선택


	//	switch (playerselect)
	//	{
	//	case scissors:
	//		if (comselect == Rock)
	//		{
	//			printf("당신 가위를 선택했고 컴퓨터는 바위를 선택했습니다.\n");
	//			printf("졌습니다\n");
	//			comwincount++;
	//		}
	//		else if (comselect == scissors)
	//		{
	//			printf("당신 가위를 선택했고 컴퓨터는 가위를 선택했습니다.\n");
	//			printf("비겼습니다\n");

	//		}
	//		else if (comselect == paper)
	//		{
	//			printf("당신 가위를 선택했고 컴퓨터는 보를 선택했습니다.\n");
	//			printf("이겼습니다\n");
	//			playerselect++;
	//		}
	//		break;
	//	case Rock:
	//		if (comselect == Rock)
	//		{
	//			printf("당신 바위를 선택했고 컴퓨터는 가위를 선택했습니다.\n");
	//			printf("이겼습니다\n");
	//			playerselect++;
	//		}
	//		else if (comselect == scissors)
	//		{
	//			printf("당신 바위를 선택했고 컴퓨터는 바위를 선택했습니다.\n");
	//			printf("비겼습니다\n");
	//		}
	//		else if (comselect == paper)
	//		{
	//			printf("당신 바위를 선택했고 컴퓨터는 보를 선택했습니다.\n");
	//			printf("졌습니다\n");
	//			comwincount++;
	//		}
	//		break;
	//	case paper:
	//		if (comselect == Rock)
	//		{
	//			printf("당신 보를 선택했고 컴퓨터는 바위를 선택했습니다.\n");
	//			printf("이겼습니다\n");
	//			playerwincount++;
	//		}
	//		else if (comselect == scissors)
	//		{
	//			printf("당신 보를 선택했고 컴퓨터는 가위를 선택했습니다.\n");
	//			printf("졌습니다\n");
	//			comwincount++;
	//		}
	//		else if (comselect == paper)
	//		{
	//			printf("당신 보를 선택했고 컴퓨터는 보를 선택했습니다.\n");
	//			printf("비겼습니다\n");
	//		}
	//		break;

	//	default:
	//		printf("error!! 예상외의 사건 발생\n");
	//		break;

	//	}
	//}
	// 3.  업 다운(기존)

	/*  srand(time(0));
	  int randomnumber2 = rand() % 100 + 1;
	  int playnumber = 0;
	  int count = 0;
	  while (true)
	  {
		printf("숫자를 입력하세요\n");
		std::cin >> playnumber;
		if (randomnumber2 == playnumber)
		{
			printf("정답입니다\n");
			break;
		}
		else if (randomnumber2 > playnumber)
		{
			printf("UP\n");
			count++;
		}
		else if (randomnumber2 < playnumber)
		{
			printf("DOWN\n");
			count++;
		}
		if (count == 5)
		{
			printf("실패하셨습니다\n");
			break;
		}

	  }*/


	  //풀이
	  //int randomnumber = rand() % 100 +1;
	  //int playernumber = 0;
	  //int countdown = 5;

	  //while (countdown > 0)
	  //{

		 // printf("1~100 사이의 숫자를 예상해 보세요 :");
		 // std::cin >> playernumber;

		 // if (playernumber < randomnumber)
		 // {
			//  printf("더 큰수를 찍어보세요.\n");
		 // }
		 // else if (playernumber > randomnumber)
		 // {
			//  printf("저 작은 수를 찍어보세요");
		 // }
		 // else
		 // {
			//  printf("정답입니다.\n찾는수는 %d였습니다", randomnumber);
			//  break;
		 // }
		 // countdown--;
		 // printf("남은 횟수는 %d번 입니다.", countdown--);
	  //}
	  //if (countdown <= 0)
	  //{
		 // printf("실패했습니다.\n");
	  //}


//int inputnumber = -1;
//int sum = 0;
///while (true)
//{
//std::cin >> inputnumber;
//sum += inputnumber;
//if (inputnumber ==0)
//break




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

