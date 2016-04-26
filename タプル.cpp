
// stlの機能
// 複数の戻り値を返したい時に使用

#include <functional>
#include <tuple>

std::tuple<int, char, float> func()
{
	return std::make_tuple(10, 20, 1.25f);
}

int main()
{
	// auto型は初期化しないと使えない
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