#include "TestMath.h"
#include<stdio.h>

//void printhelloworld()
//{
//	printf("helloworld/n");
//	return;
//}
//
//int sum(int test1, int test2) //int sum(int,int) ; �̼����� �����ߴ�.
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

// �ҽ�����
// �ּ�(Comment):�����Ϸ��� �����ϴ� ����
// (���α׷����� ������ ���� �ʴ� ������ ��ġ�� �ʴ� �κ�)

/* �̰� �� �ּ��̴� ������
�Ǵ���� ���� �n�n���ص� ��*/


// ctr+ ���Ʒ� �� ������ ���ٿ�
// ctr+ �翷 �ܾ������
// ��Ʈ��+D �� ���� ���� �߰�			 
// SHIFT + DELETE �� ���� ����		 
// SHIFT + ȭ��ǥ �� �����		   
// ALT + SHIFT + ȭ��ǥ �� ���κ���� 
// ctr + space �� �ڵ�ȯ����� (���ڸ�����) â ����
// art + ����Ű ���Ʒ� �� �ٹٲٱ�
// crt + k,c �� ��ü �ּ�
// f5�� ���α׷� ����� 
// clt+ bb �� ������Ʈ ����
// using namespace std;
// c++ ���� �Լ��� �ϳ��� �����ؾ���
// {}�� �׻� ������ �������� �ݾƾ���(��ġ�ϴ� ��ū�� ã�� �� �����ϴ� ��� ��������)
// ������ ���ذ� �Ȱ��� �ڵ� ��ȣ�� ������ ģ���ϰ� �˷���
// ���� : �������� �����ϱ�
// ������: ��ü �ٽ� �����ϱ� (����+����)
// ����� ������ �Ű�Ἥ �����ؾ���.
// ���� �̸��� �������� ������ ����� ù���ڴ� �빮��!!

