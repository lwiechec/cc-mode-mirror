char foo [] = R"(foo)";
char bar [] = // R"foo(bar)foo";
    R"foo(bar)foo";
char empty [] = R"()";
char quote1 [] = R"34(")34";
char quote2 [] = R"34(fooo"bar)34";
char quote [] = R""(")"";
char quotes [] = R"fo"o"(bar)fo"o"";
char quotes2 [] = R"fo""o(bar)fo""o";
char sixteen [] = R"0123456789abcdef(sixteen)0123456789abcdef";
char seventeen [] = R"0123456789abcdefg(seventeen)0123456789abcdefg";
char multi_line [] = R"(First line.
#error: This shouldn't fontify as a CPP construct.
Second line.
Third line.)";
char brackets [] = R"0x22[(foobar)0x22[";

#define FOO(bar) char bar [] = R"bar(abcd"efgh)bar" R"baz(ij"kl)baz"
#define MULTILINE(bar) char bar [] = R"bar(\
					   \
        )bar"
						\
)bar
#define BROKEN(bar) char bar [] = R"foobar(a\n	\

char baz [] = R"baz(baz)baz";

char bar [] = R"foo(bar)foo";
char empty [] = R"()";
char baz [] = R"baz(baz)foo";
