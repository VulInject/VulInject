


#ifdef DEBUG
# define NFA_REGEXP_ERROR_LOG	"nfa_regexp_error.log"
# define ENABLE_LOG
# define NFA_REGEXP_DUMP_LOG	"nfa_regexp_dump.log"
# define NFA_REGEXP_RUN_LOG	"nfa_regexp_run.log"
# define NFA_REGEXP_DEBUG_LOG	"nfa_regexp_debug.log"
#endif


#define NFA_ADD_NL		31

enum
{
    NFA_SPLIT = -1024,
    NFA_MATCH,
    NFA_EMPTY,			    

    NFA_START_COLL,		    
    NFA_END_COLL,		    
    NFA_START_NEG_COLL,		    
    NFA_END_NEG_COLL,		    
    NFA_RANGE,			    
				    
    NFA_RANGE_MIN,		    
    NFA_RANGE_MAX,		    

    NFA_CONCAT,			    
				    
    NFA_OR,			    
    NFA_STAR,			    
    NFA_STAR_NONGREEDY,		    
    NFA_QUEST,			    
    NFA_QUEST_NONGREEDY,	    

    NFA_BOL,			    
    NFA_EOL,			    
    NFA_BOW,			    
    NFA_EOW,			    
    NFA_BOF,			    
    NFA_EOF,			    
    NFA_NEWL,
    NFA_ZSTART,			    
    NFA_ZEND,			    
    NFA_NOPEN,			    
    NFA_NCLOSE,			    
    NFA_START_INVISIBLE,
    NFA_START_INVISIBLE_FIRST,
    NFA_START_INVISIBLE_NEG,
    NFA_START_INVISIBLE_NEG_FIRST,
    NFA_START_INVISIBLE_BEFORE,
    NFA_START_INVISIBLE_BEFORE_FIRST,
    NFA_START_INVISIBLE_BEFORE_NEG,
    NFA_START_INVISIBLE_BEFORE_NEG_FIRST,
    NFA_START_PATTERN,
    NFA_END_INVISIBLE,
    NFA_END_INVISIBLE_NEG,
    NFA_END_PATTERN,
    NFA_COMPOSING,		    
				    
    NFA_END_COMPOSING,		    
    NFA_ANY_COMPOSING,		    
    NFA_OPT_CHARS,		    

    
    NFA_PREV_ATOM_NO_WIDTH,	    
    NFA_PREV_ATOM_NO_WIDTH_NEG,	    
    NFA_PREV_ATOM_JUST_BEFORE,	    
    NFA_PREV_ATOM_JUST_BEFORE_NEG,  
    NFA_PREV_ATOM_LIKE_PATTERN,	    

    NFA_BACKREF1,		    
    NFA_BACKREF2,		    
    NFA_BACKREF3,		    
    NFA_BACKREF4,		    
    NFA_BACKREF5,		    
    NFA_BACKREF6,		    
    NFA_BACKREF7,		    
    NFA_BACKREF8,		    
    NFA_BACKREF9,		    
#ifdef FEAT_SYN_HL
    NFA_ZREF1,			    
    NFA_ZREF2,			    
    NFA_ZREF3,			    
    NFA_ZREF4,			    
    NFA_ZREF5,			    
    NFA_ZREF6,			    
    NFA_ZREF7,			    
    NFA_ZREF8,			    
    NFA_ZREF9,			    
#endif
    NFA_SKIP,			    

    NFA_MOPEN,
    NFA_MOPEN1,
    NFA_MOPEN2,
    NFA_MOPEN3,
    NFA_MOPEN4,
    NFA_MOPEN5,
    NFA_MOPEN6,
    NFA_MOPEN7,
    NFA_MOPEN8,
    NFA_MOPEN9,

    NFA_MCLOSE,
    NFA_MCLOSE1,
    NFA_MCLOSE2,
    NFA_MCLOSE3,
    NFA_MCLOSE4,
    NFA_MCLOSE5,
    NFA_MCLOSE6,
    NFA_MCLOSE7,
    NFA_MCLOSE8,
    NFA_MCLOSE9,

#ifdef FEAT_SYN_HL
    NFA_ZOPEN,
    NFA_ZOPEN1,
    NFA_ZOPEN2,
    NFA_ZOPEN3,
    NFA_ZOPEN4,
    NFA_ZOPEN5,
    NFA_ZOPEN6,
    NFA_ZOPEN7,
    NFA_ZOPEN8,
    NFA_ZOPEN9,

    NFA_ZCLOSE,
    NFA_ZCLOSE1,
    NFA_ZCLOSE2,
    NFA_ZCLOSE3,
    NFA_ZCLOSE4,
    NFA_ZCLOSE5,
    NFA_ZCLOSE6,
    NFA_ZCLOSE7,
    NFA_ZCLOSE8,
    NFA_ZCLOSE9,
#endif

    
    NFA_ANY,		
    NFA_IDENT,		
    NFA_SIDENT,		
    NFA_KWORD,		
    NFA_SKWORD,		
    NFA_FNAME,		
    NFA_SFNAME,		
    NFA_PRINT,		
    NFA_SPRINT,		
    NFA_WHITE,		
    NFA_NWHITE,		
    NFA_DIGIT,		
    NFA_NDIGIT,		
    NFA_HEX,		
    NFA_NHEX,		
    NFA_OCTAL,		
    NFA_NOCTAL,		
    NFA_WORD,		
    NFA_NWORD,		
    NFA_HEAD,		
    NFA_NHEAD,		
    NFA_ALPHA,		
    NFA_NALPHA,		
    NFA_LOWER,		
    NFA_NLOWER,		
    NFA_UPPER,		
    NFA_NUPPER,		
    NFA_LOWER_IC,	
    NFA_NLOWER_IC,	
    NFA_UPPER_IC,	
    NFA_NUPPER_IC,	

    NFA_FIRST_NL = NFA_ANY + NFA_ADD_NL,
    NFA_LAST_NL = NFA_NUPPER_IC + NFA_ADD_NL,

    NFA_CURSOR,		
    NFA_LNUM,		
    NFA_LNUM_GT,	
    NFA_LNUM_LT,	
    NFA_COL,		
    NFA_COL_GT,		
    NFA_COL_LT,		
    NFA_VCOL,		
    NFA_VCOL_GT,	
    NFA_VCOL_LT,	
    NFA_MARK,		
    NFA_MARK_GT,	
    NFA_MARK_LT,	
    NFA_VISUAL,		

    
    NFA_CLASS_ALNUM,
    NFA_CLASS_ALPHA,
    NFA_CLASS_BLANK,
    NFA_CLASS_CNTRL,
    NFA_CLASS_DIGIT,
    NFA_CLASS_GRAPH,
    NFA_CLASS_LOWER,
    NFA_CLASS_PRINT,
    NFA_CLASS_PUNCT,
    NFA_CLASS_SPACE,
    NFA_CLASS_UPPER,
    NFA_CLASS_XDIGIT,
    NFA_CLASS_TAB,
    NFA_CLASS_RETURN,
    NFA_CLASS_BACKSPACE,
    NFA_CLASS_ESCAPE,
    NFA_CLASS_IDENT,
    NFA_CLASS_KEYWORD,
    NFA_CLASS_FNAME
};


static int nfa_classcodes[] = {
    NFA_ANY, NFA_IDENT, NFA_SIDENT, NFA_KWORD,NFA_SKWORD,
    NFA_FNAME, NFA_SFNAME, NFA_PRINT, NFA_SPRINT,
    NFA_WHITE, NFA_NWHITE, NFA_DIGIT, NFA_NDIGIT,
    NFA_HEX, NFA_NHEX, NFA_OCTAL, NFA_NOCTAL,
    NFA_WORD, NFA_NWORD, NFA_HEAD, NFA_NHEAD,
    NFA_ALPHA, NFA_NALPHA, NFA_LOWER, NFA_NLOWER,
    NFA_UPPER, NFA_NUPPER
};


static int nfa_re_flags; 
static int *post_start;  
static int *post_end;
static int *post_ptr;




static int wants_nfa;

static int nstate;	
static int istate;	


static save_se_T *nfa_endp = NULL;


static int nfa_ll_index = 0;

static int realloc_post_list(void);
static int nfa_reg(int paren);
#ifdef DEBUG
static void nfa_print_state2(FILE *debugf, nfa_state_T *state, garray_T *indent);
#endif
static int match_follows(nfa_state_T *startstate, int depth);
static int failure_chance(nfa_state_T *state, int depth);


#define EMIT(c)	do {				\
		    if (post_ptr >= post_end && realloc_post_list() == FAIL) \
			return FAIL;		\
		    *post_ptr++ = c;		\
		} while (0)


    static int
nfa_regcomp_start(
    char_u	*expr,
    int		re_flags)	    
{
    size_t	postfix_size;
    int		nstate_max;

    nstate = 0;
    istate = 0;
    
    nstate_max = (int)(STRLEN(expr) + 1) * 25;

    
    
    nstate_max += 1000;

    
    postfix_size = sizeof(int) * nstate_max;

    post_start = alloc(postfix_size);
    if (post_start == NULL)
	return FAIL;
    post_ptr = post_start;
    post_end = post_start + nstate_max;
    wants_nfa = FALSE;
    rex.nfa_has_zend = FALSE;
    rex.nfa_has_backref = FALSE;

    
    regcomp_start(expr, re_flags);

    return OK;
}


    static int
nfa_get_reganch(nfa_state_T *start, int depth)
{
    nfa_state_T *p = start;

    if (depth > 4)
	return 0;

    while (p != NULL)
    {
	switch (p->c)
	{
	    case NFA_BOL:
	    case NFA_BOF:
		return 1; 

	    case NFA_ZSTART:
	    case NFA_ZEND:
	    case NFA_CURSOR:
	    case NFA_VISUAL:

	    case NFA_MOPEN:
	    case NFA_MOPEN1:
	    case NFA_MOPEN2:
	    case NFA_MOPEN3:
	    case NFA_MOPEN4:
	    case NFA_MOPEN5:
	    case NFA_MOPEN6:
	    case NFA_MOPEN7:
	    case NFA_MOPEN8:
	    case NFA_MOPEN9:
	    case NFA_NOPEN:
#ifdef FEAT_SYN_HL
	    case NFA_ZOPEN:
	    case NFA_ZOPEN1:
	    case NFA_ZOPEN2:
	    case NFA_ZOPEN3:
	    case NFA_ZOPEN4:
	    case NFA_ZOPEN5:
	    case NFA_ZOPEN6:
	    case NFA_ZOPEN7:
	    case NFA_ZOPEN8:
	    case NFA_ZOPEN9:
#endif
		p = p->out;
		break;

	    case NFA_SPLIT:
		return nfa_get_reganch(p->out, depth + 1)
				       && nfa_get_reganch(p->out1, depth + 1);

	    default:
		return 0; 
	}
    }
    return 0;
}


    static int
nfa_get_regstart(nfa_state_T *start, int depth)
{
    nfa_state_T *p = start;

    if (depth > 4)
	return 0;

    while (p != NULL)
    {
	switch (p->c)
	{
	    
	    case NFA_BOL:
	    case NFA_BOF:
	    case NFA_BOW:
	    case NFA_EOW:
	    case NFA_ZSTART:
	    case NFA_ZEND:
	    case NFA_CURSOR:
	    case NFA_VISUAL:
	    case NFA_LNUM:
	    case NFA_LNUM_GT:
	    case NFA_LNUM_LT:
	    case NFA_COL:
	    case NFA_COL_GT:
	    case NFA_COL_LT:
	    case NFA_VCOL:
	    case NFA_VCOL_GT:
	    case NFA_VCOL_LT:
	    case NFA_MARK:
	    case NFA_MARK_GT:
	    case NFA_MARK_LT:

	    case NFA_MOPEN:
	    case NFA_MOPEN1:
	    case NFA_MOPEN2:
	    case NFA_MOPEN3:
	    case NFA_MOPEN4:
	    case NFA_MOPEN5:
	    case NFA_MOPEN6:
	    case NFA_MOPEN7:
	    case NFA_MOPEN8:
	    case NFA_MOPEN9:
	    case NFA_NOPEN:
#ifdef FEAT_SYN_HL
	    case NFA_ZOPEN:
	    case NFA_ZOPEN1:
	    case NFA_ZOPEN2:
	    case NFA_ZOPEN3:
	    case NFA_ZOPEN4:
	    case NFA_ZOPEN5:
	    case NFA_ZOPEN6:
	    case NFA_ZOPEN7:
	    case NFA_ZOPEN8:
	    case NFA_ZOPEN9:
#endif
		p = p->out;
		break;

	    case NFA_SPLIT:
	    {
		int c1 = nfa_get_regstart(p->out, depth + 1);
		int c2 = nfa_get_regstart(p->out1, depth + 1);

		if (c1 == c2)
		    return c1; 
		return 0;
	    }

	    default:
		if (p->c > 0)
		    return p->c; 
		return 0;
	}
    }
    return 0;
}


    static char_u *
nfa_get_match_text(nfa_state_T *start)
{
    nfa_state_T *p = start;
    int		len = 0;
    char_u	*ret;
    char_u	*s;

    if (p->c != NFA_MOPEN)
	return NULL; 
    p = p->out;
    while (p->c > 0)
    {
	len += MB_CHAR2LEN(p->c);
	p = p->out;
    }
    if (p->c != NFA_MCLOSE || p->out->c != NFA_MATCH)
	return NULL;

    ret = alloc(len);
    if (ret == NULL)
	return NULL;

    p = start->out->out; 
    s = ret;
    while (p->c > 0)
    {
	if (has_mbyte)
	    s += (*mb_char2bytes)(p->c, s);
	else
	    *s++ = p->c;
	p = p->out;
    }
    *s = NUL;
    return ret;
}


    static int
realloc_post_list(void)
{
    int   nstate_max = (int)(post_end - post_start);
    int   new_max;
    int   *new_start;
    int	  *old_start;

    
    
    new_max = nstate_max * 3 / 2;
    new_start = ALLOC_MULT(int, new_max);
    if (new_start == NULL)
	return FAIL;
    mch_memmove(new_start, post_start, nstate_max * sizeof(int));
    old_start = post_start;
    post_start = new_start;
    post_ptr = new_start + (post_ptr - old_start);
    post_end = post_start + new_max;
    vim_free(old_start);
    return OK;
}


    static int
nfa_recognize_char_class(char_u *start, char_u *end, int extra_newl)
{
#   define CLASS_not		0x80
#   define CLASS_af		0x40
#   define CLASS_AF		0x20
#   define CLASS_az		0x10
#   define CLASS_AZ		0x08
#   define CLASS_o7		0x04
#   define CLASS_o9		0x02
#   define CLASS_underscore	0x01

    int		newl = FALSE;
    char_u	*p;
    int		config = 0;

    if (extra_newl == TRUE)
	newl = TRUE;

    if (*end != ']')
	return FAIL;
    p = start;
    if (*p == '^')
    {
	config |= CLASS_not;
	p++;
    }

    while (p < end)
    {
	if (p + 2 < end && *(p + 1) == '-')
	{
	    switch (*p)
	    {
		case '0':
		    if (*(p + 2) == '9')
		    {
			config |= CLASS_o9;
			break;
		    }
		    if (*(p + 2) == '7')
		    {
			config |= CLASS_o7;
			break;
		    }
		    return FAIL;

		case 'a':
		    if (*(p + 2) == 'z')
		    {
			config |= CLASS_az;
			break;
		    }
		    if (*(p + 2) == 'f')
		    {
			config |= CLASS_af;
			break;
		    }
		    return FAIL;

		case 'A':
		    if (*(p + 2) == 'Z')
		    {
			config |= CLASS_AZ;
			break;
		    }
		    if (*(p + 2) == 'F')
		    {
			config |= CLASS_AF;
			break;
		    }
		    return FAIL;

		default:
		    return FAIL;
	    }
	    p += 3;
	}
	else if (p + 1 < end && *p == '\\' && *(p + 1) == 'n')
	{
	    newl = TRUE;
	    p += 2;
	}
	else if (*p == '_')
	{
	    config |= CLASS_underscore;
	    p ++;
	}
	else if (*p == '\n')
	{
	    newl = TRUE;
	    p ++;
	}
	else
	    return FAIL;
    } 

    if (p != end)
	return FAIL;

    if (newl == TRUE)
	extra_newl = NFA_ADD_NL;

    switch (config)
    {
	case CLASS_o9:
	    return extra_newl + NFA_DIGIT;
	case CLASS_not |  CLASS_o9:
	    return extra_newl + NFA_NDIGIT;
	case CLASS_af | CLASS_AF | CLASS_o9:
	    return extra_newl + NFA_HEX;
	case CLASS_not | CLASS_af | CLASS_AF | CLASS_o9:
	    return extra_newl + NFA_NHEX;
	case CLASS_o7:
	    return extra_newl + NFA_OCTAL;
	case CLASS_not | CLASS_o7:
	    return extra_newl + NFA_NOCTAL;
	case CLASS_az | CLASS_AZ | CLASS_o9 | CLASS_underscore:
	    return extra_newl + NFA_WORD;
	case CLASS_not | CLASS_az | CLASS_AZ | CLASS_o9 | CLASS_underscore:
	    return extra_newl + NFA_NWORD;
	case CLASS_az | CLASS_AZ | CLASS_underscore:
	    return extra_newl + NFA_HEAD;
	case CLASS_not | CLASS_az | CLASS_AZ | CLASS_underscore:
	    return extra_newl + NFA_NHEAD;
	case CLASS_az | CLASS_AZ:
	    return extra_newl + NFA_ALPHA;
	case CLASS_not | CLASS_az | CLASS_AZ:
	    return extra_newl + NFA_NALPHA;
	case CLASS_az:
	   return extra_newl + NFA_LOWER_IC;
	case CLASS_not | CLASS_az:
	    return extra_newl + NFA_NLOWER_IC;
	case CLASS_AZ:
	    return extra_newl + NFA_UPPER_IC;
	case CLASS_not | CLASS_AZ:
	    return extra_newl + NFA_NUPPER_IC;
    }
    return FAIL;
}


    static int
