
// stl�̋@�\
// �����̖߂�l��Ԃ��������Ɏg�p

#include <functional>
#include <tuple>

std::tuple<int, char, float> func()
{
	return std::make_tuple(10, 20, 1.25f);
}

int main()
{
	// auto�^�͏��������Ȃ��Ǝg���Ȃ�
	auto aa = 0;

	auto n = func();
	int a = std::get<0>(n);
	char b = std::get<1>(n);
	float c = std::get<2>(n);

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %f\n", c);

	getchar();

	return 0;
}