







#include "vim.h"
#include "termlib.pro"

#if !defined(AMIGA) && !defined(VMS)
# include <sgtty.h>
#endif

static int  getent(char *, char *, FILE *, int);
static int  nextent(char *, FILE *, int);
static int  _match(char *, char *);
static char *_addfmt(char *, char *, int);
static char *_find(char *, char *);



char	*tent;		      
char	PC = 0;		      
char	*UP = 0, *BC = 0;     
short	ospeed;		      



#ifndef TERMCAPFILE
# ifdef AMIGA
#  define TERMCAPFILE "s:termcap"
# else
#  ifdef VMS
#   define TERMCAPFILE "VIMRUNTIME:termcap"
#  else
#   define TERMCAPFILE "/etc/termcap"
#  endif
# endif
#endif

    int
tgetent(
    char    *tbuf,		
    char    *term)		
{
    char    tcbuf[32];		
    char    *tcptr = tcbuf;	
    char    *tcap = TERMCAPFILE; 
    char    *tmp;
    FILE    *termcap;
    int	    retval = 0;
    int	    len;

    if ((tmp = (char *)mch_getenv((char_u *)"TERMCAP")) != NULL)
    {
	if (*tmp == '/')		
	{
	    tcap = tmp ;
#if defined(AMIGA)
	    
	    tcap++;
	    tmp = strchr(tcap, '/');
	    if (tmp)
		*tmp = ':';
#endif
	}
	else				
	{
	    int tlen = strlen(term);

	    while (*tmp && *tmp != ':')		
	    {
		char *nexttmp;

		while (*tmp == '|')
		    tmp++;
		nexttmp  = _find(tmp, ":|");	
		if (tmp+tlen == nexttmp && _match(tmp, term) == tlen)
		{
		    strcpy(tbuf, tmp);
		    tent = tbuf;
		    return 1;
		}
		else
		    tmp = nexttmp;
	    }
	}
    }
    if (!(termcap = mch_fopen(tcap, "r")))
    {
	strcpy(tbuf, tcap);
	return -1;
    }

    len = 0;
    while (getent(tbuf + len, term, termcap, TBUFSZ - len))
    {
	tcptr = tcbuf;				
	if ((term = tgetstr("tc", &tcptr)))	
	{
	    rewind(termcap);
	    len = strlen(tbuf);
	}
	else
	{
	    retval = 1;
	    tent = tbuf;	
	    break;
	}
    }
    fclose(termcap);
    return retval;
}

    static int
getent(char *tbuf, char *term, FILE *termcap, int buflen)
{
    char    *tptr;
    int	    tlen = strlen(term);

    while (nextent(tbuf, termcap, buflen))	
    {
	tptr = tbuf;
	while (*tptr && *tptr != ':')		
	{
	    char    *nexttptr;

	    while (*tptr == '|')		
		tptr++;
	    nexttptr = _find(tptr, ":|");	
	    if (tptr + tlen == nexttptr &&
		_match(tptr, term) == tlen)	
	    {
		tent = tbuf;
		return 1;
	    }
	    else				
		tptr = nexttptr;
	}
    }
    return 0;
}


    static int
nextent(char *tbuf, FILE *termcap, int buflen)
{
    char *lbuf = tbuf;				
				

    while (lbuf < tbuf+buflen &&		
	  fgets(lbuf, (int)(tbuf+buflen-lbuf), termcap)) 
    {
	int llen = strlen(lbuf);

	if (*lbuf == '#')			
	    continue;
	if (lbuf[-1] == ':' &&			
	    lbuf[0] == '\t' &&
	    lbuf[1] == ':')
	{
	    STRMOVE(lbuf, lbuf + 2);
	    llen -= 2;
	}
	if (lbuf[llen-2] == '\\')		
	    lbuf += llen-2;
	else
	{
	    lbuf[llen-1]=0;			
	    return 1;
	}
    }

    return 0;					
}



    int
tgetflag(char *id)
{
    char    buf[256], *ptr = buf;

    return tgetstr(id, &ptr) ? 1 : 0;
}



    int
tgetnum(char *id)
{
    char *ptr, buf[256];
    ptr = buf;

    if (tgetstr(id, &ptr))
	return atoi(buf);
    else
	return 0;
}



    char *
tgetstr(char *id, char **buf)
{
    int		len = strlen(id);
    char	*tmp=tent;
    char	*hold;
    int		i;

    do {
	tmp = _find(tmp, ":");			
	while (*tmp == ':')			
	    tmp++;
	if (!*tmp)
	    break;

	if (_match(id, tmp) == len)
	{
	    tmp += len;				
	    if (*tmp == '@')			
		return 0;			
	    hold= *buf;
	    while (*++tmp && *tmp != ':')	
		{
		switch(*tmp)
		{
		case '\\':			
		    switch(*++tmp)
		    {
		    case 0:			
			tmp--;			
			break;			
		    case 'e':
		    case 'E':			
			*(*buf)++ = ESC;
			break;
		    case 'n':			
			*(*buf)++ = '\n';
			break;
		    case 'r':			
			*(*buf)++ = '\r';
			break;
		    case 't':			
			*(*buf)++ = '\t';
			break;
		    case 'b':			
			*(*buf)++ = '\b';
			break;
		    case 'f':			
			*(*buf)++ = '\f';
			break;
		    case '0':			
		    case '1':
		    case '2':
		    case '3':
		    case '4':
		    case '5':
		    case '6':
		    case '7':
		    case '8':
		    case '9':
			**buf = 0;
			    
			for (i = 0; i < 3 && VIM_ISDIGIT(*tmp); ++i)
			    **buf = **buf * 8 + *tmp++ - '0';
			(*buf)++;
			tmp--;
			break;
		    default:			
			*(*buf)++= *tmp;
		    }
		    break;
		case '^':			
		    ++tmp;
		    *(*buf)++ = Ctrl_chr(*tmp);
		    break;
		default:
		    *(*buf)++ = *tmp;
		}
	    }
	    *(*buf)++ = 0;
	    return hold;
	}
    } while (*tmp);

    return 0;
}



    char *