nfa_emit_equi_class(int c)
{
#define EMIT2(c)    EMIT(c); EMIT(NFA_CONCAT);

    if (enc_utf8 || STRCMP(p_enc, "latin1") == 0
					 || STRCMP(p_enc, "iso-8859-15") == 0)
    {
#define A_grave 0xc0
#define A_acute 0xc1
#define A_circumflex 0xc2
#define A_virguilla 0xc3
#define A_diaeresis 0xc4
#define A_ring 0xc5
#define C_cedilla 0xc7
#define E_grave 0xc8
#define E_acute 0xc9
#define E_circumflex 0xca
#define E_diaeresis 0xcb
#define I_grave 0xcc
#define I_acute 0xcd
#define I_circumflex 0xce
#define I_diaeresis 0xcf
#define N_virguilla 0xd1
#define O_grave 0xd2
#define O_acute 0xd3
#define O_circumflex 0xd4
#define O_virguilla 0xd5
#define O_diaeresis 0xd6
#define O_slash 0xd8
#define U_grave 0xd9
#define U_acute 0xda
#define U_circumflex 0xdb
#define U_diaeresis 0xdc
#define Y_acute 0xdd
#define a_grave 0xe0
#define a_acute 0xe1
#define a_circumflex 0xe2
#define a_virguilla 0xe3
#define a_diaeresis 0xe4
#define a_ring 0xe5
#define c_cedilla 0xe7
#define e_grave 0xe8
#define e_acute 0xe9
#define e_circumflex 0xea
#define e_diaeresis 0xeb
#define i_grave 0xec
#define i_acute 0xed
#define i_circumflex 0xee
#define i_diaeresis 0xef
#define n_virguilla 0xf1
#define o_grave 0xf2
#define o_acute 0xf3
#define o_circumflex 0xf4
#define o_virguilla 0xf5
#define o_diaeresis 0xf6
#define o_slash 0xf8
#define u_grave 0xf9
#define u_acute 0xfa
#define u_circumflex 0xfb
#define u_diaeresis 0xfc
#define y_acute 0xfd
#define y_diaeresis 0xff
	switch (c)
	{
	    case 'A': case A_grave: case A_acute: case A_circumflex:
	    case A_virguilla: case A_diaeresis: case A_ring:
	    case 0x100: case 0x102: case 0x104: case 0x1cd:
	    case 0x1de: case 0x1e0: case 0x1fa: case 0x200:
	    case 0x202: case 0x226: case 0x23a: case 0x1e00:
	    case 0x1ea0: case 0x1ea2: case 0x1ea4: case 0x1ea6:
	    case 0x1ea8: case 0x1eaa: case 0x1eac: case 0x1eae:
	    case 0x1eb0: case 0x1eb2: case 0x1eb4: case 0x1eb6:
		    EMIT2('A') EMIT2(A_grave) EMIT2(A_acute)
		    EMIT2(A_circumflex) EMIT2(A_virguilla)
		    EMIT2(A_diaeresis) EMIT2(A_ring)
		    EMIT2(0x100) EMIT2(0x102) EMIT2(0x104)
		    EMIT2(0x1cd) EMIT2(0x1de) EMIT2(0x1e0)
		    EMIT2(0x1fa) EMIT2(0x200) EMIT2(0x202)
		    EMIT2(0x226) EMIT2(0x23a) EMIT2(0x1e00)
		    EMIT2(0x1ea0) EMIT2(0x1ea2) EMIT2(0x1ea4)
		    EMIT2(0x1ea6) EMIT2(0x1ea8) EMIT2(0x1eaa)
		    EMIT2(0x1eac) EMIT2(0x1eae) EMIT2(0x1eb0)
		    EMIT2(0x1eb2) EMIT2(0x1eb6) EMIT2(0x1eb4)
		    return OK;

	    case 'B': case 0x181: case 0x243: case 0x1e02:
	    case 0x1e04: case 0x1e06:
		    EMIT2('B')
		    EMIT2(0x181) EMIT2(0x243) EMIT2(0x1e02)
		    EMIT2(0x1e04) EMIT2(0x1e06)
		    return OK;

	    case 'C': case C_cedilla: case 0x106: case 0x108:
	    case 0x10a: case 0x10c: case 0x187: case 0x23b:
	    case 0x1e08: case 0xa792:
		    EMIT2('C') EMIT2(C_cedilla)
		    EMIT2(0x106) EMIT2(0x108) EMIT2(0x10a)
		    EMIT2(0x10c) EMIT2(0x187) EMIT2(0x23b)
		    EMIT2(0x1e08) EMIT2(0xa792)
		    return OK;

	    case 'D': case 0x10e: case 0x110: case 0x18a:
	    case 0x1e0a: case 0x1e0c: case 0x1e0e: case 0x1e10:
	    case 0x1e12:
		    EMIT2('D') EMIT2(0x10e) EMIT2(0x110) EMIT2(0x18a)
		    EMIT2(0x1e0a) EMIT2(0x1e0c) EMIT2(0x1e0e)
		    EMIT2(0x1e10) EMIT2(0x1e12)
		    return OK;

	    case 'E': case E_grave: case E_acute: case E_circumflex:
	    case E_diaeresis: case 0x112: case 0x114: case 0x116:
	    case 0x118: case 0x11a: case 0x204: case 0x206:
	    case 0x228: case 0x246: case 0x1e14: case 0x1e16:
	    case 0x1e18: case 0x1e1a: case 0x1e1c: case 0x1eb8:
	    case 0x1eba: case 0x1ebc: case 0x1ebe: case 0x1ec0:
	    case 0x1ec2: case 0x1ec4: case 0x1ec6:
		    EMIT2('E') EMIT2(E_grave) EMIT2(E_acute)
		    EMIT2(E_circumflex) EMIT2(E_diaeresis)
		    EMIT2(0x112) EMIT2(0x114) EMIT2(0x116)
		    EMIT2(0x118) EMIT2(0x11a) EMIT2(0x204)
		    EMIT2(0x206) EMIT2(0x228) EMIT2(0x246)
		    EMIT2(0x1e14) EMIT2(0x1e16) EMIT2(0x1e18)
		    EMIT2(0x1e1a) EMIT2(0x1e1c) EMIT2(0x1eb8)
		    EMIT2(0x1eba) EMIT2(0x1ebc) EMIT2(0x1ebe)
		    EMIT2(0x1ec0) EMIT2(0x1ec2) EMIT2(0x1ec4)
		    EMIT2(0x1ec6)
		    return OK;

	    case 'F': case 0x191: case 0x1e1e: case 0xa798:
		    EMIT2('F') EMIT2(0x191) EMIT2(0x1e1e) EMIT2(0xa798)
		    return OK;

	    case 'G': case 0x11c: case 0x11e: case 0x120:
	    case 0x122: case 0x193: case 0x1e4: case 0x1e6:
	    case 0x1f4: case 0x1e20: case 0xa7a0:
		    EMIT2('G') EMIT2(0x11c) EMIT2(0x11e) EMIT2(0x120)
		    EMIT2(0x122) EMIT2(0x193) EMIT2(0x1e4)
		    EMIT2(0x1e6) EMIT2(0x1f4) EMIT2(0x1e20)
		    EMIT2(0xa7a0)
		    return OK;

	    case 'H': case 0x124: case 0x126: case 0x21e:
	    case 0x1e22: case 0x1e24: case 0x1e26: case 0x1e28:
	    case 0x1e2a: case 0x2c67:
		    EMIT2('H') EMIT2(0x124) EMIT2(0x126) EMIT2(0x21e)
		    EMIT2(0x1e22) EMIT2(0x1e24) EMIT2(0x1e26)
		    EMIT2(0x1e28) EMIT2(0x1e2a) EMIT2(0x2c67)
		    return OK;

	    case 'I': case I_grave: case I_acute: case I_circumflex:
	    case I_diaeresis: case 0x128: case 0x12a: case 0x12c:
	    case 0x12e: case 0x130: case 0x197: case 0x1cf:
	    case 0x208: case 0x20a: case 0x1e2c: case 0x1e2e:
	    case 0x1ec8: case 0x1eca:
		    EMIT2('I') EMIT2(I_grave) EMIT2(I_acute)
		    EMIT2(I_circumflex) EMIT2(I_diaeresis)
		    EMIT2(0x128) EMIT2(0x12a) EMIT2(0x12c)
		    EMIT2(0x12e) EMIT2(0x130) EMIT2(0x197)
		    EMIT2(0x1cf) EMIT2(0x208) EMIT2(0x20a)
		    EMIT2(0x1e2c) EMIT2(0x1e2e) EMIT2(0x1ec8)
		    EMIT2(0x1eca)
		    return OK;

	    case 'J': case 0x134: case 0x248:
		    EMIT2('J') EMIT2(0x134) EMIT2(0x248)
		    return OK;

	    case 'K': case 0x136: case 0x198: case 0x1e8: case 0x1e30:
	    case 0x1e32: case 0x1e34: case 0x2c69: case 0xa740:
		    EMIT2('K') EMIT2(0x136) EMIT2(0x198) EMIT2(0x1e8)
		    EMIT2(0x1e30) EMIT2(0x1e32) EMIT2(0x1e34)
		    EMIT2(0x2c69) EMIT2(0xa740)
		    return OK;

	    case 'L': case 0x139: case 0x13b: case 0x13d:
	    case 0x13f: case 0x141: case 0x23d: case 0x1e36:
	    case 0x1e38: case 0x1e3a: case 0x1e3c: case 0x2c60:
		    EMIT2('L') EMIT2(0x139) EMIT2(0x13b)
		    EMIT2(0x13d) EMIT2(0x13f) EMIT2(0x141)
		    EMIT2(0x23d) EMIT2(0x1e36) EMIT2(0x1e38)
		    EMIT2(0x1e3a) EMIT2(0x1e3c) EMIT2(0x2c60)
		    return OK;

	    case 'M': case 0x1e3e: case 0x1e40: case 0x1e42:
		    EMIT2('M') EMIT2(0x1e3e) EMIT2(0x1e40)
		    EMIT2(0x1e42)
		    return OK;

	    case 'N': case N_virguilla:
	    case 0x143: case 0x145: case 0x147: case 0x1f8:
	    case 0x1e44: case 0x1e46: case 0x1e48: case 0x1e4a:
	    case 0xa7a4:
		    EMIT2('N') EMIT2(N_virguilla)
		    EMIT2(0x143) EMIT2(0x145) EMIT2(0x147)
		    EMIT2(0x1f8) EMIT2(0x1e44) EMIT2(0x1e46)
		    EMIT2(0x1e48) EMIT2(0x1e4a) EMIT2(0xa7a4)
		    return OK;

	    case 'O': case O_grave: case O_acute: case O_circumflex:
	    case O_virguilla: case O_diaeresis: case O_slash:
	    case 0x14c: case 0x14e: case 0x150: case 0x19f:
	    case 0x1a0: case 0x1d1: case 0x1ea: case 0x1ec:
	    case 0x1fe: case 0x20c: case 0x20e: case 0x22a:
	    case 0x22c: case 0x22e: case 0x230: case 0x1e4c:
	    case 0x1e4e: case 0x1e50: case 0x1e52: case 0x1ecc:
	    case 0x1ece: case 0x1ed0: case 0x1ed2: case 0x1ed4:
	    case 0x1ed6: case 0x1ed8: case 0x1eda: case 0x1edc:
	    case 0x1ede: case 0x1ee0: case 0x1ee2:
		    EMIT2('O') EMIT2(O_grave) EMIT2(O_acute)
		    EMIT2(O_circumflex) EMIT2(O_virguilla)
		    EMIT2(O_diaeresis) EMIT2(O_slash)
		    EMIT2(0x14c) EMIT2(0x14e) EMIT2(0x150)
		    EMIT2(0x19f) EMIT2(0x1a0) EMIT2(0x1d1)
		    EMIT2(0x1ea) EMIT2(0x1ec) EMIT2(0x1fe)
		    EMIT2(0x20c) EMIT2(0x20e) EMIT2(0x22a)
		    EMIT2(0x22c) EMIT2(0x22e) EMIT2(0x230)
		    EMIT2(0x1e4c) EMIT2(0x1e4e) EMIT2(0x1e50)
		    EMIT2(0x1e52) EMIT2(0x1ecc) EMIT2(0x1ece)
		    EMIT2(0x1ed0) EMIT2(0x1ed2) EMIT2(0x1ed4)
		    EMIT2(0x1ed6) EMIT2(0x1ed8) EMIT2(0x1eda)
		    EMIT2(0x1edc) EMIT2(0x1ede) EMIT2(0x1ee0)
		    EMIT2(0x1ee2)
		    return OK;

	    case 'P': case 0x1a4: case 0x1e54: case 0x1e56: case 0x2c63:
		    EMIT2('P') EMIT2(0x1a4) EMIT2(0x1e54) EMIT2(0x1e56)
		    EMIT2(0x2c63)
		    return OK;

	    case 'Q': case 0x24a:
		    EMIT2('Q') EMIT2(0x24a)
		    return OK;

	    case 'R': case 0x154: case 0x156: case 0x158: case 0x210:
	    case 0x212: case 0x24c: case 0x1e58: case 0x1e5a:
	    case 0x1e5c: case 0x1e5e: case 0x2c64: case 0xa7a6:
		    EMIT2('R') EMIT2(0x154) EMIT2(0x156) EMIT2(0x158)
		    EMIT2(0x210) EMIT2(0x212) EMIT2(0x24c) EMIT2(0x1e58)
		    EMIT2(0x1e5a) EMIT2(0x1e5c) EMIT2(0x1e5e) EMIT2(0x2c64)
		    EMIT2(0xa7a6)
		    return OK;

	    case 'S': case 0x15a: case 0x15c: case 0x15e: case 0x160:
	    case 0x218: case 0x1e60: case 0x1e62: case 0x1e64:
	    case 0x1e66: case 0x1e68: case 0x2c7e: case 0xa7a8:
		    EMIT2('S') EMIT2(0x15a) EMIT2(0x15c) EMIT2(0x15e)
		    EMIT2(0x160) EMIT2(0x218) EMIT2(0x1e60) EMIT2(0x1e62)
		    EMIT2(0x1e64) EMIT2(0x1e66) EMIT2(0x1e68) EMIT2(0x2c7e)
		    EMIT2(0xa7a8)
		    return OK;

	    case 'T': case 0x162: case 0x164: case 0x166: case 0x1ac:
	    case 0x1ae: case 0x21a: case 0x23e: case 0x1e6a: case 0x1e6c:
	    case 0x1e6e: case 0x1e70:
		    EMIT2('T') EMIT2(0x162) EMIT2(0x164) EMIT2(0x166)
		    EMIT2(0x1ac) EMIT2(0x1ae) EMIT2(0x23e) EMIT2(0x21a)
		    EMIT2(0x1e6a) EMIT2(0x1e6c) EMIT2(0x1e6e) EMIT2(0x1e70)
		    return OK;

	    case 'U': case U_grave: case U_acute: case U_diaeresis:
	    case U_circumflex: case 0x168: case 0x16a: case 0x16c:
	    case 0x16e: case 0x170: case 0x172: case 0x1af:
	    case 0x1d3: case 0x1d5: case 0x1d7: case 0x1d9:
	    case 0x1db: case 0x214: case 0x216: case 0x244:
	    case 0x1e72: case 0x1e74: case 0x1e76: case 0x1e78:
	    case 0x1e7a: case 0x1ee4: case 0x1ee6: case 0x1ee8:
	    case 0x1eea: case 0x1eec: case 0x1eee: case 0x1ef0:
		    EMIT2('U') EMIT2(U_grave) EMIT2(U_acute)
		    EMIT2(U_diaeresis) EMIT2(U_circumflex)
		    EMIT2(0x168) EMIT2(0x16a)
		    EMIT2(0x16c) EMIT2(0x16e) EMIT2(0x170)
		    EMIT2(0x172) EMIT2(0x1af) EMIT2(0x1d3)
		    EMIT2(0x1d5) EMIT2(0x1d7) EMIT2(0x1d9)
		    EMIT2(0x1db) EMIT2(0x214) EMIT2(0x216)
		    EMIT2(0x244) EMIT2(0x1e72) EMIT2(0x1e74)
		    EMIT2(0x1e76) EMIT2(0x1e78) EMIT2(0x1e7a)
		    EMIT2(0x1ee4) EMIT2(0x1ee6) EMIT2(0x1ee8)
		    EMIT2(0x1eea) EMIT2(0x1eec) EMIT2(0x1eee)
		    EMIT2(0x1ef0)
		    return OK;

	    case 'V': case 0x1b2: case 0x1e7c: case 0x1e7e:
		    EMIT2('V') EMIT2(0x1b2) EMIT2(0x1e7c) EMIT2(0x1e7e)
		    return OK;

	    case 'W': case 0x174: case 0x1e80: case 0x1e82: case 0x1e84:
	    case 0x1e86: case 0x1e88:
		    EMIT2('W') EMIT2(0x174) EMIT2(0x1e80) EMIT2(0x1e82)
		    EMIT2(0x1e84) EMIT2(0x1e86) EMIT2(0x1e88)
		    return OK;

	    case 'X': case 0x1e8a: case 0x1e8c:
		    EMIT2('X') EMIT2(0x1e8a) EMIT2(0x1e8c)
		    return OK;

	    case 'Y': case Y_acute: case 0x176: case 0x178:
	    case 0x1b3: case 0x232: case 0x24e: case 0x1e8e:
	    case 0x1ef2: case 0x1ef4: case 0x1ef6: case 0x1ef8:
		    EMIT2('Y') EMIT2(Y_acute)
		    EMIT2(0x176) EMIT2(0x178) EMIT2(0x1b3)
		    EMIT2(0x232) EMIT2(0x24e) EMIT2(0x1e8e)
		    EMIT2(0x1ef2) EMIT2(0x1ef4) EMIT2(0x1ef6)
		    EMIT2(0x1ef8)
		    return OK;

	    case 'Z': case 0x179: case 0x17b: case 0x17d:
	    case 0x1b5: case 0x1e90: case 0x1e92: case 0x1e94:
	    case 0x2c6b:
		    EMIT2('Z') EMIT2(0x179) EMIT2(0x17b) EMIT2(0x17d)
		    EMIT2(0x1b5) EMIT2(0x1e90) EMIT2(0x1e92)
		    EMIT2(0x1e94) EMIT2(0x2c6b)
		    return OK;

	    case 'a': case a_grave: case a_acute: case a_circumflex:
	    case a_virguilla: case a_diaeresis: case a_ring:
	    case 0x101: case 0x103: case 0x105: case 0x1ce:
	    case 0x1df: case 0x1e1: case 0x1fb: case 0x201:
	    case 0x203: case 0x227: case 0x1d8f: case 0x1e01:
	    case 0x1e9a: case 0x1ea1: case 0x1ea3: case 0x1ea5:
	    case 0x1ea7: case 0x1ea9: case 0x1eab: case 0x1ead:
	    case 0x1eaf: case 0x1eb1: case 0x1eb3: case 0x1eb5:
	    case 0x1eb7: case 0x2c65:
		    EMIT2('a') EMIT2(a_grave) EMIT2(a_acute)
		    EMIT2(a_circumflex) EMIT2(a_virguilla)
		    EMIT2(a_diaeresis) EMIT2(a_ring)
		    EMIT2(0x101) EMIT2(0x103) EMIT2(0x105)
		    EMIT2(0x1ce) EMIT2(0x1df) EMIT2(0x1e1)
		    EMIT2(0x1fb) EMIT2(0x201) EMIT2(0x203)
		    EMIT2(0x227) EMIT2(0x1d8f) EMIT2(0x1e01)
		    EMIT2(0x1e9a) EMIT2(0x1ea1) EMIT2(0x1ea3)
		    EMIT2(0x1ea5) EMIT2(0x1ea7) EMIT2(0x1ea9)
		    EMIT2(0x1eab) EMIT2(0x1ead) EMIT2(0x1eaf)
		    EMIT2(0x1eb1) EMIT2(0x1eb3) EMIT2(0x1eb5)
		    EMIT2(0x1eb7) EMIT2(0x2c65)
		    return OK;

	    case 'b': case 0x180: case 0x253: case 0x1d6c: case 0x1d80:
	    case 0x1e03: case 0x1e05: case 0x1e07:
		    EMIT2('b') EMIT2(0x180) EMIT2(0x253) EMIT2(0x1d6c)
		    EMIT2(0x1d80) EMIT2(0x1e03) EMIT2(0x1e05) EMIT2(0x1e07)
		    return OK;

	    case 'c': case c_cedilla: case 0x107: case 0x109: case 0x10b:
	    case 0x10d: case 0x188: case 0x23c: case 0x1e09: case 0xa793:
	    case 0xa794:
		    EMIT2('c') EMIT2(c_cedilla)
		    EMIT2(0x107) EMIT2(0x109) EMIT2(0x10b)
		    EMIT2(0x10d) EMIT2(0x188) EMIT2(0x23c)
		    EMIT2(0x1e09) EMIT2(0xa793) EMIT2(0xa794)
		    return OK;

	    case 'd': case 0x10f: case 0x111: case 0x257: case 0x1d6d:
	    case 0x1d81: case 0x1d91: case 0x1e0b: case 0x1e0d: case 0x1e0f:
	    case 0x1e11: case 0x1e13:
		    EMIT2('d') EMIT2(0x10f) EMIT2(0x111)
		    EMIT2(0x257) EMIT2(0x1d6d) EMIT2(0x1d81)
		    EMIT2(0x1d91) EMIT2(0x1e0b) EMIT2(0x1e0d)
		    EMIT2(0x1e0f) EMIT2(0x1e11) EMIT2(0x1e13)
		    return OK;

	    case 'e': case e_grave: case e_acute: case e_circumflex:
	    case e_diaeresis: case 0x113: case 0x115: case 0x117:
	    case 0x119: case 0x11b: case 0x205: case 0x207:
	    case 0x229: case 0x247: case 0x1d92: case 0x1e15:
	    case 0x1e17: case 0x1e19: case 0x1e1b: case 0x1e1d:
	    case 0x1eb9: case 0x1ebb: case 0x1ebd: case 0x1ebf:
	    case 0x1ec1: case 0x1ec3: case 0x1ec5: case 0x1ec7:
		    EMIT2('e') EMIT2(e_grave) EMIT2(e_acute)
		    EMIT2(e_circumflex) EMIT2(e_diaeresis)
		    EMIT2(0x113) EMIT2(0x115)
		    EMIT2(0x117) EMIT2(0x119) EMIT2(0x11b)
		    EMIT2(0x205) EMIT2(0x207) EMIT2(0x229)
		    EMIT2(0x247) EMIT2(0x1d92) EMIT2(0x1e15)
		    EMIT2(0x1e17) EMIT2(0x1e19) EMIT2(0x1e1b)
		    EMIT2(0x1e1d) EMIT2(0x1eb9) EMIT2(0x1ebb)
		    EMIT2(0x1ebd) EMIT2(0x1ebf) EMIT2(0x1ec1)
		    EMIT2(0x1ec3) EMIT2(0x1ec5) EMIT2(0x1ec7)
		    return OK;

	    case 'f': case 0x192: case 0x1d6e: case 0x1d82:
	    case 0x1e1f: case 0xa799:
		    EMIT2('f') EMIT2(0x192) EMIT2(0x1d6e) EMIT2(0x1d82)
		    EMIT2(0x1e1f) EMIT2(0xa799)
		    return OK;

	    case 'g': case 0x11d: case 0x11f: case 0x121: case 0x123:
	    case 0x1e5: case 0x1e7: case 0x1f5: case 0x260: case 0x1d83:
	    case 0x1e21: case 0xa7a1:
		    EMIT2('g') EMIT2(0x11d) EMIT2(0x11f) EMIT2(0x121)
		    EMIT2(0x123) EMIT2(0x1e5) EMIT2(0x1e7)
		    EMIT2(0x1f5) EMIT2(0x260) EMIT2(0x1d83)
		    EMIT2(0x1e21) EMIT2(0xa7a1)
		    return OK;

	    case 'h': case 0x125: case 0x127: case 0x21f: case 0x1e23:
	    case 0x1e25: case 0x1e27: case 0x1e29: case 0x1e2b:
	    case 0x1e96: case 0x2c68: case 0xa795:
		    EMIT2('h') EMIT2(0x125) EMIT2(0x127) EMIT2(0x21f)
		    EMIT2(0x1e23) EMIT2(0x1e25) EMIT2(0x1e27)
		    EMIT2(0x1e29) EMIT2(0x1e2b) EMIT2(0x1e96)
		    EMIT2(0x2c68) EMIT2(0xa795)
		    return OK;

	    case 'i': case i_grave: case i_acute: case i_circumflex:
	    case i_diaeresis: case 0x129: case 0x12b: case 0x12d:
	    case 0x12f: case 0x1d0: case 0x209: case 0x20b:
	    case 0x268: case 0x1d96: case 0x1e2d: case 0x1e2f:
	    case 0x1ec9: case 0x1ecb:
		    EMIT2('i') EMIT2(i_grave) EMIT2(i_acute)
		    EMIT2(i_circumflex) EMIT2(i_diaeresis)
		    EMIT2(0x129) EMIT2(0x12b) EMIT2(0x12d)
		    EMIT2(0x12f) EMIT2(0x1d0) EMIT2(0x209)
		    EMIT2(0x20b) EMIT2(0x268) EMIT2(0x1d96)
		    EMIT2(0x1e2d) EMIT2(0x1e2f) EMIT2(0x1ec9)
		    EMIT2(0x1ecb) EMIT2(0x1ecb)
		    return OK;

	    case 'j': case 0x135: case 0x1f0: case 0x249:
		    EMIT2('j') EMIT2(0x135) EMIT2(0x1f0) EMIT2(0x249)
		    return OK;

	    case 'k': case 0x137: case 0x199: case 0x1e9: case 0x1d84:
	    case 0x1e31: case 0x1e33: case 0x1e35: case 0x2c6a: case 0xa741:
		    EMIT2('k') EMIT2(0x137) EMIT2(0x199) EMIT2(0x1e9)
		    EMIT2(0x1d84) EMIT2(0x1e31) EMIT2(0x1e33)
		    EMIT2(0x1e35) EMIT2(0x2c6a) EMIT2(0xa741)
		    return OK;

	    case 'l': case 0x13a: case 0x13c: case 0x13e: case 0x140:
	    case 0x142: case 0x19a: case 0x1e37: case 0x1e39: case 0x1e3b:
	    case 0x1e3d: case 0x2c61:
		    EMIT2('l') EMIT2(0x13a) EMIT2(0x13c)
		    EMIT2(0x13e) EMIT2(0x140) EMIT2(0x142)
		    EMIT2(0x19a) EMIT2(0x1e37) EMIT2(0x1e39)
		    EMIT2(0x1e3b) EMIT2(0x1e3d) EMIT2(0x2c61)
		    return OK;

	    case 'm': case 0x1d6f: case 0x1e3f: case 0x1e41: case 0x1e43:
		    EMIT2('m') EMIT2(0x1d6f) EMIT2(0x1e3f)
		    EMIT2(0x1e41) EMIT2(0x1e43)
		    return OK;

	    case 'n': case n_virguilla: case 0x144: case 0x146: case 0x148:
	    case 0x149: case 0x1f9: case 0x1d70: case 0x1d87: case 0x1e45:
	    case 0x1e47: case 0x1e49: case 0x1e4b: case 0xa7a5:
		    EMIT2('n') EMIT2(n_virguilla)
		    EMIT2(0x144) EMIT2(0x146) EMIT2(0x148)
		    EMIT2(0x149) EMIT2(0x1f9) EMIT2(0x1d70)
		    EMIT2(0x1d87) EMIT2(0x1e45) EMIT2(0x1e47)
		    EMIT2(0x1e49) EMIT2(0x1e4b) EMIT2(0xa7a5)
		    return OK;

	    case 'o': case o_grave: case o_acute: case o_circumflex:
	    case o_virguilla: case o_diaeresis: case o_slash:
	    case 0x14d: case 0x14f: case 0x151: case 0x1a1:
	    case 0x1d2: case 0x1eb: case 0x1ed: case 0x1ff:
	    case 0x20d: case 0x20f: case 0x22b: case 0x22d:
	    case 0x22f: case 0x231: case 0x275: case 0x1e4d:
	    case 0x1e4f: case 0x1e51: case 0x1e53: case 0x1ecd:
	    case 0x1ecf: case 0x1ed1: case 0x1ed3: case 0x1ed5:
	    case 0x1ed7: case 0x1ed9: case 0x1edb: case 0x1edd:
	    case 0x1edf: case 0x1ee1: case 0x1ee3:
		    EMIT2('o') EMIT2(o_grave) EMIT2(o_acute)
		    EMIT2(o_circumflex) EMIT2(o_virguilla)
		    EMIT2(o_diaeresis) EMIT2(o_slash)
		    EMIT2(0x14d) EMIT2(0x14f) EMIT2(0x151)
		    EMIT2(0x1a1) EMIT2(0x1d2) EMIT2(0x1eb)
		    EMIT2(0x1ed) EMIT2(0x1ff) EMIT2(0x20d)
		    EMIT2(0x20f) EMIT2(0x22b) EMIT2(0x22d)
		    EMIT2(0x22f) EMIT2(0x231) EMIT2(0x275)
		    EMIT2(0x1e4d) EMIT2(0x1e4f) EMIT2(0x1e51)
		    EMIT2(0x1e53) EMIT2(0x1ecd) EMIT2(0x1ecf)
		    EMIT2(0x1ed1) EMIT2(0x1ed3) EMIT2(0x1ed5)
		    EMIT2(0x1ed7) EMIT2(0x1ed9) EMIT2(0x1edb)
		    EMIT2(0x1edd) EMIT2(0x1edf) EMIT2(0x1ee1)
		    EMIT2(0x1ee3)
		    return OK;

	    case 'p': case 0x1a5: case 0x1d71: case 0x1d7d: case 0x1d88:
	    case 0x1e55: case 0x1e57:
		    EMIT2('p') EMIT2(0x1a5) EMIT2(0x1d71) EMIT2(0x1d7d)
		    EMIT2(0x1d88) EMIT2(0x1e55) EMIT2(0x1e57)
		    return OK;

	    case 'q': case 0x24b: case 0x2a0:
		    EMIT2('q') EMIT2(0x24b) EMIT2(0x2a0)
		    return OK;

	    case 'r': case 0x155: case 0x157: case 0x159: case 0x211:
	    case 0x213: case 0x24d: case 0x27d: case 0x1d72: case 0x1d73:
	    case 0x1d89: case 0x1e59: case 0x1e5b: case 0x1e5d: case 0x1e5f:
	    case 0xa7a7:
		    EMIT2('r') EMIT2(0x155) EMIT2(0x157) EMIT2(0x159)
		    EMIT2(0x211) EMIT2(0x213) EMIT2(0x24d) EMIT2(0x27d)
		    EMIT2(0x1d72) EMIT2(0x1d73) EMIT2(0x1d89) EMIT2(0x1e59)
		    EMIT2(0x1e5b) EMIT2(0x1e5d) EMIT2(0x1e5f) EMIT2(0xa7a7)
		    return OK;

	    case 's': case 0x15b: case 0x15d: case 0x15f: case 0x161:
	    case 0x219: case 0x23f: case 0x1d74: case 0x1d8a: case 0x1e61:
	    case 0x1e63: case 0x1e65: case 0x1e67: case 0x1e69: case 0xa7a9:
		    EMIT2('s') EMIT2(0x15b) EMIT2(0x15d) EMIT2(0x15f)
		    EMIT2(0x161) EMIT2(0x219) EMIT2(0x23f) EMIT2(0x1d74)
		    EMIT2(0x1d8a) EMIT2(0x1e61) EMIT2(0x1e63) EMIT2(0x1e65)
		    EMIT2(0x1e67) EMIT2(0x1e69) EMIT2(0xa7a9)
		    return OK;

	    case 't': case 0x163: case 0x165: case 0x167: case 0x1ab:
	    case 0x1ad: case 0x21b: case 0x288: case 0x1d75: case 0x1e6b:
	    case 0x1e6d: case 0x1e6f: case 0x1e71: case 0x1e97: case 0x2c66:
		    EMIT2('t') EMIT2(0x163) EMIT2(0x165) EMIT2(0x167)
		    EMIT2(0x1ab) EMIT2(0x1ad) EMIT2(0x21b) EMIT2(0x288)
		    EMIT2(0x1d75) EMIT2(0x1e6b) EMIT2(0x1e6d) EMIT2(0x1e6f)
		    EMIT2(0x1e71) EMIT2(0x1e97) EMIT2(0x2c66)
		    return OK;

	    case 'u': case u_grave: case u_acute: case u_circumflex:
	    case u_diaeresis: case 0x169: case 0x16b: case 0x16d:
	    case 0x16f: case 0x171: case 0x173: case 0x1b0: case 0x1d4:
	    case 0x1d6: case 0x1d8: case 0x1da: case 0x1dc: case 0x215:
	    case 0x217: case 0x289: case 0x1d7e: case 0x1d99: case 0x1e73:
	    case 0x1e75: case 0x1e77: case 0x1e79: case 0x1e7b:
	    case 0x1ee5: case 0x1ee7: case 0x1ee9: case 0x1eeb:
	    case 0x1eed: case 0x1eef: case 0x1ef1:
		    EMIT2('u') EMIT2(u_grave) EMIT2(u_acute)
		    EMIT2(u_circumflex) EMIT2(u_diaeresis)
		    EMIT2(0x169) EMIT2(0x16b)
		    EMIT2(0x16d) EMIT2(0x16f) EMIT2(0x171)
		    EMIT2(0x173) EMIT2(0x1d6) EMIT2(0x1d8)
		    EMIT2(0x215) EMIT2(0x217) EMIT2(0x1b0)
		    EMIT2(0x1d4) EMIT2(0x1da) EMIT2(0x1dc)
		    EMIT2(0x289) EMIT2(0x1e73) EMIT2(0x1d7e)
		    EMIT2(0x1d99) EMIT2(0x1e75) EMIT2(0x1e77)
		    EMIT2(0x1e79) EMIT2(0x1e7b) EMIT2(0x1ee5)
		    EMIT2(0x1ee7) EMIT2(0x1ee9) EMIT2(0x1eeb)
		    EMIT2(0x1eed) EMIT2(0x1eef) EMIT2(0x1ef1)
		    return OK;

	    case 'v': case 0x28b: case 0x1d8c: case 0x1e7d: case 0x1e7f:
		    EMIT2('v') EMIT2(0x28b) EMIT2(0x1d8c) EMIT2(0x1e7d)
		    EMIT2(0x1e7f)
		    return OK;

	    case 'w': case 0x175: case 0x1e81: case 0x1e83: case 0x1e85:
	    case 0x1e87: case 0x1e89: case 0x1e98:
		    EMIT2('w') EMIT2(0x175) EMIT2(0x1e81) EMIT2(0x1e83)
		    EMIT2(0x1e85) EMIT2(0x1e87) EMIT2(0x1e89) EMIT2(0x1e98)
		    return OK;

	    case 'x': case 0x1e8b: case 0x1e8d:
		    EMIT2('x') EMIT2(0x1e8b) EMIT2(0x1e8d)
		    return OK;

	    case 'y': case y_acute: case y_diaeresis: case 0x177:
	    case 0x1b4: case 0x233: case 0x24f: case 0x1e8f:
	    case 0x1e99: case 0x1ef3: case 0x1ef5: case 0x1ef7:
	    case 0x1ef9:
		    EMIT2('y') EMIT2(y_acute) EMIT2(y_diaeresis)
		    EMIT2(0x177) EMIT2(0x1b4) EMIT2(0x233) EMIT2(0x24f)
		    EMIT2(0x1e8f) EMIT2(0x1e99) EMIT2(0x1ef3)
		    EMIT2(0x1ef5) EMIT2(0x1ef7) EMIT2(0x1ef9)
		    return OK;

	    case 'z': case 0x17a: case 0x17c: case 0x17e: case 0x1b6:
	    case 0x1d76: case 0x1d8e: case 0x1e91: case 0x1e93:
	    case 0x1e95: case 0x2c6c:
		    EMIT2('z') EMIT2(0x17a) EMIT2(0x17c) EMIT2(0x17e)
		    EMIT2(0x1b6) EMIT2(0x1d76) EMIT2(0x1d8e) EMIT2(0x1e91)
		    EMIT2(0x1e93) EMIT2(0x1e95) EMIT2(0x2c6c)
		    return OK;

	    
	}
    }

    EMIT2(c);
    return OK;
#undef EMIT2
}




    static int