//* �����Ϸ�: ������(����� ����� �ڵ带 ��谡 �˾Ƶ�� ��������) �����Ϸ��� �������� ���� ���� ǥ�ر���� �� ����. >�����ڵ� ����*/
// \n �ٹٲٱ�
// \t �ǳֱ�
// \" �ֵ���ǥ �Ѱ�
// \\ \ ���
// \r ĳ���� ����(�����쿡��
// ����(variabl)
/*
- ����� �ϱ����� ��ȣ
- ���� ������
  = �����ʿ� �ִ� ���� ���ʿ� �־��
  ex) a = b; // b�� �ִ� ���� a�� �־��


- ���������
   ��Ģ����
   +(���ϱ�) -(����) *(���ϱ�) /(������) %(������ ����)
   a = 5%3;
   a ���� 2�� ����.(5�� 3���� �������� �� �������� 2)

- ���մ��Կ�����
  �ٿ������
  a += b;   //�Ʒ��� ���� �ڵ�
  a = a + b;

- ���� ������

		*/



		/*������(binary)
		 - ��ǻ�ʹ� 0��1�� �˼� �ֱ� ������ �⺻������ �������� ���
		int number = 10; //����� �˾ƺ��� ���� 10������ ���� ����
						 //���� �޸𸮿��� 0000 0000 0000 0000 0000 0000 0000 1010

		ex) 13 = 2^3 *1 + 2^2 * 1 + 2^1 * 0 + 2^0 * 1 =1101

		/* ������Ÿ��
		   int: ������(�Ҽ��� ����) 32 bit �Ѱ踦 �Ѿ�� �����÷ο� �߻�(������ -21��+21��)
		   float: �Ǽ���(�Ҽ����� �ִ°�).32bit. �»������� ������ �ִ� Ÿ��. �뷫 �Ҽ��� 7�ڸ����� �����߻�
		   double: �Ǽ���.64bit. �뷫 �Ҽ��� 15�ڸ����� �����߻�
		   bool:�Ҹ���. true/false�� ����
		   char: ĳ����. �����ϳ��� �����ϴ� Ÿ��.
				 char alpha = 'a'; // ���� �ϳ��� ����
				 char alpha2 = 64; // ���ڷε� ���尡��. �ƽ�Ű�ڵ�ǥ ����
		   std::string : ��Ʈ��. ���ڿ��� ���� �ٷ� �� �ִ� �ڷ���
			 ���ڿ�: ���� �������� ����� ��
		   std::string str = "Hello World";
		   /*

		   /*���(constant)
		   - ������ �ʴ� ��(��) ,������ ��ȭ�ϴ� ��
		   - �ڵ��� �������� �⵶���� �����ش�.
		   (�����ѹ� ȸ�ǿ� ����)
		   (��ũ�οʹ� �޸� Ÿ��üũ�� �����ϴ�)
		   /*

		   /*�񱳿�����
			- �񱳸� �ϴ� ������. ���̳� �����̳İ� ����� ���´�.
			a=10;
			b=20;
			bool result = a > b; // a�� b���� ũ��? ����(false)�̴ϱ� result = false

			a=20;
			b=10;
			bool result = a>b // b�� a���� ũ��. ��(true) result = true


			int a = 50;
			int b = 50;
			bool result = a == b; // a�� b�� ����? ��(true) result = true

		 // �Ǽ��� �ڷ����� �� �����ڸ� ����ϸ� �ȵȴ�?
			��Ȯ�ϰ� ����ϸ�  "���� �������� ���ϴ� ==



			a > b // a�� b���� ũ��
		   /*���
		   - ���α׷��� �帧�� �����ϴ� ��(statement)

		   - ���ǹ� : ���ǿ� ���� ���α׷��� �帧�� �����ϴ� ��
			  -if, else, else if, switch

		   - �ݺ���: ���� ���ǿ� ���� �ڵ带 �ݺ��ϴ� ��

		   /* �� ������
			- bool ���� �纯�� �޾� bool�� �� ����� ����.
			&& (and):&&�� ��	���� true�� ����� true. �� �ܿ��� false
			|| (or):||�� ���� �� �ϳ��� true���� ����� true. �Ѵ� false�� ���� false
			! (not):!���� bool�� true�� false, false�� true
		   */
		   /* ��Ʈ ������
			& (and) �� ��Ʈ�� ��� 1�̸� 1, �ƴϸ� 0
			  Ư�� ��Ʈ�� ������ �Ǿ� �ִ��� Ȯ���ϴµ� ���(�÷��� �˻�)
			  ex) int a = 10;    //0b1010
				  int b = 9;     //0b1001
				  int c = a % b; //0b1000

			| (or) �� ��Ʈ�� �ϳ��� 1�̸� 1, �Ѵ� 0�̸� 0
			  Ư�� ��Ʈ�� �÷��׸� �����ϰ� ���� ��(�÷��� ����)
		   ex) int a = 10;     //0b1010
			   int b = 9;      //0b1001
			   int c = a % b;  //0b1011

			^ (xor) �� ��Ʈ�� ���� �ٸ��� 1, ������ 0
			  Ư�� ��Ʈ�� ����ϰ� ���� �� ���
		   ex) int a = 10;     //0b1010
			   int b = 9;      //0b1001
			   int c = a % b;  //0b0011

			~ (not) ��Ʈ���� ���� ��Ų��. 0>1, 1>0
			ex) int a = 10;     //0b1010
				a= ~a;          //0b1010

			<< (Left Shift) ��Ʈ���� �������� �̵�
			   �ѹ� ������ ������ ���� �ι谡 �ȴ�.
			ex) int a = 7;     //0b0111
				a =a << 1;     //0b1110

			>> (Rightt Shift) ��Ʈ���� ���������� �̵�
			   �ѹ� ������ ������ ���� ������ �ȴ�.
			ex) int a = 7;     //0b0111
				a =a << 1;     //0b0011

			*/



			/* �ݺ���
			* - ��� ���� �ϳ�
			* - Ư���ڵ� ����� ���ǿ� ���� ������ �ݺ��ؼ� ������ �� �ְ� ���ִ� ��
			* for �ݺ�Ƚ���� ��Ȯ�� �� ����
			* while �ݺ�Ƚ���� ��Ȯ���� �ʰ� ���ǿ� ���� �ݺ��� �� ���
			* do-while �ּ� �ѹ��� ������ �����ؾ� �� �� ���.( while�� ���� ����)
			*/

			/* continue
			 -�ݺ��� �ȿ��� ���
			 -continue�� ������ �� ������ �ڵ�� ��ŵ�ϰ� �ݺ��� ����
			 */
			 /*break
			 -�ݺ����̳� switch������ �ݺ������� ����ų� case�� �����Ų��*/

			 /*����
			 - �������� ���ڸ� �����ϴ� ��
			 - c��Ÿ��
			   - rand () �Լ� Ȱ��
			   - srand(time(0)); �õ尪 ����

			 - c++ ��Ÿ��
				-#include <random>
				-c��Ÿ�Ϻ��� ���� ����� �����Ѵ�.

			 */
			 /*
			 �Լ�(function)
			  - Ư���� ����� �����ϴ� �ڵ��
			  - ������ �ϰ� ����ؾ� �Ѵ�.
				 -> �Լ��� ����Ÿ��: �Լ��� ������ �� ���� ���� ���� ���� ,�Լ��� �̸�, �Լ��� �Ķ���͸� ��������� �Ѵ�.
				 �Լ��� ����Ÿ��: �Լ��� ������ �� ���� ���� ���� ����
				 �Լ��� �̸�: �Լ��� ȣ��(���) �ϰ� ���� �� �θ��� �̸�
				 �Լ��� �Ķ����: �Լ��� �Է°�. 0�� �̻� �� �� �ִ�.
			 - ������ �� �Ŀ��� ������ �����ؾ� �Ѵ�.(�Լ��� ���� ������ �ۼ�)
			  */
 /* 
 ���ȣ��(Recurcive Call)


*/