tgoto(
    char    *cm,				
    int	    col,				
    int	    line)				
{
    char    gx, gy,				
	*ptr,					
	reverse = 0,				
	*bufp,					
	addup = 0,				
	addbak = 0,				
	c;
    static char buffer[32];

    if (!cm)
	return "OOPS";				

    bufp = buffer;
    ptr = cm;

    while (*ptr)
    {
	if ((c = *ptr++) != '%')		
	{
	    *bufp++ = c;
	}
	else
	{				
	    switch(c = *ptr++)
	    {
	    case 'd':				
		bufp = _addfmt(bufp, "%d", line);
		line = col;
		break;
	    case '2':				
		bufp = _addfmt(bufp, "%02d", line);
		line = col;
		break;
	    case '3':				
		bufp = _addfmt(bufp, "%03d", line);
		line = col;
		break;
	    case '>':				
		gx = *ptr++;
		gy = *ptr++;
		if (col>gx) col += gy;
		if (line>gx) line += gy;
		break;
	    case '+':				
		line += *ptr++;
	    case '.':				
		if (line == '\t' ||		
		   line == '\n' ||		
		   line == '\004' ||		
		   line == '\0')
		{
		    line++;			
		    if (reverse == (line == col))
			addup=1;		
		    else
			addbak=1;		
		}
		*bufp++=line;
		line = col;
		break;
	    case 'r':				
		gx = line;
		line = col;
		col = gx;
		reverse = 1;
		break;
	    case 'i':			
		col++;
		line++;
		break;
	    case '%':				
		*bufp++='%';
		break;
	    case 'n':				
		line ^= 0140;
		col ^= 0140;
		break;
	    case 'B':				
		line = line/10<<4+line%10;
		col = col/10<<4+col%10;
		break;
	    case 'D':				
		line = line-2*(line&15);
		col = col-2*(col&15);
		break;
	    default:				
		return "OOPS";
	    }
	}
    }

    if (addup)					
	if (UP)
	{
	    ptr=UP;
	    while (VIM_ISDIGIT(*ptr) || *ptr == '.')
		ptr++;
	    if (*ptr == '*')
		ptr++;
	    while (*ptr)
		*bufp++ = *ptr++;
	}

    if (addbak)					
	if (BC)
	{
	    ptr=BC;
	    while (VIM_ISDIGIT(*ptr) || *ptr == '.')
		ptr++;
	    if (*ptr == '*')
		ptr++;
	    while (*ptr)
		*bufp++ = *ptr++;
	}
	else
	    *bufp++='\b';

    *bufp = 0;

    return(buffer);
}



int _bauds[16]={
    0,	50, 75,	110,
    134,    150,    200,    300,
    600,    1200,   1800,   2400,
    4800,   9600,   19200,  19200 };

    int
tputs(
    char *cp,				
    int affcnt,				
    void (*outc)(unsigned int))		
{
    int    frac,			
	counter,			
	atol(const char *);

    if (VIM_ISDIGIT(*cp))
    {
	counter = 0;
	frac = 1000;
	while (VIM_ISDIGIT(*cp))
	    counter = counter * 10L + (int)(*cp++ - '0');
	if (*cp == '.')
	    while (VIM_ISDIGIT(*++cp))
	    {
		counter = counter * 10L + (int)(*cp++ - '0');
		frac = frac * 10;
	    }
	if (*cp!='*')			
	{
	    if (affcnt>1) affcnt = 1;
	}
	else
	    cp++;

	
	if (ospeed)
	    counter = (counter * _bauds[ospeed] * (int)affcnt) / frac;

	while (*cp)			
	    (*outc)(*cp++);
	if (ospeed)
	    while (counter--)		
		(*outc)(PC);
    }
    else
	while (*cp)
	    (*outc)(*cp++);
    return 0;
}


    static int
_match(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s1[i] == s2[i])
	i++;

    return i;
}


    static char *
_find(char *s, char *set)
{
    for (; *s; s++)
    {
	char	*ptr = set;

	while (*ptr && *s != *ptr)
	    ptr++;

	if (*ptr)
	    return s;
    }

    return s;
}


    static char *
_addfmt(char *buf, char *fmt, int val)
{
    sprintf(buf, fmt, val);
    while (*buf)
	buf++;
    return buf;
}