nfa_regatom(void)
{
    int		c;
    int		charclass;
    int		equiclass;
    int		collclass;
    int		got_coll_char;
    char_u	*p;
    char_u	*endp;
    char_u	*old_regparse = regparse;
    int		extra = 0;
    int		emit_range;
    int		negated;
    int		result;
    int		startc = -1;
    int		save_prev_at_start = prev_at_start;

    c = getchr();
    switch (c)
    {
	case NUL:
	    EMSG_RET_FAIL(_(e_nfa_regexp_end_encountered_prematurely));

	case Magic('^'):
	    EMIT(NFA_BOL);
	    break;

	case Magic('$'):
	    EMIT(NFA_EOL);
#if defined(FEAT_SYN_HL) || defined(PROTO)
	    had_eol = TRUE;
#endif
	    break;

	case Magic('<'):
	    EMIT(NFA_BOW);
	    break;

	case Magic('>'):
	    EMIT(NFA_EOW);
	    break;

	case Magic('_'):
	    c = no_Magic(getchr());
	    if (c == NUL)
		EMSG_RET_FAIL(_(e_nfa_regexp_end_encountered_prematurely));

	    if (c == '^')	
	    {
		EMIT(NFA_BOL);
		break;
	    }
	    if (c == '$')	
	    {
		EMIT(NFA_EOL);
#if defined(FEAT_SYN_HL) || defined(PROTO)
		had_eol = TRUE;
#endif
		break;
	    }

	    extra = NFA_ADD_NL;

	    
	    if (c == '[')
		goto collection;

	
	

	
	case Magic('.'):
	case Magic('i'):
	case Magic('I'):
	case Magic('k'):
	case Magic('K'):
	case Magic('f'):
	case Magic('F'):
	case Magic('p'):
	case Magic('P'):
	case Magic('s'):
	case Magic('S'):
	case Magic('d'):
	case Magic('D'):
	case Magic('x'):
	case Magic('X'):
	case Magic('o'):
	case Magic('O'):
	case Magic('w'):
	case Magic('W'):
	case Magic('h'):
	case Magic('H'):
	case Magic('a'):
	case Magic('A'):
	case Magic('l'):
	case Magic('L'):
	case Magic('u'):
	case Magic('U'):
	    p = vim_strchr(classchars, no_Magic(c));
	    if (p == NULL)
	    {
		if (extra == NFA_ADD_NL)
		{
		    semsg(_(e_nfa_regexp_invalid_character_class_nr), c);
		    rc_did_emsg = TRUE;
		    return FAIL;
		}
		siemsg("Unknown character class char: %d", c);
		return FAIL;
	    }

	    
	    
	    if (enc_utf8 && c == Magic('.') && utf_iscomposing(peekchr()))
	    {
		old_regparse = regparse;
		c = getchr();
		goto nfa_do_multibyte;
	    }
	    EMIT(nfa_classcodes[p - classchars]);
	    if (extra == NFA_ADD_NL)
	    {
		EMIT(NFA_NEWL);
		EMIT(NFA_OR);
		regflags |= RF_HASNL;
	    }
	    break;

	case Magic('n'):
	    if (reg_string)
		
		EMIT(NL);
	    else
	    {
		
		EMIT(NFA_NEWL);
		regflags |= RF_HASNL;
	    }
	    break;

	case Magic('('):
	    if (nfa_reg(REG_PAREN) == FAIL)
		return FAIL;	    
	    break;

	case Magic('|'):
	case Magic('&'):
	case Magic(')'):
	    semsg(_(e_nfa_regexp_misplaced_chr), no_Magic(c));
	    return FAIL;

	case Magic('='):
	case Magic('?'):
	case Magic('+'):
	case Magic('@'):
	case Magic('*'):
	case Magic('{'):
	    
	    semsg(_(e_nfa_regexp_misplaced_chr), no_Magic(c));
	    return FAIL;

	case Magic('~'):
	    {
		char_u	    *lp;

		
		
		if (reg_prev_sub == NULL)
		{
		    emsg(_(e_no_previous_substitute_regular_expression));
		    return FAIL;
		}
		for (lp = reg_prev_sub; *lp != NUL; MB_CPTR_ADV(lp))
		{
		    EMIT(PTR2CHAR(lp));
		    if (lp != reg_prev_sub)
			EMIT(NFA_CONCAT);
		}
		EMIT(NFA_NOPEN);
		break;
	    }

	case Magic('1'):
	case Magic('2'):
	case Magic('3'):
	case Magic('4'):
	case Magic('5'):
	case Magic('6'):
	case Magic('7'):
	case Magic('8'):
	case Magic('9'):
	    {
		int refnum = no_Magic(c) - '1';

		if (!seen_endbrace(refnum + 1))
		    return FAIL;
		EMIT(NFA_BACKREF1 + refnum);
		rex.nfa_has_backref = TRUE;
	    }
	    break;

	case Magic('z'):
	    c = no_Magic(getchr());
	    switch (c)
	    {
		case 's':
		    EMIT(NFA_ZSTART);
		    if (re_mult_next("\\zs") == FAIL)
			return FAIL;
		    break;
		case 'e':
		    EMIT(NFA_ZEND);
		    rex.nfa_has_zend = TRUE;
		    if (re_mult_next("\\ze") == FAIL)
			return FAIL;
		    break;
#ifdef FEAT_SYN_HL
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		    
		    if ((reg_do_extmatch & REX_USE) == 0)
			EMSG_RET_FAIL(_(e_z1_z9_not_allowed_here));
		    EMIT(NFA_ZREF1 + (no_Magic(c) - '1'));
		    
		    
		    re_has_z = REX_USE;
		    break;
		case '(':
		    
		    if ((reg_do_extmatch & REX_SET) == 0)
			EMSG_RET_FAIL(_(e_z_not_allowed_here));
		    if (nfa_reg(REG_ZPAREN) == FAIL)
			return FAIL;	    
		    re_has_z = REX_SET;
		    break;
#endif
		default:
		    semsg(_(e_nfa_regexp_unknown_operator_z_chr), no_Magic(c));
		    return FAIL;
	    }
	    break;

	case Magic('%'):
	    c = no_Magic(getchr());
	    switch (c)
	    {
		
		case '(':
		    if (nfa_reg(REG_NPAREN) == FAIL)
			return FAIL;
		    EMIT(NFA_NOPEN);
		    break;

		case 'd':   
		case 'o':   
		case 'x':   
		case 'u':   
		case 'U':   
		    {
			int nr;

			switch (c)
			{
			    case 'd': nr = getdecchrs(); break;
			    case 'o': nr = getoctchrs(); break;
			    case 'x': nr = gethexchrs(2); break;
			    case 'u': nr = gethexchrs(4); break;
			    case 'U': nr = gethexchrs(8); break;
			    default:  nr = -1; break;
			}

			if (nr < 0 || nr > INT_MAX)
			    EMSG2_RET_FAIL(_(e_invalid_character_after_str_2),
						       reg_magic == MAGIC_ALL);
			
			
			EMIT(nr == 0 ? 0x0a : nr);
		    }
		    break;

		
		
		case '^':
		    EMIT(NFA_BOF);
		    break;

		case '$':
		    EMIT(NFA_EOF);
		    break;

		case '#':
		    if (regparse[0] == '=' && regparse[1] >= 48
							  && regparse[1] <= 50)
		    {
			
			semsg(_(e_atom_engine_must_be_at_start_of_pattern),
								  regparse[1]);
			return FAIL;
		    }
		    EMIT(NFA_CURSOR);
		    break;

		case 'V':
		    EMIT(NFA_VISUAL);
		    break;

		case 'C':
		    EMIT(NFA_ANY_COMPOSING);
		    break;

		case '[':
		    {
			int	    n;

			
			for (n = 0; (c = peekchr()) != ']'; ++n)
			{
			    if (c == NUL)
				EMSG2_RET_FAIL(_(e_missing_sb_after_str),
						      reg_magic == MAGIC_ALL);
			    
			    if (nfa_regatom() == FAIL)
				return FAIL;
			}
			getchr();  
			if (n == 0)
			    EMSG2_RET_FAIL(_(e_empty_str_brackets),
						      reg_magic == MAGIC_ALL);
			EMIT(NFA_OPT_CHARS);
			EMIT(n);

			
			
			
			
			
			
			
			EMIT(NFA_NOPEN);
			break;
		    }

		default:
		    {
			long_u	n = 0;
			int	cmp = c;
			int	cur = FALSE;
			int	got_digit = FALSE;

			if (c == '<' || c == '>')
			    c = getchr();
			if (no_Magic(c) == '.')
			{
			    cur = TRUE;
			    c = getchr();
			}
			while (VIM_ISDIGIT(c))
			{
			    long_u tmp;

			    if (cur)
			    {
				semsg(_(e_regexp_number_after_dot_pos_search_chr),
								  no_Magic(c));
				return FAIL;
			    }
			    tmp = n * 10 + (c - '0');

			    if (tmp < n)
			    {
				
				emsg(_(e_percent_value_too_large));
				return FAIL;
			    }
			    n = tmp;
			    c = getchr();
			    got_digit = TRUE;
			}
			if (c == 'l' || c == 'c' || c == 'v')
			{
			    long_u limit = INT_MAX;

			    if (!cur && !got_digit)
			    {
				semsg(_(e_nfa_regexp_missing_value_in_chr),
								  no_Magic(c));
				return FAIL;
			    }
			    if (c == 'l')
			    {
				if (cur)
				    n = curwin->w_cursor.lnum;
				
				EMIT(cmp == '<' ? NFA_LNUM_LT :
				     cmp == '>' ? NFA_LNUM_GT : NFA_LNUM);
				if (save_prev_at_start)
				    at_start = TRUE;
			    }
			    else if (c == 'c')
			    {
				if (cur)
				{
				    n = curwin->w_cursor.col;
				    n++;
				}
				
				EMIT(cmp == '<' ? NFA_COL_LT :
				     cmp == '>' ? NFA_COL_GT : NFA_COL);
			    }
			    else
			    {
				if (cur)
				{
				    colnr_T vcol = 0;

				    getvvcol(curwin, &curwin->w_cursor,
							    NULL, NULL, &vcol);
				    n = ++vcol;
				}
				
				EMIT(cmp == '<' ? NFA_VCOL_LT :
				     cmp == '>' ? NFA_VCOL_GT : NFA_VCOL);
				limit = INT_MAX / MB_MAXBYTES;
			    }
			    if (n >= limit)
			    {
				emsg(_(e_percent_value_too_large));
				return FAIL;
			    }
			    EMIT((int)n);
			    break;
			}
			else if (no_Magic(c) == '\'' && n == 0)
			{
			    
			    EMIT(cmp == '<' ? NFA_MARK_LT :
				 cmp == '>' ? NFA_MARK_GT : NFA_MARK);
			    EMIT(getchr());
			    break;
			}
		    }
		    semsg(_(e_nfa_regexp_unknown_operator_percent_chr),
								  no_Magic(c));
		    return FAIL;
	    }
	    break;

	case Magic('['):
collection:
	    

	    p = regparse;
	    endp = skip_anyof(p);
	    if (*endp == ']')
	    {
		int plen;
		
		result = nfa_recognize_char_class(regparse, endp,
							 extra == NFA_ADD_NL);
		if (result != FAIL)
		{
		    if (result >= NFA_FIRST_NL && result <= NFA_LAST_NL)
		    {
			EMIT(result - NFA_ADD_NL);
			EMIT(NFA_NEWL);
			EMIT(NFA_OR);
		    }
		    else
			EMIT(result);
		    regparse = endp;
		    MB_PTR_ADV(regparse);
		    return OK;
		}
		
		startc = -1;
		negated = FALSE;
		if (*regparse == '^')			
		{
		    negated = TRUE;
		    MB_PTR_ADV(regparse);
		    EMIT(NFA_START_NEG_COLL);
		}
		else
		    EMIT(NFA_START_COLL);
		if (*regparse == '-')
		{
		    startc = '-';
		    EMIT(startc);
		    EMIT(NFA_CONCAT);
		    MB_PTR_ADV(regparse);
		}
		
		emit_range = FALSE;
		while (regparse < endp)
		{
		    int	    oldstartc = startc;

		    startc = -1;
		    got_coll_char = FALSE;
		    if (*regparse == '[')
		    {
			
			equiclass = collclass = 0;
			charclass = get_char_class(&regparse);
			if (charclass == CLASS_NONE)
			{
			    equiclass = get_equi_class(&regparse);
			    if (equiclass == 0)
				collclass = get_coll_element(&regparse);
			}

			
			if (charclass != CLASS_NONE)
			{
			    switch (charclass)
			    {
				case CLASS_ALNUM:
				    EMIT(NFA_CLASS_ALNUM);
				    break;
				case CLASS_ALPHA:
				    EMIT(NFA_CLASS_ALPHA);
				    break;
				case CLASS_BLANK:
				    EMIT(NFA_CLASS_BLANK);
				    break;
				case CLASS_CNTRL:
				    EMIT(NFA_CLASS_CNTRL);
				    break;
				case CLASS_DIGIT:
				    EMIT(NFA_CLASS_DIGIT);
				    break;
				case CLASS_GRAPH:
				    EMIT(NFA_CLASS_GRAPH);
				    break;
				case CLASS_LOWER:
				    wants_nfa = TRUE;
				    EMIT(NFA_CLASS_LOWER);
				    break;
				case CLASS_PRINT:
				    EMIT(NFA_CLASS_PRINT);
				    break;
				case CLASS_PUNCT:
				    EMIT(NFA_CLASS_PUNCT);
				    break;
				case CLASS_SPACE:
				    EMIT(NFA_CLASS_SPACE);
				    break;
				case CLASS_UPPER:
				    wants_nfa = TRUE;
				    EMIT(NFA_CLASS_UPPER);
				    break;
				case CLASS_XDIGIT:
				    EMIT(NFA_CLASS_XDIGIT);
				    break;
				case CLASS_TAB:
				    EMIT(NFA_CLASS_TAB);
				    break;
				case CLASS_RETURN:
				    EMIT(NFA_CLASS_RETURN);
				    break;
				case CLASS_BACKSPACE:
				    EMIT(NFA_CLASS_BACKSPACE);
				    break;
				case CLASS_ESCAPE:
				    EMIT(NFA_CLASS_ESCAPE);
				    break;
				case CLASS_IDENT:
				    EMIT(NFA_CLASS_IDENT);
				    break;
				case CLASS_KEYWORD:
				    EMIT(NFA_CLASS_KEYWORD);
				    break;
				case CLASS_FNAME:
				    EMIT(NFA_CLASS_FNAME);
				    break;
			    }
			    EMIT(NFA_CONCAT);
			    continue;
			}
			
			if (equiclass != 0)
			{
			    result = nfa_emit_equi_class(equiclass);
			    if (result == FAIL)
			    {
				
				EMSG_RET_FAIL(_(e_error_building_nfa_with_equivalence_class));
			    }
			    continue;
			}
			
			if (collclass != 0)
			{
			    startc = collclass;	 
			    
			    
			}
		    }
		    
		    
		    if (*regparse == '-' && oldstartc != -1)
		    {
			emit_range = TRUE;
			startc = oldstartc;
			MB_PTR_ADV(regparse);
			continue;	    
		    }

		    
		    
		    
		    
		    
		    if (*regparse == '\\'
			    && !reg_cpo_bsl
			    && regparse + 1 <= endp
			    && (vim_strchr(REGEXP_INRANGE, regparse[1]) != NULL
				|| (!reg_cpo_lit
				    && vim_strchr(REGEXP_ABBR, regparse[1])
								      != NULL)
			    )
			)
		    {
			MB_PTR_ADV(regparse);

			if (*regparse == 'n')
			    startc = (reg_string || emit_range
					|| regparse[1] == '-') ? NL : NFA_NEWL;
			else if (*regparse == 'd'
				    || *regparse == 'o'
				    || *regparse == 'x'
				    || *regparse == 'u'
				    || *regparse == 'U'
				)
			    {
				
				startc = coll_get_char();
				got_coll_char = TRUE;
				MB_PTR_BACK(old_regparse, regparse);
			    }
			    else
			    {
				
				startc = backslash_trans(*regparse);
			    }
		    }

		    
		    if (startc == -1)
			startc = PTR2CHAR(regparse);

		    
		    if (emit_range)
		    {
			int	endc = startc;

			startc = oldstartc;
			if (startc > endc)
			    EMSG_RET_FAIL(_(e_reverse_range_in_character_class));

			if (endc > startc + 2)
			{
			    
			    
			    if (startc == 0)
				
				EMIT(1);
			    else
				--post_ptr; 
			    EMIT(endc);
			    EMIT(NFA_RANGE);
			    EMIT(NFA_CONCAT);
			}
			else if (has_mbyte && ((*mb_char2len)(startc) > 1
				    || (*mb_char2len)(endc) > 1))
			{
			    
			    
			    
			    for (c = startc + 1; c <= endc; c++)
			    {
				EMIT(c);
				EMIT(NFA_CONCAT);
			    }
			}
			else
			{
			    
			    
			    for (c = startc + 1; c <= endc; c++)
			    {
				EMIT(c);
				EMIT(NFA_CONCAT);
			    }
			}
			emit_range = FALSE;
			startc = -1;
		    }
		    else
		    {
			
			
			
			
			
			
			
			if (startc == NFA_NEWL)
			{
			    
			    
			    
			    if (!negated)
				extra = NFA_ADD_NL;
			}
			else
			{
			    if (got_coll_char == TRUE && startc == 0)
			    {
				EMIT(0x0a);
				EMIT(NFA_CONCAT);
			    }
			    else
			    {
				EMIT(startc);
				if (!(enc_utf8 && (utf_ptr2len(regparse) != (plen = utfc_ptr2len(regparse)))))
				{
				    EMIT(NFA_CONCAT);
				}
			    }
			}
		    }

		    if (enc_utf8 && (utf_ptr2len(regparse) != (plen = utfc_ptr2len(regparse))))
		    {
			int i = utf_ptr2len(regparse);

			c = utf_ptr2char(regparse + i);

			
			for (;;)
			{
			    if (c == 0)
				
				EMIT(1);
			    else
				EMIT(c);
			    EMIT(NFA_CONCAT);
			    if ((i += utf_char2len(c)) >= plen)
				break;
			    c = utf_ptr2char(regparse + i);
			}
			EMIT(NFA_COMPOSING);
			EMIT(NFA_CONCAT);
		    }
		    MB_PTR_ADV(regparse);
		} 

		MB_PTR_BACK(old_regparse, regparse);
		if (*regparse == '-')	    
		{
		    EMIT('-');
		    EMIT(NFA_CONCAT);
		}

		
		regparse = endp;
		MB_PTR_ADV(regparse);

		
		if (negated == TRUE)
		    EMIT(NFA_END_NEG_COLL);
		else
		    EMIT(NFA_END_COLL);

		
		if (extra == NFA_ADD_NL)
		{
		    EMIT(reg_string ? NL : NFA_NEWL);
		    EMIT(NFA_OR);
		}

		return OK;
	    } 

	    if (reg_strict)
		EMSG_RET_FAIL(_(e_missing_rsb_after_str_lsb));
	    

	default:
	    {
		int	plen;

nfa_do_multibyte:
		
		if (enc_utf8 && ((*mb_char2len)(c)
			    != (plen = utfc_ptr2len(old_regparse))
						       || utf_iscomposing(c)))
		{
		    int i = 0;

		    
		    
		    
		    
		    
		    
		    
		    
		    for (;;)
		    {
			EMIT(c);
			if (i > 0)
			    EMIT(NFA_CONCAT);
			if ((i += utf_char2len(c)) >= plen)
			    break;
			c = utf_ptr2char(old_regparse + i);
		    }
		    EMIT(NFA_COMPOSING);
		    regparse = old_regparse + plen;
		}
		else
		{
		    c = no_Magic(c);
		    EMIT(c);
		}
		return OK;
	    }
    }

    return OK;
}


    static int
nfa_regpiece(void)
{
    int		i;
    int		op;
    int		ret;
    int	minval, maxval;
    int		greedy = TRUE;      
    parse_state_T old_state;
    parse_state_T new_state;
    int	c2;
    int		old_post_pos;
    int		my_post_start;
    int		quest;

    
    
    save_parse_state(&old_state);

    
    my_post_start = (int)(post_ptr - post_start);

    ret = nfa_regatom();
    if (ret == FAIL)
	return FAIL;	    

    op = peekchr();
    if (re_multi_type(op) == NOT_MULTI)
	return OK;

    skipchr();
    switch (op)
    {
	case Magic('*'):
	    EMIT(NFA_STAR);
	    break;

	case Magic('+'):
	    
	    restore_parse_state(&old_state);
	    curchr = -1;
	    if (nfa_regatom() == FAIL)
		return FAIL;
	    EMIT(NFA_STAR);
	    EMIT(NFA_CONCAT);
	    skipchr();		
	    break;

	case Magic('@'):
	    c2 = getdecchrs();
	    op = no_Magic(getchr());
	    i = 0;
	    switch(op)
	    {
		case '=':
		    
		    i = NFA_PREV_ATOM_NO_WIDTH;
		    break;
		case '!':
		    
		    i = NFA_PREV_ATOM_NO_WIDTH_NEG;
		    break;
		case '<':
		    op = no_Magic(getchr());
		    if (op == '=')
			
			i = NFA_PREV_ATOM_JUST_BEFORE;
		    else if (op == '!')
			
			i = NFA_PREV_ATOM_JUST_BEFORE_NEG;
		    break;
		case '>':
		    
		    i = NFA_PREV_ATOM_LIKE_PATTERN;
		    break;
	    }
	    if (i == 0)
	    {
		semsg(_(e_nfa_regexp_unknown_operator_at_chr), op);
		return FAIL;
	    }
	    EMIT(i);
	    if (i == NFA_PREV_ATOM_JUST_BEFORE
					|| i == NFA_PREV_ATOM_JUST_BEFORE_NEG)
		EMIT(c2);
	    break;

	case Magic('?'):
	case Magic('='):
	    EMIT(NFA_QUEST);
	    break;

	case Magic('{'):
	    
	    
	    
	    
	    

	    greedy = TRUE;
	    c2 = peekchr();
	    if (c2 == '-' || c2 == Magic('-'))
	    {
		skipchr();
		greedy = FALSE;
	    }
	    if (!read_limits(&minval, &maxval))
		EMSG_RET_FAIL(_(e_nfa_regexp_error_reading_repetition_limits));

	    
	    
	    if (minval == 0 && maxval == MAX_LIMIT)
	    {
		if (greedy)		
		    
		    EMIT(NFA_STAR);
		else			
		    
		    EMIT(NFA_STAR_NONGREEDY);
		break;
	    }

	    
	    if (maxval == 0)
	    {
		
		post_ptr = post_start + my_post_start;
		
		EMIT(NFA_EMPTY);
		return OK;
	    }

	    
	    
	    
	    
	    
	    
	    
	    if ((nfa_re_flags & RE_AUTO)
				   && (maxval > 500 || maxval > minval + 200)
				   && (maxval != MAX_LIMIT && minval < 200)
				   && !wants_nfa)
		return FAIL;

	    
	    post_ptr = post_start + my_post_start;
	    
	    save_parse_state(&new_state);

	    quest = (greedy == TRUE? NFA_QUEST : NFA_QUEST_NONGREEDY);
	    for (i = 0; i < maxval; i++)
	    {
		
		restore_parse_state(&old_state);
		old_post_pos = (int)(post_ptr - post_start);
		if (nfa_regatom() == FAIL)
		    return FAIL;
		
		if (i + 1 > minval)
		{
		    if (maxval == MAX_LIMIT)
		    {
			if (greedy)
			    EMIT(NFA_STAR);
			else
			    EMIT(NFA_STAR_NONGREEDY);
		    }
		    else
			EMIT(quest);
		}
		if (old_post_pos != my_post_start)
		    EMIT(NFA_CONCAT);
		if (i + 1 > minval && maxval == MAX_LIMIT)
		    break;
	    }

	    
	    restore_parse_state(&new_state);
	    curchr = -1;

	    break;


	default:
	    break;
    }	

    if (re_multi_type(peekchr()) != NOT_MULTI)
	
	EMSG_RET_FAIL(_(e_nfa_regexp_cant_have_multi_follow_multi));

    return OK;
}


    static int
nfa_regconcat(void)
{
    int		cont = TRUE;
    int		first = TRUE;

    while (cont)
    {
	switch (peekchr())
	{
	    case NUL:
	    case Magic('|'):
	    case Magic('&'):
	    case Magic(')'):
		cont = FALSE;
		break;

	    case Magic('Z'):
		regflags |= RF_ICOMBINE;
		skipchr_keepstart();
		break;
	    case Magic('c'):
		regflags |= RF_ICASE;
		skipchr_keepstart();
		break;
	    case Magic('C'):
		regflags |= RF_NOICASE;
		skipchr_keepstart();
		break;
	    case Magic('v'):
		reg_magic = MAGIC_ALL;
		skipchr_keepstart();
		curchr = -1;
		break;
	    case Magic('m'):
		reg_magic = MAGIC_ON;
		skipchr_keepstart();
		curchr = -1;
		break;
	    case Magic('M'):
		reg_magic = MAGIC_OFF;
		skipchr_keepstart();
		curchr = -1;
		break;
	    case Magic('V'):
		reg_magic = MAGIC_NONE;
		skipchr_keepstart();
		curchr = -1;
		break;

	    default:
		if (nfa_regpiece() == FAIL)
		    return FAIL;
		if (first == FALSE)
		    EMIT(NFA_CONCAT);
		else
		    first = FALSE;
		break;
	}
    }

    return OK;
}


    static int
nfa_regbranch(void)
{
    int		old_post_pos;

    old_post_pos = (int)(post_ptr - post_start);

    
    if (nfa_regconcat() == FAIL)
	return FAIL;

    
    while (peekchr() == Magic('&'))
    {
	skipchr();
	
	if (old_post_pos == (int)(post_ptr - post_start))
	    EMIT(NFA_EMPTY);
	EMIT(NFA_NOPEN);
	EMIT(NFA_PREV_ATOM_NO_WIDTH);
	old_post_pos = (int)(post_ptr - post_start);
	if (nfa_regconcat() == FAIL)
	    return FAIL;
	
	if (old_post_pos == (int)(post_ptr - post_start))
	    EMIT(NFA_EMPTY);
	EMIT(NFA_CONCAT);
    }

    
    if (old_post_pos == (int)(post_ptr - post_start))
	EMIT(NFA_EMPTY);

    return OK;
}


    static int
nfa_reg(
    int		paren)	
{
    int		parno = 0;

    if (paren == REG_PAREN)
    {
	if (regnpar >= NSUBEXP) 
	    EMSG_RET_FAIL(_(e_nfa_regexp_too_many_parens));
	parno = regnpar++;
    }
#ifdef FEAT_SYN_HL
    else if (paren == REG_ZPAREN)
    {
	
	if (regnzpar >= NSUBEXP)
	    EMSG_RET_FAIL(_(e_nfa_regexp_too_many_z));
	parno = regnzpar++;
    }
#endif

    if (nfa_regbranch() == FAIL)
	return FAIL;	    

    while (peekchr() == Magic('|'))
    {
	skipchr();
	if (nfa_regbranch() == FAIL)
	    return FAIL;    
	EMIT(NFA_OR);
    }

    
    if (paren != REG_NOPAREN && getchr() != Magic(')'))
    {
	if (paren == REG_NPAREN)
	    EMSG2_RET_FAIL(_(e_unmatched_str_percent_open),
						       reg_magic == MAGIC_ALL);
	else
	    EMSG2_RET_FAIL(_(e_unmatched_str_open), reg_magic == MAGIC_ALL);
    }
    else if (paren == REG_NOPAREN && peekchr() != NUL)
    {
	if (peekchr() == Magic(')'))
	    EMSG2_RET_FAIL(_(e_unmatched_str_close), reg_magic == MAGIC_ALL);
	else
	    EMSG_RET_FAIL(_(e_nfa_regexp_proper_termination_error));
    }
    
    if (paren == REG_PAREN)
    {
	had_endbrace[parno] = TRUE;     
	EMIT(NFA_MOPEN + parno);
    }
#ifdef FEAT_SYN_HL
    else if (paren == REG_ZPAREN)
	EMIT(NFA_ZOPEN + parno);
#endif

    return OK;
}