/*
���ø� �Լ�
- ������ Ÿ�Կ� ���� ���� ������ ������ ���� �ڷ����� ���� ����� �� �ְ� ���ִ� c++�� ���
- ������ Ÿ�ӿ� ���� ����ϴ� ���� ������ �ش�Ÿ������ �ڵ带 �����Ѵ�.
   -> ������ ����� ������ �Բ� �־�� �Ѵ�.
  
*/


/*
�ζ��� �Լ�
- �Լ� ȣ�⹮�� �ش� �Լ��� ���� �ڵ�� ��ü�ϴ� �Լ�
*/

/* ������
 - ����, �Լ�, ��ü ���� ��ȿ�ϰ� ��� �ɼ� �ִ� ����
 - �Ϲ������� ����� �߰�ȣ ���ʿ����� ��ȿ
 - ���� ���� : Ư�� �Լ� ������ ����� ����
 - ���� ���� : ���α׷� ��ü���� ����� �� �ִ� ����
 */
	 
 // == �纯�� ����.


 
  // 4. ���� ������ �κ��丮�� ��Ʈ�÷��׷� ǥ���ϱ�
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
//		printf("����� �ұ�� [1:������ �߰�, 2������ ����, 3: ����]");
//		std::cin >> playerselect;
//		switch (playerselect)
//		{
//		case 1:
//		{
//			printf("� �������� �߰��ұ��?[0:����, 1:ǻ��, 2:å, 3: ����]");
//			int additem;
//			std::cin >> additem;
//			inven |= (1 << additem);
//		}
//		break;
//		case 2:
//		{
//			printf("� �������� �����ұ��?[0:����, 1:ǻ��, 2:å, 3: ����]");
//			int removeitem;
//			std::cin >> removeitem;
//			inven &= (~1 << removeitem);
//		}
//		break;
//		}
//
//		printf("�κ��丮 :");
//		if ((inven & key) != 0)
//		{
//			printf("����");
//		}
//		if ((inven & key) != 0)
//		{
//			printf("ǻ��");
//		}
//		if ((inven & key) != 0)
//		{
//			printf("å");
//		}
//		if ((inven & key) != 0)
//		{
//			printf("����");
//		
//		break;
//	
//			continue;
//		}
//		//// 5. �ֻ��� ���� �����
//	
//		return 0;
//	}
//}
////c++ ��Ÿ��
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


