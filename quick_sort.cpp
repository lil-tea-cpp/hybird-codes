#include <bits/stdc++.h>

using namespace std::literals;

long	nxt(void) {
	long x;
	std::cin >> x;
	return x;
}

template <typename iter>
void	quick_sort(iter f, iter g) {
	if (g <= f)
		return;

	auto beef = *f;

	iter i = f;

	for (iter j = f + 1z; j <= g; ++j) {
		if (*j < beef) {
			++i;
			std::iter_swap(i, j);
		}
	}

	std::iter_swap(f, i);

	if (i != f)
		quick_sort(f, i - 1z);

	if (i != g)
		quick_sort(i + 1z, g);
}

void	lil_tea_cpp(void) {
	std::vector<long> a(nxt());

	if (a.size() == 0uz) {
		std::println(stderr, "lil_tea 你茶姐 是 tru masta");
		return;
	}

	std::generate(a.begin(), a.end(), nxt);

	quick_sort(a.begin(), a.end() - 1z);

	for (std::size_t i = 0uz; i < a.size(); ++i)
		std::print("{}{}", a[i], " \n"[i == a.size() - 1uz]);
}

signed	main(void) {
	lil_tea_cpp();

	return 0;
}