#ifdef DEBUG
static char_u code[50];

    static void
nfa_set_code(int c)
{
    int	    addnl = FALSE;

    if (c >= NFA_FIRST_NL && c <= NFA_LAST_NL)
    {
	addnl = TRUE;
	c -= NFA_ADD_NL;
    }

    STRCPY(code, "");
    switch (c)
    {
	case NFA_MATCH:	    STRCPY(code, "NFA_MATCH "); break;
	case NFA_SPLIT:	    STRCPY(code, "NFA_SPLIT "); break;
	case NFA_CONCAT:    STRCPY(code, "NFA_CONCAT "); break;
	case NFA_NEWL:	    STRCPY(code, "NFA_NEWL "); break;
	case NFA_ZSTART:    STRCPY(code, "NFA_ZSTART"); break;
	case NFA_ZEND:	    STRCPY(code, "NFA_ZEND"); break;

	case NFA_BACKREF1:  STRCPY(code, "NFA_BACKREF1"); break;
	case NFA_BACKREF2:  STRCPY(code, "NFA_BACKREF2"); break;
	case NFA_BACKREF3:  STRCPY(code, "NFA_BACKREF3"); break;
	case NFA_BACKREF4:  STRCPY(code, "NFA_BACKREF4"); break;
	case NFA_BACKREF5:  STRCPY(code, "NFA_BACKREF5"); break;
	case NFA_BACKREF6:  STRCPY(code, "NFA_BACKREF6"); break;
	case NFA_BACKREF7:  STRCPY(code, "NFA_BACKREF7"); break;
	case NFA_BACKREF8:  STRCPY(code, "NFA_BACKREF8"); break;
	case NFA_BACKREF9:  STRCPY(code, "NFA_BACKREF9"); break;
#ifdef FEAT_SYN_HL
	case NFA_ZREF1:	    STRCPY(code, "NFA_ZREF1"); break;
	case NFA_ZREF2:	    STRCPY(code, "NFA_ZREF2"); break;
	case NFA_ZREF3:	    STRCPY(code, "NFA_ZREF3"); break;
	case NFA_ZREF4:	    STRCPY(code, "NFA_ZREF4"); break;
	case NFA_ZREF5:	    STRCPY(code, "NFA_ZREF5"); break;
	case NFA_ZREF6:	    STRCPY(code, "NFA_ZREF6"); break;
	case NFA_ZREF7:	    STRCPY(code, "NFA_ZREF7"); break;
	case NFA_ZREF8:	    STRCPY(code, "NFA_ZREF8"); break;
	case NFA_ZREF9:	    STRCPY(code, "NFA_ZREF9"); break;
#endif
	case NFA_SKIP:	    STRCPY(code, "NFA_SKIP"); break;

	case NFA_PREV_ATOM_NO_WIDTH:
			    STRCPY(code, "NFA_PREV_ATOM_NO_WIDTH"); break;
	case NFA_PREV_ATOM_NO_WIDTH_NEG:
			    STRCPY(code, "NFA_PREV_ATOM_NO_WIDTH_NEG"); break;
	case NFA_PREV_ATOM_JUST_BEFORE:
			    STRCPY(code, "NFA_PREV_ATOM_JUST_BEFORE"); break;
	case NFA_PREV_ATOM_JUST_BEFORE_NEG:
			 STRCPY(code, "NFA_PREV_ATOM_JUST_BEFORE_NEG"); break;
	case NFA_PREV_ATOM_LIKE_PATTERN:
			    STRCPY(code, "NFA_PREV_ATOM_LIKE_PATTERN"); break;

	case NFA_NOPEN:		    STRCPY(code, "NFA_NOPEN"); break;
	case NFA_NCLOSE:	    STRCPY(code, "NFA_NCLOSE"); break;
	case NFA_START_INVISIBLE:   STRCPY(code, "NFA_START_INVISIBLE"); break;
	case NFA_START_INVISIBLE_FIRST:
			     STRCPY(code, "NFA_START_INVISIBLE_FIRST"); break;
	case NFA_START_INVISIBLE_NEG:
			       STRCPY(code, "NFA_START_INVISIBLE_NEG"); break;
	case NFA_START_INVISIBLE_NEG_FIRST:
			 STRCPY(code, "NFA_START_INVISIBLE_NEG_FIRST"); break;
	case NFA_START_INVISIBLE_BEFORE:
			    STRCPY(code, "NFA_START_INVISIBLE_BEFORE"); break;
	case NFA_START_INVISIBLE_BEFORE_FIRST:
		      STRCPY(code, "NFA_START_INVISIBLE_BEFORE_FIRST"); break;
	case NFA_START_INVISIBLE_BEFORE_NEG:
			STRCPY(code, "NFA_START_INVISIBLE_BEFORE_NEG"); break;
	case NFA_START_INVISIBLE_BEFORE_NEG_FIRST:
		  STRCPY(code, "NFA_START_INVISIBLE_BEFORE_NEG_FIRST"); break;
	case NFA_START_PATTERN:   STRCPY(code, "NFA_START_PATTERN"); break;
	case NFA_END_INVISIBLE:	    STRCPY(code, "NFA_END_INVISIBLE"); break;
	case NFA_END_INVISIBLE_NEG: STRCPY(code, "NFA_END_INVISIBLE_NEG"); break;
	case NFA_END_PATTERN:	    STRCPY(code, "NFA_END_PATTERN"); break;

	case NFA_COMPOSING:	    STRCPY(code, "NFA_COMPOSING"); break;
	case NFA_END_COMPOSING:	    STRCPY(code, "NFA_END_COMPOSING"); break;
	case NFA_OPT_CHARS:	    STRCPY(code, "NFA_OPT_CHARS"); break;

	case NFA_MOPEN:
	case NFA_MOPEN1:
	case NFA_MOPEN2:
	case NFA_MOPEN3:
	case NFA_MOPEN4:
	case NFA_MOPEN5:
	case NFA_MOPEN6:
	case NFA_MOPEN7:
	case NFA_MOPEN8:
	case NFA_MOPEN9:
	    STRCPY(code, "NFA_MOPEN(x)");
	    code[10] = c - NFA_MOPEN + '0';
	    break;
	case NFA_MCLOSE:
	case NFA_MCLOSE1:
	case NFA_MCLOSE2:
	case NFA_MCLOSE3:
	case NFA_MCLOSE4:
	case NFA_MCLOSE5:
	case NFA_MCLOSE6:
	case NFA_MCLOSE7:
	case NFA_MCLOSE8:
	case NFA_MCLOSE9:
	    STRCPY(code, "NFA_MCLOSE(x)");
	    code[11] = c - NFA_MCLOSE + '0';
	    break;
#ifdef FEAT_SYN_HL
	case NFA_ZOPEN:
	case NFA_ZOPEN1:
	case NFA_ZOPEN2:
	case NFA_ZOPEN3:
	case NFA_ZOPEN4:
	case NFA_ZOPEN5:
	case NFA_ZOPEN6:
	case NFA_ZOPEN7:
	case NFA_ZOPEN8:
	case NFA_ZOPEN9:
	    STRCPY(code, "NFA_ZOPEN(x)");
	    code[10] = c - NFA_ZOPEN + '0';
	    break;
	case NFA_ZCLOSE:
	case NFA_ZCLOSE1:
	case NFA_ZCLOSE2:
	case NFA_ZCLOSE3:
	case NFA_ZCLOSE4:
	case NFA_ZCLOSE5:
	case NFA_ZCLOSE6:
	case NFA_ZCLOSE7:
	case NFA_ZCLOSE8:
	case NFA_ZCLOSE9:
	    STRCPY(code, "NFA_ZCLOSE(x)");
	    code[11] = c - NFA_ZCLOSE + '0';
	    break;
#endif
	case NFA_EOL:		STRCPY(code, "NFA_EOL "); break;
	case NFA_BOL:		STRCPY(code, "NFA_BOL "); break;
	case NFA_EOW:		STRCPY(code, "NFA_EOW "); break;
	case NFA_BOW:		STRCPY(code, "NFA_BOW "); break;
	case NFA_EOF:		STRCPY(code, "NFA_EOF "); break;
	case NFA_BOF:		STRCPY(code, "NFA_BOF "); break;
	case NFA_LNUM:		STRCPY(code, "NFA_LNUM "); break;
	case NFA_LNUM_GT:	STRCPY(code, "NFA_LNUM_GT "); break;
	case NFA_LNUM_LT:	STRCPY(code, "NFA_LNUM_LT "); break;
	case NFA_COL:		STRCPY(code, "NFA_COL "); break;
	case NFA_COL_GT:	STRCPY(code, "NFA_COL_GT "); break;
	case NFA_COL_LT:	STRCPY(code, "NFA_COL_LT "); break;
	case NFA_VCOL:		STRCPY(code, "NFA_VCOL "); break;
	case NFA_VCOL_GT:	STRCPY(code, "NFA_VCOL_GT "); break;
	case NFA_VCOL_LT:	STRCPY(code, "NFA_VCOL_LT "); break;
	case NFA_MARK:		STRCPY(code, "NFA_MARK "); break;
	case NFA_MARK_GT:	STRCPY(code, "NFA_MARK_GT "); break;
	case NFA_MARK_LT:	STRCPY(code, "NFA_MARK_LT "); break;
	case NFA_CURSOR:	STRCPY(code, "NFA_CURSOR "); break;
	case NFA_VISUAL:	STRCPY(code, "NFA_VISUAL "); break;
	case NFA_ANY_COMPOSING:	STRCPY(code, "NFA_ANY_COMPOSING "); break;

	case NFA_STAR:		STRCPY(code, "NFA_STAR "); break;
	case NFA_STAR_NONGREEDY: STRCPY(code, "NFA_STAR_NONGREEDY "); break;
	case NFA_QUEST:		STRCPY(code, "NFA_QUEST"); break;
	case NFA_QUEST_NONGREEDY: STRCPY(code, "NFA_QUEST_NON_GREEDY"); break;
	case NFA_EMPTY:		STRCPY(code, "NFA_EMPTY"); break;
	case NFA_OR:		STRCPY(code, "NFA_OR"); break;

	case NFA_START_COLL:	STRCPY(code, "NFA_START_COLL"); break;
	case NFA_END_COLL:	STRCPY(code, "NFA_END_COLL"); break;
	case NFA_START_NEG_COLL: STRCPY(code, "NFA_START_NEG_COLL"); break;
	case NFA_END_NEG_COLL:	STRCPY(code, "NFA_END_NEG_COLL"); break;
	case NFA_RANGE:		STRCPY(code, "NFA_RANGE"); break;
	case NFA_RANGE_MIN:	STRCPY(code, "NFA_RANGE_MIN"); break;
	case NFA_RANGE_MAX:	STRCPY(code, "NFA_RANGE_MAX"); break;

	case NFA_CLASS_ALNUM:	STRCPY(code, "NFA_CLASS_ALNUM"); break;
	case NFA_CLASS_ALPHA:	STRCPY(code, "NFA_CLASS_ALPHA"); break;
	case NFA_CLASS_BLANK:	STRCPY(code, "NFA_CLASS_BLANK"); break;
	case NFA_CLASS_CNTRL:	STRCPY(code, "NFA_CLASS_CNTRL"); break;
	case NFA_CLASS_DIGIT:	STRCPY(code, "NFA_CLASS_DIGIT"); break;
	case NFA_CLASS_GRAPH:	STRCPY(code, "NFA_CLASS_GRAPH"); break;
	case NFA_CLASS_LOWER:	STRCPY(code, "NFA_CLASS_LOWER"); break;
	case NFA_CLASS_PRINT:	STRCPY(code, "NFA_CLASS_PRINT"); break;
	case NFA_CLASS_PUNCT:	STRCPY(code, "NFA_CLASS_PUNCT"); break;
	case NFA_CLASS_SPACE:	STRCPY(code, "NFA_CLASS_SPACE"); break;
	case NFA_CLASS_UPPER:	STRCPY(code, "NFA_CLASS_UPPER"); break;
	case NFA_CLASS_XDIGIT:	STRCPY(code, "NFA_CLASS_XDIGIT"); break;
	case NFA_CLASS_TAB:	STRCPY(code, "NFA_CLASS_TAB"); break;
	case NFA_CLASS_RETURN:	STRCPY(code, "NFA_CLASS_RETURN"); break;
	case NFA_CLASS_BACKSPACE:   STRCPY(code, "NFA_CLASS_BACKSPACE"); break;
	case NFA_CLASS_ESCAPE:	STRCPY(code, "NFA_CLASS_ESCAPE"); break;
	case NFA_CLASS_IDENT:	STRCPY(code, "NFA_CLASS_IDENT"); break;
	case NFA_CLASS_KEYWORD:	STRCPY(code, "NFA_CLASS_KEYWORD"); break;
	case NFA_CLASS_FNAME:	STRCPY(code, "NFA_CLASS_FNAME"); break;

	case NFA_ANY:	STRCPY(code, "NFA_ANY"); break;
	case NFA_IDENT:	STRCPY(code, "NFA_IDENT"); break;
	case NFA_SIDENT:STRCPY(code, "NFA_SIDENT"); break;
	case NFA_KWORD:	STRCPY(code, "NFA_KWORD"); break;
	case NFA_SKWORD:STRCPY(code, "NFA_SKWORD"); break;
	case NFA_FNAME:	STRCPY(code, "NFA_FNAME"); break;
	case NFA_SFNAME:STRCPY(code, "NFA_SFNAME"); break;
	case NFA_PRINT:	STRCPY(code, "NFA_PRINT"); break;
	case NFA_SPRINT:STRCPY(code, "NFA_SPRINT"); break;
	case NFA_WHITE:	STRCPY(code, "NFA_WHITE"); break;
	case NFA_NWHITE:STRCPY(code, "NFA_NWHITE"); break;
	case NFA_DIGIT:	STRCPY(code, "NFA_DIGIT"); break;
	case NFA_NDIGIT:STRCPY(code, "NFA_NDIGIT"); break;
	case NFA_HEX:	STRCPY(code, "NFA_HEX"); break;
	case NFA_NHEX:	STRCPY(code, "NFA_NHEX"); break;
	case NFA_OCTAL:	STRCPY(code, "NFA_OCTAL"); break;
	case NFA_NOCTAL:STRCPY(code, "NFA_NOCTAL"); break;
	case NFA_WORD:	STRCPY(code, "NFA_WORD"); break;
	case NFA_NWORD:	STRCPY(code, "NFA_NWORD"); break;
	case NFA_HEAD:	STRCPY(code, "NFA_HEAD"); break;
	case NFA_NHEAD:	STRCPY(code, "NFA_NHEAD"); break;
	case NFA_ALPHA:	STRCPY(code, "NFA_ALPHA"); break;
	case NFA_NALPHA:STRCPY(code, "NFA_NALPHA"); break;
	case NFA_LOWER:	STRCPY(code, "NFA_LOWER"); break;
	case NFA_NLOWER:STRCPY(code, "NFA_NLOWER"); break;
	case NFA_UPPER:	STRCPY(code, "NFA_UPPER"); break;
	case NFA_NUPPER:STRCPY(code, "NFA_NUPPER"); break;
	case NFA_LOWER_IC:  STRCPY(code, "NFA_LOWER_IC"); break;
	case NFA_NLOWER_IC: STRCPY(code, "NFA_NLOWER_IC"); break;
	case NFA_UPPER_IC:  STRCPY(code, "NFA_UPPER_IC"); break;
	case NFA_NUPPER_IC: STRCPY(code, "NFA_NUPPER_IC"); break;

	default:
	    STRCPY(code, "CHAR(x)");
	    code[5] = c;
    }

    if (addnl == TRUE)
	STRCAT(code, " + NEWLINE ");

}

#ifdef ENABLE_LOG
static FILE *log_fd;
static char_u e_log_open_failed[] = N_("Could not open temporary log file for writing, displaying on stderr... ");


    static void
nfa_postfix_dump(char_u *expr, int retval)
{
    int *p;
    FILE *f;

    f = fopen(NFA_REGEXP_DUMP_LOG, "a");
    if (f == NULL)
	return;

    fprintf(f, "\n-------------------------\n");
    if (retval == FAIL)
	fprintf(f, ">>> NFA engine failed... \n");
    else if (retval == OK)
	fprintf(f, ">>> NFA engine succeeded !\n");
    fprintf(f, "Regexp: \"%s\"\nPostfix notation (char): \"", expr);
    for (p = post_start; *p && p < post_ptr; p++)
    {
	nfa_set_code(*p);
	fprintf(f, "%s, ", code);
    }
    fprintf(f, "\"\nPostfix notation (int): ");
    for (p = post_start; *p && p < post_ptr; p++)
	fprintf(f, "%d ", *p);
    fprintf(f, "\n\n");
    fclose(f);
}


    static void
nfa_print_state(FILE *debugf, nfa_state_T *state)
{
    garray_T indent;

    ga_init2(&indent, 1, 64);
    ga_append(&indent, '\0');
    nfa_print_state2(debugf, state, &indent);
    ga_clear(&indent);
}

    static void
nfa_print_state2(FILE *debugf, nfa_state_T *state, garray_T *indent)
{
    char_u  *p;

    if (state == NULL)
	return;

    fprintf(debugf, "(%2d)", abs(state->id));

    
    p = (char_u *)indent->ga_data;
    if (indent->ga_len >= 3)
    {
	int	last = indent->ga_len - 3;
	char_u	save[2];

	STRNCPY(save, &p[last], 2);
	memcpy(&p[last], "+-", 2);
	fprintf(debugf, " %s", p);
	STRNCPY(&p[last], save, 2);
    }
    else
	fprintf(debugf, " %s", p);

    nfa_set_code(state->c);
    fprintf(debugf, "%s (%d) (id=%d) val=%d\n",
		 code,
		 state->c,
		 abs(state->id),
		 state->val);
    if (state->id < 0)
	return;

    state->id = abs(state->id) * -1;

    
    indent->ga_len -= 1;
    if (state->out1)
	ga_concat(indent, (char_u *)"| ");
    else
	ga_concat(indent, (char_u *)"  ");
    ga_append(indent, NUL);

    nfa_print_state2(debugf, state->out, indent);

    
    indent->ga_len -= 3;
    ga_concat(indent, (char_u *)"  ");
    ga_append(indent, NUL);

    nfa_print_state2(debugf, state->out1, indent);

    
    indent->ga_len -= 3;
    ga_append(indent, NUL);
}


    static void
nfa_dump(nfa_regprog_T *prog)
{
    FILE *debugf = fopen(NFA_REGEXP_DUMP_LOG, "a");

    if (debugf == NULL)
	return;

    nfa_print_state(debugf, prog->start);

    if (prog->reganch)
	fprintf(debugf, "reganch: %d\n", prog->reganch);
    if (prog->regstart != NUL)
	fprintf(debugf, "regstart: %c (decimal: %d)\n",
		prog->regstart, prog->regstart);
    if (prog->match_text != NULL)
	fprintf(debugf, "match_text: \"%s\"\n", prog->match_text);

    fclose(debugf);
}
#endif	    
#endif	    


    static int *
re2post(void)
{
    if (nfa_reg(REG_NOPAREN) == FAIL)
	return NULL;
    EMIT(NFA_MOPEN);
    return post_start;
}





static nfa_state_T	*state_ptr; 


    static nfa_state_T *
alloc_state(int c, nfa_state_T *out, nfa_state_T *out1)
{
    nfa_state_T *s;

    if (istate >= nstate)
	return NULL;

    s = &state_ptr[istate++];

    s->c    = c;
    s->out  = out;
    s->out1 = out1;
    s->val  = 0;

    s->id   = istate;
    s->lastlist[0] = 0;
    s->lastlist[1] = 0;

    return s;
}






typedef union Ptrlist Ptrlist;
union Ptrlist
{
    Ptrlist	*next;
    nfa_state_T	*s;
};

struct Frag
{
    nfa_state_T *start;
    Ptrlist	*out;
};
typedef struct Frag Frag_T;


    static Frag_T
frag(nfa_state_T *start, Ptrlist *out)
{
    Frag_T n;

    n.start = start;
    n.out = out;
    return n;
}


    static Ptrlist *
list1(
    nfa_state_T	**outp)
{
    Ptrlist *l;

    l = (Ptrlist *)outp;
    l->next = NULL;
    return l;
}


    static void
patch(Ptrlist *l, nfa_state_T *s)
{
    Ptrlist *next;

    for (; l; l = next)
    {
	next = l->next;
	l->s = s;
    }
}



    static Ptrlist *
append(Ptrlist *l1, Ptrlist *l2)
{
    Ptrlist *oldl1;

    oldl1 = l1;
    while (l1->next)
	l1 = l1->next;
    l1->next = l2;
    return oldl1;
}


static Frag_T empty;

    static void
st_error(int *postfix UNUSED, int *end UNUSED, int *p UNUSED)
{
#ifdef NFA_REGEXP_ERROR_LOG
    FILE *df;
    int *p2;

    df = fopen(NFA_REGEXP_ERROR_LOG, "a");
    if (df)
    {
	fprintf(df, "Error popping the stack!\n");
# ifdef DEBUG
	fprintf(df, "Current regexp is \"%s\"\n", nfa_regengine.expr);
# endif
	fprintf(df, "Postfix form is: ");
# ifdef DEBUG
	for (p2 = postfix; p2 < end; p2++)
	{
	    nfa_set_code(*p2);
	    fprintf(df, "%s, ", code);
	}
	nfa_set_code(*p);
	fprintf(df, "\nCurrent position is: ");
	for (p2 = postfix; p2 <= p; p2 ++)
	{
	    nfa_set_code(*p2);
	    fprintf(df, "%s, ", code);
	}
# else
	for (p2 = postfix; p2 < end; p2++)
	    fprintf(df, "%d, ", *p2);
	fprintf(df, "\nCurrent position is: ");
	for (p2 = postfix; p2 <= p; p2 ++)
	    fprintf(df, "%d, ", *p2);
# endif
	fprintf(df, "\n--------------------------\n");
	fclose(df);
    }
#endif
    emsg(_(e_nfa_regexp_could_not_pop_stack));
}


    static void
st_push(Frag_T s, Frag_T **p, Frag_T *stack_end)
{
    Frag_T *stackp = *p;

    if (stackp >= stack_end)
	return;
    *stackp = s;
    *p = *p + 1;
}


    static Frag_T
st_pop(Frag_T **p, Frag_T *stack)
{
    Frag_T *stackp;

    *p = *p - 1;
    stackp = *p;
    if (stackp < stack)
	return empty;
    return **p;
}


    static int
nfa_max_width(nfa_state_T *startstate, int depth)
{
    int		    l, r;
    nfa_state_T	    *state = startstate;
    int		    len = 0;

    
    if (depth > 4)
	return -1;

    while (state != NULL)
    {
	switch (state->c)
	{
	    case NFA_END_INVISIBLE:
	    case NFA_END_INVISIBLE_NEG:
		
		return len;

	    case NFA_SPLIT:
		
		l = nfa_max_width(state->out, depth + 1);
		r = nfa_max_width(state->out1, depth + 1);
		if (l < 0 || r < 0)
		    return -1;
		return len + (l > r ? l : r);

	    case NFA_ANY:
	    case NFA_START_COLL:
	    case NFA_START_NEG_COLL:
		
		if (enc_utf8)
		    len += MB_MAXBYTES;
		else if (has_mbyte)
		    len += 2;
		else
		    ++len;
		if (state->c != NFA_ANY)
		{
		    
		    state = state->out1->out;
		    continue;
		}
		break;

	    case NFA_DIGIT:
	    case NFA_WHITE:
	    case NFA_HEX:
	    case NFA_OCTAL:
		
		++len;
		break;

	    case NFA_IDENT:
	    case NFA_SIDENT:
	    case NFA_KWORD:
	    case NFA_SKWORD:
	    case NFA_FNAME:
	    case NFA_SFNAME:
	    case NFA_PRINT:
	    case NFA_SPRINT:
	    case NFA_NWHITE:
	    case NFA_NDIGIT:
	    case NFA_NHEX:
	    case NFA_NOCTAL:
	    case NFA_WORD:
	    case NFA_NWORD:
	    case NFA_HEAD:
	    case NFA_NHEAD:
	    case NFA_ALPHA:
	    case NFA_NALPHA:
	    case NFA_LOWER:
	    case NFA_NLOWER:
	    case NFA_UPPER:
	    case NFA_NUPPER:
	    case NFA_LOWER_IC:
	    case NFA_NLOWER_IC:
	    case NFA_UPPER_IC:
	    case NFA_NUPPER_IC:
	    case NFA_ANY_COMPOSING:
		
		if (has_mbyte)
		    len += 3;
		else
		    ++len;
		break;

	    case NFA_START_INVISIBLE:
	    case NFA_START_INVISIBLE_NEG:
	    case NFA_START_INVISIBLE_BEFORE:
	    case NFA_START_INVISIBLE_BEFORE_NEG:
		
		state = state->out1->out;
		continue;

	    case NFA_BACKREF1:
	    case NFA_BACKREF2:
	    case NFA_BACKREF3:
	    case NFA_BACKREF4:
	    case NFA_BACKREF5:
	    case NFA_BACKREF6:
	    case NFA_BACKREF7:
	    case NFA_BACKREF8:
	    case NFA_BACKREF9:
#ifdef FEAT_SYN_HL
	    case NFA_ZREF1:
	    case NFA_ZREF2:
	    case NFA_ZREF3:
	    case NFA_ZREF4:
	    case NFA_ZREF5:
	    case NFA_ZREF6:
	    case NFA_ZREF7:
	    case NFA_ZREF8:
	    case NFA_ZREF9:
#endif
	    case NFA_NEWL:
	    case NFA_SKIP:
		
		return -1;

	    case NFA_BOL:
	    case NFA_EOL:
	    case NFA_BOF:
	    case NFA_EOF:
	    case NFA_BOW:
	    case NFA_EOW:
	    case NFA_MOPEN:
	    case NFA_MOPEN1:
	    case NFA_MOPEN2:
	    case NFA_MOPEN3:
	    case NFA_MOPEN4:
	    case NFA_MOPEN5:
	    case NFA_MOPEN6:
	    case NFA_MOPEN7:
	    case NFA_MOPEN8:
	    case NFA_MOPEN9:
#ifdef FEAT_SYN_HL
	    case NFA_ZOPEN:
	    case NFA_ZOPEN1:
	    case NFA_ZOPEN2:
	    case NFA_ZOPEN3:
	    case NFA_ZOPEN4:
	    case NFA_ZOPEN5:
	    case NFA_ZOPEN6:
	    case NFA_ZOPEN7:
	    case NFA_ZOPEN8:
	    case NFA_ZOPEN9:
	    case NFA_ZCLOSE:
	    case NFA_ZCLOSE1:
	    case NFA_ZCLOSE2:
	    case NFA_ZCLOSE3:
	    case NFA_ZCLOSE4:
	    case NFA_ZCLOSE5:
	    case NFA_ZCLOSE6:
	    case NFA_ZCLOSE7:
	    case NFA_ZCLOSE8:
	    case NFA_ZCLOSE9:
#endif
	    case NFA_MCLOSE:
	    case NFA_MCLOSE1:
	    case NFA_MCLOSE2:
	    case NFA_MCLOSE3:
	    case NFA_MCLOSE4:
	    case NFA_MCLOSE5:
	    case NFA_MCLOSE6:
	    case NFA_MCLOSE7:
	    case NFA_MCLOSE8:
	    case NFA_MCLOSE9:
	    case NFA_NOPEN:
	    case NFA_NCLOSE:

	    case NFA_LNUM_GT:
	    case NFA_LNUM_LT:
	    case NFA_COL_GT:
	    case NFA_COL_LT:
	    case NFA_VCOL_GT:
	    case NFA_VCOL_LT:
	    case NFA_MARK_GT:
	    case NFA_MARK_LT:
	    case NFA_VISUAL:
	    case NFA_LNUM:
	    case NFA_CURSOR:
	    case NFA_COL:
	    case NFA_VCOL:
	    case NFA_MARK:

	    case NFA_ZSTART:
	    case NFA_ZEND:
	    case NFA_OPT_CHARS:
	    case NFA_EMPTY:
	    case NFA_START_PATTERN:
	    case NFA_END_PATTERN:
	    case NFA_COMPOSING:
	    case NFA_END_COMPOSING:
		
		break;

	    default:
		if (state->c < 0)
		    
		    return -1;
		
		len += MB_CHAR2LEN(state->c);
		break;
	}

	
	state = state->out;
    }

    
    return -1;
}


    static nfa_state_T *
