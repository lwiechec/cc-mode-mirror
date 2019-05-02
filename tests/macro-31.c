#define XVECREF_YVECREF_EQUAL(ctx, xoff, yoff)  \
  buffer_chars_equal ((ctx), (xoff), (yoff))

#define OFFSET ptrdiff_t

#define EXTRA_CONTEXT_FIELDS                    \
  /* Buffers to compare.  */                    \
  struct buffer *buffer_a;                      \
  struct buffer *buffer_b;                      \
  /* BEGV of each buffer */			\
  ptrdiff_t beg_a;				\
  ptrdiff_t beg_b;				\
  /* Whether each buffer is unibyte/plain-ASCII or not.  */ \
  bool a_unibyte;				\
  bool b_unibyte;				\
  /* Bit vectors recording for each character whether it was deleted
     or inserted.  */                           \
  unsigned char *deletions;                     \
  unsigned char *insertions;			\
  struct timespec time_limit;			\
  unsigned int early_abort_tests;
