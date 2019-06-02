struct SomeType { };
struct SomeOther { SomeType someMethod(void)const{return SomeType();} };
int main()
{
    auto someLambda = [&]( const SomeOther& access )
    {
	const SomeType& someType = access.someMethod();
    };
}