post2nfa(int *postfix, int *end, int nfa_calc_size)
{
    int		*p;
    int		mopen;
    int		mclose;
    Frag_T	*stack = NULL;
    Frag_T	*stackp = NULL;
    Frag_T	*stack_end = NULL;
    Frag_T	e1;
    Frag_T	e2;
    Frag_T	e;
    nfa_state_T	*s;
    nfa_state_T	*s1;
    nfa_state_T	*matchstate;
    nfa_state_T	*ret = NULL;

    if (postfix == NULL)
	return NULL;

#define PUSH(s)	    st_push((s), &stackp, stack_end)
#define POP()	    st_pop(&stackp, stack);		\
		    if (stackp < stack)			\
		    {					\
			st_error(postfix, end, p);	\
			vim_free(stack);		\
			return NULL;			\
		    }

    if (nfa_calc_size == FALSE)
    {
	
	stack = ALLOC_MULT(Frag_T, nstate + 1);
	if (stack == NULL)
	    return NULL;
	stackp = stack;
	stack_end = stack + (nstate + 1);
    }

    for (p = postfix; p < end; ++p)
    {
	switch (*p)
	{
	case NFA_CONCAT:
	    
	    
	    
	    
	    if (nfa_calc_size == TRUE)
	    {
		
		break;
	    }
	    e2 = POP();
	    e1 = POP();
	    patch(e1.out, e2.start);
	    PUSH(frag(e1.start, e2.out));
	    break;

	case NFA_OR:
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    e2 = POP();
	    e1 = POP();
	    s = alloc_state(NFA_SPLIT, e1.start, e2.start);
	    if (s == NULL)
		goto theend;
	    PUSH(frag(s, append(e1.out, e2.out)));
	    break;

	case NFA_STAR:
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    e = POP();
	    s = alloc_state(NFA_SPLIT, e.start, NULL);
	    if (s == NULL)
		goto theend;
	    patch(e.out, s);
	    PUSH(frag(s, list1(&s->out1)));
	    break;

	case NFA_STAR_NONGREEDY:
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    e = POP();
	    s = alloc_state(NFA_SPLIT, NULL, e.start);
	    if (s == NULL)
		goto theend;
	    patch(e.out, s);
	    PUSH(frag(s, list1(&s->out)));
	    break;

	case NFA_QUEST:
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    e = POP();
	    s = alloc_state(NFA_SPLIT, e.start, NULL);
	    if (s == NULL)
		goto theend;
	    PUSH(frag(s, append(e.out, list1(&s->out1))));
	    break;

	case NFA_QUEST_NONGREEDY:
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    e = POP();
	    s = alloc_state(NFA_SPLIT, NULL, e.start);
	    if (s == NULL)
		goto theend;
	    PUSH(frag(s, append(e.out, list1(&s->out))));
	    break;

	case NFA_END_COLL:
	case NFA_END_NEG_COLL:
	    
	    
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    e = POP();
	    s = alloc_state(NFA_END_COLL, NULL, NULL);
	    if (s == NULL)
		goto theend;
	    patch(e.out, s);
	    e.start->out1 = s;
	    PUSH(frag(e.start, list1(&s->out)));
	    break;

	case NFA_RANGE:
	    
	    
	    if (nfa_calc_size == TRUE)
	    {
		
		break;
	    }
	    e2 = POP();
	    e1 = POP();
	    e2.start->val = e2.start->c;
	    e2.start->c = NFA_RANGE_MAX;
	    e1.start->val = e1.start->c;
	    e1.start->c = NFA_RANGE_MIN;
	    patch(e1.out, e2.start);
	    PUSH(frag(e1.start, e2.out));
	    break;

	case NFA_EMPTY:
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    s = alloc_state(NFA_EMPTY, NULL, NULL);
	    if (s == NULL)
		goto theend;
	    PUSH(frag(s, list1(&s->out)));
	    break;

	case NFA_OPT_CHARS:
	  {
	    int    n;

	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    n = *++p; 
	    if (nfa_calc_size == TRUE)
	    {
		nstate += n;
		break;
	    }
	    s = NULL; 
	    e1.out = NULL; 
	    s1 = NULL; 
	    while (n-- > 0)
	    {
		e = POP(); 
		s = alloc_state(NFA_SPLIT, e.start, NULL);
		if (s == NULL)
		    goto theend;
		if (e1.out == NULL)
		    e1 = e;
		patch(e.out, s1);
		append(e1.out, list1(&s->out1));
		s1 = s;
	    }
	    PUSH(frag(s, e1.out));
	    break;
	  }

	case NFA_PREV_ATOM_NO_WIDTH:
	case NFA_PREV_ATOM_NO_WIDTH_NEG:
	case NFA_PREV_ATOM_JUST_BEFORE:
	case NFA_PREV_ATOM_JUST_BEFORE_NEG:
	case NFA_PREV_ATOM_LIKE_PATTERN:
	  {
	    int before = (*p == NFA_PREV_ATOM_JUST_BEFORE
				      || *p == NFA_PREV_ATOM_JUST_BEFORE_NEG);
	    int pattern = (*p == NFA_PREV_ATOM_LIKE_PATTERN);
	    int start_state;
	    int end_state;
	    int n = 0;
	    nfa_state_T *zend;
	    nfa_state_T *skip;

	    switch (*p)
	    {
		case NFA_PREV_ATOM_NO_WIDTH:
		    start_state = NFA_START_INVISIBLE;
		    end_state = NFA_END_INVISIBLE;
		    break;
		case NFA_PREV_ATOM_NO_WIDTH_NEG:
		    start_state = NFA_START_INVISIBLE_NEG;
		    end_state = NFA_END_INVISIBLE_NEG;
		    break;
		case NFA_PREV_ATOM_JUST_BEFORE:
		    start_state = NFA_START_INVISIBLE_BEFORE;
		    end_state = NFA_END_INVISIBLE;
		    break;
		case NFA_PREV_ATOM_JUST_BEFORE_NEG:
		    start_state = NFA_START_INVISIBLE_BEFORE_NEG;
		    end_state = NFA_END_INVISIBLE_NEG;
		    break;
		default: 
		    start_state = NFA_START_PATTERN;
		    end_state = NFA_END_PATTERN;
		    break;
	    }

	    if (before)
		n = *++p; 

	    
	    
	    
	    
	    
	    

	    if (nfa_calc_size == TRUE)
	    {
		nstate += pattern ? 4 : 2;
		break;
	    }
	    e = POP();
	    s1 = alloc_state(end_state, NULL, NULL);
	    if (s1 == NULL)
		goto theend;

	    s = alloc_state(start_state, e.start, s1);
	    if (s == NULL)
		goto theend;
	    if (pattern)
	    {
		
		skip = alloc_state(NFA_SKIP, NULL, NULL);
		if (skip == NULL)
		    goto theend;
		zend = alloc_state(NFA_ZEND, s1, NULL);
		if (zend == NULL)
		    goto theend;
		s1->out= skip;
		patch(e.out, zend);
		PUSH(frag(s, list1(&skip->out)));
	    }
	    else
	    {
		patch(e.out, s1);
		PUSH(frag(s, list1(&s1->out)));
		if (before)
		{
		    if (n <= 0)
			
			
			n = nfa_max_width(e.start, 0);
		    s->val = n; 
		}
	    }
	    break;
	  }

	case NFA_COMPOSING:	
#if 0
	    
	    if (regflags & RF_ICOMBINE)
	    {
		
	    }
#endif
	    

	case NFA_MOPEN:	
	case NFA_MOPEN1:
	case NFA_MOPEN2:
	case NFA_MOPEN3:
	case NFA_MOPEN4:
	case NFA_MOPEN5:
	case NFA_MOPEN6:
	case NFA_MOPEN7:
	case NFA_MOPEN8:
	case NFA_MOPEN9:
#ifdef FEAT_SYN_HL
	case NFA_ZOPEN:	
	case NFA_ZOPEN1:
	case NFA_ZOPEN2:
	case NFA_ZOPEN3:
	case NFA_ZOPEN4:
	case NFA_ZOPEN5:
	case NFA_ZOPEN6:
	case NFA_ZOPEN7:
	case NFA_ZOPEN8:
	case NFA_ZOPEN9:
#endif
	case NFA_NOPEN:	
	    if (nfa_calc_size == TRUE)
	    {
		nstate += 2;
		break;
	    }

	    mopen = *p;
	    switch (*p)
	    {
		case NFA_NOPEN: mclose = NFA_NCLOSE; break;
#ifdef FEAT_SYN_HL
		case NFA_ZOPEN: mclose = NFA_ZCLOSE; break;
		case NFA_ZOPEN1: mclose = NFA_ZCLOSE1; break;
		case NFA_ZOPEN2: mclose = NFA_ZCLOSE2; break;
		case NFA_ZOPEN3: mclose = NFA_ZCLOSE3; break;
		case NFA_ZOPEN4: mclose = NFA_ZCLOSE4; break;
		case NFA_ZOPEN5: mclose = NFA_ZCLOSE5; break;
		case NFA_ZOPEN6: mclose = NFA_ZCLOSE6; break;
		case NFA_ZOPEN7: mclose = NFA_ZCLOSE7; break;
		case NFA_ZOPEN8: mclose = NFA_ZCLOSE8; break;
		case NFA_ZOPEN9: mclose = NFA_ZCLOSE9; break;
#endif
		case NFA_COMPOSING: mclose = NFA_END_COMPOSING; break;
		default:
		    
		    mclose = *p + NSUBEXP;
		    break;
	    }

	    
	    
	    
	    
	    if (stackp == stack)
	    {
		s = alloc_state(mopen, NULL, NULL);
		if (s == NULL)
		    goto theend;
		s1 = alloc_state(mclose, NULL, NULL);
		if (s1 == NULL)
		    goto theend;
		patch(list1(&s->out), s1);
		PUSH(frag(s, list1(&s1->out)));
		break;
	    }

	    
	    
	    e = POP();
	    s = alloc_state(mopen, e.start, NULL);   
	    if (s == NULL)
		goto theend;

	    s1 = alloc_state(mclose, NULL, NULL);   
	    if (s1 == NULL)
		goto theend;
	    patch(e.out, s1);

	    if (mopen == NFA_COMPOSING)
		
		patch(list1(&s->out1), s1);

	    PUSH(frag(s, list1(&s1->out)));
	    break;

	case NFA_BACKREF1:
	case NFA_BACKREF2:
	case NFA_BACKREF3:
	case NFA_BACKREF4:
	case NFA_BACKREF5:
	case NFA_BACKREF6:
	case NFA_BACKREF7:
	case NFA_BACKREF8:
	case NFA_BACKREF9:
#ifdef FEAT_SYN_HL
	case NFA_ZREF1:
	case NFA_ZREF2:
	case NFA_ZREF3:
	case NFA_ZREF4:
	case NFA_ZREF5:
	case NFA_ZREF6:
	case NFA_ZREF7:
	case NFA_ZREF8:
	case NFA_ZREF9:
#endif
	    if (nfa_calc_size == TRUE)
	    {
		nstate += 2;
		break;
	    }
	    s = alloc_state(*p, NULL, NULL);
	    if (s == NULL)
		goto theend;
	    s1 = alloc_state(NFA_SKIP, NULL, NULL);
	    if (s1 == NULL)
		goto theend;
	    patch(list1(&s->out), s1);
	    PUSH(frag(s, list1(&s1->out)));
	    break;

	case NFA_LNUM:
	case NFA_LNUM_GT:
	case NFA_LNUM_LT:
	case NFA_VCOL:
	case NFA_VCOL_GT:
	case NFA_VCOL_LT:
	case NFA_COL:
	case NFA_COL_GT:
	case NFA_COL_LT:
	case NFA_MARK:
	case NFA_MARK_GT:
	case NFA_MARK_LT:
	  {
	    int n = *++p; 

	    if (nfa_calc_size == TRUE)
	    {
		nstate += 1;
		break;
	    }
	    s = alloc_state(p[-1], NULL, NULL);
	    if (s == NULL)
		goto theend;
	    s->val = n;
	    PUSH(frag(s, list1(&s->out)));
	    break;
	  }

	case NFA_ZSTART:
	case NFA_ZEND:
	default:
	    
	    if (nfa_calc_size == TRUE)
	    {
		nstate++;
		break;
	    }
	    s = alloc_state(*p, NULL, NULL);
	    if (s == NULL)
		goto theend;
	    PUSH(frag(s, list1(&s->out)));
	    break;

	} 

    } 

    if (nfa_calc_size == TRUE)
    {
	nstate++;
	goto theend;	
    }

    e = POP();
    if (stackp != stack)
    {
	vim_free(stack);
	EMSG_RET_NULL(_(e_nfa_regexp_while_converting_from_postfix_to_nfa_too_many_stats_left_on_stack));
    }

    if (istate >= nstate)
    {
	vim_free(stack);
	EMSG_RET_NULL(_(e_nfa_regexp_not_enough_space_to_store_whole_nfa));
    }

    matchstate = &state_ptr[istate++]; 
    matchstate->c = NFA_MATCH;
    matchstate->out = matchstate->out1 = NULL;
    matchstate->id = 0;

    patch(e.out, matchstate);
    ret = e.start;

theend:
    vim_free(stack);
    return ret;

#undef POP1
#undef PUSH1
#undef POP2
#undef PUSH2
#undef POP
#undef PUSH
}


    static void
nfa_postprocess(nfa_regprog_T *prog)
{
    int i;
    int c;

    for (i = 0; i < prog->nstate; ++i)
    {
	c = prog->state[i].c;
	if (c == NFA_START_INVISIBLE
		|| c == NFA_START_INVISIBLE_NEG
		|| c == NFA_START_INVISIBLE_BEFORE
		|| c == NFA_START_INVISIBLE_BEFORE_NEG)
	{
	    int directly;

	    
	    
	    if (match_follows(prog->state[i].out1->out, 0))
		directly = TRUE;
	    else
	    {
		int ch_invisible = failure_chance(prog->state[i].out, 0);
		int ch_follows = failure_chance(prog->state[i].out1->out, 0);

		
		
		if (c == NFA_START_INVISIBLE_BEFORE
		     || c == NFA_START_INVISIBLE_BEFORE_NEG)
		{
		    
		    
		    
		    
		    if (prog->state[i].val <= 0 && ch_follows > 0)
			directly = FALSE;
		    else
			directly = ch_follows * 10 < ch_invisible;
		}
		else
		{
		    
		    
		    directly = ch_follows < ch_invisible;
		}
	    }
	    if (directly)
		
		++prog->state[i].c;
	}
    }
}





typedef struct
{
    int	    in_use; 

    
    union
    {
	struct multipos
	{
	    linenr_T	start_lnum;
	    linenr_T	end_lnum;
	    colnr_T	start_col;
	    colnr_T	end_col;
	} multi[NSUBEXP];
	struct linepos
	{
	    char_u	*start;
	    char_u	*end;
	} line[NSUBEXP];
    } list;
    colnr_T	orig_start_col;  
} regsub_T;

typedef struct
{
    regsub_T	norm; 
#ifdef FEAT_SYN_HL
    regsub_T	synt; 
#endif
} regsubs_T;


typedef struct nfa_pim_S nfa_pim_T;
struct nfa_pim_S
{
    int		result;		
    nfa_state_T	*state;		
    regsubs_T	subs;		
    union
    {
	lpos_T	pos;
	char_u	*ptr;
    } end;			
};


#define NFA_PIM_UNUSED   0	
#define NFA_PIM_TODO     1	
#define NFA_PIM_MATCH    2	
#define NFA_PIM_NOMATCH  3	



typedef struct
{
    nfa_state_T	*state;
    int		count;
    nfa_pim_T	pim;		
				
    regsubs_T	subs;		
} nfa_thread_T;


typedef struct
{
    nfa_thread_T    *t;		
    int		    n;		
    int		    len;	
    int		    id;		
    int		    has_pim;	
} nfa_list_T;

#ifdef ENABLE_LOG
static void log_subexpr(regsub_T *sub);

    static void
log_subsexpr(regsubs_T *subs)
{
    log_subexpr(&subs->norm);
# ifdef FEAT_SYN_HL
    if (rex.nfa_has_zsubexpr)
	log_subexpr(&subs->synt);
# endif
}

    static void
log_subexpr(regsub_T *sub)
{
    int j;

    for (j = 0; j < sub->in_use; j++)
	if (REG_MULTI)
	    fprintf(log_fd,
		    "*** group %d, start: c=%d, l=%d, end: c=%d, l=%d\n",
		    j,
		    sub->list.multi[j].start_col,
		    (int)sub->list.multi[j].start_lnum,
		    sub->list.multi[j].end_col,
		    (int)sub->list.multi[j].end_lnum);
	else
	{
	    char *s = (char *)sub->list.line[j].start;
	    char *e = (char *)sub->list.line[j].end;

	    fprintf(log_fd, "*** group %d, start: \"%s\", end: \"%s\"\n",
		    j,
		    s == NULL ? "NULL" : s,
		    e == NULL ? "NULL" : e);
	}
}

    static char *
pim_info(nfa_pim_T *pim)
{
    static char buf[30];

    if (pim == NULL || pim->result == NFA_PIM_UNUSED)
	buf[0] = NUL;
    else
    {
	sprintf(buf, " PIM col %d", REG_MULTI ? (int)pim->end.pos.col
		: (int)(pim->end.ptr - rex.input));
    }
    return buf;
}

#endif


static int	    nfa_match;
#ifdef FEAT_RELTIME
static int	   *nfa_timed_out;
#endif

static void copy_sub(regsub_T *to, regsub_T *from);
static int pim_equal(nfa_pim_T *one, nfa_pim_T *two);


    static void
copy_pim(nfa_pim_T *to, nfa_pim_T *from)
{
    to->result = from->result;
    to->state = from->state;
    copy_sub(&to->subs.norm, &from->subs.norm);
#ifdef FEAT_SYN_HL
    if (rex.nfa_has_zsubexpr)
	copy_sub(&to->subs.synt, &from->subs.synt);
#endif
    to->end = from->end;
}

    static void
clear_sub(regsub_T *sub)
{
    if (REG_MULTI)
	
	vim_memset(sub->list.multi, 0xff,
				  sizeof(struct multipos) * rex.nfa_nsubexpr);
    else
	vim_memset(sub->list.line, 0,
				   sizeof(struct linepos) * rex.nfa_nsubexpr);
    sub->in_use = 0;
}


    static void
copy_sub(regsub_T *to, regsub_T *from)
{
    to->in_use = from->in_use;
    if (from->in_use <= 0)
	return;

    
    if (REG_MULTI)
    {
	mch_memmove(&to->list.multi[0],
		&from->list.multi[0],
		sizeof(struct multipos) * from->in_use);
	to->orig_start_col = from->orig_start_col;
    }
    else
	mch_memmove(&to->list.line[0],
		&from->list.line[0],
		sizeof(struct linepos) * from->in_use);
}


    static void
copy_sub_off(regsub_T *to, regsub_T *from)
{
    if (to->in_use < from->in_use)
	to->in_use = from->in_use;
    if (from->in_use <= 1)
	return;

    
    if (REG_MULTI)
	mch_memmove(&to->list.multi[1],
		&from->list.multi[1],
		sizeof(struct multipos) * (from->in_use - 1));
    else
	mch_memmove(&to->list.line[1],
		&from->list.line[1],
		sizeof(struct linepos) * (from->in_use - 1));
}


    static void
copy_ze_off(regsub_T *to, regsub_T *from)
{
    if (!rex.nfa_has_zend)
	return;

    if (REG_MULTI)
    {
	if (from->list.multi[0].end_lnum >= 0)
	{
	    to->list.multi[0].end_lnum = from->list.multi[0].end_lnum;
	    to->list.multi[0].end_col = from->list.multi[0].end_col;
	}
    }
    else
    {
	if (from->list.line[0].end != NULL)
	    to->list.line[0].end = from->list.line[0].end;
    }
}


    static int
sub_equal(regsub_T *sub1, regsub_T *sub2)
{
    int		i;
    int		todo;
    linenr_T	s1;
    linenr_T	s2;
    char_u	*sp1;
    char_u	*sp2;

    todo = sub1->in_use > sub2->in_use ? sub1->in_use : sub2->in_use;
    if (REG_MULTI)
    {
	for (i = 0; i < todo; ++i)
	{
	    if (i < sub1->in_use)
		s1 = sub1->list.multi[i].start_lnum;
	    else
		s1 = -1;
	    if (i < sub2->in_use)
		s2 = sub2->list.multi[i].start_lnum;
	    else
		s2 = -1;
	    if (s1 != s2)
		return FALSE;
	    if (s1 != -1 && sub1->list.multi[i].start_col
					     != sub2->list.multi[i].start_col)
		return FALSE;

	    if (rex.nfa_has_backref)
	    {
		if (i < sub1->in_use)
		    s1 = sub1->list.multi[i].end_lnum;
		else
		    s1 = -1;
		if (i < sub2->in_use)
		    s2 = sub2->list.multi[i].end_lnum;
		else
		    s2 = -1;
		if (s1 != s2)
		    return FALSE;
		if (s1 != -1 && sub1->list.multi[i].end_col
					       != sub2->list.multi[i].end_col)
		return FALSE;
	    }
	}
    }
    else
    {
	for (i = 0; i < todo; ++i)
	{
	    if (i < sub1->in_use)
		sp1 = sub1->list.line[i].start;
	    else
		sp1 = NULL;
	    if (i < sub2->in_use)
		sp2 = sub2->list.line[i].start;
	    else
		sp2 = NULL;
	    if (sp1 != sp2)
		return FALSE;
	    if (rex.nfa_has_backref)
	    {
		if (i < sub1->in_use)
		    sp1 = sub1->list.line[i].end;
		else
		    sp1 = NULL;
		if (i < sub2->in_use)
		    sp2 = sub2->list.line[i].end;
		else
		    sp2 = NULL;
		if (sp1 != sp2)
		    return FALSE;
	    }
	}
    }

    return TRUE;
}

#ifdef FEAT_RELTIME

    static int
nfa_did_time_out(void)
{
    if (*timeout_flag)
    {
	if (nfa_timed_out != NULL)
	{
# ifdef FEAT_EVAL
	    if (!*nfa_timed_out)
		ch_log(NULL, "NFA regexp timed out");
# endif
	    *nfa_timed_out = TRUE;
	}
	return TRUE;
    }
    return FALSE;
}
#endif

#ifdef ENABLE_LOG
    static void
open_debug_log(int result)
{
    log_fd = fopen(NFA_REGEXP_RUN_LOG, "a");
    if (log_fd == NULL)
    {
	emsg(_(e_log_open_failed));
	log_fd = stderr;
    }

    fprintf(log_fd, "****************************\n");
    fprintf(log_fd, "FINISHED RUNNING nfa_regmatch() recursively\n");
    fprintf(log_fd, "MATCH = %s\n", result == TRUE ? "OK" : result == MAYBE
	    ? "MAYBE" : "FALSE");
    fprintf(log_fd, "****************************\n");
}

    static void
report_state(char *action,
	     regsub_T *sub,
	     nfa_state_T *state,
	     int lid,
	     nfa_pim_T *pim)
{
    int col;

    if (sub->in_use <= 0)
	col = -1;
    else if (REG_MULTI)
	col = sub->list.multi[0].start_col;
    else
	col = (int)(sub->list.line[0].start - rex.line);
    nfa_set_code(state->c);
    if (log_fd == NULL)
	open_debug_log(MAYBE);

    fprintf(log_fd, "> %s state %d to list %d. char %d: %s (start col %d)%s\n",
	    action, abs(state->id), lid, state->c, code, col,
	    pim_info(pim));
}
#endif


    static int
has_state_with_pos(
    nfa_list_T		*l,	
    nfa_state_T		*state,	
    regsubs_T		*subs,	
    nfa_pim_T		*pim)	
{
    nfa_thread_T	*thread;
    int			i;

    for (i = 0; i < l->n; ++i)
    {
	thread = &l->t[i];
	if (thread->state->id == state->id
		&& sub_equal(&thread->subs.norm, &subs->norm)
#ifdef FEAT_SYN_HL
		&& (!rex.nfa_has_zsubexpr
				|| sub_equal(&thread->subs.synt, &subs->synt))
#endif
		&& pim_equal(&thread->pim, pim))
	    return TRUE;
    }
    return FALSE;
}


    static int
pim_equal(nfa_pim_T *one, nfa_pim_T *two)
{
    int one_unused = (one == NULL || one->result == NFA_PIM_UNUSED);
    int two_unused = (two == NULL || two->result == NFA_PIM_UNUSED);

    if (one_unused)
	
	return two_unused;
    if (two_unused)
	
	return FALSE;
    
    if (one->state->id != two->state->id)
	return FALSE;
    
    if (REG_MULTI)
	return one->end.pos.lnum == two->end.pos.lnum
	    && one->end.pos.col == two->end.pos.col;
    return one->end.ptr == two->end.ptr;
}


    static int
