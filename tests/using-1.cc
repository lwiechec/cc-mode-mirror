class SomeClass {
    SomeClass() {
	std::cout << "Constructing SomeClass" << std::endl;
    }

    using SomeMemberType =
	SomeTemplate<
	Parameter0,
	Parameter1>;
};
