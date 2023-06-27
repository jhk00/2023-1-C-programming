#include <stdio.h>

struct TEST {
	int age;
	int gender;
};

int set_human(struct TEST a, int age, int gender);

int main() {
	struct TEST human;
	set_human(human, 10, 1);
	printf("AGE : %d // Gender : %d ", human.age, human.gender);
	return 0;
}

int set_human(struct TEST a, int age, int gender) {
	a.age = age;
	a.gender = gender;
	return 0;
}

/* 컴파일 에러가 뜸
와 같이 한다면 human 의 age 와 gender 멤버들이 초기화 될 것 처럼보이지요. 하지만 그렇지 않습니다.
왜냐구요? 아마 여태까지 강좌를 잘 따라오셨더라면 한 번에 짐작하실 수 있으실 텐데 말이죠.

바로 제가 13 - 2 강에서 말한 규칙, "특정한 변수의 값을 다른 함수를 통해 바꾸려면 변수의 주소값을 전달해야 한다" 라는 룰을 지키지 않았기 때문입니다. 
다시 말해 위 경우에서 a.age = age; 를 했을 때 age 의 값이 바뀌는 것은 
실제 main 함수에서의 human 이 아니라 set_human 함수의 a 라는 human 과 별개의 구조체변수의 age 멤버의 값이 바뀌게 되는 것이지요.

따라서 실제 human 구조체변수의 멤버들은 전혀 초기화 되지 않은 채 출력이 실행되어 오류가 발생했습니다.
이를 해결하기 위해서는 역시 human 구조체 변수의 주소값을 인자로 받는 함수를 만들어야 할 것입니다.
*/

 //올바른 코드

#include <stdio.h>
struct TEST {
  int age;
  int gender;
};
int set_human(struct TEST *a, int age, int gender);
int main() {
  struct TEST human;

  set_human(&human, 10, 1);

  printf("AGE : %d // Gender : %d ", human.age, human.gender);
  return 0;
}
int set_human(struct TEST *a, int age, int gender) {
  a->age = age;
  a->gender = gender;

  return 0;
}