//	printf("���Ժ��� : ");
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



	// ��Ʈ�� ����Ʈ(�ڵ尡 ���۵Ǵ� ��)

	//int inputnumber = -1;
	//int sum = 0;
	//	while (inputnumber != 0)
	//{
	//	std::cin >> inputnumber;
	//	sum += inputnumber;
	//}
	//	printf("�Է¹��� ������ �� =%d", sum)

	//		/*int number = 1;
	//		int sum = 0;

	//		printf("���ڸ� �Է��Ͻÿ�.\n");
	//		while (number!=0)
	//		{
	//			std::cin >> number;
	//			sum = sum + number;
	//		}
	//		printf("%d\n", sum);*/


	//	int inputnumber2 = 0;
	//	printf("������ �ܼ��� �Է��ϼ��� :")
	//	std::cin >> inputnumber2;
	//	for (int i = 0; i < 10; i++)
	//	{
	//		printf("%D * %D = %D \n",inputnumber, i, inputnumber * i)
	//	}

	///*int number2 = 0;

	//printf("���ڸ��Է��Ͻÿ�.\n");
	//std::cin >> number2;
	//for (int i = 1; i < 10; i++)
	//{
	//	printf(" %d", number2 * i);
	//}*/


	//	int inputnumber3 = 0;
	//	printf("�ִ�ġ�� �Է��ϼ��� :");
	//	std::cin >> inputnumber3;
	//	inputnumber3++; // for������ ���ǿ�  <=�� ���� �Ⱦ 1 ����.
	//	for (int i = 0; i < inputnumber3; i++)
	//	{
	//		if ((i % 2) == 1)
	//		{
	//			printf("%d�� Ȧ�� �Դϴ�.\n",i)
	//		}
	//	}


	////int number3 = 0;
	////printf("���ڸ� �Է��ϼ���\n");
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
		//		printf("%d�� 7�� ����Դϴ�.\n", i);

		//	}
		//}


	//	//5-1 �Է��� �޾ƾ� �Ѵ�.(inputnumber)
	//	//5-2 *ǥ�� ù��° �������� 1�� �ι�° �������� 3��... �̷������� �̾�����
	//    //     �������� (���� *2 +1)��ŭ�� *�� ���� �Ѵ�.
	//	// 5-3 " (����) " �� (������-(���� ����+1)) ��ŭ �߰��ؾ� �Ѵ�.

		//int inputnumber = 0;
		//printf("�ִ�ġ�� �Է��ϼ��� :");
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

////c��Ÿ���� ���� ����
	////srand(time(0))
	//srand(0);
	//for (int i = 0; i < 10; i++)
	//{
	//int ramdomnumber = rand();
	//printf("fosejatntwk : %d\n", ramdomnumber);
	//}
	//
	////0~5���� ���ڸ� �������� ���ϰ� �ʹ�.
	//int randomnumber1 = rand() % 6;

	////1~6���� ���ڸ� �������� ���ϰ� �ʹ�.
	//int randomnumber1 = rand() % 6 + 1;


 //1. �ֻ��� 100���� ���� 6������ Ƚ�� ī���� (����)
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

