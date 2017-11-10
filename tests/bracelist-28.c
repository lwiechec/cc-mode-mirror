struct a {
    int b;
};

int
main(void)
{
    return (struct a){
	0
    }.b;
}