match_follows(nfa_state_T *startstate, int depth)
{
    nfa_state_T	    *state = startstate;

    
    if (depth > 10)
	return FALSE;

    while (state != NULL)
    {
	switch (state->c)
	{
	    case NFA_MATCH:
	    case NFA_MCLOSE:
	    case NFA_END_INVISIBLE:
	    case NFA_END_INVISIBLE_NEG:
	    case NFA_END_PATTERN:
		return TRUE;

	    case NFA_SPLIT:
		return match_follows(state->out, depth + 1)
				     || match_follows(state->out1, depth + 1);

	    case NFA_START_INVISIBLE:
	    case NFA_START_INVISIBLE_FIRST:
	    case NFA_START_INVISIBLE_BEFORE:
	    case NFA_START_INVISIBLE_BEFORE_FIRST:
	    case NFA_START_INVISIBLE_NEG:
	    case NFA_START_INVISIBLE_NEG_FIRST:
	    case NFA_START_INVISIBLE_BEFORE_NEG:
	    case NFA_START_INVISIBLE_BEFORE_NEG_FIRST:
	    case NFA_COMPOSING:
		
		state = state->out1->out;
		continue;

	    case NFA_ANY:
	    case NFA_ANY_COMPOSING:
	    case NFA_IDENT:
	    case NFA_SIDENT:
	    case NFA_KWORD:
	    case NFA_SKWORD:
	    case NFA_FNAME:
	    case NFA_SFNAME:
	    case NFA_PRINT:
	    case NFA_SPRINT:
	    case NFA_WHITE:
	    case NFA_NWHITE:
	    case NFA_DIGIT:
	    case NFA_NDIGIT:
	    case NFA_HEX:
	    case NFA_NHEX:
	    case NFA_OCTAL:
	    case NFA_NOCTAL:
	    case NFA_WORD:
	    case NFA_NWORD:
	    case NFA_HEAD:
	    case NFA_NHEAD:
	    case NFA_ALPHA:
	    case NFA_NALPHA:
	    case NFA_LOWER:
	    case NFA_NLOWER:
	    case NFA_UPPER:
	    case NFA_NUPPER:
	    case NFA_LOWER_IC:
	    case NFA_NLOWER_IC:
	    case NFA_UPPER_IC:
	    case NFA_NUPPER_IC:
	    case NFA_START_COLL:
	    case NFA_START_NEG_COLL:
	    case NFA_NEWL:
		
		return FALSE;

	    default:
		if (state->c > 0)
		    
		    return FALSE;

		
		
		break;
	}
	state = state->out;
    }
    return FALSE;
}



    static int
state_in_list(
    nfa_list_T		*l,	
    nfa_state_T		*state,	
    regsubs_T		*subs)	
{
    if (state->lastlist[nfa_ll_index] == l->id)
    {
	if (!rex.nfa_has_backref || has_state_with_pos(l, state, subs, NULL))
	    return TRUE;
    }
    return FALSE;
}


#define ADDSTATE_HERE_OFFSET 10


    static regsubs_T *
addstate(
    nfa_list_T		*l,	    
    nfa_state_T		*state,	    
    regsubs_T		*subs_arg,  
    nfa_pim_T		*pim,	    
    int			off_arg)    
{
    int			subidx;
    int			off = off_arg;
    int			add_here = FALSE;
    int			listindex = 0;
    int			k;
    int			found = FALSE;
    nfa_thread_T	*thread;
    struct multipos	save_multipos;
    int			save_in_use;
    char_u		*save_ptr;
    int			i;
    regsub_T		*sub;
    regsubs_T		*subs = subs_arg;
    static regsubs_T	temp_subs;
#ifdef ENABLE_LOG
    int			did_print = FALSE;
#endif
    static int		depth = 0;

#ifdef FEAT_RELTIME
    if (nfa_did_time_out())
	return NULL;
#endif

    
    
    if (++depth >= 5000 || subs == NULL)
    {
	--depth;
	return NULL;
    }

    if (off_arg <= -ADDSTATE_HERE_OFFSET)
    {
	add_here = TRUE;
	off = 0;
	listindex = -(off_arg + ADDSTATE_HERE_OFFSET);
    }

    switch (state->c)
    {
	case NFA_NCLOSE:
	case NFA_MCLOSE:
	case NFA_MCLOSE1:
	case NFA_MCLOSE2:
	case NFA_MCLOSE3:
	case NFA_MCLOSE4:
	case NFA_MCLOSE5:
	case NFA_MCLOSE6:
	case NFA_MCLOSE7:
	case NFA_MCLOSE8:
	case NFA_MCLOSE9:
#ifdef FEAT_SYN_HL
	case NFA_ZCLOSE:
	case NFA_ZCLOSE1:
	case NFA_ZCLOSE2:
	case NFA_ZCLOSE3:
	case NFA_ZCLOSE4:
	case NFA_ZCLOSE5:
	case NFA_ZCLOSE6:
	case NFA_ZCLOSE7:
	case NFA_ZCLOSE8:
	case NFA_ZCLOSE9:
#endif
	case NFA_MOPEN:
	case NFA_ZEND:
	case NFA_SPLIT:
	case NFA_EMPTY:
	    
	    
	    break;

	case NFA_BOL:
	case NFA_BOF:
	    
	    
	    
	    if (rex.input > rex.line
		    && *rex.input != NUL
		    && (nfa_endp == NULL
			|| !REG_MULTI
			|| rex.lnum == nfa_endp->se_u.pos.lnum))
		goto skip_add;
	    

	case NFA_MOPEN1:
	case NFA_MOPEN2:
	case NFA_MOPEN3:
	case NFA_MOPEN4:
	case NFA_MOPEN5:
	case NFA_MOPEN6:
	case NFA_MOPEN7:
	case NFA_MOPEN8:
	case NFA_MOPEN9:
#ifdef FEAT_SYN_HL
	case NFA_ZOPEN:
	case NFA_ZOPEN1:
	case NFA_ZOPEN2:
	case NFA_ZOPEN3:
	case NFA_ZOPEN4:
	case NFA_ZOPEN5:
	case NFA_ZOPEN6:
	case NFA_ZOPEN7:
	case NFA_ZOPEN8:
	case NFA_ZOPEN9:
#endif
	case NFA_NOPEN:
	case NFA_ZSTART:
	    
	    
	    

	default:
	    if (state->lastlist[nfa_ll_index] == l->id && state->c != NFA_SKIP)
	    {
		
		
		
		
		if (!rex.nfa_has_backref && pim == NULL && !l->has_pim
						     && state->c != NFA_MATCH)
		{
		    
		    
		    if (add_here)
		    {
			for (k = 0; k < l->n && k < listindex; ++k)
			    if (l->t[k].state->id == state->id)
			    {
				found = TRUE;
				break;
			    }
		    }
		    if (!add_here || found)
		    {
skip_add:
#ifdef ENABLE_LOG
			nfa_set_code(state->c);
			fprintf(log_fd, "> Not adding state %d to list %d. char %d: %s pim: %s has_pim: %d found: %d\n",
			    abs(state->id), l->id, state->c, code,
			    pim == NULL ? "NULL" : "yes", l->has_pim, found);
#endif
			--depth;
			return subs;
		    }
		}

		
		
		if (has_state_with_pos(l, state, subs, pim))
		    goto skip_add;
	    }

	    
	    
	    if (l->n == l->len)
	    {
		int		newlen = l->len * 3 / 2 + 50;
		size_t		newsize = newlen * sizeof(nfa_thread_T);
		nfa_thread_T	*newt;

		if ((int)(newsize >> 10) >= p_mmp)
		{
		    emsg(_(e_pattern_uses_more_memory_than_maxmempattern));
		    --depth;
		    return NULL;
		}
		if (subs != &temp_subs)
		{
		    
		    
		    copy_sub(&temp_subs.norm, &subs->norm);
#ifdef FEAT_SYN_HL
		    if (rex.nfa_has_zsubexpr)
			copy_sub(&temp_subs.synt, &subs->synt);
#endif
		    subs = &temp_subs;
		}

		newt = vim_realloc(l->t, newsize);
		if (newt == NULL)
		{
		    
		    --depth;
		    return NULL;
		}
		l->t = newt;
		l->len = newlen;
	    }

	    
	    state->lastlist[nfa_ll_index] = l->id;
	    thread = &l->t[l->n++];
	    thread->state = state;
	    if (pim == NULL)
		thread->pim.result = NFA_PIM_UNUSED;
	    else
	    {
		copy_pim(&thread->pim, pim);
		l->has_pim = TRUE;
	    }
	    copy_sub(&thread->subs.norm, &subs->norm);
#ifdef FEAT_SYN_HL
	    if (rex.nfa_has_zsubexpr)
		copy_sub(&thread->subs.synt, &subs->synt);
#endif
#ifdef ENABLE_LOG
	    report_state("Adding", &thread->subs.norm, state, l->id, pim);
	    did_print = TRUE;
#endif
    }

#ifdef ENABLE_LOG
    if (!did_print)
	report_state("Processing", &subs->norm, state, l->id, pim);
#endif
    switch (state->c)
    {
	case NFA_MATCH:
	    break;

	case NFA_SPLIT:
	    
	    subs = addstate(l, state->out, subs, pim, off_arg);
	    subs = addstate(l, state->out1, subs, pim, off_arg);
	    break;

	case NFA_EMPTY:
	case NFA_NOPEN:
	case NFA_NCLOSE:
	    subs = addstate(l, state->out, subs, pim, off_arg);
	    break;

	case NFA_MOPEN:
	case NFA_MOPEN1:
	case NFA_MOPEN2:
	case NFA_MOPEN3:
	case NFA_MOPEN4:
	case NFA_MOPEN5:
	case NFA_MOPEN6:
	case NFA_MOPEN7:
	case NFA_MOPEN8:
	case NFA_MOPEN9:
#ifdef FEAT_SYN_HL
	case NFA_ZOPEN:
	case NFA_ZOPEN1:
	case NFA_ZOPEN2:
	case NFA_ZOPEN3:
	case NFA_ZOPEN4:
	case NFA_ZOPEN5:
	case NFA_ZOPEN6:
	case NFA_ZOPEN7:
	case NFA_ZOPEN8:
	case NFA_ZOPEN9:
#endif
	case NFA_ZSTART:
	    if (state->c == NFA_ZSTART)
	    {
		subidx = 0;
		sub = &subs->norm;
	    }
#ifdef FEAT_SYN_HL
	    else if (state->c >= NFA_ZOPEN && state->c <= NFA_ZOPEN9)
	    {
		subidx = state->c - NFA_ZOPEN;
		sub = &subs->synt;
	    }
#endif
	    else
	    {
		subidx = state->c - NFA_MOPEN;
		sub = &subs->norm;
	    }

	    
	    save_ptr = NULL;
	    CLEAR_FIELD(save_multipos);

	    
	    
	    if (REG_MULTI)
	    {
		if (subidx < sub->in_use)
		{
		    save_multipos = sub->list.multi[subidx];
		    save_in_use = -1;
		}
		else
		{
		    save_in_use = sub->in_use;
		    for (i = sub->in_use; i < subidx; ++i)
		    {
			sub->list.multi[i].start_lnum = -1;
			sub->list.multi[i].end_lnum = -1;
		    }
		    sub->in_use = subidx + 1;
		}
		if (off == -1)
		{
		    sub->list.multi[subidx].start_lnum = rex.lnum + 1;
		    sub->list.multi[subidx].start_col = 0;
		}
		else
		{
		    sub->list.multi[subidx].start_lnum = rex.lnum;
		    sub->list.multi[subidx].start_col =
					 (colnr_T)(rex.input - rex.line + off);
		}
		sub->list.multi[subidx].end_lnum = -1;
	    }
	    else
	    {
		if (subidx < sub->in_use)
		{
		    save_ptr = sub->list.line[subidx].start;
		    save_in_use = -1;
		}
		else
		{
		    save_in_use = sub->in_use;
		    for (i = sub->in_use; i < subidx; ++i)
		    {
			sub->list.line[i].start = NULL;
			sub->list.line[i].end = NULL;
		    }
		    sub->in_use = subidx + 1;
		}
		sub->list.line[subidx].start = rex.input + off;
	    }

	    subs = addstate(l, state->out, subs, pim, off_arg);
	    if (subs == NULL)
		break;
	    
#ifdef FEAT_SYN_HL
	    if (state->c >= NFA_ZOPEN && state->c <= NFA_ZOPEN9)
		sub = &subs->synt;
	    else
#endif
		sub = &subs->norm;

	    if (save_in_use == -1)
	    {
		if (REG_MULTI)
		    sub->list.multi[subidx] = save_multipos;
		else
		    sub->list.line[subidx].start = save_ptr;
	    }
	    else
		sub->in_use = save_in_use;
	    break;

	case NFA_MCLOSE:
	    if (rex.nfa_has_zend && (REG_MULTI
			? subs->norm.list.multi[0].end_lnum >= 0
			: subs->norm.list.line[0].end != NULL))
	    {
		
		subs = addstate(l, state->out, subs, pim, off_arg);
		break;
	    }
	    
	case NFA_MCLOSE1:
	case NFA_MCLOSE2:
	case NFA_MCLOSE3:
	case NFA_MCLOSE4:
	case NFA_MCLOSE5:
	case NFA_MCLOSE6:
	case NFA_MCLOSE7:
	case NFA_MCLOSE8:
	case NFA_MCLOSE9:
#ifdef FEAT_SYN_HL
	case NFA_ZCLOSE:
	case NFA_ZCLOSE1:
	case NFA_ZCLOSE2:
	case NFA_ZCLOSE3:
	case NFA_ZCLOSE4:
	case NFA_ZCLOSE5:
	case NFA_ZCLOSE6:
	case NFA_ZCLOSE7:
	case NFA_ZCLOSE8:
	case NFA_ZCLOSE9:
#endif
	case NFA_ZEND:
	    if (state->c == NFA_ZEND)
	    {
		subidx = 0;
		sub = &subs->norm;
	    }
#ifdef FEAT_SYN_HL
	    else if (state->c >= NFA_ZCLOSE && state->c <= NFA_ZCLOSE9)
	    {
		subidx = state->c - NFA_ZCLOSE;
		sub = &subs->synt;
	    }
#endif
	    else
	    {
		subidx = state->c - NFA_MCLOSE;
		sub = &subs->norm;
	    }

	    
	    
	    save_in_use = sub->in_use;
	    if (sub->in_use <= subidx)
		sub->in_use = subidx + 1;
	    if (REG_MULTI)
	    {
		save_multipos = sub->list.multi[subidx];
		if (off == -1)
		{
		    sub->list.multi[subidx].end_lnum = rex.lnum + 1;
		    sub->list.multi[subidx].end_col = 0;
		}
		else
		{
		    sub->list.multi[subidx].end_lnum = rex.lnum;
		    sub->list.multi[subidx].end_col =
					  (colnr_T)(rex.input - rex.line + off);
		}
		
		save_ptr = NULL;
	    }
	    else
	    {
		save_ptr = sub->list.line[subidx].end;
		sub->list.line[subidx].end = rex.input + off;
		
		CLEAR_FIELD(save_multipos);
	    }

	    subs = addstate(l, state->out, subs, pim, off_arg);
	    if (subs == NULL)
		break;
	    
#ifdef FEAT_SYN_HL
	    if (state->c >= NFA_ZCLOSE && state->c <= NFA_ZCLOSE9)
		sub = &subs->synt;
	    else
#endif
		sub = &subs->norm;

	    if (REG_MULTI)
		sub->list.multi[subidx] = save_multipos;
	    else
		sub->list.line[subidx].end = save_ptr;
	    sub->in_use = save_in_use;
	    break;
    }
    --depth;
    return subs;
}


    static regsubs_T *
addstate_here(
    nfa_list_T		*l,	
    nfa_state_T		*state,	
    regsubs_T		*subs,	
    nfa_pim_T		*pim,   
    int			*ip)
{
    int tlen = l->n;
    int count;
    int listidx = *ip;
    regsubs_T *r;

    
    
    
    r = addstate(l, state, subs, pim, -listidx - ADDSTATE_HERE_OFFSET);
    if (r == NULL)
	return NULL;

    
    if (listidx + 1 == tlen)
	return r;

    
    count = l->n - tlen;
    if (count == 0)
	return r; 
    if (count == 1)
    {
	
	l->t[listidx] = l->t[l->n - 1];
    }
    else if (count > 1)
    {
	if (l->n + count - 1 >= l->len)
	{
	    
	    
	    int		    newlen = l->len * 3 / 2 + 50;
	    size_t	    newsize = newlen * sizeof(nfa_thread_T);
	    nfa_thread_T    *newl;

	    if ((int)(newsize >> 10) >= p_mmp)
	    {
		emsg(_(e_pattern_uses_more_memory_than_maxmempattern));
		return NULL;
	    }
	    newl = alloc(newsize);
	    if (newl == NULL)
		return NULL;
	    l->len = newlen;
	    mch_memmove(&(newl[0]),
		    &(l->t[0]),
		    sizeof(nfa_thread_T) * listidx);
	    mch_memmove(&(newl[listidx]),
		    &(l->t[l->n - count]),
		    sizeof(nfa_thread_T) * count);
	    mch_memmove(&(newl[listidx + count]),
		    &(l->t[listidx + 1]),
		    sizeof(nfa_thread_T) * (l->n - count - listidx - 1));
	    vim_free(l->t);
	    l->t = newl;
	}
	else
	{
	    
	    
	    mch_memmove(&(l->t[listidx + count]),
		    &(l->t[listidx + 1]),
		    sizeof(nfa_thread_T) * (l->n - listidx - 1));
	    mch_memmove(&(l->t[listidx]),
		    &(l->t[l->n - 1]),
		    sizeof(nfa_thread_T) * count);
	}
    }
    --l->n;
    *ip = listidx - 1;

    return r;
}


    static int
check_char_class(int class, int c)
{
    switch (class)
    {
	case NFA_CLASS_ALNUM:
	    if (c >= 1 && c < 128 && isalnum(c))
		return OK;
	    break;
	case NFA_CLASS_ALPHA:
	    if (c >= 1 && c < 128 && isalpha(c))
		return OK;
	    break;
	case NFA_CLASS_BLANK:
	    if (c == ' ' || c == '\t')
		return OK;
	    break;
	case NFA_CLASS_CNTRL:
	    if (c >= 1 && c <= 127 && iscntrl(c))
		return OK;
	    break;
	case NFA_CLASS_DIGIT:
	    if (VIM_ISDIGIT(c))
		return OK;
	    break;
	case NFA_CLASS_GRAPH:
	    if (c >= 1 && c <= 127 && isgraph(c))
		return OK;
	    break;
	case NFA_CLASS_LOWER:
	    if (MB_ISLOWER(c) && c != 170 && c != 186)
		return OK;
	    break;
	case NFA_CLASS_PRINT:
	    if (vim_isprintc(c))
		return OK;
	    break;
	case NFA_CLASS_PUNCT:
	    if (c >= 1 && c < 128 && ispunct(c))
		return OK;
	    break;
	case NFA_CLASS_SPACE:
	    if ((c >= 9 && c <= 13) || (c == ' '))
		return OK;
	    break;
	case NFA_CLASS_UPPER:
	    if (MB_ISUPPER(c))
		return OK;
	    break;
	case NFA_CLASS_XDIGIT:
	    if (vim_isxdigit(c))
		return OK;
	    break;
	case NFA_CLASS_TAB:
	    if (c == '\t')
		return OK;
	    break;
	case NFA_CLASS_RETURN:
	    if (c == '\r')
		return OK;
	    break;
	case NFA_CLASS_BACKSPACE:
	    if (c == '\b')
		return OK;
	    break;
	case NFA_CLASS_ESCAPE:
	    if (c == '\033')
		return OK;
	    break;
	case NFA_CLASS_IDENT:
	    if (vim_isIDc(c))
		return OK;
	    break;
	case NFA_CLASS_KEYWORD:
	    if (reg_iswordc(c))
		return OK;
	    break;
	case NFA_CLASS_FNAME:
	    if (vim_isfilec(c))
		return OK;
	    break;

	default:
	    
	    siemsg(_(e_nfa_regexp_invalid_character_class_nr), class);
	    return FAIL;
    }
    return FAIL;
}


    static int
match_backref(
    regsub_T	*sub,	    
    int		subidx,
    int		*bytelen)   
{
    int		len;

    if (sub->in_use <= subidx)
    {
retempty:
	
	*bytelen = 0;
	return TRUE;
    }

    if (REG_MULTI)
    {
	if (sub->list.multi[subidx].start_lnum < 0
				       || sub->list.multi[subidx].end_lnum < 0)
	    goto retempty;
	if (sub->list.multi[subidx].start_lnum == rex.lnum
			       && sub->list.multi[subidx].end_lnum == rex.lnum)
	{
	    len = sub->list.multi[subidx].end_col
					  - sub->list.multi[subidx].start_col;
	    if (cstrncmp(rex.line + sub->list.multi[subidx].start_col,
							 rex.input, &len) == 0)
	    {
		*bytelen = len;
		return TRUE;
	    }
	}
	else
	{
	    if (match_with_backref(
			sub->list.multi[subidx].start_lnum,
			sub->list.multi[subidx].start_col,
			sub->list.multi[subidx].end_lnum,
			sub->list.multi[subidx].end_col,
			bytelen) == RA_MATCH)
		return TRUE;
	}
    }
    else
    {
	if (sub->list.line[subidx].start == NULL
					|| sub->list.line[subidx].end == NULL)
	    goto retempty;
	len = (int)(sub->list.line[subidx].end - sub->list.line[subidx].start);
	if (cstrncmp(sub->list.line[subidx].start, rex.input, &len) == 0)
	{
	    *bytelen = len;
	    return TRUE;
	}
    }
    return FALSE;
}

#ifdef FEAT_SYN_HL


    static int
match_zref(
    int		subidx,
    int		*bytelen)   
{
    int		len;

    cleanup_zsubexpr();
    if (re_extmatch_in == NULL || re_extmatch_in->matches[subidx] == NULL)
    {
	
	*bytelen = 0;
	return TRUE;
    }

    len = (int)STRLEN(re_extmatch_in->matches[subidx]);
    if (cstrncmp(re_extmatch_in->matches[subidx], rex.input, &len) == 0)
    {
	*bytelen = len;
	return TRUE;
    }
    return FALSE;
}
#endif


    static void
nfa_save_listids(nfa_regprog_T *prog, int *list)
{
    int		    i;
    nfa_state_T	    *p;

    
    p = &prog->state[0];
    for (i = prog->nstate; --i >= 0; )
    {
	list[i] = p->lastlist[1];
	p->lastlist[1] = 0;
	++p;
    }
}


    static void
nfa_restore_listids(nfa_regprog_T *prog, int *list)
{
    int		    i;
    nfa_state_T	    *p;

    p = &prog->state[0];
    for (i = prog->nstate; --i >= 0; )
    {
	p->lastlist[1] = list[i];
	++p;
    }
}

    static int
nfa_re_num_cmp(long_u val, int op, long_u pos)
{
    if (op == 1) return pos > val;
    if (op == 2) return pos < val;
    return val == pos;
}

static int nfa_regmatch(nfa_regprog_T *prog, nfa_state_T *start, regsubs_T *submatch, regsubs_T *m);


    static int
recursive_regmatch(
    nfa_state_T	    *state,
    nfa_pim_T	    *pim,
    nfa_regprog_T   *prog,
    regsubs_T	    *submatch,
    regsubs_T	    *m,
    int		    **listids,
    int		    *listids_len)
{
    int		save_reginput_col = (int)(rex.input - rex.line);
    int		save_reglnum = rex.lnum;
    int		save_nfa_match = nfa_match;
    int		save_nfa_listid = rex.nfa_listid;
    save_se_T   *save_nfa_endp = nfa_endp;
    save_se_T   endpos;
    save_se_T   *endposp = NULL;
    int		result;
    int		need_restore = FALSE;

    if (pim != NULL)
    {
	
	if (REG_MULTI)
	    rex.input = rex.line + pim->end.pos.col;
	else
	    rex.input = pim->end.ptr;
    }

    if (state->c == NFA_START_INVISIBLE_BEFORE
	    || state->c == NFA_START_INVISIBLE_BEFORE_FIRST
	    || state->c == NFA_START_INVISIBLE_BEFORE_NEG
	    || state->c == NFA_START_INVISIBLE_BEFORE_NEG_FIRST)
    {
	
	
	endposp = &endpos;
	if (REG_MULTI)
	{
	    if (pim == NULL)
	    {
		endpos.se_u.pos.col = (int)(rex.input - rex.line);
		endpos.se_u.pos.lnum = rex.lnum;
	    }
	    else
		endpos.se_u.pos = pim->end.pos;
	}
	else
	{
	    if (pim == NULL)
		endpos.se_u.ptr = rex.input;
	    else
		endpos.se_u.ptr = pim->end.ptr;
	}

	
	
	
	
	if (state->val <= 0)
	{
	    if (REG_MULTI)
	    {
		rex.line = reg_getline(--rex.lnum);
		if (rex.line == NULL)
		    
		    rex.line = reg_getline(++rex.lnum);
	    }
	    rex.input = rex.line;
	}
	else
	{
	    if (REG_MULTI && (int)(rex.input - rex.line) < state->val)
	    {
		
		
		rex.line = reg_getline(--rex.lnum);
		if (rex.line == NULL)
		{
		    
		    rex.line = reg_getline(++rex.lnum);
		    rex.input = rex.line;
		}
		else
		    rex.input = rex.line + reg_getline_len(rex.lnum);
	    }
	    if ((int)(rex.input - rex.line) >= state->val)
	    {
		rex.input -= state->val;
		if (has_mbyte)
		    rex.input -= mb_head_off(rex.line, rex.input);
	    }
	    else
		rex.input = rex.line;
	}
    }

#ifdef ENABLE_LOG
    if (log_fd != stderr)
	fclose(log_fd);
    log_fd = NULL;
#endif
    
    
    if (nfa_ll_index == 1)
    {
	
	
	if (*listids == NULL || *listids_len < prog->nstate)
	{
	    vim_free(*listids);
	    *listids = ALLOC_MULT(int, prog->nstate);
	    if (*listids == NULL)
	    {
		emsg(_(e_nfa_regexp_could_not_allocate_memory_for_branch_traversal));
		return 0;
	    }
	    *listids_len = prog->nstate;
	}
	nfa_save_listids(prog, *listids);
	need_restore = TRUE;
	
    }
    else
    {
	
	
	
	++nfa_ll_index;
	if (rex.nfa_listid <= rex.nfa_alt_listid)
	    rex.nfa_listid = rex.nfa_alt_listid;
    }

    
    
    nfa_endp = endposp;
    result = nfa_regmatch(prog, state->out, submatch, m);

    if (need_restore)
	nfa_restore_listids(prog, *listids);
    else
    {
	--nfa_ll_index;
	rex.nfa_alt_listid = rex.nfa_listid;
    }

    
    rex.lnum = save_reglnum;
    if (REG_MULTI)
	rex.line = reg_getline(rex.lnum);
    rex.input = rex.line + save_reginput_col;
    if (result != NFA_TOO_EXPENSIVE)
    {
	nfa_match = save_nfa_match;
	rex.nfa_listid = save_nfa_listid;
    }
    nfa_endp = save_nfa_endp;

#ifdef ENABLE_LOG
    open_debug_log(result);
#endif

    return result;
}


    static int