//1. �ֻ���(1~6) 100���� ���� 6������ Ƚ�� ī���� (Ǯ��)

	//const int testcount = 100;
	//	int hitcount = 0;
	//for (int i = 0; i < 100; i++) //100���� ������
	//{
	//	int dice = rand() % 6 + 1; //�ֻ���(1~6)��
	//	
	//	if (dice ==6) // 6�� ��� ���Դ���
	//	{
	//		hitcount++; // ī���� �ؼ�
	//	}
	//}
	//printf("6�� ���� Ƚ�� = %d", hitcount); //���

 /* 2. ���� ���� ��

	���� ���� ��
		-�θ��� �÷��̾ ����,����,�� �� �ϳ��� �����Ѵ�.
		-������ ����� ���� �°� �а� ������.
		-������ ���� �̱��.
		-������ ������ �̱��.
		-���� ������ �̱��.
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
  //	printf("�����ϼ���. [0:����,1:����,2:��] :");
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
	//		printf("�����ϼ���. [0:����,1:��,2:����] :");
	//		std::cin >> playerselect;
	//		if (playerselect != scissors
	//			|| playerselect != Rock
	//			|| playerselect != paper)
	//		{
	//			break;
	//		}
	//		printf("�߸��� ���� �ٽ� �Է�");
	//	}
	//	int comselect = rand() % numofrps; //��ǻ�� ����


	//	switch (playerselect)
	//	{
	//	case scissors:
	//		if (comselect == Rock)
	//		{
	//			printf("��� ������ �����߰� ��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	//			printf("�����ϴ�\n");
	//			comwincount++;
	//		}
	//		else if (comselect == scissors)
	//		{
	//			printf("��� ������ �����߰� ��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	//			printf("�����ϴ�\n");

	//		}
	//		else if (comselect == paper)
	//		{
	//			printf("��� ������ �����߰� ��ǻ�ʹ� ���� �����߽��ϴ�.\n");
	//			printf("�̰���ϴ�\n");
	//			playerselect++;
	//		}
	//		break;
	//	case Rock:
	//		if (comselect == Rock)
	//		{
	//			printf("��� ������ �����߰� ��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	//			printf("�̰���ϴ�\n");
	//			playerselect++;
	//		}
	//		else if (comselect == scissors)
	//		{
	//			printf("��� ������ �����߰� ��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	//			printf("�����ϴ�\n");
	//		}
	//		else if (comselect == paper)
	//		{
	//			printf("��� ������ �����߰� ��ǻ�ʹ� ���� �����߽��ϴ�.\n");
	//			printf("�����ϴ�\n");
	//			comwincount++;
	//		}
	//		break;
	//	case paper:
	//		if (comselect == Rock)
	//		{
	//			printf("��� ���� �����߰� ��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	//			printf("�̰���ϴ�\n");
	//			playerwincount++;
	//		}
	//		else if (comselect == scissors)
	//		{
	//			printf("��� ���� �����߰� ��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	//			printf("�����ϴ�\n");
	//			comwincount++;
	//		}
	//		else if (comselect == paper)
	//		{
	//			printf("��� ���� �����߰� ��ǻ�ʹ� ���� �����߽��ϴ�.\n");
	//			printf("�����ϴ�\n");
	//		}
	//		break;

	//	default:
	//		printf("error!! ������� ��� �߻�\n");
	//		break;

	//	}
	//}
	// 3.  �� �ٿ�(����)

	/*  srand(time(0));
	  int randomnumber2 = rand() % 100 + 1;
	  int playnumber = 0;
	  int count = 0;
	  while (true)
	  {
		printf("���ڸ� �Է��ϼ���\n");
		std::cin >> playnumber;
		if (randomnumber2 == playnumber)
		{
			printf("�����Դϴ�\n");
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
			printf("�����ϼ̽��ϴ�\n");
			break;
		}

	  }*/


	  //Ǯ��
	  //int randomnumber = rand() % 100 +1;
	  //int playernumber = 0;
	  //int countdown = 5;

	  //while (countdown > 0)
	  //{

		 // printf("1~100 ������ ���ڸ� ������ ������ :");
		 // std::cin >> playernumber;

		 // if (playernumber < randomnumber)
		 // {
			//  printf("�� ū���� ������.\n");
		 // }
		 // else if (playernumber > randomnumber)
		 // {
			//  printf("�� ���� ���� ������");
		 // }
		 // else
		 // {
			//  printf("�����Դϴ�.\nã�¼��� %d�����ϴ�", randomnumber);
			//  break;
		 // }
		 // countdown--;
		 // printf("���� Ƚ���� %d�� �Դϴ�.", countdown--);
	  //}
	  //if (countdown <= 0)
	  //{
		 // printf("�����߽��ϴ�.\n");
	  //}


