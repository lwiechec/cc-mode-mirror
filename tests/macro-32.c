#define DUMMY_1(params)
#define DUMMY_2(params)
#define DUMMY_3

int DUMMY_1 (1) DUMMY_3 DUMMY_2 (2)
foo (void)
{
    return 0;
}

/* Local Variables: */
/* c-noise-macro-names: ("DUMMY_3") */
/* c-noise-macro-with-parens-names: ("DUMMY_1" "DUMMY_2") */
/* eval: (c-make-noise-macro-regexps) */
/* End: */
