

#include <stdio.h>
double sum(int n1, int n2, double* result) {
	*result = n1 + n2;
	return *result;
}

double diff(int n1, int n2, double* result) {
	*result = n1 - n2;
	return *result;
}

double mult(int n1, int n2, double* result) {
	*result = n1 * n2;
	return *result;
}

double div(int n1, int n2, double* result) {
	*result = (double)n1 / n2;
	
	// n1 = 10 ,n2 = 4 면 result = 2.5가 나와야함 하지만 2.0이 나온다 int / int 라서
	// 이럴때는 데이터 손실을 최소화 하기 위해 강제 형변환을 진행해줌

	// c에서 지원하는 자동 형변환은 char < int < long < float < double < long double 순
	// 작은거에서 큰거는 자동으로 변환 가능하지만 큰거에서 작은건 안됨
	// 실수형 / 정수형 - 실수형 / 실수형 으로 자동 형변환된다는 의미 실수형 / 정수형이   정수형 / 정수형이 될 순 없다
	// (데이터의 손실을 최소화 하는 방향으로 형변환 되는 것)
	// 그러므로 그냥 n1 앞에 double 해주면 알아서 double로 형변환 됨
	// 물론 int a = 10.5 는 10으로 형변환이 된다. 하지만 데이터 손실이 일어날 뿐이다.

	
	// 데이터 손실이 없는 경우(확장 변환, 프로모션(Promotion))

		// → 작은 자료형에서 큰 자료형으로 전환될 경우 데이터 손실이 발생하지 않습니다.

		// Ex) int → double 손실 X

		// 데이터 손실이 있는 경우(축소 변환, 디모션(Demotion))

		// → 큰 자료형에서 작은 자료형으로 전환될 경우 데이터 손실이 발생합니다.

		// Ex) double → int 손실 O



	return *result;
}

double power(int n1, int n2, double* result) {
	*result = 1;
	for (int i = 0; i < n2; i++)
		*result *= n1;
	return *result;
}

int main(void) {
	int n1, n2, n3;
	double result;
	// 실수형은 왠만하면 double. 나타낼 수 있는 자릿수가 훨씬 더많음
	while (1) {
		printf("Please Input n1 and n2: ");
		scanf_s("%d %d", &n1, &n2);
		
		printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
		scanf_s("%d", &n3);
		if (n3 == 1)
			result = sum(n1, n2, &result);
		else if (n3 == 2)
			result = diff(n1, n2, &result);
		else if (n3 == 3)
			result = mult(n1, n2, &result);
		else if (n3 == 4)
			result = div(n1, n2, &result);
		else if (n3 == 5)
			result = power(n1, n2, &result);
		else if (n3 == 0)
			break;
		else {
			while (1) {
				printf("wrong operator!\n");
				printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
				scanf_s("%d", &n3);
				if (n3 == 1) {
					result = sum(n1, n2, &result);
					break;
				}
				else if (n3 == 2) {
					result = diff(n1, n2, &result);
					break;
				}

				else if (n3 == 3) {
					result = mult(n1, n2, &result);
					break;
				}

				else if (n3 == 4) {
					result = div(n1, n2, &result);
					break;
				}

				else if (n3 == 5) {
					result = power(n1, n2, &result);
					break;
				}

				else if (n3 == 0)
					break;

				else
					continue;
			}
		}
		printf("result: %.2lf\n\n", result);
		//double 형은 %.lf 로 받는거
		//float은 %.f 그리고 변수 선언할 때 float = 3.14f 이런식으로 끝에 f붙여서 선언
	}
	
	return 0;
}

// 내가 짠 코드는 함수를 void로 받지 않고 return이 있는 함수로 지정해서 문제의 의도인 call by reference 를 사용하라는
// 조건에는 알맞지 않음. 함수를 void로 받고 switch case로 더 간결하게 짤 수 있다.

// 조교님 코드



#include <stdio.h>
void sum(int n1, int n2, double* result) {
	*result = n1 + n2;
}

void diff(int n1, int n2, double* result) {
	*result = n1 - n2;
}

void mult(int n1, int n2, double* result) {
	*result = n1 * n2;
}

void div(int n1, int n2, double* result) {
	*result = (double)n1 / n2;
}

void power(int n1, int n2, double* result) {
	*result = 1;
	for (int i = 0; i < n2; i++)
		*result *= n1;
}
int main(void) {
	int n1, n2, n3;
	double result;
	while (1) {
		printf("Please Input n1 and n2: ");
		scanf_s("%d %d", &n1, &n2);

		printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
		scanf_s("%d", &n3);

		if (n3 < 0 || n3 > 5) {
			/*
			while (1) {
				printf("wrong operator!\n");
				printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
				scanf_s("%d", &n3);
				if (n3 > 0 && n3 < 5)
					break;
			} 내가 작성한 코드인데 이것도 맞음
			*/
			
			do {
				printf("wrong operator!\n");
				printf("Choice the operater(1: sum, 2: diff, 3: mult, 4: div, 5: power, 0: end): ");
				scanf_s("%d", &n3);
			} while (n3 < 0 || n3 > 5);
			// do - while 문은 do로 실행 후 뒤에있는 while문으로 조건 검사를 하는 것
			// 오개념 주의 - while 안에 있는 조건은 탈출 조건이 아닌 반복조건임
			// while 문 안에 있는 조건을 만족해야 반복을 하는것. while문 안의 조건을 만족하면 탈출하는게 아니다 !
			// 그러므로 내가 기존에 작성했던 while(n3 > 0 && n3 < 5) 는 0~5 사이 숫자 입력해야 계속 반복되는 거니 올바른 while문 조건이 아닌것.
		}
		if (n3 == 0)
			break;
		switch (n3) {
		case 1:
			sum(n1, n2, &result);
			break;

		case 2:
			diff(n1, n2, &result);
			break;

		case 3:
			mult(n1, n2, &result);
			break;

		case 4:
			div(n1, n2, &result);
			break;

		case 5:
			power(n1, n2, &result);
			break;
		} // default 생략 가능
		printf("result: %.2f\n\n", result);
	}
		//double 형은 %.lf 로 받는거
		//float은 %.f 그리고 변수 선언할 때 float = 3.14f 이런식으로 끝에 f붙여서 선언
	return 0;
}

