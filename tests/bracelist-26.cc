int main() {
    fn({
	    {1, 2, 3},
	    {3, 4, 5},
	    {6, 7, 8},
	});
    for (const auto &v : fn({
		{3, 4, 5},
		{6, 7, 8},
		{9, 10, 11},
	    })) {
	for (const auto &a : v) {
	    std::cout << a << '\n';
	}
    }

    fn(20, {
	    {1, 2, 3},
	    {3, 4, 5},
	    {6, 7, 8},
	});
    for (const auto &v : fn(20, {
		{3, 4, 5},
		{6, 7, 8},
		{9, 10, 11},
	    })) {
	for (const auto &a : v) {
	    std::cout << a << '\n';
	}
    }
}