//int inputnumber = -1;
//int sum = 0;
///while (true)
//{
//std::cin >> inputnumber;
//sum += inputnumber;
//if (inputnumber ==0)
//break




	///std::cout << "HelloWoreld"; // c++ ��¹��
	// number ��� �̸��� ���� int������ �����ϰ� �ű⿡ 0�� �����Ѵ�.

	//int number; //��������
	//number = 0; //������ ���� ����

	//// int : ������(�Ҽ����� ���� ����, 5,10,-2,0,66...)
	//number = 5.3; // number ���� 5�� ����ȴ�. �Ҽ��� ����
	//number = 5 / 2; // number���� 2�� ����ȴ�. ���� ����

	//int number1 = 0;
	//std::cin >> number;   //���ڸ� �ϳ� �Է� �ޱ�
	//printf("���� : %d\n", number);

	//int number2 = 0;
	//std::cin >> number;   //���ڸ� �ϳ� �Է� �ޱ�
	//printf("���� : %d\n", number);


	//printf("���� 1�� �Է��Ͻÿ� : ");
	//std::cin >> number1;
	//printf("���� 2�� �Է��Ͻÿ� : ");
	//std::cin >> number2;
	//int number3 = number1 + number2;
	//printf("�� ������ ���� %d�Դϴ�.", number3);

	//int a = 0;
	//std::cin >> a;   //���ڸ� �ϳ� �Է� �ޱ�

	//int b = 0;
	//std::cin >> b;   //���ڸ� �ϳ� �Է� �ޱ�

	//int c = a;
	//
	//a = b;
	//b = c;

	/*printf("%d,%d", a, b);*/



	//int a = 0;
	//std::cin >> a;   //���ڸ� �ϳ� �Է� �ޱ�

	//int b = 0;
	//std::cin >> b;   //���ڸ� �ϳ� �Է� �ޱ�

	//printf("%d", a * b);

	//int a = 153;
	//std::cin >> a;   //���ڸ� �ϳ� �Է� �ޱ�

	//int b = 15;
	//std::cin >> b;   //���ڸ� �ϳ� �Է� �ޱ�

	//int devide=a/b, mod; // devide = 10
	//mod = a - b * devide;

	//printf("%d", mod);

//	int time;
//	std::cin >> time;   //���ڸ� �ϳ� �Է� �ޱ�
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


//#include <iostream> // ����� ����(cout)
//#include <cstdio>
//int main() // ��Ʈ�� ����Ʈ(�ڵ尡 ���۵Ǵ� ��)
	//float number1 = 10.0f; // 10�̶�� float Ÿ���� ���� float�� number1�� �ֱ� (f�� �ٿ��� floatŸ������ �ν�)
	//float number2 = 15.0; //15��� double Ÿ���� ���� float�� number2�� �ֱ�
	//std::cin >> number1 >> number2; 
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);


 //�ǽ�: ���� �������� �Է� �ް� ���� ���ϱ� 

	//const float pi = 3.141592f; //����� �����ϰ� ����
	//float pi = 3.14f;
	//float r = 0.0f;
	//std::cin >> r;
	//printf("���̴� %f", pi * r * r);

	//int square = 0;
	//printtf("���簢���� �Ѻ��� �Է��ϼ��� :");
	//std::cin >> square;
	//printf("���簢���� ���̴� %d", square * square);
	///�����÷ο� �߻��� �� ����

	/*float a = 123.0f;
	float b = 0.0f;
	std::cin >> b;
	b = b * 123.0f;*/

	//if: �Ұ�ȣ ���� true�� �߰�ȣ ���� �ڵ带 �����϶�
	 // ���� Ư�������� ������ ���� � �ڵ带 �����ϰ� ���� �� ���.


	 //int a = 10;
	 //int b = 0;
	 //printf("a�� 10\nb�� �Է��ϼ��� :");
	 //std::cin >> b;

	 //if (true)
	 //{
	 //	printf("if�� �����ߴ�.\n");
	 //	printf("b�� %d�� a�� �� ũ��.",b);



	 //	// if- else: �̰� �ƴϸ� ������ �� ���.
	 //	if(a > b)
	 //	{
	 //		printf("a�� b���� ũ��.");
	 //	}
	 //	else
	 //	{
	 //		printf("a�� b���� �۰ų� ����.");
	 //	}
	 //}

	 //bool result = a == b; //f9�� �극��ũ ����Ʈ ����/ ����


	 ////float Ÿ����  ==�� ���� �� �ݵ�� �ȷ��� ���� �����ؾ���.
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
	 //std::cin >> a;   //���ڸ� �ϳ� �Է� �ޱ�
	 //switch (a)
	 //{
	 //case 1:
	 //	printf("1�̴�. \n");
	 //	break;
	 //case 3:
	 //	printf("3�̴�. \n");
	 //	break;
	 //case 5:
	 //	printf("5�̴�. \n");
	 //	break;
	 //default:
	 //	printf("1,2,5�� �ƴϴ�. \n");
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
	 //c = (a > b) ?(a*2+b) : (a+b*2); //���׿�����
#pragma endregion

