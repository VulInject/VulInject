



#undef NDEBUG
#include <assert.h>


#define NO_VIM_MAIN
#include "main.c"



#include "message.c"

#ifndef MIN
# define MIN(x,y) ((x) < (y) ? (x) : (y))
#endif











char *fmt_012p = "%012p";
char *fmt_5S   = "%5S";
char *fmt_06b  = "%06b";
char *fmt_06pb = "%1$0.*2$b";
char *fmt_06pb2 = "%2$0*1$b";
char *fmt_212s = "%2$s %1$s %2$s";
char *fmt_21s  = "%2$s %1$s";


    static void
test_trunc_string(void)
{
    char_u  *buf; 
    char_u  *s;

    
    trunc_string((char_u *)"", NULL, 1, 0);

    
    buf = alloc(1);
    trunc_string((char_u *)"", buf, 1, 1);
    assert(buf[0] == NUL);
    vim_free(buf);

    
    buf = alloc(40);
    STRCPY(buf, "text");
    trunc_string(buf, buf, 20, 40);
    assert(STRCMP(buf, "text") == 0);
    vim_free(buf);

    buf = alloc(40);
    STRCPY(buf, "a short text");
    trunc_string(buf, buf, 20, 40);
    assert(STRCMP(buf, "a short text") == 0);
    vim_free(buf);

    buf = alloc(40);
    STRCPY(buf, "a text tha just fits");
    trunc_string(buf, buf, 20, 40);
    assert(STRCMP(buf, "a text tha just fits") == 0);
    vim_free(buf);

    buf = alloc(40);
    STRCPY(buf, "a text that nott fits");
    trunc_string(buf, buf, 20, 40);
    assert(STRCMP(buf, "a text t...nott fits") == 0);
    vim_free(buf);

    
    buf = alloc(40);
    s = vim_strsave((char_u *)"text");
    trunc_string(s, buf, 20, 40);
    assert(STRCMP(buf, "text") == 0);
    vim_free(buf);
    vim_free(s);

    buf = alloc(40);
    s = vim_strsave((char_u *)"a text that fits");
    trunc_string(s, buf, 34, 40);
    assert(STRCMP(buf, "a text that fits") == 0);
    vim_free(buf);
    vim_free(s);

    buf = alloc(40);
    s = vim_strsave((char_u *)"a short text");
    trunc_string(s, buf, 20, 40);
    assert(STRCMP(buf, "a short text") == 0);
    vim_free(buf);
    vim_free(s);

    buf = alloc(40);
    s = vim_strsave((char_u *)"a text tha just fits");
    trunc_string(s, buf, 20, 40);
    assert(STRCMP(buf, "a text tha just fits") == 0);
    vim_free(buf);
    vim_free(s);

    buf = alloc(40);
    s = vim_strsave((char_u *)"a text that nott fits");
    trunc_string(s, buf, 20, 40);
    assert(STRCMP(buf, "a text t...nott fits") == 0);
    vim_free(buf);
    vim_free(s);
}


    static void
test_trunc_string_mbyte(void)
{
    char_u  *buf; 
    char_u  *s;

    buf = alloc(40);
    s = vim_strsave((char_u *)"Ä text tha just fits");
    trunc_string(s, buf, 20, 40);
    assert(STRCMP(buf, "Ä text tha just fits") == 0);
    vim_free(buf);
    vim_free(s);

    buf = alloc(40);
    s = vim_strsave((char_u *)"a text ÄÖÜä nott fits");
    trunc_string(s, buf, 20, 40);
    assert(STRCMP(buf, "a text Ä...nott fits") == 0);
    vim_free(buf);
    vim_free(s);

    buf = alloc(40);
    s = vim_strsave((char_u *)"a text that not fitsÄ");
    trunc_string(s, buf, 20, 40);
    assert(STRCMP(buf, "a text t...not fitsÄ") == 0);
    vim_free(buf);
    vim_free(s);
}


    static void