failure_chance(nfa_state_T *state, int depth)
{
    int c = state->c;
    int l, r;

    
    if (depth > 4)
	return 1;

    switch (c)
    {
	case NFA_SPLIT:
	    if (state->out->c == NFA_SPLIT || state->out1->c == NFA_SPLIT)
		
		return 1;
	    
	    l = failure_chance(state->out, depth + 1);
	    r = failure_chance(state->out1, depth + 1);
	    return l < r ? l : r;

	case NFA_ANY:
	    
	    return 1;

	case NFA_MATCH:
	case NFA_MCLOSE:
	case NFA_ANY_COMPOSING:
	    
	    return 0;

	case NFA_START_INVISIBLE:
	case NFA_START_INVISIBLE_FIRST:
	case NFA_START_INVISIBLE_NEG:
	case NFA_START_INVISIBLE_NEG_FIRST:
	case NFA_START_INVISIBLE_BEFORE:
	case NFA_START_INVISIBLE_BEFORE_FIRST:
	case NFA_START_INVISIBLE_BEFORE_NEG:
	case NFA_START_INVISIBLE_BEFORE_NEG_FIRST:
	case NFA_START_PATTERN:
	    
	    return 5;

	case NFA_BOL:
	case NFA_EOL:
	case NFA_BOF:
	case NFA_EOF:
	case NFA_NEWL:
	    return 99;

	case NFA_BOW:
	case NFA_EOW:
	    return 90;

	case NFA_MOPEN:
	case NFA_MOPEN1:
	case NFA_MOPEN2:
	case NFA_MOPEN3:
	case NFA_MOPEN4:
	case NFA_MOPEN5:
	case NFA_MOPEN6:
	case NFA_MOPEN7:
	case NFA_MOPEN8:
	case NFA_MOPEN9:
#ifdef FEAT_SYN_HL
	case NFA_ZOPEN:
	case NFA_ZOPEN1:
	case NFA_ZOPEN2:
	case NFA_ZOPEN3:
	case NFA_ZOPEN4:
	case NFA_ZOPEN5:
	case NFA_ZOPEN6:
	case NFA_ZOPEN7:
	case NFA_ZOPEN8:
	case NFA_ZOPEN9:
	case NFA_ZCLOSE:
	case NFA_ZCLOSE1:
	case NFA_ZCLOSE2:
	case NFA_ZCLOSE3:
	case NFA_ZCLOSE4:
	case NFA_ZCLOSE5:
	case NFA_ZCLOSE6:
	case NFA_ZCLOSE7:
	case NFA_ZCLOSE8:
	case NFA_ZCLOSE9:
#endif
	case NFA_NOPEN:
	case NFA_MCLOSE1:
	case NFA_MCLOSE2:
	case NFA_MCLOSE3:
	case NFA_MCLOSE4:
	case NFA_MCLOSE5:
	case NFA_MCLOSE6:
	case NFA_MCLOSE7:
	case NFA_MCLOSE8:
	case NFA_MCLOSE9:
	case NFA_NCLOSE:
	    return failure_chance(state->out, depth + 1);

	case NFA_BACKREF1:
	case NFA_BACKREF2:
	case NFA_BACKREF3:
	case NFA_BACKREF4:
	case NFA_BACKREF5:
	case NFA_BACKREF6:
	case NFA_BACKREF7:
	case NFA_BACKREF8:
	case NFA_BACKREF9:
#ifdef FEAT_SYN_HL
	case NFA_ZREF1:
	case NFA_ZREF2:
	case NFA_ZREF3:
	case NFA_ZREF4:
	case NFA_ZREF5:
	case NFA_ZREF6:
	case NFA_ZREF7:
	case NFA_ZREF8:
	case NFA_ZREF9:
#endif
	    
	    return 94;

	case NFA_LNUM_GT:
	case NFA_LNUM_LT:
	case NFA_COL_GT:
	case NFA_COL_LT:
	case NFA_VCOL_GT:
	case NFA_VCOL_LT:
	case NFA_MARK_GT:
	case NFA_MARK_LT:
	case NFA_VISUAL:
	    
	    return 85;

	case NFA_LNUM:
	    return 90;

	case NFA_CURSOR:
	case NFA_COL:
	case NFA_VCOL:
	case NFA_MARK:
	    
	    return 98;

	case NFA_COMPOSING:
	    return 95;

	default:
	    if (c > 0)
		
		return 95;
    }

    
    return 50;
}


    static int
skip_to_start(int c, colnr_T *colp)
{
    char_u *s;

    
    if (!rex.reg_ic && !has_mbyte)
	s = vim_strbyte(rex.line + *colp, c);
    else
	s = cstrchr(rex.line + *colp, c);
    if (s == NULL)
	return FAIL;
    *colp = (int)(s - rex.line);
    return OK;
}


    static int
find_match_text(colnr_T *startcol, int regstart, char_u *match_text)
{
    colnr_T col = *startcol;
    int	    c1, c2;
    int	    len1, len2;
    int	    match;

    for (;;)
    {
	match = TRUE;
	
	len2 = MB_CHAR2LEN(regstart);
	if (enc_utf8 && len2 > 1 && MB_CHAR2LEN(PTR2CHAR(rex.line + col)) != len2)
	    
	    
	    len2 = mb_char2len(utf_fold(regstart));
	for (len1 = 0; match_text[len1] != NUL; len1 += MB_CHAR2LEN(c1))
	{
	    c1 = PTR2CHAR(match_text + len1);
	    c2 = PTR2CHAR(rex.line + col + len2);
	    if (c1 != c2 && (!rex.reg_ic || MB_CASEFOLD(c1) != MB_CASEFOLD(c2)))
	    {
		match = FALSE;
		break;
	    }
	    len2 += enc_utf8 ? utf_ptr2len(rex.line + col + len2)
							     : MB_CHAR2LEN(c2);
	}
	if (match
		
		&& !(enc_utf8
			  && utf_iscomposing(PTR2CHAR(rex.line + col + len2))))
	{
	    cleanup_subexpr();
	    if (REG_MULTI)
	    {
		rex.reg_startpos[0].lnum = rex.lnum;
		rex.reg_startpos[0].col = col;
		rex.reg_endpos[0].lnum = rex.lnum;
		rex.reg_endpos[0].col = col + len2;
	    }
	    else
	    {
		rex.reg_startp[0] = rex.line + col;
		rex.reg_endp[0] = rex.line + col + len2;
	    }
	    *startcol = col;
	    return 1L;
	}

	
	col += MB_CHAR2LEN(regstart); 
	if (skip_to_start(regstart, &col) == FAIL)
	    break;
    }

    *startcol = col;
    return 0L;
}


    static int
