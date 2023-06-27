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

/* ������ ������ ��
�� ���� �Ѵٸ� human �� age �� gender ������� �ʱ�ȭ �� �� ó����������. ������ �׷��� �ʽ��ϴ�.
�ֳı���? �Ƹ� ���±��� ���¸� �� ������̴���� �� ���� �����Ͻ� �� ������ �ٵ� ������.

�ٷ� ���� 13 - 2 ������ ���� ��Ģ, "Ư���� ������ ���� �ٸ� �Լ��� ���� �ٲٷ��� ������ �ּҰ��� �����ؾ� �Ѵ�" ��� ���� ��Ű�� �ʾұ� �����Դϴ�. 
�ٽ� ���� �� ��쿡�� a.age = age; �� ���� �� age �� ���� �ٲ�� ���� 
���� main �Լ������� human �� �ƴ϶� set_human �Լ��� a ��� human �� ������ ����ü������ age ����� ���� �ٲ�� �Ǵ� ��������.

���� ���� human ����ü������ ������� ���� �ʱ�ȭ ���� ���� ä ����� ����Ǿ� ������ �߻��߽��ϴ�.
�̸� �ذ��ϱ� ���ؼ��� ���� human ����ü ������ �ּҰ��� ���ڷ� �޴� �Լ��� ������ �� ���Դϴ�.
*/

 //�ùٸ� �ڵ�

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