test_vim_snprintf(void)
{
    int		n;
    size_t	bsize;
    int		bsize_int;
    void	*ptr = (void *)0x87654321;

    
    
    for (bsize = 0; bsize < 15; ++bsize)
    {
	bsize_int = (int)bsize - 1;

	
	
	
	
	char *buf = malloc(bsize);

	n = vim_snprintf(buf, bsize, "%.8g", 10000000.1);
	assert(n == 12);
	assert(bsize == 0 || STRNCMP(buf, "1.00000001e7", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%d", 1234567);
	assert(n == 7);
	assert(bsize == 0 || STRNCMP(buf, "1234567", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%ld", 1234567L);
	assert(n == 7);
	assert(bsize == 0 || STRNCMP(buf, "1234567", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%9ld", 1234567L);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "  1234567", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%-9ld", 1234567L);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "1234567  ", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%x", 0xdeadbeef);
	assert(n == 8);
	assert(bsize == 0 || STRNCMP(buf, "deadbeef", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_06b, (uvarnumber_T)12);
	assert(n == 6);
	assert(bsize == 0 || STRNCMP(buf, "001100", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%s %s", "one", "two");
	assert(n == 7);
	assert(bsize == 0 || STRNCMP(buf, "one two", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%f", 1.234);
	assert(n == 8);
	assert(bsize == 0 || STRNCMP(buf, "1.234000", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%e", 1.234);
	assert(n == 12);
	assert(bsize == 0 || STRNCMP(buf, "1.234000e+00", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%f", 0.0/0.0);
	assert(n == 3);
	assert(bsize == 0 || STRNCMP(buf, "nan", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%f", 1.0/0.0);
	assert(n == 3);
	assert(bsize == 0 || STRNCMP(buf, "inf", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%f", -1.0/0.0);
	assert(n == 4);
	assert(bsize == 0 || STRNCMP(buf, "-inf", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%f", -0.0);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "-0.000000", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%s", "漢語");
	assert(n == 6);
	assert(bsize == 0 || STRNCMP(buf, "漢語", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%8s", "漢語");
	assert(n == 8);
	assert(bsize == 0 || STRNCMP(buf, "  漢語", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%-8s", "漢語");
	assert(n == 8);
	assert(bsize == 0 || STRNCMP(buf, "漢語  ", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%.3s", "漢語");
	assert(n == 3);
	assert(bsize == 0 || STRNCMP(buf, "漢", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_5S, "foo");
	assert(n == 5);
	assert(bsize == 0 || STRNCMP(buf, "  foo", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%%%%%%");
	assert(n == 3);
	assert(bsize == 0 || STRNCMP(buf, "%%%", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%c%c", 1, 2);
	assert(n == 2);
	assert(bsize == 0 || STRNCMP(buf, "\x01\x02", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	
	
	
#ifdef SUN_SYSTEM
# define PREFIX_LEN  0
# define PREFIX_STR1 ""
# define PREFIX_STR2 "00"
#else
# define PREFIX_LEN  2
# define PREFIX_STR1 "0x"
# define PREFIX_STR2 "0x"
#endif
	n = vim_snprintf(buf, bsize, "%p", ptr);
	assert(n == 8 + PREFIX_LEN);
	assert(bsize == 0
		     || STRNCMP(buf, PREFIX_STR1 "87654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_012p, ptr);
	assert(n == 12);
	assert(bsize == 0
		   || STRNCMP(buf, PREFIX_STR2 "0087654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	free(buf);
    }
}


    static void
test_vim_snprintf_positional(void)
{
    int		n;
    size_t	bsize;
    int		bsize_int;

    
    
    for (bsize = 0; bsize < 25; ++bsize)
    {
	bsize_int = (int)bsize - 1;

	
	
	
	
	char *buf = malloc(bsize);

	n = vim_snprintf(buf, bsize, "%1$*2$ld", 1234567L, -9);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "1234567  ", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$*2$.*3$ld", 1234567L, -9, 5);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "1234567  ", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$*3$.*2$ld", 1234567L, 5, -9);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "1234567  ", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%3$*1$.*2$ld", -9, 5, 1234567L);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "1234567  ", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$ld", 1234567L);
	assert(n == 7);
	assert(bsize == 0 || STRNCMP(buf, "1234567", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$*2$ld", 1234567L, 9);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "  1234567", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$ld %1$d %3$lu", 12345, 9L, 7654321UL);
	assert(n == 15);
	assert(bsize == 0 || STRNCMP(buf, "9 12345 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$d %1$ld %3$lu", 1234567L, 9, 7654321UL);
	assert(n == 17);
	assert(bsize == 0 || STRNCMP(buf, "9 1234567 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$d %1$lld %3$lu", 1234567LL, 9, 7654321UL);
	assert(n == 17);
	assert(bsize == 0 || STRNCMP(buf, "9 1234567 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$ld %1$u %3$lu", 12345U, 9L, 7654321UL);
	assert(n == 15);
	assert(bsize == 0 || STRNCMP(buf, "9 12345 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$d %1$lu %3$lu", 1234567UL, 9, 7654321UL);
	assert(n == 17);
	assert(bsize == 0 || STRNCMP(buf, "9 1234567 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$d %1$llu %3$lu", 1234567LLU, 9, 7654321UL);
	assert(n == 17);
	assert(bsize == 0 || STRNCMP(buf, "9 1234567 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$d %1$x %3$lu", 0xdeadbeef, 9, 7654321UL);
	assert(n == 18);
	assert(bsize == 0 || STRNCMP(buf, "9 deadbeef 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$ld %1$c %3$lu", 'c', 9L, 7654321UL);
	assert(n == 11);
	assert(bsize == 0 || STRNCMP(buf, "9 c 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$ld %1$s %3$lu", "hi", 9L, 7654321UL);
	assert(n == 12);
	assert(bsize == 0 || STRNCMP(buf, "9 hi 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%2$ld %1$e %3$lu", 0.0, 9L, 7654321UL);
	assert(n == 22);
	assert(bsize == 0 || STRNCMP(buf, "9 0.000000e+00 7654321", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_212s, "one", "two", "three");
	assert(n == 11);
	assert(bsize == 0 || STRNCMP(buf, "two one two", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%3$s %1$s %2$s", "one", "two", "three");
	assert(n == 13);
	assert(bsize == 0 || STRNCMP(buf, "three one two", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$d", 1234567);
	assert(n == 7);
	assert(bsize == 0 || STRNCMP(buf, "1234567", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$x", 0xdeadbeef);
	assert(n == 8);
	assert(bsize == 0 || STRNCMP(buf, "deadbeef", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_06pb2, 6, (uvarnumber_T)12);
	assert(n == 6);
	assert(bsize == 0 || STRNCMP(buf, "001100", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_06pb, (uvarnumber_T)12, 6);
	assert(n == 6);
	assert(bsize == 0 || STRNCMP(buf, "001100", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$s %2$s", "one", "two");
	assert(n == 7);
	assert(bsize == 0 || STRNCMP(buf, "one two", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_06b, (uvarnumber_T)12);
	assert(n == 6);
	assert(bsize == 0 || STRNCMP(buf, "001100", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, fmt_21s, "one", "two", "three");
	assert(n == 7);
	assert(bsize == 0 || STRNCMP(buf, "two one", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

#ifdef FEAT_FLOAT
	n = vim_snprintf(buf, bsize, "%1$f", 1.234);
	assert(n == 8);
	assert(bsize == 0 || STRNCMP(buf, "1.234000", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$e", 1.234);
	assert(n == 12);
	assert(bsize == 0 || STRNCMP(buf, "1.234000e+00", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$f", 0.0/0.0);
	assert(n == 3);
	assert(bsize == 0 || STRNCMP(buf, "nan", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$f", 1.0/0.0);
	assert(n == 3);
	assert(bsize == 0 || STRNCMP(buf, "inf", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$f", -1.0/0.0);
	assert(n == 4);
	assert(bsize == 0 || STRNCMP(buf, "-inf", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');

	n = vim_snprintf(buf, bsize, "%1$f", -0.0);
	assert(n == 9);
	assert(bsize == 0 || STRNCMP(buf, "-0.000000", bsize_int) == 0);
	assert(bsize == 0 || buf[MIN(n, bsize_int)] == '\0');
#endif

	free(buf);
    }
}

    int
main(int argc, char **argv)
{
    CLEAR_FIELD(params);
    params.argc = argc;
    params.argv = argv;
    common_init(&params);

    set_option_value_give_err((char_u *)"encoding", 0, (char_u *)"utf-8", 0);
    init_chartab();
    test_trunc_string();
    test_trunc_string_mbyte();
    test_vim_snprintf();
    test_vim_snprintf_positional();

    set_option_value_give_err((char_u *)"encoding", 0, (char_u *)"latin1", 0);
    init_chartab();
    test_trunc_string();
    test_vim_snprintf();
    test_vim_snprintf_positional();

    return 0;
}