nfa_regmatch(
    nfa_regprog_T	*prog,
    nfa_state_T		*start,
    regsubs_T		*submatch,
    regsubs_T		*m)
{
    int		result = FALSE;
    size_t	size = 0;
    int		flag = 0;
    int		go_to_nextline = FALSE;
    nfa_thread_T *t;
    nfa_list_T	list[2];
    int		listidx;
    nfa_list_T	*thislist;
    nfa_list_T	*nextlist;
    int		*listids = NULL;
    int		listids_len = 0;
    nfa_state_T *add_state;
    int		add_here;
    int		add_count;
    int		add_off = 0;
    int		toplevel = start->c == NFA_MOPEN;
    regsubs_T	*r;
#ifdef NFA_REGEXP_DEBUG_LOG
    FILE	*debug;
#endif

    
    
    fast_breakcheck();
    if (got_int)
	return FALSE;
#ifdef FEAT_RELTIME
    if (nfa_did_time_out())
	return FALSE;
#endif

#ifdef NFA_REGEXP_DEBUG_LOG
    debug = fopen(NFA_REGEXP_DEBUG_LOG, "a");
    if (debug == NULL)
    {
	semsg("(NFA) COULD NOT OPEN %s!", NFA_REGEXP_DEBUG_LOG);
	return FALSE;
    }
#endif
    nfa_match = FALSE;

    
    size = (prog->nstate + 1) * sizeof(nfa_thread_T);

    list[0].t = alloc(size);
    list[0].len = prog->nstate + 1;
    list[1].t = alloc(size);
    list[1].len = prog->nstate + 1;
    if (list[0].t == NULL || list[1].t == NULL)
	goto theend;

#ifdef ENABLE_LOG
    log_fd = fopen(NFA_REGEXP_RUN_LOG, "a");
    if (log_fd == NULL)
    {
	emsg(_(e_log_open_failed));
	log_fd = stderr;
    }
    fprintf(log_fd, "**********************************\n");
    nfa_set_code(start->c);
    fprintf(log_fd, " RUNNING nfa_regmatch() starting with state %d, code %s\n",
    abs(start->id), code);
    fprintf(log_fd, "**********************************\n");
#endif

    thislist = &list[0];
    thislist->n = 0;
    thislist->has_pim = FALSE;
    nextlist = &list[1];
    nextlist->n = 0;
    nextlist->has_pim = FALSE;
#ifdef ENABLE_LOG
    fprintf(log_fd, "(---) STARTSTATE first\n");
#endif
    thislist->id = rex.nfa_listid + 1;

    
    
    if (toplevel)
    {
	if (REG_MULTI)
	{
	    m->norm.list.multi[0].start_lnum = rex.lnum;
	    m->norm.list.multi[0].start_col = (colnr_T)(rex.input - rex.line);
	    m->norm.orig_start_col = m->norm.list.multi[0].start_col;
	}
	else
	    m->norm.list.line[0].start = rex.input;
	m->norm.in_use = 1;
	r = addstate(thislist, start->out, m, NULL, 0);
    }
    else
	r = addstate(thislist, start, m, NULL, 0);
    if (r == NULL)
    {
	nfa_match = NFA_TOO_EXPENSIVE;
	goto theend;
    }

#define	ADD_STATE_IF_MATCH(state)	\
    if (result)				\
    {					\
	add_state = state->out;		\
	add_off = clen;			\
    }

    
    for (;;)
    {
	int	curc;
	int	clen;

	if (has_mbyte)
	{
	    curc = (*mb_ptr2char)(rex.input);
	    clen = (*mb_ptr2len)(rex.input);
	}
	else
	{
	    curc = *rex.input;
	    clen = 1;
	}
	if (curc == NUL)
	{
	    clen = 0;
	    go_to_nextline = FALSE;
	}

	
	thislist = &list[flag];
	nextlist = &list[flag ^= 1];
	nextlist->n = 0;	    
	nextlist->has_pim = FALSE;
	++rex.nfa_listid;
	if (prog->re_engine == AUTOMATIC_ENGINE
		&& (rex.nfa_listid >= NFA_MAX_STATES
# ifdef FEAT_EVAL
		    || nfa_fail_for_testing
# endif
		    ))
	{
	    
	    nfa_match = NFA_TOO_EXPENSIVE;
	    goto theend;
	}

	thislist->id = rex.nfa_listid;
	nextlist->id = rex.nfa_listid + 1;

#ifdef ENABLE_LOG
	fprintf(log_fd, "------------------------------------------\n");
	fprintf(log_fd, ">>> Reginput is \"%s\"\n", rex.input);
	fprintf(log_fd, ">>> Advanced one character... Current char is %c (code %d) \n", curc, (int)curc);
	fprintf(log_fd, ">>> Thislist has %d states available: ", thislist->n);
	{
	    int i;

	    for (i = 0; i < thislist->n; i++)
		fprintf(log_fd, "%d  ", abs(thislist->t[i].state->id));
	}
	fprintf(log_fd, "\n");
#endif

#ifdef NFA_REGEXP_DEBUG_LOG
	fprintf(debug, "\n-------------------\n");
#endif
	
	if (thislist->n == 0)
	    break;

	
	for (listidx = 0; listidx < thislist->n; ++listidx)
	{
	    
	    
	    fast_breakcheck();
	    if (got_int)
		break;
#ifdef FEAT_RELTIME
	    if (nfa_did_time_out())
		break;
#endif
	    t = &thislist->t[listidx];

#ifdef NFA_REGEXP_DEBUG_LOG
	    nfa_set_code(t->state->c);
	    fprintf(debug, "%s, ", code);
#endif
#ifdef ENABLE_LOG
	    {
		int col;

		if (t->subs.norm.in_use <= 0)
		    col = -1;
		else if (REG_MULTI)
		    col = t->subs.norm.list.multi[0].start_col;
		else
		    col = (int)(t->subs.norm.list.line[0].start - rex.line);
		nfa_set_code(t->state->c);
		fprintf(log_fd, "(%d) char %d %s (start col %d)%s... \n",
			abs(t->state->id), (int)t->state->c, code, col,
			pim_info(&t->pim));
	    }
#endif

	    
	    add_state = NULL;
	    add_here = FALSE;
	    add_count = 0;
	    switch (t->state->c)
	    {
	    case NFA_MATCH:
	      {
		
		
		
		if (enc_utf8 && !rex.reg_icombine
			     && rex.input != rex.line && utf_iscomposing(curc))
		    break;

		nfa_match = TRUE;
		copy_sub(&submatch->norm, &t->subs.norm);
#ifdef FEAT_SYN_HL
		if (rex.nfa_has_zsubexpr)
		    copy_sub(&submatch->synt, &t->subs.synt);
#endif
#ifdef ENABLE_LOG
		log_subsexpr(&t->subs);
#endif
		
		
		
		
		if (nextlist->n == 0)
		    clen = 0;
		goto nextchar;
	      }

	    case NFA_END_INVISIBLE:
	    case NFA_END_INVISIBLE_NEG:
	    case NFA_END_PATTERN:
		
#ifdef ENABLE_LOG
		if (nfa_endp != NULL)
		{
		    if (REG_MULTI)
			fprintf(log_fd, "Current lnum: %d, endp lnum: %d; current col: %d, endp col: %d\n",
				(int)rex.lnum,
				(int)nfa_endp->se_u.pos.lnum,
				(int)(rex.input - rex.line),
				nfa_endp->se_u.pos.col);
		    else
			fprintf(log_fd, "Current col: %d, endp col: %d\n",
				(int)(rex.input - rex.line),
				(int)(nfa_endp->se_u.ptr - rex.input));
		}
#endif
		
		
		if (nfa_endp != NULL && (REG_MULTI
			? (rex.lnum != nfa_endp->se_u.pos.lnum
			    || (int)(rex.input - rex.line)
						!= nfa_endp->se_u.pos.col)
			: rex.input != nfa_endp->se_u.ptr))
		    break;

		
		if (t->state->c != NFA_END_INVISIBLE_NEG)
		{
		    copy_sub(&m->norm, &t->subs.norm);
#ifdef FEAT_SYN_HL
		    if (rex.nfa_has_zsubexpr)
			copy_sub(&m->synt, &t->subs.synt);
#endif
		}
#ifdef ENABLE_LOG
		fprintf(log_fd, "Match found:\n");
		log_subsexpr(m);
#endif
		nfa_match = TRUE;
		
		if (nextlist->n == 0)
		    clen = 0;
		goto nextchar;

	    case NFA_START_INVISIBLE:
	    case NFA_START_INVISIBLE_FIRST:
	    case NFA_START_INVISIBLE_NEG:
	    case NFA_START_INVISIBLE_NEG_FIRST:
	    case NFA_START_INVISIBLE_BEFORE:
	    case NFA_START_INVISIBLE_BEFORE_FIRST:
	    case NFA_START_INVISIBLE_BEFORE_NEG:
	    case NFA_START_INVISIBLE_BEFORE_NEG_FIRST:
		{
#ifdef ENABLE_LOG
		    fprintf(log_fd, "Failure chance invisible: %d, what follows: %d\n",
			    failure_chance(t->state->out, 0),
			    failure_chance(t->state->out1->out, 0));
#endif
		    
		    
		    if (t->pim.result != NFA_PIM_UNUSED
			 || t->state->c == NFA_START_INVISIBLE_FIRST
			 || t->state->c == NFA_START_INVISIBLE_NEG_FIRST
			 || t->state->c == NFA_START_INVISIBLE_BEFORE_FIRST
			 || t->state->c == NFA_START_INVISIBLE_BEFORE_NEG_FIRST)
		    {
			int in_use = m->norm.in_use;

			
			
			copy_sub_off(&m->norm, &t->subs.norm);
#ifdef FEAT_SYN_HL
			if (rex.nfa_has_zsubexpr)
			    copy_sub_off(&m->synt, &t->subs.synt);
#endif

			
			result = recursive_regmatch(t->state, NULL, prog,
					  submatch, m, &listids, &listids_len);
			if (result == NFA_TOO_EXPENSIVE)
			{
			    nfa_match = result;
			    goto theend;
			}

			
			
			if (result != (t->state->c == NFA_START_INVISIBLE_NEG
			       || t->state->c == NFA_START_INVISIBLE_NEG_FIRST
			       || t->state->c
					   == NFA_START_INVISIBLE_BEFORE_NEG
			       || t->state->c
				     == NFA_START_INVISIBLE_BEFORE_NEG_FIRST))
			{
			    
			    copy_sub_off(&t->subs.norm, &m->norm);
#ifdef FEAT_SYN_HL
			    if (rex.nfa_has_zsubexpr)
				copy_sub_off(&t->subs.synt, &m->synt);
#endif
			    
			    
			    copy_ze_off(&t->subs.norm, &m->norm);

			    
			    
			    
			    add_here = TRUE;
			    add_state = t->state->out1->out;
			}
			m->norm.in_use = in_use;
		    }
		    else
		    {
			nfa_pim_T pim;

			
			pim.state = t->state;
			pim.result = NFA_PIM_TODO;
			pim.subs.norm.in_use = 0;
#ifdef FEAT_SYN_HL
			pim.subs.synt.in_use = 0;
#endif
			if (REG_MULTI)
			{
			    pim.end.pos.col = (int)(rex.input - rex.line);
			    pim.end.pos.lnum = rex.lnum;
			}
			else
			    pim.end.ptr = rex.input;

			
			
			
			if (addstate_here(thislist, t->state->out1->out,
					     &t->subs, &pim, &listidx) == NULL)
			{
			    nfa_match = NFA_TOO_EXPENSIVE;
			    goto theend;
			}
		    }
		}
		break;

	    case NFA_START_PATTERN:
	      {
		nfa_state_T *skip = NULL;
#ifdef ENABLE_LOG
		int	    skip_lid = 0;
#endif

		
		
		if (state_in_list(nextlist, t->state->out1->out, &t->subs))
		{
		    skip = t->state->out1->out;
#ifdef ENABLE_LOG
		    skip_lid = nextlist->id;
#endif
		}
		else if (state_in_list(nextlist,
					  t->state->out1->out->out, &t->subs))
		{
		    skip = t->state->out1->out->out;
#ifdef ENABLE_LOG
		    skip_lid = nextlist->id;
#endif
		}
		else if (state_in_list(thislist,
					  t->state->out1->out->out, &t->subs))
		{
		    skip = t->state->out1->out->out;
#ifdef ENABLE_LOG
		    skip_lid = thislist->id;
#endif
		}
		if (skip != NULL)
		{
#ifdef ENABLE_LOG
		    nfa_set_code(skip->c);
		    fprintf(log_fd, "> Not trying to match pattern, output state %d is already in list %d. char %d: %s\n",
			    abs(skip->id), skip_lid, skip->c, code);
#endif
		    break;
		}
		
		
		copy_sub_off(&m->norm, &t->subs.norm);
#ifdef FEAT_SYN_HL
		if (rex.nfa_has_zsubexpr)
		    copy_sub_off(&m->synt, &t->subs.synt);
#endif

		
		result = recursive_regmatch(t->state, NULL, prog,
					  submatch, m, &listids, &listids_len);
		if (result == NFA_TOO_EXPENSIVE)
		{
		    nfa_match = result;
		    goto theend;
		}
		if (result)
		{
		    int bytelen;

#ifdef ENABLE_LOG
		    fprintf(log_fd, "NFA_START_PATTERN matches:\n");
		    log_subsexpr(m);
#endif
		    
		    copy_sub_off(&t->subs.norm, &m->norm);
#ifdef FEAT_SYN_HL
		    if (rex.nfa_has_zsubexpr)
			copy_sub_off(&t->subs.synt, &m->synt);
#endif
		    
		    
		    if (REG_MULTI)
			
			bytelen = m->norm.list.multi[0].end_col
						  - (int)(rex.input - rex.line);
		    else
			bytelen = (int)(m->norm.list.line[0].end - rex.input);

#ifdef ENABLE_LOG
		    fprintf(log_fd, "NFA_START_PATTERN length: %d\n", bytelen);
#endif
		    if (bytelen == 0)
		    {
			
			
			
			add_here = TRUE;
			add_state = t->state->out1->out->out;
		    }
		    else if (bytelen <= clen)
		    {
			
			
			add_state = t->state->out1->out->out;
			add_off = clen;
		    }
		    else
		    {
			
			
			add_state = t->state->out1->out;
			add_off = bytelen;
			add_count = bytelen - clen;
		    }
		}
		break;
	      }

	    case NFA_BOL:
		if (rex.input == rex.line)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_EOL:
		if (curc == NUL)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_BOW:
		result = TRUE;

		if (curc == NUL)
		    result = FALSE;
		else if (has_mbyte)
		{
		    int this_class;

		    
		    this_class = mb_get_class_buf(rex.input, rex.reg_buf);
		    if (this_class <= 1)
			result = FALSE;
		    else if (reg_prev_class() == this_class)
			result = FALSE;
		}
		else if (!vim_iswordc_buf(curc, rex.reg_buf)
			   || (rex.input > rex.line
			       && vim_iswordc_buf(rex.input[-1], rex.reg_buf)))
		    result = FALSE;
		if (result)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_EOW:
		result = TRUE;
		if (rex.input == rex.line)
		    result = FALSE;
		else if (has_mbyte)
		{
		    int this_class, prev_class;

		    
		    this_class = mb_get_class_buf(rex.input, rex.reg_buf);
		    prev_class = reg_prev_class();
		    if (this_class == prev_class
					|| prev_class == 0 || prev_class == 1)
			result = FALSE;
		}
		else if (!vim_iswordc_buf(rex.input[-1], rex.reg_buf)
			|| (rex.input[0] != NUL
					&& vim_iswordc_buf(curc, rex.reg_buf)))
		    result = FALSE;
		if (result)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_BOF:
		if (rex.lnum == 0 && rex.input == rex.line
				     && (!REG_MULTI || rex.reg_firstlnum == 1))
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_EOF:
		if (rex.lnum == rex.reg_maxline && curc == NUL)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_COMPOSING:
	    {
		int	    mc = curc;
		int	    len = 0;
		nfa_state_T *end;
		nfa_state_T *sta;
		int	    cchars[MAX_MCO];
		int	    ccount = 0;
		int	    j;

		sta = t->state->out;
		len = 0;
		if (utf_iscomposing(sta->c))
		{
		    
		    
		    
		    len += mb_char2len(mc);
		}
		if (rex.reg_icombine && len == 0)
		{
		    
		    
		    if (sta->c != curc)
			result = FAIL;
		    else
			result = OK;
		    while (sta->c != NFA_END_COMPOSING)
			sta = sta->out;
		}

		
		else if (len > 0 || mc == sta->c)
		{
		    if (len == 0)
		    {
			len += mb_char2len(mc);
			sta = sta->out;
		    }

		    
		    
		    while (len < clen)
		    {
			mc = mb_ptr2char(rex.input + len);
			cchars[ccount++] = mc;
			len += mb_char2len(mc);
			if (ccount == MAX_MCO)
			    break;
		    }

		    
		    
		    
		    result = OK;
		    while (sta->c != NFA_END_COMPOSING)
		    {
			for (j = 0; j < ccount; ++j)
			    if (cchars[j] == sta->c)
				break;
			if (j == ccount)
			{
			    result = FAIL;
			    break;
			}
			sta = sta->out;
		    }
		}
		else
		    result = FAIL;

		end = t->state->out1;	    
		ADD_STATE_IF_MATCH(end);
		break;
	    }

	    case NFA_NEWL:
		if (curc == NUL && !rex.reg_line_lbr && REG_MULTI
						&& rex.lnum <= rex.reg_maxline)
		{
		    go_to_nextline = TRUE;
		    
		    
		    add_state = t->state->out;
		    add_off = -1;
		}
		else if (curc == '\n' && rex.reg_line_lbr)
		{
		    
		    add_state = t->state->out;
		    add_off = 1;
		}
		break;

	    case NFA_START_COLL:
	    case NFA_START_NEG_COLL:
	      {
		
		
		nfa_state_T	*state;
		int		result_if_matched;
		int		c1, c2;

		
		
		if (curc == NUL)
		    break;

		state = t->state->out;
		result_if_matched = (t->state->c == NFA_START_COLL);
		for (;;)
		{
		    if (state->c == NFA_COMPOSING)
		    {
			int	    mc = curc;
			int	    len = 0;
			nfa_state_T *end;
			nfa_state_T *sta;
			int	    cchars[MAX_MCO];
			int	    ccount = 0;
			int	    j;

			sta = t->state->out->out;
			len = 0;
			if (utf_iscomposing(sta->c))
			{
			    
			    
			    
			    len += mb_char2len(mc);
			}
			if (rex.reg_icombine && len == 0)
			{
			    
			    
			    if (sta->c != curc)
				result = FAIL;
			    else
				result = OK;
			    while (sta->c != NFA_END_COMPOSING)
				sta = sta->out;
			}
			
			else if (len > 0 || mc == sta->c)

			{
			    if (len == 0)
			    {
				len += mb_char2len(mc);
				sta = sta->out;
			    }

			    
			    
			    while (len < clen)
			    {
				mc = mb_ptr2char(rex.input + len);
				cchars[ccount++] = mc;
				len += mb_char2len(mc);
				if (ccount == MAX_MCO)
				    break;
			    }

			    
			    
			    
			    result = OK;
			    while (sta->c != NFA_END_COMPOSING)
			    {
				for (j = 0; j < ccount; ++j)
				    if (cchars[j] == sta->c)
					break;
				if (j == ccount)
				{
				    result = FAIL;
				    break;
				}
				sta = sta->out;
			    }
			}
			else
			    result = FAIL;

			if (t->state->out->out1->c == NFA_END_COMPOSING)
			{
			    end = t->state->out->out1;
			    ADD_STATE_IF_MATCH(end);
			}
			break;
		    }
		    if (state->c == NFA_END_COLL)
		    {
			result = !result_if_matched;
			break;
		    }
		    if (state->c == NFA_RANGE_MIN)
		    {
			c1 = state->val;
			state = state->out; 
			c2 = state->val;
#ifdef ENABLE_LOG
			fprintf(log_fd, "NFA_RANGE_MIN curc=%d c1=%d c2=%d\n",
				curc, c1, c2);
#endif
			if (curc >= c1 && curc <= c2)
			{
			    result = result_if_matched;
			    break;
			}
			if (rex.reg_ic)
			{
			    int curc_low = MB_CASEFOLD(curc);
			    int done = FALSE;

			    for ( ; c1 <= c2; ++c1)
				if (MB_CASEFOLD(c1) == curc_low)
				{
				    result = result_if_matched;
				    done = TRUE;
				    break;
				}
			    if (done)
				break;
			}
		    }
		    else if (state->c < 0 ? check_char_class(state->c, curc)
			       : (curc == state->c
				   || (rex.reg_ic && MB_CASEFOLD(curc)
						    == MB_CASEFOLD(state->c))))
		    {
			result = result_if_matched;
			break;
		    }
		    state = state->out;
		}
		if (result)
		{
		    
		    
		    add_state = t->state->out1->out;
		    add_off = clen;
		}
		break;
	      }

	    case NFA_ANY:
		
		if (curc > 0)
		{
		    add_state = t->state->out;
		    add_off = clen;
		}
		break;

	    case NFA_ANY_COMPOSING:
		
		
		if (enc_utf8 && utf_iscomposing(curc))
		{
		    add_off = clen;
		}
		else
		{
		    add_here = TRUE;
		    add_off = 0;
		}
		add_state = t->state->out;
		break;

	    
	    case NFA_IDENT:	
		result = vim_isIDc(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_SIDENT:	
		result = !VIM_ISDIGIT(curc) && vim_isIDc(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_KWORD:	
		result = vim_iswordp_buf(rex.input, rex.reg_buf);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_SKWORD:	
		result = !VIM_ISDIGIT(curc)
				     && vim_iswordp_buf(rex.input, rex.reg_buf);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_FNAME:	
		result = vim_isfilec(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_SFNAME:	
		result = !VIM_ISDIGIT(curc) && vim_isfilec(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_PRINT:	
		result = vim_isprintc(PTR2CHAR(rex.input));
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_SPRINT:	
		result = !VIM_ISDIGIT(curc) && vim_isprintc(PTR2CHAR(rex.input));
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_WHITE:	
		result = VIM_ISWHITE(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NWHITE:	
		result = curc != NUL && !VIM_ISWHITE(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_DIGIT:	
		result = ri_digit(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NDIGIT:	
		result = curc != NUL && !ri_digit(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_HEX:	
		result = ri_hex(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NHEX:	
		result = curc != NUL && !ri_hex(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_OCTAL:	
		result = ri_octal(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NOCTAL:	
		result = curc != NUL && !ri_octal(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_WORD:	
		result = ri_word(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NWORD:	
		result = curc != NUL && !ri_word(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_HEAD:	
		result = ri_head(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NHEAD:	
		result = curc != NUL && !ri_head(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_ALPHA:	
		result = ri_alpha(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NALPHA:	
		result = curc != NUL && !ri_alpha(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_LOWER:	
		result = ri_lower(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NLOWER:	
		result = curc != NUL && !ri_lower(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_UPPER:	
		result = ri_upper(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NUPPER:	
		result = curc != NUL && !ri_upper(curc);
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_LOWER_IC:	
		result = ri_lower(curc) || (rex.reg_ic && ri_upper(curc));
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NLOWER_IC:	
		result = curc != NUL
			&& !(ri_lower(curc) || (rex.reg_ic && ri_upper(curc)));
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_UPPER_IC:	
		result = ri_upper(curc) || (rex.reg_ic && ri_lower(curc));
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_NUPPER_IC:	
		result = curc != NUL
			&& !(ri_upper(curc) || (rex.reg_ic && ri_lower(curc)));
		ADD_STATE_IF_MATCH(t->state);
		break;

	    case NFA_BACKREF1:
	    case NFA_BACKREF2:
	    case NFA_BACKREF3:
	    case NFA_BACKREF4:
	    case NFA_BACKREF5:
	    case NFA_BACKREF6:
	    case NFA_BACKREF7:
	    case NFA_BACKREF8:
	    case NFA_BACKREF9:
#ifdef FEAT_SYN_HL
	    case NFA_ZREF1:
	    case NFA_ZREF2:
	    case NFA_ZREF3:
	    case NFA_ZREF4:
	    case NFA_ZREF5:
	    case NFA_ZREF6:
	    case NFA_ZREF7:
	    case NFA_ZREF8:
	    case NFA_ZREF9:
#endif
		
	      {
		int subidx;
		int bytelen;

#ifdef FEAT_SYN_HL
		if (t->state->c >= NFA_BACKREF1 && t->state->c <= NFA_BACKREF9)
#endif
		{
		    subidx = t->state->c - NFA_BACKREF1 + 1;
		    result = match_backref(&t->subs.norm, subidx, &bytelen);
		}
#ifdef FEAT_SYN_HL
		else
		{
		    subidx = t->state->c - NFA_ZREF1 + 1;
		    result = match_zref(subidx, &bytelen);
		}
#endif

		if (result)
		{
		    if (bytelen == 0)
		    {
			
			
			add_here = TRUE;
			add_state = t->state->out->out;
		    }
		    else if (bytelen <= clen)
		    {
			
			
			add_state = t->state->out->out;
			add_off = clen;
		    }
		    else
		    {
			
			
			add_state = t->state->out;
			add_off = bytelen;
			add_count = bytelen - clen;
		    }
		}
		break;
	      }
	    case NFA_SKIP:
	      
	      if (t->count - clen <= 0)
	      {
		  
		  add_state = t->state->out;
		  add_off = clen;
	      }
	      else
	      {
		  
		  add_state = t->state;
		  add_off = 0;
		  add_count = t->count - clen;
	      }
	      break;

	    case NFA_LNUM:
	    case NFA_LNUM_GT:
	    case NFA_LNUM_LT:
		result = (REG_MULTI &&
			nfa_re_num_cmp(t->state->val, t->state->c - NFA_LNUM,
			    (long_u)(rex.lnum + rex.reg_firstlnum)));
		if (result)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_COL:
	    case NFA_COL_GT:
	    case NFA_COL_LT:
		result = nfa_re_num_cmp(t->state->val, t->state->c - NFA_COL,
			(long_u)(rex.input - rex.line) + 1);
		if (result)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_VCOL:
	    case NFA_VCOL_GT:
	    case NFA_VCOL_LT:
		{
		    int     op = t->state->c - NFA_VCOL;
		    colnr_T col = (colnr_T)(rex.input - rex.line);
		    win_T   *wp = rex.reg_win == NULL ? curwin : rex.reg_win;

		    
		    
		    if (op != 1 && col > t->state->val
			    * (has_mbyte ? MB_MAXBYTES : 1))
			break;
		    result = FALSE;
		    if (op == 1 && col - 1 > t->state->val && col > 100)
		    {
			int ts = wp->w_buffer->b_p_ts;

			
			
			if (ts < 4)
			    ts = 4;
			result = col > t->state->val * ts;
		    }
		    if (!result)
		    {
			linenr_T    lnum = REG_MULTI
					    ? rex.reg_firstlnum + rex.lnum : 1;
			long_u	    vcol;

			if (REG_MULTI && (lnum <= 0
				   || lnum > wp->w_buffer->b_ml.ml_line_count))
			    lnum = 1;
			vcol = (long_u)win_linetabsize(wp, lnum, rex.line, col);
			result = nfa_re_num_cmp(t->state->val, op, vcol + 1);
		    }
		    if (result)
		    {
			add_here = TRUE;
			add_state = t->state->out;
		    }
		}
		break;

	    case NFA_MARK:
	    case NFA_MARK_GT:
	    case NFA_MARK_LT:
	      {
		pos_T	*pos;
		size_t	col = REG_MULTI ? rex.input - rex.line : 0;

		pos = getmark_buf(rex.reg_buf, t->state->val, FALSE);

		
		if (REG_MULTI)
		{
		    rex.line = reg_getline(rex.lnum);
		    rex.input = rex.line + col;
		}

		
		
		if (pos != NULL && pos->lnum > 0)
		{
		    colnr_T pos_col = pos->lnum == rex.lnum + rex.reg_firstlnum
							  && pos->col == MAXCOL
				      ? reg_getline_len(pos->lnum - rex.reg_firstlnum)
				      : pos->col;

		    result = (pos->lnum == rex.lnum + rex.reg_firstlnum
				? (pos_col == (colnr_T)(rex.input - rex.line)
				    ? t->state->c == NFA_MARK
				    : (pos_col < (colnr_T)(rex.input - rex.line)
					? t->state->c == NFA_MARK_GT
					: t->state->c == NFA_MARK_LT))
				: (pos->lnum < rex.lnum + rex.reg_firstlnum
				    ? t->state->c == NFA_MARK_GT
				    : t->state->c == NFA_MARK_LT));
		    if (result)
		    {
			add_here = TRUE;
			add_state = t->state->out;
		    }
		}
		break;
	      }

	    case NFA_CURSOR:
		result = (rex.reg_win != NULL
			&& (rex.lnum + rex.reg_firstlnum
						 == rex.reg_win->w_cursor.lnum)
			&& ((colnr_T)(rex.input - rex.line)
						== rex.reg_win->w_cursor.col));
		if (result)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_VISUAL:
		result = reg_match_visual();
		if (result)
		{
		    add_here = TRUE;
		    add_state = t->state->out;
		}
		break;

	    case NFA_MOPEN1:
	    case NFA_MOPEN2:
	    case NFA_MOPEN3:
	    case NFA_MOPEN4:
	    case NFA_MOPEN5:
	    case NFA_MOPEN6:
	    case NFA_MOPEN7:
	    case NFA_MOPEN8:
	    case NFA_MOPEN9:
#ifdef FEAT_SYN_HL
	    case NFA_ZOPEN:
	    case NFA_ZOPEN1:
	    case NFA_ZOPEN2:
	    case NFA_ZOPEN3:
	    case NFA_ZOPEN4:
	    case NFA_ZOPEN5:
	    case NFA_ZOPEN6:
	    case NFA_ZOPEN7:
	    case NFA_ZOPEN8:
	    case NFA_ZOPEN9:
#endif
	    case NFA_NOPEN:
	    case NFA_ZSTART:
		
		
		break;

	    default:	
	      {
		int c = t->state->c;

#ifdef DEBUG
		if (c < 0)
		    siemsg("Negative state char: %ld", (int)c);
#endif
		result = (c == curc);

		if (!result && rex.reg_ic)
		    result = MB_CASEFOLD(c) == MB_CASEFOLD(curc);
		
		
		if (result && enc_utf8 && !rex.reg_icombine)
		    clen = utf_ptr2len(rex.input);
		ADD_STATE_IF_MATCH(t->state);
		break;
	      }

	    } 

	    if (add_state != NULL)
	    {
		nfa_pim_T *pim;
		nfa_pim_T pim_copy;

		if (t->pim.result == NFA_PIM_UNUSED)
		    pim = NULL;
		else
		    pim = &t->pim;

		
		
		if (pim != NULL && (clen == 0 || match_follows(add_state, 0)))
		{
		    if (pim->result == NFA_PIM_TODO)
		    {
#ifdef ENABLE_LOG
			fprintf(log_fd, "\n");
			fprintf(log_fd, "==================================\n");
			fprintf(log_fd, "Postponed recursive nfa_regmatch()\n");
			fprintf(log_fd, "\n");
#endif
			result = recursive_regmatch(pim->state, pim,
				    prog, submatch, m, &listids, &listids_len);
			pim->result = result ? NFA_PIM_MATCH : NFA_PIM_NOMATCH;
			
			
			if (result != (pim->state->c == NFA_START_INVISIBLE_NEG
			     || pim->state->c == NFA_START_INVISIBLE_NEG_FIRST
			     || pim->state->c
					   == NFA_START_INVISIBLE_BEFORE_NEG
			     || pim->state->c
				     == NFA_START_INVISIBLE_BEFORE_NEG_FIRST))
			{
			    
			    copy_sub_off(&pim->subs.norm, &m->norm);
#ifdef FEAT_SYN_HL
			    if (rex.nfa_has_zsubexpr)
				copy_sub_off(&pim->subs.synt, &m->synt);
#endif
			}
		    }
		    else
		    {
			result = (pim->result == NFA_PIM_MATCH);
#ifdef ENABLE_LOG
			fprintf(log_fd, "\n");
			fprintf(log_fd, "Using previous recursive nfa_regmatch() result, result == %d\n", pim->result);
			fprintf(log_fd, "MATCH = %s\n", result == TRUE ? "OK" : "FALSE");
			fprintf(log_fd, "\n");
#endif
		    }

		    
		    if (result != (pim->state->c == NFA_START_INVISIBLE_NEG
			     || pim->state->c == NFA_START_INVISIBLE_NEG_FIRST
			     || pim->state->c
					   == NFA_START_INVISIBLE_BEFORE_NEG
			     || pim->state->c
				     == NFA_START_INVISIBLE_BEFORE_NEG_FIRST))
		    {
			
			copy_sub_off(&t->subs.norm, &pim->subs.norm);
#ifdef FEAT_SYN_HL
			if (rex.nfa_has_zsubexpr)
			    copy_sub_off(&t->subs.synt, &pim->subs.synt);
#endif
		    }
		    else
			
			continue;

		    
		    
		    pim = NULL;
		}

		
		
		
		if (pim == &t->pim)
		{
		    copy_pim(&pim_copy, pim);
		    pim = &pim_copy;
		}

		if (add_here)
		    r = addstate_here(thislist, add_state, &t->subs,
								pim, &listidx);
		else
		{
		    r = addstate(nextlist, add_state, &t->subs, pim, add_off);
		    if (add_count > 0)
			nextlist->t[nextlist->n - 1].count = add_count;
		}
		if (r == NULL)
		{
		    nfa_match = NFA_TOO_EXPENSIVE;
		    goto theend;
		}
	    }

	} 

	
	
	
	
	
	
	
	
	if (nfa_match == FALSE
		&& ((toplevel
			&& rex.lnum == 0
			&& clen != 0
			&& (rex.reg_maxcol == 0
			  || (colnr_T)(rex.input - rex.line) < rex.reg_maxcol))
		    || (nfa_endp != NULL
			&& (REG_MULTI
			    ? (rex.lnum < nfa_endp->se_u.pos.lnum
			       || (rex.lnum == nfa_endp->se_u.pos.lnum
				   && (int)(rex.input - rex.line)
						    < nfa_endp->se_u.pos.col))
			    : rex.input < nfa_endp->se_u.ptr))))
	{
#ifdef ENABLE_LOG
	    fprintf(log_fd, "(---) STARTSTATE\n");
#endif
	    
	    
	    if (toplevel)
	    {
		int add = TRUE;
		int c;

		if (prog->regstart != NUL && clen != 0)
		{
		    if (nextlist->n == 0)
		    {
			colnr_T col = (colnr_T)(rex.input - rex.line) + clen;

			
			
			if (skip_to_start(prog->regstart, &col) == FAIL)
			    break;
#ifdef ENABLE_LOG
			fprintf(log_fd, "  Skipping ahead %d bytes to regstart\n",
				col - ((colnr_T)(rex.input - rex.line) + clen));
#endif
			rex.input = rex.line + col - clen;
		    }
		    else
		    {
			
			
			c = PTR2CHAR(rex.input + clen);
			if (c != prog->regstart && (!rex.reg_ic
			     || MB_CASEFOLD(c) != MB_CASEFOLD(prog->regstart)))
			{
#ifdef ENABLE_LOG
			    fprintf(log_fd, "  Skipping start state, regstart does not match\n");
#endif
			    add = FALSE;
			}
		    }
		}

		if (add)
		{
		    if (REG_MULTI)
		    {
			m->norm.list.multi[0].start_col =
					 (colnr_T)(rex.input - rex.line) + clen;
			m->norm.orig_start_col =
					       m->norm.list.multi[0].start_col;
		    }
		    else
			m->norm.list.line[0].start = rex.input + clen;
		    if (addstate(nextlist, start->out, m, NULL, clen) == NULL)
		    {
			nfa_match = NFA_TOO_EXPENSIVE;
			goto theend;
		    }
		}
	    }
	    else
	    {
		if (addstate(nextlist, start, m, NULL, clen) == NULL)
		{
		    nfa_match = NFA_TOO_EXPENSIVE;
		    goto theend;
		}
	    }
	}

#ifdef ENABLE_LOG
	fprintf(log_fd, ">>> Thislist had %d states available: ", thislist->n);
	{
	    int i;

	    for (i = 0; i < thislist->n; i++)
		fprintf(log_fd, "%d  ", abs(thislist->t[i].state->id));
	}
	fprintf(log_fd, "\n");
#endif

nextchar:
	
	
	if (clen != 0)
	    rex.input += clen;
	else if (go_to_nextline || (nfa_endp != NULL && REG_MULTI
					&& rex.lnum < nfa_endp->se_u.pos.lnum))
	    reg_nextline();
	else
	    break;

	
	line_breakcheck();
	if (got_int)
	    break;
#ifdef FEAT_RELTIME
	if (nfa_did_time_out())
	    break;
#endif
    }

#ifdef ENABLE_LOG
    if (log_fd != stderr)
	fclose(log_fd);
    log_fd = NULL;
#endif

theend:
    
    vim_free(list[0].t);
    vim_free(list[1].t);
    vim_free(listids);
#undef ADD_STATE_IF_MATCH
#ifdef NFA_REGEXP_DEBUG_LOG
    fclose(debug);
#endif

    return nfa_match;
}


    static int
nfa_regtry(
    nfa_regprog_T   *prog,
    colnr_T	    col,
    int		    *timed_out UNUSED)	
{
    int		i;
    regsubs_T	subs, m;
    nfa_state_T	*start = prog->start;
    int		result;
#ifdef ENABLE_LOG
    FILE	*f;
#endif

    rex.input = rex.line + col;
#ifdef FEAT_RELTIME
    nfa_timed_out = timed_out;
#endif

#ifdef ENABLE_LOG
    f = fopen(NFA_REGEXP_RUN_LOG, "a");
    if (f != NULL)
    {
	fprintf(f, "\n\n\t=======================================================\n");
# ifdef DEBUG
	fprintf(f, "\tRegexp is \"%s\"\n", nfa_regengine.expr);
# endif
	fprintf(f, "\tInput text is \"%s\" \n", rex.input);
	fprintf(f, "\t=======================================================\n\n");
	nfa_print_state(f, start);
	fprintf(f, "\n\n");
	fclose(f);
    }
    else
	emsg("Could not open temporary log file for writing");
#endif

    clear_sub(&subs.norm);
    clear_sub(&m.norm);
#ifdef FEAT_SYN_HL
    clear_sub(&subs.synt);
    clear_sub(&m.synt);
#endif

    result = nfa_regmatch(prog, start, &subs, &m);
    if (result == FALSE)
	return 0;
    else if (result == NFA_TOO_EXPENSIVE)
	return result;

    cleanup_subexpr();
    if (REG_MULTI)
    {
	for (i = 0; i < subs.norm.in_use; i++)
	{
	    rex.reg_startpos[i].lnum = subs.norm.list.multi[i].start_lnum;
	    rex.reg_startpos[i].col = subs.norm.list.multi[i].start_col;

	    rex.reg_endpos[i].lnum = subs.norm.list.multi[i].end_lnum;
	    rex.reg_endpos[i].col = subs.norm.list.multi[i].end_col;
	}
	if (rex.reg_mmatch != NULL)
	    rex.reg_mmatch->rmm_matchcol = subs.norm.orig_start_col;

	if (rex.reg_startpos[0].lnum < 0)
	{
	    rex.reg_startpos[0].lnum = 0;
	    rex.reg_startpos[0].col = col;
	}
	if (rex.reg_endpos[0].lnum < 0)
	{
	    
	    rex.reg_endpos[0].lnum = rex.lnum;
	    rex.reg_endpos[0].col = (int)(rex.input - rex.line);
	}
	else
	    
	    rex.lnum = rex.reg_endpos[0].lnum;
    }
    else
    {
	for (i = 0; i < subs.norm.in_use; i++)
	{
	    rex.reg_startp[i] = subs.norm.list.line[i].start;
	    rex.reg_endp[i] = subs.norm.list.line[i].end;
	}

	if (rex.reg_startp[0] == NULL)
	    rex.reg_startp[0] = rex.line + col;
	if (rex.reg_endp[0] == NULL)
	    rex.reg_endp[0] = rex.input;
    }

#ifdef FEAT_SYN_HL
    
    unref_extmatch(re_extmatch_out);
    re_extmatch_out = NULL;

    if (prog->reghasz == REX_SET)
    {
	cleanup_zsubexpr();
	re_extmatch_out = make_extmatch();
	if (re_extmatch_out == NULL)
	    return 0;
	
	for (i = 1; i < subs.synt.in_use; i++)
	{
	    if (REG_MULTI)
	    {
		struct multipos *mpos = &subs.synt.list.multi[i];

		
		if (mpos->start_lnum >= 0
			&& mpos->start_lnum == mpos->end_lnum
			&& mpos->end_col >= mpos->start_col)
		    re_extmatch_out->matches[i] =
			vim_strnsave(reg_getline(mpos->start_lnum)
							    + mpos->start_col,
					     mpos->end_col - mpos->start_col);
	    }
	    else
	    {
		struct linepos *lpos = &subs.synt.list.line[i];

		if (lpos->start != NULL && lpos->end != NULL)
		    re_extmatch_out->matches[i] =
			    vim_strnsave(lpos->start, lpos->end - lpos->start);
	    }
	}
    }
#endif

    return 1 + rex.lnum;
}


    static int
nfa_regexec_both(
    char_u	*line,
    colnr_T	startcol,	
    int		*timed_out)	
{
    nfa_regprog_T   *prog;
    int	    retval = 0L;
    int		    i;
    colnr_T	    col = startcol;

    if (REG_MULTI)
    {
	prog = (nfa_regprog_T *)rex.reg_mmatch->regprog;
	line = reg_getline((linenr_T)0);    
	rex.reg_startpos = rex.reg_mmatch->startpos;
	rex.reg_endpos = rex.reg_mmatch->endpos;
    }
    else
    {
	prog = (nfa_regprog_T *)rex.reg_match->regprog;
	rex.reg_startp = rex.reg_match->startp;
	rex.reg_endp = rex.reg_match->endp;
    }

    
    if (prog == NULL || line == NULL)
    {
	iemsg(e_null_argument);
	goto theend;
    }

    
    if (prog->regflags & RF_ICASE)
	rex.reg_ic = TRUE;
    else if (prog->regflags & RF_NOICASE)
	rex.reg_ic = FALSE;

    
    if (prog->regflags & RF_ICOMBINE)
	rex.reg_icombine = TRUE;

    rex.line = line;
    rex.lnum = 0;    

    rex.nfa_has_zend = prog->has_zend;
    rex.nfa_has_backref = prog->has_backref;
    rex.nfa_nsubexpr = prog->nsubexp;
    rex.nfa_listid = 1;
    rex.nfa_alt_listid = 2;
#ifdef DEBUG
    nfa_regengine.expr = prog->pattern;
#endif

    if (prog->reganch && col > 0)
	return 0L;

    rex.need_clear_subexpr = TRUE;
#ifdef FEAT_SYN_HL
    
    if (prog->reghasz == REX_SET)
    {
	rex.nfa_has_zsubexpr = TRUE;
	rex.need_clear_zsubexpr = TRUE;
    }
    else
    {
	rex.nfa_has_zsubexpr = FALSE;
	rex.need_clear_zsubexpr = FALSE;
    }
#endif

    if (prog->regstart != NUL)
    {
	
	
	if (skip_to_start(prog->regstart, &col) == FAIL)
	    return 0L;

	
	
	if (prog->match_text != NULL && *prog->match_text != NUL && !rex.reg_icombine)
	{
	    retval = find_match_text(&col, prog->regstart, prog->match_text);
	    if (REG_MULTI)
		rex.reg_mmatch->rmm_matchcol = col;
	    else
		rex.reg_match->rm_matchcol = col;
	    return retval;
	}
    }

    
    if (rex.reg_maxcol > 0 && col >= rex.reg_maxcol)
	goto theend;

    
    
    nstate = 0;
    for (i = 0; i < prog->nstate; ++i)
    {
	prog->state[i].id = i;
	prog->state[i].lastlist[0] = 0;
	prog->state[i].lastlist[1] = 0;
    }

    retval = nfa_regtry(prog, col, timed_out);

#ifdef DEBUG
    nfa_regengine.expr = NULL;
#endif

theend:
    if (retval > 0)
    {
	
	
	if (REG_MULTI)
	{
	    lpos_T *start = &rex.reg_mmatch->startpos[0];
	    lpos_T *end = &rex.reg_mmatch->endpos[0];

	    if (end->lnum < start->lnum
			|| (end->lnum == start->lnum && end->col < start->col))
		rex.reg_mmatch->endpos[0] = rex.reg_mmatch->startpos[0];
	}
	else
	{
	    if (rex.reg_match->endp[0] < rex.reg_match->startp[0])
		rex.reg_match->endp[0] = rex.reg_match->startp[0];

	    
	    
	    rex.reg_match->rm_matchcol = col;
	}
    }

    return retval;
}


    static regprog_T *
nfa_regcomp(char_u *expr, int re_flags)
{
    nfa_regprog_T	*prog = NULL;
    size_t		prog_size;
    int			*postfix;

    if (expr == NULL)
	return NULL;

#ifdef DEBUG
    nfa_regengine.expr = expr;
#endif
    nfa_re_flags = re_flags;

    init_class_tab();

    if (nfa_regcomp_start(expr, re_flags) == FAIL)
	return NULL;

    
    
    postfix = re2post();
    if (postfix == NULL)
	goto fail;	    

    
#ifdef ENABLE_LOG
    {
	FILE *f = fopen(NFA_REGEXP_RUN_LOG, "a");

	if (f != NULL)
	{
	    fprintf(f, "\n*****************************\n\n\n\n\tCompiling regexp \"%s\"... hold on !\n", expr);
	    fclose(f);
	}
    }
#endif

    
    post2nfa(postfix, post_ptr, TRUE);

    
    prog_size = offsetof(nfa_regprog_T, state) + sizeof(nfa_state_T) * nstate;
    prog = alloc(prog_size);
    if (prog == NULL)
	goto fail;
    state_ptr = prog->state;
    prog->re_in_use = FALSE;

    
    prog->start = post2nfa(postfix, post_ptr, FALSE);
    if (prog->start == NULL)
	goto fail;

    prog->regflags = regflags;
    prog->engine = &nfa_regengine;
    prog->nstate = nstate;
    prog->has_zend = rex.nfa_has_zend;
    prog->has_backref = rex.nfa_has_backref;
    prog->nsubexp = regnpar;

    nfa_postprocess(prog);

    prog->reganch = nfa_get_reganch(prog->start, 0);
    prog->regstart = nfa_get_regstart(prog->start, 0);
    prog->match_text = nfa_get_match_text(prog->start);

#ifdef ENABLE_LOG
    nfa_postfix_dump(expr, OK);
    nfa_dump(prog);
#endif
#ifdef FEAT_SYN_HL
    
    prog->reghasz = re_has_z;
#endif
    prog->pattern = vim_strsave(expr);
#ifdef DEBUG
    nfa_regengine.expr = NULL;
#endif

out:
    VIM_CLEAR(post_start);
    post_ptr = post_end = NULL;
    state_ptr = NULL;
    return (regprog_T *)prog;

fail:
    VIM_CLEAR(prog);
#ifdef ENABLE_LOG
    nfa_postfix_dump(expr, FAIL);
#endif
#ifdef DEBUG
    nfa_regengine.expr = NULL;
#endif
    goto out;
}


    static void
nfa_regfree(regprog_T *prog)
{
    if (prog == NULL)
	return;

    vim_free(((nfa_regprog_T *)prog)->match_text);
    vim_free(((nfa_regprog_T *)prog)->pattern);
    vim_free(prog);
}


    static int
nfa_regexec_nl(
    regmatch_T	*rmp,
    char_u	*line,	
    colnr_T	col,	
    int		line_lbr)
{
    rex.reg_match = rmp;
    rex.reg_mmatch = NULL;
    rex.reg_maxline = 0;
    rex.reg_line_lbr = line_lbr;
    rex.reg_buf = curbuf;
    rex.reg_win = NULL;
    rex.reg_ic = rmp->rm_ic;
    rex.reg_icombine = FALSE;
    rex.reg_maxcol = 0;
    return nfa_regexec_both(line, col, NULL);
}



    static int
nfa_regexec_multi(
    regmmatch_T	*rmp,
    win_T	*win,		
    buf_T	*buf,		
    linenr_T	lnum,		
    colnr_T	col,		
    int		*timed_out)	
{
    init_regexec_multi(rmp, win, buf, lnum);
    return nfa_regexec_both(NULL, col, timed_out);
}

#ifdef DEBUG
# undef ENABLE_LOG
#endif
