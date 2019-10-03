// C++11 constructs
decltype (BAR) bar;
auto foo = bar;
const auto foo = bar;
auto foo () -> BAZ;
auto foo () -> const BAZ;
auto foo (BAR bar) -> BAZ;
auto foo (BAR bar, BAZ baz) -> decltype (bar + baz);
