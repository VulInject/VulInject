


#define _memory_h	
#define IN_PERL_FILE	

#include "vim.h"

#if defined(USE_SFIO) || defined(PROTO)

#ifndef USE_SFIO	
# define Sfio_t int
# define Sfdisc_t int
#endif

#define NIL(type)	((type)0)

    static int
sfvimwrite(
    Sfio_t	    *f,		
    char	    *buf,	
    int		    n,		
    Sfdisc_t	    *disc)	
{
    char_u *str;

    str = vim_strnsave((char_u *)buf, n);
    if (str == NULL)
	return 0;
    msg_split((char *)str);
    vim_free(str);

    return n;
}


    Sfdisc_t *
sfdcnewvim(void)
{
    Sfdisc_t	*disc;

    disc = ALLOC_ONE(Sfdisc_t);
    if (disc == NULL)
	return NULL;

    disc->readf = (Sfread_f)NULL;
    disc->writef = sfvimwrite;
    disc->seekf = (Sfseek_f)NULL;
    disc->exceptf = (Sfexcept_f)NULL;

    return disc;
}

#endif 
