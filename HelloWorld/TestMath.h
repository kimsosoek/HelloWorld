#pragma once
// 헤더파일에는 선언을 작성한다.
// ctr+ k + o : cpp와 h를 전환

void printhelloworld(); // 리턴하는 값이 없고(void) 이름은 printhelloworld고 파라메트도 없다.
/// <summary>
/// 두파라메터를 더하는 함수
/// </summary>
//

int sum(int test1, int test2); //int sum(int,int) ; 이선언을 정의했다.

// vkfkapxj enrofmf rhqgotj ehffuwnsms gkatn
int multiply(int number1, int number2); // 디폴트 파라메터 사용 예시
                                        // 해당 파라메터 없이 함수를 호출하면 기본적으로 설정된 값이 대신 들어간다.
                                        // 디폴트 파라메터는 항상 뒤에서부터 있어야 한다.

void oldTales();

float Sum(float test1, float test2);

template<typename T>
T Add(T number1, T number2)
{
    return number1 + number2;
}


