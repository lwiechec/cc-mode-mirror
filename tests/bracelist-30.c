struct a {
    int b;
};

int
main(void)
{
    foo ((struct a){
	    0
	}.b
	);
    foo (6, (struct a){
	    1
	}.b);
    return (struct a) {
	2
    }.b;
}
