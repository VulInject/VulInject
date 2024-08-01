








#define END		0	
#define BOL		1	
#define EOL		2	
#define BRANCH		3	
				
#define BACK		4	
#define EXACTLY		5	
#define NOTHING		6	
#define STAR		7	
				
#define PLUS		8	
				
#define MATCH		9	
#define NOMATCH		10	
#define BEHIND		11	
#define NOBEHIND	12	
#define SUBPAT		13	
#define BRACE_SIMPLE	14	
				
#define BOW		15	
#define EOW		16	
#define BRACE_LIMITS	17	
				
#define NEWL		18	
#define BHPOS		19	



#define ADD_NL		30
#define FIRST_NL	ANY + ADD_NL
#define ANY		20	
#define ANYOF		21	
#define ANYBUT		22	
				
#define IDENT		23	
#define SIDENT		24	
#define KWORD		25	
#define SKWORD		26	
#define FNAME		27	
#define SFNAME		28	
#define PRINT		29	
#define SPRINT		30	
#define WHITE		31	
#define NWHITE		32	
#define DIGIT		33	
#define NDIGIT		34	
#define HEX		35	
#define NHEX		36	
#define OCTAL		37	
#define NOCTAL		38	
#define WORD		39	
#define NWORD		40	
#define HEAD		41	
#define NHEAD		42	
#define ALPHA		43	
#define NALPHA		44	
#define LOWER		45	
#define NLOWER		46	
#define UPPER		47	
#define NUPPER		48	
#define LAST_NL		NUPPER + ADD_NL
#define WITH_NL(op)	((op) >= FIRST_NL && (op) <= LAST_NL)

#define MOPEN		80  
				
				
#define MCLOSE		90  
				
#define BACKREF		100 

#ifdef FEAT_SYN_HL
# define ZOPEN		110 
				
# define ZCLOSE		120 
# define ZREF		130 
#endif

#define BRACE_COMPLEX	140 

#define NOPEN		150	
				
#define NCLOSE		151	

#define MULTIBYTECODE	200	
#define RE_BOF		201	
#define RE_EOF		202	
#define CURSOR		203	

#define RE_LNUM		204	
#define RE_COL		205	
#define RE_VCOL		206	

#define RE_MARK		207	
#define RE_VISUAL	208	
#define RE_COMPOSING	209	


#define HASWIDTH	0x1	
#define SIMPLE		0x2	
#define SPSTART		0x4	
#define HASNL		0x8	
#define HASLOOKBH	0x10	
#define WORST		0	

static int	num_complex_braces; 
static char_u	*regcode;	
static int	regsize;	
static int	reg_toolong;	
static char_u	had_endbrace[NSUBEXP];	
static int	brace_min[10];	
static int	brace_max[10];	
static int	brace_count[10]; 
static int	one_exactly = FALSE;	


static char_u	*classchars = (char_u *)".iIkKfFpPsSdDxXoOwWhHaAlLuU";
static int	classcodes[] = {
    ANY, IDENT, SIDENT, KWORD, SKWORD,
    FNAME, SFNAME, PRINT, SPRINT,
    WHITE, NWHITE, DIGIT, NDIGIT,
    HEX, NHEX, OCTAL, NOCTAL,
    WORD, NWORD, HEAD, NHEAD,
    ALPHA, NALPHA, LOWER, NLOWER,
    UPPER, NUPPER
};


#define JUST_CALC_SIZE	((char_u *) -1)


typedef enum regstate_E
{
    RS_NOPEN = 0	
    , RS_MOPEN		
    , RS_MCLOSE		
#ifdef FEAT_SYN_HL
    , RS_ZOPEN		
    , RS_ZCLOSE		
#endif
    , RS_BRANCH		
    , RS_BRCPLX_MORE	
    , RS_BRCPLX_LONG	
    , RS_BRCPLX_SHORT	
    , RS_NOMATCH	
    , RS_BEHIND1	
    , RS_BEHIND2	
    , RS_STAR_LONG	
    , RS_STAR_SHORT	
} regstate_T;


typedef struct
{
    union
    {
	char_u	*ptr;	
	lpos_T	pos;	
    } rs_u;
    int		rs_len;
} regsave_T;


typedef struct
{
    union
    {
	char_u	*ptr;
	lpos_T	pos;
    } se_u;
} save_se_T;


typedef struct regbehind_S
{
    regsave_T	save_after;
    regsave_T	save_behind;
    int		save_need_clear_subexpr;
    save_se_T   save_start[NSUBEXP];
    save_se_T   save_end[NSUBEXP];
} regbehind_T;


typedef struct regitem_S
{
    regstate_T	rs_state;	
    short	rs_no;		
    char_u	*rs_scan;	
    union
    {
	save_se_T  sesave;
	regsave_T  regsave;
    } rs_un;			
} regitem_T;



typedef struct regstar_S
{
    int		nextb;		
    int		nextb_ic;	
    int	count;
    int	minval;
    int	maxval;
} regstar_T;



typedef struct backpos_S
{
    char_u	*bp_scan;	
    regsave_T	bp_pos;		
} backpos_T;


static garray_T	regstack = {0, 0, 0, 0, NULL};
static garray_T	backpos = {0, 0, 0, 0, NULL};

static regsave_T behind_pos;


#define REGSTACK_INITIAL	2048
#define BACKPOS_INITIAL		64




#define OP(p)		((int)*(p))
#define NEXT(p)		(((*((p) + 1) & 0377) << 8) + (*((p) + 2) & 0377))
#define OPERAND(p)	((p) + 3)

#define OPERAND_MIN(p)	(((int)(p)[3] << 24) + ((int)(p)[4] << 16) \
			+ ((int)(p)[5] << 8) + (int)(p)[6])

#define OPERAND_MAX(p)	OPERAND_MIN((p) + 4)

#define OPERAND_CMP(p)	(p)[7]

static char_u *reg(int paren, int *flagp);

#ifdef BT_REGEXP_DUMP
static void	regdump(char_u *, bt_regprog_T *);
#endif

static int	re_num_cmp(long_u val, char_u *scan);

#ifdef DEBUG
static char_u	*regprop(char_u *);

static int	regnarrate = 0;
#endif



    static void
regcomp_start(
    char_u	*expr,
    int		re_flags)	    
{
    initchr(expr);
    if (re_flags & RE_MAGIC)
	reg_magic = MAGIC_ON;
    else
	reg_magic = MAGIC_OFF;
    reg_string = (re_flags & RE_STRING);
    reg_strict = (re_flags & RE_STRICT);
    get_cpo_flags();

    num_complex_braces = 0;
    regnpar = 1;
    CLEAR_FIELD(had_endbrace);
#ifdef FEAT_SYN_HL
    regnzpar = 1;
    re_has_z = 0;
#endif
    regsize = 0L;
    reg_toolong = FALSE;
    regflags = 0;
#if defined(FEAT_SYN_HL) || defined(PROTO)
    had_eol = FALSE;
#endif
}


    static int
use_multibytecode(int c)
{
    return has_mbyte && (*mb_char2len)(c) > 1
		     && (re_multi_type(peekchr()) != NOT_MULTI
			     || (enc_utf8 && utf_iscomposing(c)));
}


    static void
regc(int b)
{
    if (regcode == JUST_CALC_SIZE)
	regsize++;
    else
	*regcode++ = b;
}


    static void
regmbc(int c)
{
    if (!has_mbyte && c > 0xff)
	return;
    if (regcode == JUST_CALC_SIZE)
	regsize += (*mb_char2len)(c);
    else
	regcode += (*mb_char2bytes)(c, regcode);
}



    static void
reg_equi_class(int c)
{
    if (enc_utf8 || STRCMP(p_enc, "latin1") == 0
					 || STRCMP(p_enc, "iso-8859-15") == 0)
    {
	switch (c)
	{
	    
	    case 'A': case 0xc0: case 0xc1: case 0xc2: case 0xc3: case 0xc4:
	    case 0xc5: case 0x100: case 0x102: case 0x104: case 0x1cd:
	    case 0x1de: case 0x1e0: case 0x1fa: case 0x202: case 0x226:
	    case 0x23a: case 0x1e00: case 0x1ea0: case 0x1ea2: case 0x1ea4:
	    case 0x1ea6: case 0x1ea8: case 0x1eaa: case 0x1eac: case 0x1eae:
	    case 0x1eb0: case 0x1eb2: case 0x1eb4: case 0x1eb6:
		      regmbc('A'); regmbc(0xc0); regmbc(0xc1); regmbc(0xc2);
		      regmbc(0xc3); regmbc(0xc4); regmbc(0xc5);
		      regmbc(0x100); regmbc(0x102); regmbc(0x104);
		      regmbc(0x1cd); regmbc(0x1de); regmbc(0x1e0);
		      regmbc(0x1fa); regmbc(0x202); regmbc(0x226);
		      regmbc(0x23a); regmbc(0x1e00); regmbc(0x1ea0);
		      regmbc(0x1ea2); regmbc(0x1ea4); regmbc(0x1ea6);
		      regmbc(0x1ea8); regmbc(0x1eaa); regmbc(0x1eac);
		      regmbc(0x1eae); regmbc(0x1eb0); regmbc(0x1eb2);
		      regmbc(0x1eb4); regmbc(0x1eb6);
		      return;
	    case 'B': case 0x181: case 0x243: case 0x1e02:
	    case 0x1e04: case 0x1e06:
		      regmbc('B');
		      regmbc(0x181); regmbc(0x243); regmbc(0x1e02);
		      regmbc(0x1e04); regmbc(0x1e06);
		      return;
	    case 'C': case 0xc7:
	    case 0x106: case 0x108: case 0x10a: case 0x10c: case 0x187:
	    case 0x23b: case 0x1e08: case 0xa792:
		      regmbc('C'); regmbc(0xc7);
		      regmbc(0x106); regmbc(0x108); regmbc(0x10a);
		      regmbc(0x10c); regmbc(0x187); regmbc(0x23b);
		      regmbc(0x1e08); regmbc(0xa792);
		      return;
	    case 'D': case 0x10e: case 0x110: case 0x18a:
	    case 0x1e0a: case 0x1e0c: case 0x1e0e: case 0x1e10:
	    case 0x1e12:
		      regmbc('D'); regmbc(0x10e); regmbc(0x110);
		      regmbc(0x18a); regmbc(0x1e0a); regmbc(0x1e0c);
		      regmbc(0x1e0e); regmbc(0x1e10); regmbc(0x1e12);
		      return;
	    case 'E': case 0xc8: case 0xc9: case 0xca: case 0xcb:
	    case 0x112: case 0x114: case 0x116: case 0x118: case 0x11a:
	    case 0x204: case 0x206: case 0x228: case 0x246: case 0x1e14:
	    case 0x1e16: case 0x1e18: case 0x1e1a: case 0x1e1c:
	    case 0x1eb8: case 0x1eba: case 0x1ebc: case 0x1ebe:
	    case 0x1ec0: case 0x1ec2: case 0x1ec4: case 0x1ec6:
		      regmbc('E'); regmbc(0xc8); regmbc(0xc9);
		      regmbc(0xca); regmbc(0xcb); regmbc(0x112);
		      regmbc(0x114); regmbc(0x116); regmbc(0x118);
		      regmbc(0x11a); regmbc(0x204); regmbc(0x206);
		      regmbc(0x228); regmbc(0x246); regmbc(0x1e14);
		      regmbc(0x1e16); regmbc(0x1e18); regmbc(0x1e1a);
		      regmbc(0x1e1c); regmbc(0x1eb8); regmbc(0x1eba);
		      regmbc(0x1ebc); regmbc(0x1ebe); regmbc(0x1ec0);
		      regmbc(0x1ec2); regmbc(0x1ec4); regmbc(0x1ec6);
		      return;
	    case 'F': case 0x191: case 0x1e1e: case 0xa798:
		      regmbc('F'); regmbc(0x191); regmbc(0x1e1e);
		      regmbc(0xa798);
		      return;
	    case 'G': case 0x11c: case 0x11e: case 0x120:
	    case 0x122: case 0x193: case 0x1e4: case 0x1e6:
	    case 0x1f4: case 0x1e20: case 0xa7a0:
		      regmbc('G'); regmbc(0x11c); regmbc(0x11e);
		      regmbc(0x120); regmbc(0x122); regmbc(0x193);
		      regmbc(0x1e4); regmbc(0x1e6); regmbc(0x1f4);
		      regmbc(0x1e20); regmbc(0xa7a0);
		      return;
	    case 'H': case 0x124: case 0x126: case 0x21e:
	    case 0x1e22: case 0x1e24: case 0x1e26:
	    case 0x1e28: case 0x1e2a: case 0x2c67:
		      regmbc('H'); regmbc(0x124); regmbc(0x126);
		      regmbc(0x21e); regmbc(0x1e22); regmbc(0x1e24);
		      regmbc(0x1e26); regmbc(0x1e28); regmbc(0x1e2a);
		      regmbc(0x2c67);
		      return;
	    case 'I': case 0xcc: case 0xcd: case 0xce: case 0xcf:
	    case 0x128: case 0x12a: case 0x12c: case 0x12e:
	    case 0x130: case 0x197: case 0x1cf: case 0x208:
	    case 0x20a: case 0x1e2c: case 0x1e2e: case 0x1ec8:
	    case 0x1eca:
		      regmbc('I'); regmbc(0xcc); regmbc(0xcd);
		      regmbc(0xce); regmbc(0xcf); regmbc(0x128);
		      regmbc(0x12a); regmbc(0x12c); regmbc(0x12e);
		      regmbc(0x130); regmbc(0x197); regmbc(0x1cf);
		      regmbc(0x208); regmbc(0x20a); regmbc(0x1e2c);
		      regmbc(0x1e2e); regmbc(0x1ec8); regmbc(0x1eca);
		      return;
	    case 'J': case 0x134: case 0x248:
		      regmbc('J'); regmbc(0x134); regmbc(0x248);
		      return;
	    case 'K': case 0x136: case 0x198: case 0x1e8: case 0x1e30:
	    case 0x1e32: case 0x1e34: case 0x2c69: case 0xa740:
		      regmbc('K'); regmbc(0x136); regmbc(0x198);
		      regmbc(0x1e8); regmbc(0x1e30); regmbc(0x1e32);
		      regmbc(0x1e34); regmbc(0x2c69); regmbc(0xa740);
		      return;
	    case 'L': case 0x139: case 0x13b: case 0x13d: case 0x13f:
	    case 0x141: case 0x23d: case 0x1e36: case 0x1e38:
	    case 0x1e3a: case 0x1e3c: case 0x2c60:
		      regmbc('L'); regmbc(0x139); regmbc(0x13b);
		      regmbc(0x13d); regmbc(0x13f); regmbc(0x141);
		      regmbc(0x23d); regmbc(0x1e36); regmbc(0x1e38);
		      regmbc(0x1e3a); regmbc(0x1e3c); regmbc(0x2c60);
		      return;
	    case 'M': case 0x1e3e: case 0x1e40: case 0x1e42:
		      regmbc('M'); regmbc(0x1e3e); regmbc(0x1e40);
		      regmbc(0x1e42);
		      return;
	    case 'N': case 0xd1:
	    case 0x143: case 0x145: case 0x147: case 0x1f8:
	    case 0x1e44: case 0x1e46: case 0x1e48: case 0x1e4a:
	    case 0xa7a4:
		      regmbc('N'); regmbc(0xd1);
		      regmbc(0x143); regmbc(0x145); regmbc(0x147);
		      regmbc(0x1f8); regmbc(0x1e44); regmbc(0x1e46);
		      regmbc(0x1e48); regmbc(0x1e4a); regmbc(0xa7a4);
		      return;
	    case 'O': case 0xd2: case 0xd3: case 0xd4: case 0xd5: case 0xd6:
	    case 0xd8: case 0x14c: case 0x14e: case 0x150: case 0x19f:
	    case 0x1a0: case 0x1d1: case 0x1ea: case 0x1ec: case 0x1fe:
	    case 0x20c: case 0x20e: case 0x22a: case 0x22c: case 0x22e:
	    case 0x230: case 0x1e4c: case 0x1e4e: case 0x1e50: case 0x1e52:
	    case 0x1ecc: case 0x1ece: case 0x1ed0: case 0x1ed2: case 0x1ed4:
	    case 0x1ed6: case 0x1ed8: case 0x1eda: case 0x1edc: case 0x1ede:
	    case 0x1ee0: case 0x1ee2:
		      regmbc('O'); regmbc(0xd2); regmbc(0xd3); regmbc(0xd4);
		      regmbc(0xd5); regmbc(0xd6); regmbc(0xd8);
		      regmbc(0x14c); regmbc(0x14e); regmbc(0x150);
		      regmbc(0x19f); regmbc(0x1a0); regmbc(0x1d1);
		      regmbc(0x1ea); regmbc(0x1ec); regmbc(0x1fe);
		      regmbc(0x20c); regmbc(0x20e); regmbc(0x22a);
		      regmbc(0x22c); regmbc(0x22e); regmbc(0x230);
		      regmbc(0x1e4c); regmbc(0x1e4e); regmbc(0x1e50);
		      regmbc(0x1e52); regmbc(0x1ecc); regmbc(0x1ece);
		      regmbc(0x1ed0); regmbc(0x1ed2); regmbc(0x1ed4);
		      regmbc(0x1ed6); regmbc(0x1ed8); regmbc(0x1eda);
		      regmbc(0x1edc); regmbc(0x1ede); regmbc(0x1ee0);
		      regmbc(0x1ee2);
		      return;
	    case 'P': case 0x1a4: case 0x1e54: case 0x1e56: case 0x2c63:
		      regmbc('P'); regmbc(0x1a4); regmbc(0x1e54);
		      regmbc(0x1e56); regmbc(0x2c63);
		      return;
	    case 'Q': case 0x24a:
		      regmbc('Q'); regmbc(0x24a);
		      return;
	    case 'R': case 0x154: case 0x156: case 0x158: case 0x210:
	    case 0x212: case 0x24c: case 0x1e58: case 0x1e5a:
	    case 0x1e5c: case 0x1e5e: case 0x2c64: case 0xa7a6:
		      regmbc('R'); regmbc(0x154); regmbc(0x156);
		      regmbc(0x210); regmbc(0x212); regmbc(0x158);
		      regmbc(0x24c); regmbc(0x1e58); regmbc(0x1e5a);
		      regmbc(0x1e5c); regmbc(0x1e5e); regmbc(0x2c64);
		      regmbc(0xa7a6);
		      return;
	    case 'S': case 0x15a: case 0x15c: case 0x15e: case 0x160:
	    case 0x218: case 0x1e60: case 0x1e62: case 0x1e64:
	    case 0x1e66: case 0x1e68: case 0x2c7e: case 0xa7a8:
		      regmbc('S'); regmbc(0x15a); regmbc(0x15c);
		      regmbc(0x15e); regmbc(0x160); regmbc(0x218);
		      regmbc(0x1e60); regmbc(0x1e62); regmbc(0x1e64);
		      regmbc(0x1e66); regmbc(0x1e68); regmbc(0x2c7e);
			  regmbc(0xa7a8);
		      return;
	    case 'T': case 0x162: case 0x164: case 0x166: case 0x1ac:
	    case 0x1ae: case 0x21a: case 0x23e: case 0x1e6a: case 0x1e6c:
	    case 0x1e6e: case 0x1e70:
		      regmbc('T'); regmbc(0x162); regmbc(0x164);
		      regmbc(0x166); regmbc(0x1ac); regmbc(0x23e);
		      regmbc(0x1ae); regmbc(0x21a); regmbc(0x1e6a);
		      regmbc(0x1e6c); regmbc(0x1e6e); regmbc(0x1e70);
		      return;
	    case 'U': case 0xd9: case 0xda: case 0xdb: case 0xdc:
	    case 0x168: case 0x16a: case 0x16c: case 0x16e:
	    case 0x170: case 0x172: case 0x1af: case 0x1d3:
	    case 0x1d5: case 0x1d7: case 0x1d9: case 0x1db:
	    case 0x214: case 0x216: case 0x244: case 0x1e72:
	    case 0x1e74: case 0x1e76: case 0x1e78: case 0x1e7a:
	    case 0x1ee4: case 0x1ee6: case 0x1ee8: case 0x1eea:
	    case 0x1eec: case 0x1eee: case 0x1ef0:
		      regmbc('U'); regmbc(0xd9); regmbc(0xda);
		      regmbc(0xdb); regmbc(0xdc); regmbc(0x168);
		      regmbc(0x16a); regmbc(0x16c); regmbc(0x16e);
		      regmbc(0x170); regmbc(0x172); regmbc(0x1af);
		      regmbc(0x1d3); regmbc(0x1d5); regmbc(0x1d7);
		      regmbc(0x1d9); regmbc(0x1db); regmbc(0x214);
		      regmbc(0x216); regmbc(0x244); regmbc(0x1e72);
		      regmbc(0x1e74); regmbc(0x1e76); regmbc(0x1e78);
		      regmbc(0x1e7a); regmbc(0x1ee4); regmbc(0x1ee6);
		      regmbc(0x1ee8); regmbc(0x1eea); regmbc(0x1eec);
		      regmbc(0x1eee); regmbc(0x1ef0);
		      return;
	    case 'V': case 0x1b2: case 0x1e7c: case 0x1e7e:
		      regmbc('V'); regmbc(0x1b2); regmbc(0x1e7c);
		      regmbc(0x1e7e);
		      return;
	    case 'W': case 0x174: case 0x1e80: case 0x1e82:
	    case 0x1e84: case 0x1e86: case 0x1e88:
		      regmbc('W'); regmbc(0x174); regmbc(0x1e80);
		      regmbc(0x1e82); regmbc(0x1e84); regmbc(0x1e86);
		      regmbc(0x1e88);
		      return;
	    case 'X': case 0x1e8a: case 0x1e8c:
		      regmbc('X'); regmbc(0x1e8a); regmbc(0x1e8c);
		      return;
	    case 'Y': case 0xdd:
	    case 0x176: case 0x178: case 0x1b3: case 0x232: case 0x24e:
	    case 0x1e8e: case 0x1ef2: case 0x1ef6: case 0x1ef4: case 0x1ef8:
		      regmbc('Y'); regmbc(0xdd); regmbc(0x176);
		      regmbc(0x178); regmbc(0x1b3); regmbc(0x232);
		      regmbc(0x24e); regmbc(0x1e8e); regmbc(0x1ef2);
		      regmbc(0x1ef4); regmbc(0x1ef6); regmbc(0x1ef8);
		      return;
	    case 'Z': case 0x179: case 0x17b: case 0x17d: case 0x1b5:
	    case 0x1e90: case 0x1e92: case 0x1e94: case 0x2c6b:
		      regmbc('Z'); regmbc(0x179); regmbc(0x17b);
		      regmbc(0x17d); regmbc(0x1b5); regmbc(0x1e90);
		      regmbc(0x1e92); regmbc(0x1e94); regmbc(0x2c6b);
		      return;
	    case 'a': case 0xe0: case 0xe1: case 0xe2:
	    case 0xe3: case 0xe4: case 0xe5: case 0x101: case 0x103:
	    case 0x105: case 0x1ce: case 0x1df: case 0x1e1: case 0x1fb:
	    case 0x201: case 0x203: case 0x227: case 0x1d8f: case 0x1e01:
	    case 0x1e9a: case 0x1ea1: case 0x1ea3: case 0x1ea5:
	    case 0x1ea7: case 0x1ea9: case 0x1eab: case 0x1ead:
	    case 0x1eaf: case 0x1eb1: case 0x1eb3: case 0x1eb5:
	    case 0x1eb7: case 0x2c65:
		      regmbc('a'); regmbc(0xe0); regmbc(0xe1);
		      regmbc(0xe2); regmbc(0xe3); regmbc(0xe4);
		      regmbc(0xe5); regmbc(0x101); regmbc(0x103);
		      regmbc(0x105); regmbc(0x1ce); regmbc(0x1df);
		      regmbc(0x1e1); regmbc(0x1fb); regmbc(0x201);
		      regmbc(0x203); regmbc(0x227); regmbc(0x1d8f);
		      regmbc(0x1e01); regmbc(0x1e9a); regmbc(0x1ea1);
		      regmbc(0x1ea3); regmbc(0x1ea5); regmbc(0x1ea7);
		      regmbc(0x1ea9); regmbc(0x1eab); regmbc(0x1ead);
		      regmbc(0x1eaf); regmbc(0x1eb1); regmbc(0x1eb3);
		      regmbc(0x1eb5); regmbc(0x1eb7); regmbc(0x2c65);
		      return;
	    case 'b': case 0x180: case 0x253: case 0x1d6c: case 0x1d80:
	    case 0x1e03: case 0x1e05: case 0x1e07:
		      regmbc('b');
		      regmbc(0x180); regmbc(0x253); regmbc(0x1d6c);
		      regmbc(0x1d80); regmbc(0x1e03); regmbc(0x1e05);
		      regmbc(0x1e07);
		      return;
	    case 'c': case 0xe7:
	    case 0x107: case 0x109: case 0x10b: case 0x10d: case 0x188:
	    case 0x23c: case 0x1e09: case 0xa793: case 0xa794:
		      regmbc('c'); regmbc(0xe7); regmbc(0x107);
		      regmbc(0x109); regmbc(0x10b); regmbc(0x10d);
		      regmbc(0x188); regmbc(0x23c); regmbc(0x1e09);
		      regmbc(0xa793); regmbc(0xa794);
		      return;
	    case 'd': case 0x10f: case 0x111: case 0x257: case 0x1d6d:
	    case 0x1d81: case 0x1d91: case 0x1e0b: case 0x1e0d:
	    case 0x1e0f: case 0x1e11: case 0x1e13:
		      regmbc('d'); regmbc(0x10f); regmbc(0x111);
		      regmbc(0x257); regmbc(0x1d6d); regmbc(0x1d81);
		      regmbc(0x1d91); regmbc(0x1e0b); regmbc(0x1e0d);
		      regmbc(0x1e0f); regmbc(0x1e11); regmbc(0x1e13);
		      return;
	    case 'e': case 0xe8: case 0xe9: case 0xea: case 0xeb:
	    case 0x113: case 0x115: case 0x117: case 0x119:
	    case 0x11b: case 0x205: case 0x207: case 0x229:
	    case 0x247: case 0x1d92: case 0x1e15: case 0x1e17:
	    case 0x1e19: case 0x1e1b: case 0x1eb9: case 0x1ebb:
	    case 0x1e1d: case 0x1ebd: case 0x1ebf: case 0x1ec1:
	    case 0x1ec3: case 0x1ec5: case 0x1ec7:
		      regmbc('e'); regmbc(0xe8); regmbc(0xe9);
		      regmbc(0xea); regmbc(0xeb); regmbc(0x113);
		      regmbc(0x115); regmbc(0x117); regmbc(0x119);
		      regmbc(0x11b); regmbc(0x205); regmbc(0x207);
		      regmbc(0x229); regmbc(0x247); regmbc(0x1d92);
		      regmbc(0x1e15); regmbc(0x1e17); regmbc(0x1e19);
		      regmbc(0x1e1b); regmbc(0x1e1d); regmbc(0x1eb9);
		      regmbc(0x1ebb); regmbc(0x1ebd); regmbc(0x1ebf);
		      regmbc(0x1ec1); regmbc(0x1ec3); regmbc(0x1ec5);
		      regmbc(0x1ec7);
		      return;
	    case 'f': case 0x192: case 0x1d6e: case 0x1d82:
	    case 0x1e1f: case 0xa799:
		     regmbc('f'); regmbc(0x192); regmbc(0x1d6e);
		     regmbc(0x1d82); regmbc(0x1e1f); regmbc(0xa799);
		     return;
	    case 'g': case 0x11d: case 0x11f: case 0x121: case 0x123:
	    case 0x1e5: case 0x1e7: case 0x260: case 0x1f5: case 0x1d83:
	    case 0x1e21: case 0xa7a1:
		      regmbc('g'); regmbc(0x11d); regmbc(0x11f);
		      regmbc(0x121); regmbc(0x123); regmbc(0x1e5);
		      regmbc(0x1e7); regmbc(0x1f5); regmbc(0x260);
		      regmbc(0x1d83); regmbc(0x1e21); regmbc(0xa7a1);
		      return;
	    case 'h': case 0x125: case 0x127: case 0x21f: case 0x1e23:
	    case 0x1e25: case 0x1e27: case 0x1e29: case 0x1e2b:
	    case 0x1e96: case 0x2c68: case 0xa795:
		      regmbc('h'); regmbc(0x125); regmbc(0x127);
		      regmbc(0x21f); regmbc(0x1e23); regmbc(0x1e25);
		      regmbc(0x1e27); regmbc(0x1e29); regmbc(0x1e2b);
		      regmbc(0x1e96); regmbc(0x2c68); regmbc(0xa795);
		      return;
	    case 'i': case 0xec: case 0xed: case 0xee: case 0xef:
	    case 0x129: case 0x12b: case 0x12d: case 0x12f:
	    case 0x1d0: case 0x209: case 0x20b: case 0x268:
	    case 0x1d96: case 0x1e2d: case 0x1e2f: case 0x1ec9:
	    case 0x1ecb:
		      regmbc('i'); regmbc(0xec); regmbc(0xed);
		      regmbc(0xee); regmbc(0xef); regmbc(0x129);
		      regmbc(0x12b); regmbc(0x12d); regmbc(0x12f);
		      regmbc(0x1d0); regmbc(0x209); regmbc(0x20b);
		      regmbc(0x268); regmbc(0x1d96); regmbc(0x1e2d);
		      regmbc(0x1e2f); regmbc(0x1ec9); regmbc(0x1ecb);
		      return;
	    case 'j': case 0x135: case 0x1f0: case 0x249:
		      regmbc('j'); regmbc(0x135); regmbc(0x1f0);
		      regmbc(0x249);
		      return;
	    case 'k': case 0x137: case 0x199: case 0x1e9:
	    case 0x1d84: case 0x1e31: case 0x1e33: case 0x1e35:
	    case 0x2c6a: case 0xa741:
		      regmbc('k'); regmbc(0x137); regmbc(0x199);
		      regmbc(0x1e9); regmbc(0x1d84); regmbc(0x1e31);
		      regmbc(0x1e33); regmbc(0x1e35); regmbc(0x2c6a);
		      regmbc(0xa741);
		      return;
	    case 'l': case 0x13a: case 0x13c: case 0x13e:
	    case 0x140: case 0x142: case 0x19a: case 0x1e37:
	    case 0x1e39: case 0x1e3b: case 0x1e3d: case 0x2c61:
		      regmbc('l'); regmbc(0x13a); regmbc(0x13c);
		      regmbc(0x13e); regmbc(0x140); regmbc(0x142);
		      regmbc(0x19a); regmbc(0x1e37); regmbc(0x1e39);
		      regmbc(0x1e3b); regmbc(0x1e3d); regmbc(0x2c61);
		      return;
	    case 'm': case 0x1d6f: case 0x1e3f: case 0x1e41: case 0x1e43:
		      regmbc('m'); regmbc(0x1d6f); regmbc(0x1e3f);
		      regmbc(0x1e41); regmbc(0x1e43);
		      return;
	    case 'n': case 0xf1: case 0x144: case 0x146: case 0x148:
	    case 0x149: case 0x1f9: case 0x1d70: case 0x1d87:
	    case 0x1e45: case 0x1e47: case 0x1e49: case 0x1e4b:
	    case 0xa7a5:
		      regmbc('n'); regmbc(0xf1); regmbc(0x144);
		      regmbc(0x146); regmbc(0x148); regmbc(0x149);
		      regmbc(0x1f9); regmbc(0x1d70); regmbc(0x1d87);
		      regmbc(0x1e45); regmbc(0x1e47); regmbc(0x1e49);
		      regmbc(0x1e4b); regmbc(0xa7a5);
		      return;
	    case 'o': case 0xf2: case 0xf3: case 0xf4: case 0xf5:
	    case 0xf6: case 0xf8: case 0x14d: case 0x14f: case 0x151:
	    case 0x1a1: case 0x1d2: case 0x1eb: case 0x1ed: case 0x1ff:
	    case 0x20d: case 0x20f: case 0x22b: case 0x22d: case 0x22f:
	    case 0x231: case 0x275: case 0x1e4d: case 0x1e4f:
	    case 0x1e51: case 0x1e53: case 0x1ecd: case 0x1ecf:
	    case 0x1ed1: case 0x1ed3: case 0x1ed5: case 0x1ed7:
	    case 0x1ed9: case 0x1edb: case 0x1edd: case 0x1edf:
	    case 0x1ee1: case 0x1ee3:
		      regmbc('o'); regmbc(0xf2); regmbc(0xf3);
		      regmbc(0xf4); regmbc(0xf5); regmbc(0xf6);
		      regmbc(0xf8); regmbc(0x14d); regmbc(0x14f);
		      regmbc(0x151); regmbc(0x1a1); regmbc(0x1d2);
		      regmbc(0x1eb); regmbc(0x1ed); regmbc(0x1ff);
		      regmbc(0x20d); regmbc(0x20f); regmbc(0x22b);
		      regmbc(0x22d); regmbc(0x22f); regmbc(0x231);
		      regmbc(0x275); regmbc(0x1e4d); regmbc(0x1e4f);
		      regmbc(0x1e51); regmbc(0x1e53); regmbc(0x1ecd);
		      regmbc(0x1ecf); regmbc(0x1ed1); regmbc(0x1ed3);
		      regmbc(0x1ed5); regmbc(0x1ed7); regmbc(0x1ed9);
		      regmbc(0x1edb); regmbc(0x1edd); regmbc(0x1edf);
		      regmbc(0x1ee1); regmbc(0x1ee3);
		      return;
	    case 'p': case 0x1a5: case 0x1d71: case 0x1d88: case 0x1d7d:
	    case 0x1e55: case 0x1e57:
		      regmbc('p'); regmbc(0x1a5); regmbc(0x1d71);
		      regmbc(0x1d7d); regmbc(0x1d88); regmbc(0x1e55);
		      regmbc(0x1e57);
		      return;
	    case 'q': case 0x24b: case 0x2a0:
		      regmbc('q'); regmbc(0x24b); regmbc(0x2a0);
		      return;
	    case 'r': case 0x155: case 0x157: case 0x159: case 0x211:
	    case 0x213: case 0x24d: case 0x27d: case 0x1d72: case 0x1d73:
	    case 0x1d89: case 0x1e59: case 0x1e5b: case 0x1e5d: case 0x1e5f:
	    case 0xa7a7:
		      regmbc('r'); regmbc(0x155); regmbc(0x157);
		      regmbc(0x159); regmbc(0x211); regmbc(0x213);
		      regmbc(0x24d); regmbc(0x1d72); regmbc(0x1d73);
		      regmbc(0x1d89); regmbc(0x1e59); regmbc(0x27d);
		      regmbc(0x1e5b); regmbc(0x1e5d); regmbc(0x1e5f);
		      regmbc(0xa7a7);
		      return;
	    case 's': case 0x15b: case 0x15d: case 0x15f: case 0x161:
	    case 0x1e61: case 0x219: case 0x23f: case 0x1d74: case 0x1d8a:
	    case 0x1e63: case 0x1e65: case 0x1e67: case 0x1e69: case 0xa7a9:
		      regmbc('s'); regmbc(0x15b); regmbc(0x15d);
		      regmbc(0x15f); regmbc(0x161); regmbc(0x23f);
		      regmbc(0x219); regmbc(0x1d74); regmbc(0x1d8a);
		      regmbc(0x1e61); regmbc(0x1e63); regmbc(0x1e65);
		      regmbc(0x1e67); regmbc(0x1e69); regmbc(0xa7a9);
		      return;
	    case 't': case 0x163: case 0x165: case 0x167: case 0x1ab:
	    case 0x1ad: case 0x21b: case 0x288: case 0x1d75: case 0x1e6b:
	    case 0x1e6d: case 0x1e6f: case 0x1e71: case 0x1e97: case 0x2c66:
		      regmbc('t'); regmbc(0x163); regmbc(0x165);
		      regmbc(0x167); regmbc(0x1ab); regmbc(0x21b);
		      regmbc(0x1ad); regmbc(0x288); regmbc(0x1d75);
		      regmbc(0x1e6b); regmbc(0x1e6d); regmbc(0x1e6f);
		      regmbc(0x1e71); regmbc(0x1e97); regmbc(0x2c66);
		      return;
	    case 'u': case 0xf9: case 0xfa: case 0xfb: case 0xfc:
	    case 0x169: case 0x16b: case 0x16d: case 0x16f:
	    case 0x171: case 0x173: case 0x1b0: case 0x1d4:
	    case 0x1d6: case 0x1d8: case 0x1da: case 0x1dc:
	    case 0x215: case 0x217: case 0x289: case 0x1e73:
	    case 0x1d7e: case 0x1d99: case 0x1e75: case 0x1e77:
	    case 0x1e79: case 0x1e7b: case 0x1ee5: case 0x1ee7:
	    case 0x1ee9: case 0x1eeb: case 0x1eed: case 0x1eef:
	    case 0x1ef1:
		      regmbc('u'); regmbc(0xf9); regmbc(0xfa);
		      regmbc(0xfb); regmbc(0xfc); regmbc(0x169);
		      regmbc(0x16b); regmbc(0x16d); regmbc(0x16f);
		      regmbc(0x171); regmbc(0x173); regmbc(0x1d6);
		      regmbc(0x1d8); regmbc(0x1da); regmbc(0x1dc);
		      regmbc(0x215); regmbc(0x217); regmbc(0x1b0);
		      regmbc(0x1d4); regmbc(0x289); regmbc(0x1d7e);
		      regmbc(0x1d99); regmbc(0x1e73); regmbc(0x1e75);
		      regmbc(0x1e77); regmbc(0x1e79); regmbc(0x1e7b);
		      regmbc(0x1ee5); regmbc(0x1ee7); regmbc(0x1ee9);
		      regmbc(0x1eeb); regmbc(0x1eed); regmbc(0x1eef);
		      regmbc(0x1ef1);
		      return;
	    case 'v': case 0x28b: case 0x1d8c: case 0x1e7d: case 0x1e7f:
		      regmbc('v'); regmbc(0x28b); regmbc(0x1d8c);
		      regmbc(0x1e7d); regmbc(0x1e7f);
		      return;
	    case 'w': case 0x175: case 0x1e81: case 0x1e83:
	    case 0x1e85: case 0x1e87: case 0x1e89: case 0x1e98:
		      regmbc('w'); regmbc(0x175); regmbc(0x1e81);
		      regmbc(0x1e83); regmbc(0x1e85); regmbc(0x1e87);
		      regmbc(0x1e89); regmbc(0x1e98);
		      return;
	    case 'x': case 0x1e8b: case 0x1e8d:
		      regmbc('x'); regmbc(0x1e8b); regmbc(0x1e8d);
		      return;
	    case 'y': case 0xfd: case 0xff: case 0x177: case 0x1b4:
	    case 0x233: case 0x24f: case 0x1e8f: case 0x1e99: case 0x1ef3:
	    case 0x1ef5: case 0x1ef7: case 0x1ef9:
		      regmbc('y'); regmbc(0xfd); regmbc(0xff);
		      regmbc(0x177); regmbc(0x1b4); regmbc(0x233);
		      regmbc(0x24f); regmbc(0x1e8f); regmbc(0x1e99);
		      regmbc(0x1ef3); regmbc(0x1ef5); regmbc(0x1ef7);
		      regmbc(0x1ef9);
		      return;
	    case 'z': case 0x17a: case 0x17c: case 0x17e: case 0x1b6:
	    case 0x1d76: case 0x1d8e: case 0x1e91: case 0x1e93:
	    case 0x1e95: case 0x2c6c:
		      regmbc('z'); regmbc(0x17a); regmbc(0x17c);
		      regmbc(0x17e); regmbc(0x1b6); regmbc(0x1d76);
		      regmbc(0x1d8e); regmbc(0x1e91); regmbc(0x1e93);
		      regmbc(0x1e95); regmbc(0x2c6c);
		      return;
	}
    }
    regmbc(c);
}


    static char_u *
regnode(int op)
{
    char_u  *ret;

    ret = regcode;
    if (ret == JUST_CALC_SIZE)
	regsize += 3;
    else
    {
	*regcode++ = op;
	*regcode++ = NUL;		
	*regcode++ = NUL;
    }
    return ret;
}


    static char_u *
re_put_long(char_u *p, long_u val)
{
    *p++ = (char_u) ((val >> 24) & 0377);
    *p++ = (char_u) ((val >> 16) & 0377);
    *p++ = (char_u) ((val >> 8) & 0377);
    *p++ = (char_u) (val & 0377);
    return p;
}


    static char_u *
regnext(char_u *p)
{
    int	    offset;

    if (p == JUST_CALC_SIZE || reg_toolong)
	return NULL;

    offset = NEXT(p);
    if (offset == 0)
	return NULL;

    if (OP(p) == BACK)
	return p - offset;
    else
	return p + offset;
}


    static void
regtail(char_u *p, char_u *val)
{
    char_u	*scan;
    char_u	*temp;
    int		offset;

    if (p == JUST_CALC_SIZE)
	return;

    
    scan = p;
    for (;;)
    {
	temp = regnext(scan);
	if (temp == NULL)
	    break;
	scan = temp;
    }

    if (OP(scan) == BACK)
	offset = (int)(scan - val);
    else
	offset = (int)(val - scan);
    
    
    
    if (offset > 0xffff)
	reg_toolong = TRUE;
    else
    {
	*(scan + 1) = (char_u) (((unsigned)offset >> 8) & 0377);
	*(scan + 2) = (char_u) (offset & 0377);
    }
}


    static void
regoptail(char_u *p, char_u *val)
{
    
    if (p == NULL || p == JUST_CALC_SIZE
	    || (OP(p) != BRANCH
		&& (OP(p) < BRACE_COMPLEX || OP(p) > BRACE_COMPLEX + 9)))
	return;
    regtail(OPERAND(p), val);
}


    static void
reginsert(int op, char_u *opnd)
{
    char_u	*src;
    char_u	*dst;
    char_u	*place;

    if (regcode == JUST_CALC_SIZE)
    {
	regsize += 3;
	return;
    }
    src = regcode;
    regcode += 3;
    dst = regcode;
    while (src > opnd)
	*--dst = *--src;

    place = opnd;		
    *place++ = op;
    *place++ = NUL;
    *place = NUL;
}


    static void
reginsert_nr(int op, int val, char_u *opnd)
{
    char_u	*src;
    char_u	*dst;
    char_u	*place;

    if (regcode == JUST_CALC_SIZE)
    {
	regsize += 7;
	return;
    }
    src = regcode;
    regcode += 7;
    dst = regcode;
    while (src > opnd)
	*--dst = *--src;

    place = opnd;		
    *place++ = op;
    *place++ = NUL;
    *place++ = NUL;
    re_put_long(place, (long_u)val);
}


    static void
reginsert_limits(
    int		op,
    int	minval,
    int	maxval,
    char_u	*opnd)
{
    char_u	*src;
    char_u	*dst;
    char_u	*place;

    if (regcode == JUST_CALC_SIZE)
    {
	regsize += 11;
	return;
    }
    src = regcode;
    regcode += 11;
    dst = regcode;
    while (src > opnd)
	*--dst = *--src;

    place = opnd;		
    *place++ = op;
    *place++ = NUL;
    *place++ = NUL;
    place = re_put_long(place, (long_u)minval);
    place = re_put_long(place, (long_u)maxval);
    regtail(opnd, place);
}


    static int
seen_endbrace(int refnum)
{
    if (!had_endbrace[refnum])
    {
	char_u *p;

	
	
	for (p = regparse; *p != NUL; ++p)
	    if (p[0] == '@' && p[1] == '<' && (p[2] == '!' || p[2] == '='))
		break;
	if (*p == NUL)
	{
	    emsg(_(e_illegal_back_reference));
	    rc_did_emsg = TRUE;
	    return FALSE;
	}
    }
    return TRUE;
}


    static char_u *
regatom(int *flagp)
{
    char_u	    *ret;
    int		    flags;
    int		    c;
    char_u	    *p;
    int		    extra = 0;
    int		    save_prev_at_start = prev_at_start;

    *flagp = WORST;		

    c = getchr();
    switch (c)
    {
      case Magic('^'):
	ret = regnode(BOL);
	break;

      case Magic('$'):
	ret = regnode(EOL);
#if defined(FEAT_SYN_HL) || defined(PROTO)
	had_eol = TRUE;
#endif
	break;

      case Magic('<'):
	ret = regnode(BOW);
	break;

      case Magic('>'):
	ret = regnode(EOW);
	break;

      case Magic('_'):
	c = no_Magic(getchr());
	if (c == '^')		
	{
	    ret = regnode(BOL);
	    break;
	}
	if (c == '$')		
	{
	    ret = regnode(EOL);
#if defined(FEAT_SYN_HL) || defined(PROTO)
	    had_eol = TRUE;
#endif
	    break;
	}

	extra = ADD_NL;
	*flagp |= HASNL;

	
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
	    EMSG_RET_NULL(_(e_invalid_use_of_underscore));

	
	
	if (enc_utf8 && c == Magic('.') && utf_iscomposing(peekchr()))
	{
	    c = getchr();
	    goto do_multibyte;
	}
	ret = regnode(classcodes[p - classchars] + extra);
	*flagp |= HASWIDTH | SIMPLE;
	break;

      case Magic('n'):
	if (reg_string)
	{
	    
	    ret = regnode(EXACTLY);
	    regc(NL);
	    regc(NUL);
	    *flagp |= HASWIDTH | SIMPLE;
	}
	else
	{
	    
	    ret = regnode(NEWL);
	    *flagp |= HASWIDTH | HASNL;
	}
	break;

      case Magic('('):
	if (one_exactly)
	    EMSG_ONE_RET_NULL;
	ret = reg(REG_PAREN, &flags);
	if (ret == NULL)
	    return NULL;
	*flagp |= flags & (HASWIDTH | SPSTART | HASNL | HASLOOKBH);
	break;

      case NUL:
      case Magic('|'):
      case Magic('&'):
      case Magic(')'):
	if (one_exactly)
	    EMSG_ONE_RET_NULL;
	
	IEMSG_RET_NULL(e_internal_error_in_regexp);
	

      case Magic('='):
      case Magic('?'):
      case Magic('+'):
      case Magic('@'):
      case Magic('{'):
      case Magic('*'):
	c = no_Magic(c);
	EMSG3_RET_NULL(_(e_str_chr_follows_nothing),
		(c == '*' ? reg_magic >= MAGIC_ON : reg_magic == MAGIC_ALL), c);
	

      case Magic('~'):		
	    if (reg_prev_sub != NULL)
	    {
		char_u	    *lp;

		ret = regnode(EXACTLY);
		lp = reg_prev_sub;
		while (*lp != NUL)
		    regc(*lp++);
		regc(NUL);
		if (*reg_prev_sub != NUL)
		{
		    *flagp |= HASWIDTH;
		    if ((lp - reg_prev_sub) == 1)
			*flagp |= SIMPLE;
		}
	    }
	    else
		EMSG_RET_NULL(_(e_no_previous_substitute_regular_expression));
	    break;

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
		int		    refnum;

		refnum = c - Magic('0');
		if (!seen_endbrace(refnum))
		    return NULL;
		ret = regnode(BACKREF + refnum);
	    }
	    break;

      case Magic('z'):
	{
	    c = no_Magic(getchr());
	    switch (c)
	    {
#ifdef FEAT_SYN_HL
		case '(': if ((reg_do_extmatch & REX_SET) == 0)
			      EMSG_RET_NULL(_(e_z_not_allowed_here));
			  if (one_exactly)
			      EMSG_ONE_RET_NULL;
			  ret = reg(REG_ZPAREN, &flags);
			  if (ret == NULL)
			      return NULL;
			  *flagp |= flags & (HASWIDTH|SPSTART|HASNL|HASLOOKBH);
			  re_has_z = REX_SET;
			  break;

		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': if ((reg_do_extmatch & REX_USE) == 0)
			      EMSG_RET_NULL(_(e_z1_z9_not_allowed_here));
			  ret = regnode(ZREF + c - '0');
			  re_has_z = REX_USE;
			  break;
#endif

		case 's': ret = regnode(MOPEN + 0);
			  if (re_mult_next("\\zs") == FAIL)
			      return NULL;
			  break;

		case 'e': ret = regnode(MCLOSE + 0);
			  if (re_mult_next("\\ze") == FAIL)
			      return NULL;
			  break;

		default:  EMSG_RET_NULL(_(e_invalid_character_after_bsl_z));
	    }
	}
	break;

      case Magic('%'):
	{
	    c = no_Magic(getchr());
	    switch (c)
	    {
		
		case '(':
		    if (one_exactly)
			EMSG_ONE_RET_NULL;
		    ret = reg(REG_NPAREN, &flags);
		    if (ret == NULL)
			return NULL;
		    *flagp |= flags & (HASWIDTH | SPSTART | HASNL | HASLOOKBH);
		    break;

		
		
		case '^':
		    ret = regnode(RE_BOF);
		    break;

		case '$':
		    ret = regnode(RE_EOF);
		    break;

		case '#':
		    if (regparse[0] == '=' && regparse[1] >= 48
							  && regparse[1] <= 50)
		    {
			
			semsg(_(e_atom_engine_must_be_at_start_of_pattern),
								  regparse[1]);
			return FAIL;
		    }
		    ret = regnode(CURSOR);
		    break;

		case 'V':
		    ret = regnode(RE_VISUAL);
		    break;

		case 'C':
		    ret = regnode(RE_COMPOSING);
		    break;

		
		
		case '[':
			  if (one_exactly)	
			      EMSG_ONE_RET_NULL;
			  {
			      char_u	*lastbranch;
			      char_u	*lastnode = NULL;
			      char_u	*br;

			      ret = NULL;
			      while ((c = getchr()) != ']')
			      {
				  if (c == NUL)
				      EMSG2_RET_NULL(_(e_missing_sb_after_str),
						      reg_magic == MAGIC_ALL);
				  br = regnode(BRANCH);
				  if (ret == NULL)
				      ret = br;
				  else
				  {
				      regtail(lastnode, br);
				      if (reg_toolong)
					  return NULL;
				  }

				  ungetchr();
				  one_exactly = TRUE;
				  lastnode = regatom(flagp);
				  one_exactly = FALSE;
				  if (lastnode == NULL)
				      return NULL;
			      }
			      if (ret == NULL)
				  EMSG2_RET_NULL(_(e_empty_str_brackets),
						      reg_magic == MAGIC_ALL);
			      lastbranch = regnode(BRANCH);
			      br = regnode(NOTHING);
			      if (ret != JUST_CALC_SIZE)
			      {
				  regtail(lastnode, br);
				  regtail(lastbranch, br);
				  
				  
				  for (br = ret; br != lastnode; )
				  {
				      if (OP(br) == BRANCH)
				      {
					  regtail(br, lastbranch);
					  if (reg_toolong)
					      return NULL;
					  br = OPERAND(br);
				      }
				      else
					  br = regnext(br);
				  }
			      }
			      *flagp &= ~(HASWIDTH | SIMPLE);
			      break;
			  }

		case 'd':   
		case 'o':   
		case 'x':   
		case 'u':   
		case 'U':   
			  {
			      int i;

			      switch (c)
			      {
				  case 'd': i = getdecchrs(); break;
				  case 'o': i = getoctchrs(); break;
				  case 'x': i = gethexchrs(2); break;
				  case 'u': i = gethexchrs(4); break;
				  case 'U': i = gethexchrs(8); break;
				  default:  i = -1; break;
			      }

			      if (i < 0 || i > INT_MAX)
				  EMSG2_RET_NULL(
					    _(e_invalid_character_after_str_2),
						       reg_magic == MAGIC_ALL);
			      if (use_multibytecode(i))
				  ret = regnode(MULTIBYTECODE);
			      else
				  ret = regnode(EXACTLY);
			      if (i == 0)
				  regc(0x0a);
			      else
				  regmbc(i);
			      regc(NUL);
			      *flagp |= HASWIDTH;
			      break;
			  }

		default:
			  if (VIM_ISDIGIT(c) || c == '<' || c == '>'
						|| c == '\'' || c == '.')
			  {
			      long_u	n = 0;
			      int	cmp;
			      int	cur = FALSE;
			      int	got_digit = FALSE;

			      cmp = c;
			      if (cmp == '<' || cmp == '>')
				  c = getchr();
			      if (no_Magic(c) == '.')
			      {
				  cur = TRUE;
				  c = getchr();
			      }
			      while (VIM_ISDIGIT(c))
			      {
				  got_digit = TRUE;
				  n = n * 10 + (c - '0');
				  c = getchr();
			      }
			      if (no_Magic(c) == '\'' && n == 0)
			      {
				  
				  c = getchr();
				  ret = regnode(RE_MARK);
				  if (ret == JUST_CALC_SIZE)
				      regsize += 2;
				  else
				  {
				      *regcode++ = c;
				      *regcode++ = cmp;
				  }
				  break;
			      }
			      else if ((c == 'l' || c == 'c' || c == 'v')
					  && (cur || got_digit))
			      {
				  if (cur && n)
				  {
				    semsg(_(e_regexp_number_after_dot_pos_search_chr),
								  no_Magic(c));
				    rc_did_emsg = TRUE;
				    return NULL;
				  }
				  if (c == 'l')
				  {
				      if (cur)
					  n = curwin->w_cursor.lnum;
				      ret = regnode(RE_LNUM);
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
				      ret = regnode(RE_COL);
				  }
				  else
				  {
				      if (cur)
				      {
					  colnr_T vcol = 0;

					  getvvcol(curwin, &curwin->w_cursor,
							    NULL, NULL, &vcol);
					  ++vcol;
					  n = vcol;
				      }
				      ret = regnode(RE_VCOL);
				  }
				  if (ret == JUST_CALC_SIZE)
				      regsize += 5;
				  else
				  {
				      
				      
				      regcode = re_put_long(regcode, n);
				      *regcode++ = cmp;
				  }
				  break;
			      }
			  }

			  EMSG2_RET_NULL(_(e_invalid_character_after_str),
						      reg_magic == MAGIC_ALL);
	    }
	}
	break;

      case Magic('['):
collection:
	{
	    char_u	*lp;

	    
	    
	    lp = skip_anyof(regparse);
	    if (*lp == ']')	
	    {
		int	startc = -1;	
		int	endc;

		
		
		if (*regparse == '^')	    
		{
		    ret = regnode(ANYBUT + extra);
		    regparse++;
		}
		else
		    ret = regnode(ANYOF + extra);

		
		if (*regparse == ']' || *regparse == '-')
		{
		    startc = *regparse;
		    regc(*regparse++);
		}

		while (*regparse != NUL && *regparse != ']')
		{
		    if (*regparse == '-')
		    {
			++regparse;
			
			
			if (*regparse == ']' || *regparse == NUL
				|| startc == -1
				|| (regparse[0] == '\\' && regparse[1] == 'n'))
			{
			    regc('-');
			    startc = '-';	
			}
			else
			{
			    
			    endc = 0;
			    if (*regparse == '[')
				endc = get_coll_element(&regparse);
			    if (endc == 0)
			    {
				if (has_mbyte)
				    endc = mb_ptr2char_adv(&regparse);
				else
				    endc = *regparse++;
			    }

			    
			    if (endc == '\\' && !reg_cpo_lit && !reg_cpo_bsl)
				endc = coll_get_char();

			    if (startc > endc)
				EMSG_RET_NULL(_(e_reverse_range_in_character_class));
			    if (has_mbyte && ((*mb_char2len)(startc) > 1
						 || (*mb_char2len)(endc) > 1))
			    {
				
				if (endc > startc + 256)
				    EMSG_RET_NULL(_(e_range_too_large_in_character_class));
				while (++startc <= endc)
				    regmbc(startc);
			    }
			    else
			    {
				while (++startc <= endc)
				    regc(startc);
			    }
			    startc = -1;
			}
		    }
		    
		    
		    
		    
		    else if (*regparse == '\\'
			    && !reg_cpo_bsl
			    && (vim_strchr(REGEXP_INRANGE, regparse[1]) != NULL
				|| (!reg_cpo_lit
				    && vim_strchr(REGEXP_ABBR,
						       regparse[1]) != NULL)))
		    {
			regparse++;
			if (*regparse == 'n')
			{
			    
			    if (ret != JUST_CALC_SIZE)
			    {
				
				
				if (*ret == ANYOF)
				{
				    *ret = ANYOF + ADD_NL;
				    *flagp |= HASNL;
				}
				
			    }
			    regparse++;
			    startc = -1;
			}
			else if (*regparse == 'd'
				|| *regparse == 'o'
				|| *regparse == 'x'
				|| *regparse == 'u'
				|| *regparse == 'U')
			{
			    startc = coll_get_char();
			    if (startc == 0)
				regc(0x0a);
			    else
				regmbc(startc);
			}
			else
			{
			    startc = backslash_trans(*regparse++);
			    regc(startc);
			}
		    }
		    else if (*regparse == '[')
		    {
			int c_class;
			int cu;

			c_class = get_char_class(&regparse);
			startc = -1;
			
			switch (c_class)
			{
			    case CLASS_NONE:
				c_class = get_equi_class(&regparse);
				if (c_class != 0)
				{
				    
				    reg_equi_class(c_class);
				}
				else if ((c_class =
					    get_coll_element(&regparse)) != 0)
				{
				    
				    regmbc(c_class);
				}
				else
				{
				    
				    startc = *regparse++;
				    regc(startc);
				}
				break;
			    case CLASS_ALNUM:
				for (cu = 1; cu < 128; cu++)
				    if (isalnum(cu))
					regmbc(cu);
				break;
			    case CLASS_ALPHA:
				for (cu = 1; cu < 128; cu++)
				    if (isalpha(cu))
					regmbc(cu);
				break;
			    case CLASS_BLANK:
				regc(' ');
				regc('\t');
				break;
			    case CLASS_CNTRL:
				for (cu = 1; cu <= 127; cu++)
				    if (iscntrl(cu))
					regmbc(cu);
				break;
			    case CLASS_DIGIT:
				for (cu = 1; cu <= 127; cu++)
				    if (VIM_ISDIGIT(cu))
					regmbc(cu);
				break;
			    case CLASS_GRAPH:
				for (cu = 1; cu <= 127; cu++)
				    if (isgraph(cu))
					regmbc(cu);
				break;
			    case CLASS_LOWER:
				for (cu = 1; cu <= 255; cu++)
				    if (MB_ISLOWER(cu) && cu != 170
								 && cu != 186)
					regmbc(cu);
				break;
			    case CLASS_PRINT:
				for (cu = 1; cu <= 255; cu++)
				    if (vim_isprintc(cu))
					regmbc(cu);
				break;
			    case CLASS_PUNCT:
				for (cu = 1; cu < 128; cu++)
				    if (ispunct(cu))
					regmbc(cu);
				break;
			    case CLASS_SPACE:
				for (cu = 9; cu <= 13; cu++)
				    regc(cu);
				regc(' ');
				break;
			    case CLASS_UPPER:
				for (cu = 1; cu <= 255; cu++)
				    if (MB_ISUPPER(cu))
					regmbc(cu);
				break;
			    case CLASS_XDIGIT:
				for (cu = 1; cu <= 255; cu++)
				    if (vim_isxdigit(cu))
					regmbc(cu);
				break;
			    case CLASS_TAB:
				regc('\t');
				break;
			    case CLASS_RETURN:
				regc('\r');
				break;
			    case CLASS_BACKSPACE:
				regc('\b');
				break;
			    case CLASS_ESCAPE:
				regc('\033');
				break;
			    case CLASS_IDENT:
				for (cu = 1; cu <= 255; cu++)
				    if (vim_isIDc(cu))
					regmbc(cu);
				break;
			    case CLASS_KEYWORD:
				for (cu = 1; cu <= 255; cu++)
				    if (reg_iswordc(cu))
					regmbc(cu);
				break;
			    case CLASS_FNAME:
				for (cu = 1; cu <= 255; cu++)
				    if (vim_isfilec(cu))
					regmbc(cu);
				break;
			}
		    }
		    else
		    {
			if (has_mbyte)
			{
			    int	len;

			    
			    
			    startc = mb_ptr2char(regparse);
			    len = (*mb_ptr2len)(regparse);
			    if (enc_utf8 && utf_char2len(startc) != len)
				startc = -1;	
			    while (--len >= 0)
				regc(*regparse++);
			}
			else
			{
			    startc = *regparse++;
			    regc(startc);
			}
		    }
		}
		regc(NUL);
		prevchr_len = 1;	
		if (*regparse != ']')
		    EMSG_RET_NULL(_(e_too_many_brackets));  
		skipchr();	    
		*flagp |= HASWIDTH | SIMPLE;
		break;
	    }
	    else if (reg_strict)
		EMSG2_RET_NULL(_(e_missing_rsb_after_str_lsb),
							reg_magic > MAGIC_OFF);
	}
	

      default:
	{
	    int		len;

	    
	    
	    if (use_multibytecode(c))
	    {
do_multibyte:
		ret = regnode(MULTIBYTECODE);
		regmbc(c);
		*flagp |= HASWIDTH | SIMPLE;
		break;
	    }

	    ret = regnode(EXACTLY);

	    
	    
	    
	    
	    
	    
	    
	    for (len = 0; c != NUL && (len == 0
			|| (re_multi_type(peekchr()) == NOT_MULTI
			    && !one_exactly
			    && !is_Magic(c))); ++len)
	    {
		c = no_Magic(c);
		if (has_mbyte)
		{
		    regmbc(c);
		    if (enc_utf8)
		    {
			int	l;

			
			for (;;)
			{
			    l = utf_ptr2len(regparse);
			    if (!UTF_COMPOSINGLIKE(regparse, regparse + l))
				break;
			    regmbc(utf_ptr2char(regparse));
			    skipchr();
			}
		    }
		}
		else
		    regc(c);
		c = getchr();
	    }
	    ungetchr();

	    regc(NUL);
	    *flagp |= HASWIDTH;
	    if (len == 1)
		*flagp |= SIMPLE;
	}
	break;
    }

    return ret;
}


    static char_u *
regpiece(int *flagp)
{
    char_u	    *ret;
    int		    op;
    char_u	    *next;
    int		    flags;
    int	    minval;
    int	    maxval;

    ret = regatom(&flags);
    if (ret == NULL)
	return NULL;

    op = peekchr();
    if (re_multi_type(op) == NOT_MULTI)
    {
	*flagp = flags;
	return ret;
    }
    
    *flagp = (WORST | SPSTART | (flags & (HASNL | HASLOOKBH)));

    skipchr();
    switch (op)
    {
	case Magic('*'):
	    if (flags & SIMPLE)
		reginsert(STAR, ret);
	    else
	    {
		
		reginsert(BRANCH, ret); 
		regoptail(ret, regnode(BACK));	
		regoptail(ret, ret);	
		regtail(ret, regnode(BRANCH));	
		regtail(ret, regnode(NOTHING)); 
	    }
	    break;

	case Magic('+'):
	    if (flags & SIMPLE)
		reginsert(PLUS, ret);
	    else
	    {
		
		next = regnode(BRANCH); 
		regtail(ret, next);
		regtail(regnode(BACK), ret);	
		regtail(next, regnode(BRANCH)); 
		regtail(ret, regnode(NOTHING)); 
	    }
	    *flagp = (WORST | HASWIDTH | (flags & (HASNL | HASLOOKBH)));
	    break;

	case Magic('@'):
	    {
		int	lop = END;
		int	nr;

		nr = getdecchrs();
		switch (no_Magic(getchr()))
		{
		    case '=': lop = MATCH; break;		  
		    case '!': lop = NOMATCH; break;		  
		    case '>': lop = SUBPAT; break;		  
		    case '<': switch (no_Magic(getchr()))
			      {
				  case '=': lop = BEHIND; break;   
				  case '!': lop = NOBEHIND; break; 
			      }
		}
		if (lop == END)
		    EMSG2_RET_NULL(_(e_invalid_character_after_str_at),
						      reg_magic == MAGIC_ALL);
		
		if (lop == BEHIND || lop == NOBEHIND)
		{
		    regtail(ret, regnode(BHPOS));
		    *flagp |= HASLOOKBH;
		}
		regtail(ret, regnode(END)); 
		if (lop == BEHIND || lop == NOBEHIND)
		{
		    if (nr < 0)
			nr = 0; 
		    reginsert_nr(lop, nr, ret);
		}
		else
		    reginsert(lop, ret);
		break;
	    }

	case Magic('?'):
	case Magic('='):
	    
	    reginsert(BRANCH, ret);		
	    regtail(ret, regnode(BRANCH));	
	    next = regnode(NOTHING);		
	    regtail(ret, next);
	    regoptail(ret, next);
	    break;

	case Magic('{'):
	    if (!read_limits(&minval, &maxval))
		return NULL;
	    if (flags & SIMPLE)
	    {
		reginsert(BRACE_SIMPLE, ret);
		reginsert_limits(BRACE_LIMITS, minval, maxval, ret);
	    }
	    else
	    {
		if (num_complex_braces >= 10)
		    EMSG2_RET_NULL(_(e_too_many_complex_str_curly),
						      reg_magic == MAGIC_ALL);
		reginsert(BRACE_COMPLEX + num_complex_braces, ret);
		regoptail(ret, regnode(BACK));
		regoptail(ret, ret);
		reginsert_limits(BRACE_LIMITS, minval, maxval, ret);
		++num_complex_braces;
	    }
	    if (minval > 0 && maxval > 0)
		*flagp = (HASWIDTH | (flags & (HASNL | HASLOOKBH)));
	    break;
    }
    if (re_multi_type(peekchr()) != NOT_MULTI)
    {
	
	if (peekchr() == Magic('*'))
	    EMSG2_RET_NULL(_(e_nested_str), reg_magic >= MAGIC_ON);
	EMSG3_RET_NULL(_(e_nested_str_chr), reg_magic == MAGIC_ALL,
							  no_Magic(peekchr()));
    }

    return ret;
}


    static char_u *
regconcat(int *flagp)
{
    char_u	*first = NULL;
    char_u	*chain = NULL;
    char_u	*latest;
    int		flags;
    int		cont = TRUE;

    *flagp = WORST;		

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
			    latest = regpiece(&flags);
			    if (latest == NULL || reg_toolong)
				return NULL;
			    *flagp |= flags & (HASWIDTH | HASNL | HASLOOKBH);
			    if (chain == NULL)	
				*flagp |= flags & SPSTART;
			    else
				regtail(chain, latest);
			    chain = latest;
			    if (first == NULL)
				first = latest;
			    break;
	}
    }
    if (first == NULL)		
	first = regnode(NOTHING);
    return first;
}


    static char_u *
regbranch(int *flagp)
{
    char_u	*ret;
    char_u	*chain = NULL;
    char_u	*latest;
    int		flags;

    *flagp = WORST | HASNL;		

    ret = regnode(BRANCH);
    for (;;)
    {
	latest = regconcat(&flags);
	if (latest == NULL)
	    return NULL;
	
	
	
	*flagp |= flags & (HASWIDTH | SPSTART | HASLOOKBH);
	
	
	*flagp &= ~HASNL | (flags & HASNL);
	if (chain != NULL)
	    regtail(chain, latest);
	if (peekchr() != Magic('&'))
	    break;
	skipchr();
	regtail(latest, regnode(END)); 
	if (reg_toolong)
	    break;
	reginsert(MATCH, latest);
	chain = latest;
    }

    return ret;
}


    static char_u *
reg(
    int		paren,	
    int		*flagp)
{
    char_u	*ret;
    char_u	*br;
    char_u	*ender;
    int		parno = 0;
    int		flags;

    *flagp = HASWIDTH;		

#ifdef FEAT_SYN_HL
    if (paren == REG_ZPAREN)
    {
	
	if (regnzpar >= NSUBEXP)
	    EMSG_RET_NULL(_(e_too_many_z));
	parno = regnzpar;
	regnzpar++;
	ret = regnode(ZOPEN + parno);
    }
    else
#endif
	if (paren == REG_PAREN)
    {
	
	if (regnpar >= NSUBEXP)
	    EMSG2_RET_NULL(_(e_too_many_str_open), reg_magic == MAGIC_ALL);
	parno = regnpar;
	++regnpar;
	ret = regnode(MOPEN + parno);
    }
    else if (paren == REG_NPAREN)
    {
	
	ret = regnode(NOPEN);
    }
    else
	ret = NULL;

    
    br = regbranch(&flags);
    if (br == NULL)
	return NULL;
    if (ret != NULL)
	regtail(ret, br);	
    else
	ret = br;
    
    
    
    if (!(flags & HASWIDTH))
	*flagp &= ~HASWIDTH;
    *flagp |= flags & (SPSTART | HASNL | HASLOOKBH);
    while (peekchr() == Magic('|'))
    {
	skipchr();
	br = regbranch(&flags);
	if (br == NULL || reg_toolong)
	    return NULL;
	regtail(ret, br);	
	if (!(flags & HASWIDTH))
	    *flagp &= ~HASWIDTH;
	*flagp |= flags & (SPSTART | HASNL | HASLOOKBH);
    }

    
    ender = regnode(
#ifdef FEAT_SYN_HL
	    paren == REG_ZPAREN ? ZCLOSE + parno :
#endif
	    paren == REG_PAREN ? MCLOSE + parno :
	    paren == REG_NPAREN ? NCLOSE : END);
    regtail(ret, ender);

    
    for (br = ret; br != NULL; br = regnext(br))
	regoptail(br, ender);

    
    if (paren != REG_NOPAREN && getchr() != Magic(')'))
    {
#ifdef FEAT_SYN_HL
	if (paren == REG_ZPAREN)
	    EMSG_RET_NULL(_(e_unmatched_z));
	else
#endif
	    if (paren == REG_NPAREN)
	    EMSG2_RET_NULL(_(e_unmatched_str_percent_open), reg_magic == MAGIC_ALL);
	else
	    EMSG2_RET_NULL(_(e_unmatched_str_open), reg_magic == MAGIC_ALL);
    }
    else if (paren == REG_NOPAREN && peekchr() != NUL)
    {
	if (curchr == Magic(')'))
	    EMSG2_RET_NULL(_(e_unmatched_str_close), reg_magic == MAGIC_ALL);
	else
	    EMSG_RET_NULL(_(e_trailing_characters));	
	
    }
    
    
    if (paren == REG_PAREN)
	had_endbrace[parno] = TRUE;	
    return ret;
}


    static regprog_T *
bt_regcomp(char_u *expr, int re_flags)
{
    bt_regprog_T    *r;
    char_u	*scan;
    char_u	*longest;
    int		len;
    int		flags;

    if (expr == NULL)
	IEMSG_RET_NULL(e_null_argument);

    init_class_tab();

    
    regcomp_start(expr, re_flags);
    regcode = JUST_CALC_SIZE;
    regc(REGMAGIC);
    if (reg(REG_NOPAREN, &flags) == NULL)
	return NULL;

    
    r = alloc(offsetof(bt_regprog_T, program) + regsize);
    if (r == NULL)
	return NULL;
    r->re_in_use = FALSE;

    
    regcomp_start(expr, re_flags);
    regcode = r->program;
    regc(REGMAGIC);
    if (reg(REG_NOPAREN, &flags) == NULL || reg_toolong)
    {
	vim_free(r);
	if (reg_toolong)
	    EMSG_RET_NULL(_(e_pattern_too_long));
	return NULL;
    }

    
    r->regstart = NUL;		
    r->reganch = 0;
    r->regmust = NULL;
    r->regmlen = 0;
    r->regflags = regflags;
    if (flags & HASNL)
	r->regflags |= RF_HASNL;
    if (flags & HASLOOKBH)
	r->regflags |= RF_LOOKBH;
#ifdef FEAT_SYN_HL
    
    r->reghasz = re_has_z;
#endif
    scan = r->program + 1;	
    if (OP(regnext(scan)) == END)   
    {
	scan = OPERAND(scan);

	
	if (OP(scan) == BOL || OP(scan) == RE_BOF)
	{
	    r->reganch++;
	    scan = regnext(scan);
	}

	if (OP(scan) == EXACTLY)
	{
	    if (has_mbyte)
		r->regstart = (*mb_ptr2char)(OPERAND(scan));
	    else
		r->regstart = *OPERAND(scan);
	}
	else if ((OP(scan) == BOW
		    || OP(scan) == EOW
		    || OP(scan) == NOTHING
		    || OP(scan) == MOPEN + 0 || OP(scan) == NOPEN
		    || OP(scan) == MCLOSE + 0 || OP(scan) == NCLOSE)
		 && OP(regnext(scan)) == EXACTLY)
	{
	    if (has_mbyte)
		r->regstart = (*mb_ptr2char)(OPERAND(regnext(scan)));
	    else
		r->regstart = *OPERAND(regnext(scan));
	}

	
	
	
	
	
	

	
	
	if ((flags & SPSTART || OP(scan) == BOW || OP(scan) == EOW)
							  && !(flags & HASNL))
	{
	    size_t  scanlen;

	    longest = NULL;
	    len = 0;
	    for (; scan != NULL; scan = regnext(scan))
	    {
		if (OP(scan) == EXACTLY)
		{
		    scanlen = STRLEN(OPERAND(scan));
		    if (scanlen >= (size_t)len)
		    {
			longest = OPERAND(scan);
			len = (int)scanlen;
		    }
		}
	    }
	    r->regmust = longest;
	    r->regmlen = len;
	}
    }
#ifdef BT_REGEXP_DUMP
    regdump(expr, r);
#endif
    r->engine = &bt_regengine;
    return (regprog_T *)r;
}

#if defined(FEAT_SYN_HL) || defined(PROTO)

    int
vim_regcomp_had_eol(void)
{
    return had_eol;
}
#endif


    static int
coll_get_char(void)
{
    int	nr = -1;

    switch (*regparse++)
    {
	case 'd': nr = getdecchrs(); break;
	case 'o': nr = getoctchrs(); break;
	case 'x': nr = gethexchrs(2); break;
	case 'u': nr = gethexchrs(4); break;
	case 'U': nr = gethexchrs(8); break;
    }
    if (nr < 0 || nr > INT_MAX)
    {
	
	
	--regparse;
	nr = '\\';
    }
    return nr;
}


    static void
bt_regfree(regprog_T *prog)
{
    vim_free(prog);
}

#define ADVANCE_REGINPUT() MB_PTR_ADV(rex.input)


static int	bl_minval;
static int	bl_maxval;


    static void
reg_save(regsave_T *save, garray_T *gap)
{
    if (REG_MULTI)
    {
	save->rs_u.pos.col = (colnr_T)(rex.input - rex.line);
	save->rs_u.pos.lnum = rex.lnum;
    }
    else
	save->rs_u.ptr = rex.input;
    save->rs_len = gap->ga_len;
}


    static void
reg_restore(regsave_T *save, garray_T *gap)
{
    if (REG_MULTI)
    {
	if (rex.lnum != save->rs_u.pos.lnum)
	{
	    
	    
	    rex.lnum = save->rs_u.pos.lnum;
	    rex.line = reg_getline(rex.lnum);
	}
	rex.input = rex.line + save->rs_u.pos.col;
    }
    else
	rex.input = save->rs_u.ptr;
    gap->ga_len = save->rs_len;
}


    static int
reg_save_equal(regsave_T *save)
{
    if (REG_MULTI)
	return rex.lnum == save->rs_u.pos.lnum
				  && rex.input == rex.line + save->rs_u.pos.col;
    return rex.input == save->rs_u.ptr;
}


#define save_se(savep, posp, pp) \
    REG_MULTI ? save_se_multi((savep), (posp)) : save_se_one((savep), (pp))


#define restore_se(savep, posp, pp) \
{ \
    if (REG_MULTI) \
	*(posp) = (savep)->se_u.pos; \
    else \
	*(pp) = (savep)->se_u.ptr; \
}


    static void
save_se_multi(save_se_T *savep, lpos_T *posp)
{
    savep->se_u.pos = *posp;
    posp->lnum = rex.lnum;
    posp->col = (colnr_T)(rex.input - rex.line);
}

    static void
save_se_one(save_se_T *savep, char_u **pp)
{
    savep->se_u.ptr = *pp;
    *pp = rex.input;
}


    static int
regrepeat(
    char_u	*p,
    int	maxcount)   
{
    int	count = 0;
    char_u	*scan;
    char_u	*opnd;
    int		mask;
    int		testval = 0;

    scan = rex.input;	    
    opnd = OPERAND(p);
    switch (OP(p))
    {
      case ANY:
      case ANY + ADD_NL:
	while (count < maxcount)
	{
	    
	    
	    while (*scan != NUL && count < maxcount)
	    {
		++count;
		MB_PTR_ADV(scan);
	    }
	    if (!REG_MULTI || !WITH_NL(OP(p)) || rex.lnum > rex.reg_maxline
				      || rex.reg_line_lbr || count == maxcount)
		break;
	    ++count;		
	    reg_nextline();
	    scan = rex.input;
	    if (got_int)
		break;
	}
	break;

      case IDENT:
      case IDENT + ADD_NL:
	testval = TRUE;
	
      case SIDENT:
      case SIDENT + ADD_NL:
	while (count < maxcount)
	{
	    if (vim_isIDc(PTR2CHAR(scan)) && (testval || !VIM_ISDIGIT(*scan)))
	    {
		MB_PTR_ADV(scan);
	    }
	    else if (*scan == NUL)
	    {
		if (!REG_MULTI || !WITH_NL(OP(p)) || rex.lnum > rex.reg_maxline
							   || rex.reg_line_lbr)
		    break;
		reg_nextline();
		scan = rex.input;
		if (got_int)
		    break;
	    }
	    else if (rex.reg_line_lbr && *scan == '\n' && WITH_NL(OP(p)))
		++scan;
	    else
		break;
	    ++count;
	}
	break;

      case KWORD:
      case KWORD + ADD_NL:
	testval = TRUE;
	
      case SKWORD:
      case SKWORD + ADD_NL:
	while (count < maxcount)
	{
	    if (vim_iswordp_buf(scan, rex.reg_buf)
					  && (testval || !VIM_ISDIGIT(*scan)))
	    {
		MB_PTR_ADV(scan);
	    }
	    else if (*scan == NUL)
	    {
		if (!REG_MULTI || !WITH_NL(OP(p)) || rex.lnum > rex.reg_maxline
							   || rex.reg_line_lbr)
		    break;
		reg_nextline();
		scan = rex.input;
		if (got_int)
		    break;
	    }
	    else if (rex.reg_line_lbr && *scan == '\n' && WITH_NL(OP(p)))
		++scan;
	    else
		break;
	    ++count;
	}
	break;

      case FNAME:
      case FNAME + ADD_NL:
	testval = TRUE;
	
      case SFNAME:
      case SFNAME + ADD_NL:
	while (count < maxcount)
	{
	    if (vim_isfilec(PTR2CHAR(scan)) && (testval || !VIM_ISDIGIT(*scan)))
	    {
		MB_PTR_ADV(scan);
	    }
	    else if (*scan == NUL)
	    {
		if (!REG_MULTI || !WITH_NL(OP(p)) || rex.lnum > rex.reg_maxline
							   || rex.reg_line_lbr)
		    break;
		reg_nextline();
		scan = rex.input;
		if (got_int)
		    break;
	    }
	    else if (rex.reg_line_lbr && *scan == '\n' && WITH_NL(OP(p)))
		++scan;
	    else
		break;
	    ++count;
	}
	break;

      case PRINT:
      case PRINT + ADD_NL:
	testval = TRUE;
	
      case SPRINT:
      case SPRINT + ADD_NL:
	while (count < maxcount)
	{
	    if (*scan == NUL)
	    {
		if (!REG_MULTI || !WITH_NL(OP(p)) || rex.lnum > rex.reg_maxline
							   || rex.reg_line_lbr)
		    break;
		reg_nextline();
		scan = rex.input;
		if (got_int)
		    break;
	    }
	    else if (vim_isprintc(PTR2CHAR(scan)) == 1
					  && (testval || !VIM_ISDIGIT(*scan)))
	    {
		MB_PTR_ADV(scan);
	    }
	    else if (rex.reg_line_lbr && *scan == '\n' && WITH_NL(OP(p)))
		++scan;
	    else
		break;
	    ++count;
	}
	break;

      case WHITE:
      case WHITE + ADD_NL:
	testval = mask = RI_WHITE;
do_class:
	while (count < maxcount)
	{
	    int		l;

	    if (*scan == NUL)
	    {
		if (!REG_MULTI || !WITH_NL(OP(p)) || rex.lnum > rex.reg_maxline
							   || rex.reg_line_lbr)
		    break;
		reg_nextline();
		scan = rex.input;
		if (got_int)
		    break;
	    }
	    else if (has_mbyte && (l = (*mb_ptr2len)(scan)) > 1)
	    {
		if (testval != 0)
		    break;
		scan += l;
	    }
	    else if ((class_tab[*scan] & mask) == testval)
		++scan;
	    else if (rex.reg_line_lbr && *scan == '\n' && WITH_NL(OP(p)))
		++scan;
	    else
		break;
	    ++count;
	}
	break;

      case NWHITE:
      case NWHITE + ADD_NL:
	mask = RI_WHITE;
	goto do_class;
      case DIGIT:
      case DIGIT + ADD_NL:
	testval = mask = RI_DIGIT;
	goto do_class;
      case NDIGIT:
      case NDIGIT + ADD_NL:
	mask = RI_DIGIT;
	goto do_class;
      case HEX:
      case HEX + ADD_NL:
	testval = mask = RI_HEX;
	goto do_class;
      case NHEX:
      case NHEX + ADD_NL:
	mask = RI_HEX;
	goto do_class;
      case OCTAL:
      case OCTAL + ADD_NL:
	testval = mask = RI_OCTAL;
	goto do_class;
      case NOCTAL:
      case NOCTAL + ADD_NL:
	mask = RI_OCTAL;
	goto do_class;
      case WORD:
      case WORD + ADD_NL:
	testval = mask = RI_WORD;
	goto do_class;
      case NWORD:
      case NWORD + ADD_NL:
	mask = RI_WORD;
	goto do_class;
      case HEAD:
      case HEAD + ADD_NL:
	testval = mask = RI_HEAD;
	goto do_class;
      case NHEAD:
      case NHEAD + ADD_NL:
	mask = RI_HEAD;
	goto do_class;
      case ALPHA:
      case ALPHA + ADD_NL:
	testval = mask = RI_ALPHA;
	goto do_class;
      case NALPHA:
      case NALPHA + ADD_NL:
	mask = RI_ALPHA;
	goto do_class;
      case LOWER:
      case LOWER + ADD_NL:
	testval = mask = RI_LOWER;
	goto do_class;
      case NLOWER:
      case NLOWER + ADD_NL:
	mask = RI_LOWER;
	goto do_class;
      case UPPER:
      case UPPER + ADD_NL:
	testval = mask = RI_UPPER;
	goto do_class;
      case NUPPER:
      case NUPPER + ADD_NL:
	mask = RI_UPPER;
	goto do_class;

      case EXACTLY:
	{
	    int	    cu, cl;

	    
	    
	    
	    if (rex.reg_ic)
	    {
		cu = MB_TOUPPER(*opnd);
		cl = MB_TOLOWER(*opnd);
		while (count < maxcount && (*scan == cu || *scan == cl))
		{
		    count++;
		    scan++;
		}
	    }
	    else
	    {
		cu = *opnd;
		while (count < maxcount && *scan == cu)
		{
		    count++;
		    scan++;
		}
	    }
	    break;
	}

      case MULTIBYTECODE:
	{
	    int		i, len, cf = 0;

	    
	    
	    if ((len = (*mb_ptr2len)(opnd)) > 1)
	    {
		if (rex.reg_ic && enc_utf8)
		    cf = utf_fold(utf_ptr2char(opnd));
		while (count < maxcount && (*mb_ptr2len)(scan) >= len)
		{
		    for (i = 0; i < len; ++i)
			if (opnd[i] != scan[i])
			    break;
		    if (i < len && (!rex.reg_ic || !enc_utf8
					|| utf_fold(utf_ptr2char(scan)) != cf))
			break;
		    scan += len;
		    ++count;
		}
	    }
	}
	break;

      case ANYOF:
      case ANYOF + ADD_NL:
	testval = TRUE;
	

      case ANYBUT:
      case ANYBUT + ADD_NL:
	while (count < maxcount)
	{
	    int len;

	    if (*scan == NUL)
	    {
		if (!REG_MULTI || !WITH_NL(OP(p)) || rex.lnum > rex.reg_maxline
							   || rex.reg_line_lbr)
		    break;
		reg_nextline();
		scan = rex.input;
		if (got_int)
		    break;
	    }
	    else if (rex.reg_line_lbr && *scan == '\n' && WITH_NL(OP(p)))
		++scan;
	    else if (has_mbyte && (len = (*mb_ptr2len)(scan)) > 1)
	    {
		if ((cstrchr(opnd, (*mb_ptr2char)(scan)) == NULL) == testval)
		    break;
		scan += len;
	    }
	    else
	    {
		if ((cstrchr(opnd, *scan) == NULL) == testval)
		    break;
		++scan;
	    }
	    ++count;
	}
	break;

      case NEWL:
	while (count < maxcount
		&& ((*scan == NUL && rex.lnum <= rex.reg_maxline
				       && !rex.reg_line_lbr && REG_MULTI)
		    || (*scan == '\n' && rex.reg_line_lbr)))
	{
	    count++;
	    if (rex.reg_line_lbr)
		ADVANCE_REGINPUT();
	    else
		reg_nextline();
	    scan = rex.input;
	    if (got_int)
		break;
	}
	break;

      default:			
	iemsg(e_corrupted_regexp_program);
#ifdef DEBUG
	printf("Called regrepeat with op code %d\n", OP(p));
#endif
	break;
    }

    rex.input = scan;

    return (int)count;
}


    static regitem_T *
regstack_push(regstate_T state, char_u *scan)
{
    regitem_T	*rp;

    if ((int)((unsigned)regstack.ga_len >> 10) >= p_mmp)
    {
	emsg(_(e_pattern_uses_more_memory_than_maxmempattern));
	return NULL;
    }
    if (ga_grow(&regstack, sizeof(regitem_T)) == FAIL)
	return NULL;

    rp = (regitem_T *)((char *)regstack.ga_data + regstack.ga_len);
    rp->rs_state = state;
    rp->rs_scan = scan;

    regstack.ga_len += sizeof(regitem_T);
    return rp;
}


    static void
regstack_pop(char_u **scan)
{
    regitem_T	*rp;

    rp = (regitem_T *)((char *)regstack.ga_data + regstack.ga_len) - 1;
    *scan = rp->rs_scan;

    regstack.ga_len -= sizeof(regitem_T);
}

#ifdef FEAT_RELTIME

    static int
bt_did_time_out(int *timed_out)
{
    if (*timeout_flag)
    {
	if (timed_out != NULL)
	{
# ifdef FEAT_EVAL
	    if (!*timed_out)
		ch_log(NULL, "BT regexp timed out");
# endif
	    *timed_out = TRUE;
	}
	return TRUE;
    }
    return FALSE;
}
#endif


    static void
save_subexpr(regbehind_T *bp)
{
    int i;

    
    
    bp->save_need_clear_subexpr = rex.need_clear_subexpr;
    if (rex.need_clear_subexpr)
	return;

    for (i = 0; i < NSUBEXP; ++i)
    {
	if (REG_MULTI)
	{
	    bp->save_start[i].se_u.pos = rex.reg_startpos[i];
	    bp->save_end[i].se_u.pos = rex.reg_endpos[i];
	}
	else
	{
	    bp->save_start[i].se_u.ptr = rex.reg_startp[i];
	    bp->save_end[i].se_u.ptr = rex.reg_endp[i];
	}
    }
}


    static void
restore_subexpr(regbehind_T *bp)
{
    int i;

    
    rex.need_clear_subexpr = bp->save_need_clear_subexpr;
    if (rex.need_clear_subexpr)
	return;

    for (i = 0; i < NSUBEXP; ++i)
    {
	if (REG_MULTI)
	{
	    rex.reg_startpos[i] = bp->save_start[i].se_u.pos;
	    rex.reg_endpos[i] = bp->save_end[i].se_u.pos;
	}
	else
	{
	    rex.reg_startp[i] = bp->save_start[i].se_u.ptr;
	    rex.reg_endp[i] = bp->save_end[i].se_u.ptr;
	}
    }
}


    static int
regmatch(
    char_u	*scan,		    
    int		*timed_out UNUSED)  
{
  char_u	*next;		
  int		op;
  int		c;
  regitem_T	*rp;
  int		no;
  int		status;		

  
  
  regstack.ga_len = 0;
  backpos.ga_len = 0;

  
  for (;;)
  {
    
    
    fast_breakcheck();

#ifdef DEBUG
    if (scan != NULL && regnarrate)
    {
	mch_errmsg((char *)regprop(scan));
	mch_errmsg("(\n");
    }
#endif

    
    
    for (;;)
    {
	if (got_int || scan == NULL)
	{
	    status = RA_FAIL;
	    break;
	}
#ifdef FEAT_RELTIME
	if (bt_did_time_out(timed_out))
	{
	    status = RA_FAIL;
	    break;
	}
#endif
	status = RA_CONT;

#ifdef DEBUG
	if (regnarrate)
	{
	    mch_errmsg((char *)regprop(scan));
	    mch_errmsg("...\n");
# ifdef FEAT_SYN_HL
	    if (re_extmatch_in != NULL)
	    {
		int i;

		mch_errmsg(_("External submatches:\n"));
		for (i = 0; i < NSUBEXP; i++)
		{
		    mch_errmsg("    \"");
		    if (re_extmatch_in->matches[i] != NULL)
			mch_errmsg((char *)re_extmatch_in->matches[i]);
		    mch_errmsg("\"\n");
		}
	    }
# endif
	}
#endif
	next = regnext(scan);

	op = OP(scan);
	
	if (!rex.reg_line_lbr && WITH_NL(op) && REG_MULTI
			     && *rex.input == NUL && rex.lnum <= rex.reg_maxline)
	{
	    reg_nextline();
	}
	else if (rex.reg_line_lbr && WITH_NL(op) && *rex.input == '\n')
	{
	    ADVANCE_REGINPUT();
	}
	else
	{
	  if (WITH_NL(op))
	      op -= ADD_NL;
	  if (has_mbyte)
	      c = (*mb_ptr2char)(rex.input);
	  else
	      c = *rex.input;
	  switch (op)
	  {
	  case BOL:
	    if (rex.input != rex.line)
		status = RA_NOMATCH;
	    break;

	  case EOL:
	    if (c != NUL)
		status = RA_NOMATCH;
	    break;

	  case RE_BOF:
	    
	    
	    
	    if (rex.lnum != 0 || rex.input != rex.line
				       || (REG_MULTI && rex.reg_firstlnum > 1))
		status = RA_NOMATCH;
	    break;

	  case RE_EOF:
	    if (rex.lnum != rex.reg_maxline || c != NUL)
		status = RA_NOMATCH;
	    break;

	  case CURSOR:
	    
	    
	    if (rex.reg_win == NULL
		    || (rex.lnum + rex.reg_firstlnum
						 != rex.reg_win->w_cursor.lnum)
		    || ((colnr_T)(rex.input - rex.line)
						 != rex.reg_win->w_cursor.col))
		status = RA_NOMATCH;
	    break;

	  case RE_MARK:
	    
	    {
		int	mark = OPERAND(scan)[0];
		int	cmp = OPERAND(scan)[1];
		pos_T	*pos;
		size_t	col = REG_MULTI ? rex.input - rex.line : 0;

		pos = getmark_buf(rex.reg_buf, mark, FALSE);

		
		if (REG_MULTI)
		{
		    rex.line = reg_getline(rex.lnum);
		    rex.input = rex.line + col;
		}

		if (pos == NULL		     
			|| pos->lnum <= 0)   
		{
		    status = RA_NOMATCH;
		}
		else
		{
		    colnr_T pos_col = pos->lnum == rex.lnum + rex.reg_firstlnum
							  && pos->col == MAXCOL
				      ? reg_getline_len(pos->lnum - rex.reg_firstlnum)
				      : pos->col;

		    if ((pos->lnum == rex.lnum + rex.reg_firstlnum
				? (pos_col == (colnr_T)(rex.input - rex.line)
				    ? (cmp == '<' || cmp == '>')
				    : (pos_col < (colnr_T)(rex.input - rex.line)
					? cmp != '>'
					: cmp != '<'))
				: (pos->lnum < rex.lnum + rex.reg_firstlnum
				    ? cmp != '>'
				    : cmp != '<')))
		    status = RA_NOMATCH;
		}
	    }
	    break;

	  case RE_VISUAL:
	    if (!reg_match_visual())
		status = RA_NOMATCH;
	    break;

	  case RE_LNUM:
	    if (!REG_MULTI || !re_num_cmp((long_u)(rex.lnum + rex.reg_firstlnum),
									scan))
		status = RA_NOMATCH;
	    break;

	  case RE_COL:
	    if (!re_num_cmp((long_u)(rex.input - rex.line) + 1, scan))
		status = RA_NOMATCH;
	    break;

	  case RE_VCOL:
	    {
		win_T	    *wp = rex.reg_win == NULL ? curwin : rex.reg_win;
		linenr_T    lnum = REG_MULTI ? rex.reg_firstlnum + rex.lnum : 1;
		long_u	    vcol;

		if (REG_MULTI && (lnum <= 0
				   || lnum > wp->w_buffer->b_ml.ml_line_count))
		    lnum = 1;
		vcol = (long_u)win_linetabsize(wp, lnum, rex.line,
					      (colnr_T)(rex.input - rex.line));
		if (!re_num_cmp(vcol + 1, scan))
		    status = RA_NOMATCH;
	    }
	    break;

	  case BOW:	
	    if (c == NUL)	
		status = RA_NOMATCH;
	    else if (has_mbyte)
	    {
		int this_class;

		
		this_class = mb_get_class_buf(rex.input, rex.reg_buf);
		if (this_class <= 1)
		    status = RA_NOMATCH;  
		else if (reg_prev_class() == this_class)
		    status = RA_NOMATCH;  
	    }
	    else
	    {
		if (!vim_iswordc_buf(c, rex.reg_buf) || (rex.input > rex.line
				&& vim_iswordc_buf(rex.input[-1], rex.reg_buf)))
		    status = RA_NOMATCH;
	    }
	    break;

	  case EOW:	
	    if (rex.input == rex.line)    
		status = RA_NOMATCH;
	    else if (has_mbyte)
	    {
		int this_class, prev_class;

		
		this_class = mb_get_class_buf(rex.input, rex.reg_buf);
		prev_class = reg_prev_class();
		if (this_class == prev_class
			|| prev_class == 0 || prev_class == 1)
		    status = RA_NOMATCH;
	    }
	    else
	    {
		if (!vim_iswordc_buf(rex.input[-1], rex.reg_buf)
			|| (rex.input[0] != NUL
					   && vim_iswordc_buf(c, rex.reg_buf)))
		    status = RA_NOMATCH;
	    }
	    break; 

	  case ANY:
	    
	    if (c == NUL)
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case IDENT:
	    if (!vim_isIDc(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case SIDENT:
	    if (VIM_ISDIGIT(*rex.input) || !vim_isIDc(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case KWORD:
	    if (!vim_iswordp_buf(rex.input, rex.reg_buf))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case SKWORD:
	    if (VIM_ISDIGIT(*rex.input)
				    || !vim_iswordp_buf(rex.input, rex.reg_buf))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case FNAME:
	    if (!vim_isfilec(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case SFNAME:
	    if (VIM_ISDIGIT(*rex.input) || !vim_isfilec(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case PRINT:
	    if (!vim_isprintc(PTR2CHAR(rex.input)))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case SPRINT:
	    if (VIM_ISDIGIT(*rex.input) || !vim_isprintc(PTR2CHAR(rex.input)))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case WHITE:
	    if (!VIM_ISWHITE(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NWHITE:
	    if (c == NUL || VIM_ISWHITE(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case DIGIT:
	    if (!ri_digit(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NDIGIT:
	    if (c == NUL || ri_digit(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case HEX:
	    if (!ri_hex(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NHEX:
	    if (c == NUL || ri_hex(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case OCTAL:
	    if (!ri_octal(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NOCTAL:
	    if (c == NUL || ri_octal(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case WORD:
	    if (!ri_word(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NWORD:
	    if (c == NUL || ri_word(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case HEAD:
	    if (!ri_head(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NHEAD:
	    if (c == NUL || ri_head(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case ALPHA:
	    if (!ri_alpha(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NALPHA:
	    if (c == NUL || ri_alpha(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case LOWER:
	    if (!ri_lower(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NLOWER:
	    if (c == NUL || ri_lower(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case UPPER:
	    if (!ri_upper(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case NUPPER:
	    if (c == NUL || ri_upper(c))
		status = RA_NOMATCH;
	    else
		ADVANCE_REGINPUT();
	    break;

	  case EXACTLY:
	    {
		int	len;
		char_u	*opnd;

		opnd = OPERAND(scan);
		
		if (*opnd != *rex.input
			&& (!rex.reg_ic
			    || (!enc_utf8
			      && MB_TOLOWER(*opnd) != MB_TOLOWER(*rex.input))))
		    status = RA_NOMATCH;
		else if (*opnd == NUL)
		{
		    
		    
		}
		else
		{
		    if (opnd[1] == NUL && !(enc_utf8 && rex.reg_ic))
		    {
			len = 1;	
		    }
		    else
		    {
			
			len = (int)STRLEN(opnd);
			if (cstrncmp(opnd, rex.input, &len) != 0)
			    status = RA_NOMATCH;
		    }
		    
		    
		    if (status != RA_NOMATCH
			    && enc_utf8
			    && UTF_COMPOSINGLIKE(rex.input, rex.input + len)
			    && !rex.reg_icombine
			    && OP(next) != RE_COMPOSING)
		    {
			
			
			
			status = RA_NOMATCH;
		    }
		    if (status != RA_NOMATCH)
			rex.input += len;
		}
	    }
	    break;

	  case ANYOF:
	  case ANYBUT:
	    {
		char_u  *q = OPERAND(scan);

		if (c == NUL)
		    status = RA_NOMATCH;
		else if ((cstrchr(q, c) == NULL) == (op == ANYOF))
		    status = RA_NOMATCH;
		else
		{
		    
		    int	len = 0;
		    int i;

		    if (enc_utf8)
			len = utfc_ptr2len(q) - utf_ptr2len(q);

		    MB_CPTR_ADV(rex.input);
		    MB_CPTR_ADV(q);

		    if (!enc_utf8 || len == 0)
			break;

		    for (i = 0; i < len; ++i)
			if (q[i] != rex.input[i])
			{
			    status = RA_NOMATCH;
			    break;
			}
		    rex.input += len;
		}
		break;
	    }

	  case MULTIBYTECODE:
	    if (has_mbyte)
	    {
		int	i, len;
		char_u	*opnd;
		int	opndc = 0, inpc;

		opnd = OPERAND(scan);
		
		
		if ((len = (*mb_ptr2len)(opnd)) < 2)
		{
		    status = RA_NOMATCH;
		    break;
		}
		if (enc_utf8)
		    opndc = utf_ptr2char(opnd);
		if (enc_utf8 && utf_iscomposing(opndc))
		{
		    
		    
		    status = RA_NOMATCH;
		    for (i = 0; rex.input[i] != NUL;
						i += utf_ptr2len(rex.input + i))
		    {
			inpc = utf_ptr2char(rex.input + i);
			if (!utf_iscomposing(inpc))
			{
			    if (i > 0)
				break;
			}
			else if (opndc == inpc)
			{
			    
			    len = i + utfc_ptr2len(rex.input + i);
			    status = RA_MATCH;
			    break;
			}
		    }
		}
		else if (enc_utf8)
		{
		    if (cstrncmp(opnd, rex.input, &len) != 0)
		    {
			status = RA_NOMATCH;
			break;
		    }
		}
		else
		    for (i = 0; i < len; ++i)
			if (opnd[i] != rex.input[i])
			{
			    status = RA_NOMATCH;
			    break;
			}
		rex.input += len;
	    }
	    else
		status = RA_NOMATCH;
	    break;
	  case RE_COMPOSING:
	    if (enc_utf8)
	    {
		
		while (utf_iscomposing(utf_ptr2char(rex.input)))
		    MB_CPTR_ADV(rex.input);
	    }
	    break;

	  case NOTHING:
	    break;

	  case BACK:
	    {
		int		i;
		backpos_T	*bp;

		
		
		
		
		
		
		bp = (backpos_T *)backpos.ga_data;
		for (i = 0; i < backpos.ga_len; ++i)
		    if (bp[i].bp_scan == scan)
			break;
		if (i == backpos.ga_len)
		{
		    
		    if (ga_grow(&backpos, 1) == FAIL)
			status = RA_FAIL;
		    else
		    {
			
			bp = (backpos_T *)backpos.ga_data;
			bp[i].bp_scan = scan;
			++backpos.ga_len;
		    }
		}
		else if (reg_save_equal(&bp[i].bp_pos))
		    
		    status = RA_NOMATCH;

		if (status != RA_FAIL && status != RA_NOMATCH)
		    reg_save(&bp[i].bp_pos, &backpos);
	    }
	    break;

	  case MOPEN + 0:   
	  case MOPEN + 1:   
	  case MOPEN + 2:
	  case MOPEN + 3:
	  case MOPEN + 4:
	  case MOPEN + 5:
	  case MOPEN + 6:
	  case MOPEN + 7:
	  case MOPEN + 8:
	  case MOPEN + 9:
	    {
		no = op - MOPEN;
		cleanup_subexpr();
		rp = regstack_push(RS_MOPEN, scan);
		if (rp == NULL)
		    status = RA_FAIL;
		else
		{
		    rp->rs_no = no;
		    save_se(&rp->rs_un.sesave, &rex.reg_startpos[no],
							  &rex.reg_startp[no]);
		    
		}
	    }
	    break;

	  case NOPEN:	    
	  case NCLOSE:	    
		if (regstack_push(RS_NOPEN, scan) == NULL)
		    status = RA_FAIL;
		
		break;

#ifdef FEAT_SYN_HL
	  case ZOPEN + 1:
	  case ZOPEN + 2:
	  case ZOPEN + 3:
	  case ZOPEN + 4:
	  case ZOPEN + 5:
	  case ZOPEN + 6:
	  case ZOPEN + 7:
	  case ZOPEN + 8:
	  case ZOPEN + 9:
	    {
		no = op - ZOPEN;
		cleanup_zsubexpr();
		rp = regstack_push(RS_ZOPEN, scan);
		if (rp == NULL)
		    status = RA_FAIL;
		else
		{
		    rp->rs_no = no;
		    save_se(&rp->rs_un.sesave, &reg_startzpos[no],
							     &reg_startzp[no]);
		    
		}
	    }
	    break;
#endif

	  case MCLOSE + 0:  
	  case MCLOSE + 1:  
	  case MCLOSE + 2:
	  case MCLOSE + 3:
	  case MCLOSE + 4:
	  case MCLOSE + 5:
	  case MCLOSE + 6:
	  case MCLOSE + 7:
	  case MCLOSE + 8:
	  case MCLOSE + 9:
	    {
		no = op - MCLOSE;
		cleanup_subexpr();
		rp = regstack_push(RS_MCLOSE, scan);
		if (rp == NULL)
		    status = RA_FAIL;
		else
		{
		    rp->rs_no = no;
		    save_se(&rp->rs_un.sesave, &rex.reg_endpos[no],
							    &rex.reg_endp[no]);
		    
		}
	    }
	    break;

#ifdef FEAT_SYN_HL
	  case ZCLOSE + 1:  
	  case ZCLOSE + 2:
	  case ZCLOSE + 3:
	  case ZCLOSE + 4:
	  case ZCLOSE + 5:
	  case ZCLOSE + 6:
	  case ZCLOSE + 7:
	  case ZCLOSE + 8:
	  case ZCLOSE + 9:
	    {
		no = op - ZCLOSE;
		cleanup_zsubexpr();
		rp = regstack_push(RS_ZCLOSE, scan);
		if (rp == NULL)
		    status = RA_FAIL;
		else
		{
		    rp->rs_no = no;
		    save_se(&rp->rs_un.sesave, &reg_endzpos[no],
							      &reg_endzp[no]);
		    
		}
	    }
	    break;
#endif

	  case BACKREF + 1:
	  case BACKREF + 2:
	  case BACKREF + 3:
	  case BACKREF + 4:
	  case BACKREF + 5:
	  case BACKREF + 6:
	  case BACKREF + 7:
	  case BACKREF + 8:
	  case BACKREF + 9:
	    {
		int		len;

		no = op - BACKREF;
		cleanup_subexpr();
		if (!REG_MULTI)		
		{
		    if (rex.reg_startp[no] == NULL || rex.reg_endp[no] == NULL)
		    {
			
			len = 0;
		    }
		    else
		    {
			
			
			len = (int)(rex.reg_endp[no] - rex.reg_startp[no]);
			if (cstrncmp(rex.reg_startp[no], rex.input, &len) != 0)
			    status = RA_NOMATCH;
		    }
		}
		else				
		{
		    if (rex.reg_startpos[no].lnum < 0
						|| rex.reg_endpos[no].lnum < 0)
		    {
			
			len = 0;
		    }
		    else
		    {
			if (rex.reg_startpos[no].lnum == rex.lnum
				&& rex.reg_endpos[no].lnum == rex.lnum)
			{
			    
			    len = rex.reg_endpos[no].col
						    - rex.reg_startpos[no].col;
			    if (cstrncmp(rex.line + rex.reg_startpos[no].col,
							  rex.input, &len) != 0)
				status = RA_NOMATCH;
			}
			else
			{
			    
			    
			    int r = match_with_backref(
					    rex.reg_startpos[no].lnum,
					    rex.reg_startpos[no].col,
					    rex.reg_endpos[no].lnum,
					    rex.reg_endpos[no].col,
					    &len);

			    if (r != RA_MATCH)
				status = r;
			}
		    }
		}

		
		rex.input += len;
	    }
	    break;

#ifdef FEAT_SYN_HL
	  case ZREF + 1:
	  case ZREF + 2:
	  case ZREF + 3:
	  case ZREF + 4:
	  case ZREF + 5:
	  case ZREF + 6:
	  case ZREF + 7:
	  case ZREF + 8:
	  case ZREF + 9:
	    {
		int	len;

		cleanup_zsubexpr();
		no = op - ZREF;
		if (re_extmatch_in != NULL
			&& re_extmatch_in->matches[no] != NULL)
		{
		    len = (int)STRLEN(re_extmatch_in->matches[no]);
		    if (cstrncmp(re_extmatch_in->matches[no],
							  rex.input, &len) != 0)
			status = RA_NOMATCH;
		    else
			rex.input += len;
		}
		else
		{
		    
		}
	    }
	    break;
#endif

	  case BRANCH:
	    {
		if (OP(next) != BRANCH) 
		    next = OPERAND(scan);	
		else
		{
		    rp = regstack_push(RS_BRANCH, scan);
		    if (rp == NULL)
			status = RA_FAIL;
		    else
			status = RA_BREAK;	
		}
	    }
	    break;

	  case BRACE_LIMITS:
	    {
		if (OP(next) == BRACE_SIMPLE)
		{
		    bl_minval = OPERAND_MIN(scan);
		    bl_maxval = OPERAND_MAX(scan);
		}
		else if (OP(next) >= BRACE_COMPLEX
			&& OP(next) < BRACE_COMPLEX + 10)
		{
		    no = OP(next) - BRACE_COMPLEX;
		    brace_min[no] = OPERAND_MIN(scan);
		    brace_max[no] = OPERAND_MAX(scan);
		    brace_count[no] = 0;
		}
		else
		{
		    internal_error("BRACE_LIMITS");
		    status = RA_FAIL;
		}
	    }
	    break;

	  case BRACE_COMPLEX + 0:
	  case BRACE_COMPLEX + 1:
	  case BRACE_COMPLEX + 2:
	  case BRACE_COMPLEX + 3:
	  case BRACE_COMPLEX + 4:
	  case BRACE_COMPLEX + 5:
	  case BRACE_COMPLEX + 6:
	  case BRACE_COMPLEX + 7:
	  case BRACE_COMPLEX + 8:
	  case BRACE_COMPLEX + 9:
	    {
		no = op - BRACE_COMPLEX;
		++brace_count[no];

		
		if (brace_count[no] <= (brace_min[no] <= brace_max[no]
					     ? brace_min[no] : brace_max[no]))
		{
		    rp = regstack_push(RS_BRCPLX_MORE, scan);
		    if (rp == NULL)
			status = RA_FAIL;
		    else
		    {
			rp->rs_no = no;
			reg_save(&rp->rs_un.regsave, &backpos);
			next = OPERAND(scan);
			
		    }
		    break;
		}

		
		if (brace_min[no] <= brace_max[no])
		{
		    
		    if (brace_count[no] <= brace_max[no])
		    {
			rp = regstack_push(RS_BRCPLX_LONG, scan);
			if (rp == NULL)
			    status = RA_FAIL;
			else
			{
			    rp->rs_no = no;
			    reg_save(&rp->rs_un.regsave, &backpos);
			    next = OPERAND(scan);
			    
			}
		    }
		}
		else
		{
		    
		    if (brace_count[no] <= brace_min[no])
		    {
			rp = regstack_push(RS_BRCPLX_SHORT, scan);
			if (rp == NULL)
			    status = RA_FAIL;
			else
			{
			    reg_save(&rp->rs_un.regsave, &backpos);
			    
			}
		    }
		}
	    }
	    break;

	  case BRACE_SIMPLE:
	  case STAR:
	  case PLUS:
	    {
		regstar_T	rst;

		
		
		if (OP(next) == EXACTLY)
		{
		    rst.nextb = *OPERAND(next);
		    if (rex.reg_ic)
		    {
			if (MB_ISUPPER(rst.nextb))
			    rst.nextb_ic = MB_TOLOWER(rst.nextb);
			else
			    rst.nextb_ic = MB_TOUPPER(rst.nextb);
		    }
		    else
			rst.nextb_ic = rst.nextb;
		}
		else
		{
		    rst.nextb = NUL;
		    rst.nextb_ic = NUL;
		}
		if (op != BRACE_SIMPLE)
		{
		    rst.minval = (op == STAR) ? 0 : 1;
		    rst.maxval = MAX_LIMIT;
		}
		else
		{
		    rst.minval = bl_minval;
		    rst.maxval = bl_maxval;
		}

		
		
		
		
		rst.count = regrepeat(OPERAND(scan), rst.maxval);
		if (got_int)
		{
		    status = RA_FAIL;
		    break;
		}
		if (rst.minval <= rst.maxval
			  ? rst.count >= rst.minval : rst.count >= rst.maxval)
		{
		    
		    
		    
		    if ((int)((unsigned)regstack.ga_len >> 10) >= p_mmp)
		    {
			emsg(_(e_pattern_uses_more_memory_than_maxmempattern));
			status = RA_FAIL;
		    }
		    else if (ga_grow(&regstack, sizeof(regstar_T)) == FAIL)
			status = RA_FAIL;
		    else
		    {
			regstack.ga_len += sizeof(regstar_T);
			rp = regstack_push(rst.minval <= rst.maxval
					? RS_STAR_LONG : RS_STAR_SHORT, scan);
			if (rp == NULL)
			    status = RA_FAIL;
			else
			{
			    *(((regstar_T *)rp) - 1) = rst;
			    status = RA_BREAK;	    
			}
		    }
		}
		else
		    status = RA_NOMATCH;

	    }
	    break;

	  case NOMATCH:
	  case MATCH:
	  case SUBPAT:
	    rp = regstack_push(RS_NOMATCH, scan);
	    if (rp == NULL)
		status = RA_FAIL;
	    else
	    {
		rp->rs_no = op;
		reg_save(&rp->rs_un.regsave, &backpos);
		next = OPERAND(scan);
		
	    }
	    break;

	  case BEHIND:
	  case NOBEHIND:
	    
	    if ((int)((unsigned)regstack.ga_len >> 10) >= p_mmp)
	    {
		emsg(_(e_pattern_uses_more_memory_than_maxmempattern));
		status = RA_FAIL;
	    }
	    else if (ga_grow(&regstack, sizeof(regbehind_T)) == FAIL)
		status = RA_FAIL;
	    else
	    {
		regstack.ga_len += sizeof(regbehind_T);
		rp = regstack_push(RS_BEHIND1, scan);
		if (rp == NULL)
		    status = RA_FAIL;
		else
		{
		    
		    
		    save_subexpr(((regbehind_T *)rp) - 1);

		    rp->rs_no = op;
		    reg_save(&rp->rs_un.regsave, &backpos);
		    
		    
		}
	    }
	    break;

	  case BHPOS:
	    if (REG_MULTI)
	    {
		if (behind_pos.rs_u.pos.col != (colnr_T)(rex.input - rex.line)
			|| behind_pos.rs_u.pos.lnum != rex.lnum)
		    status = RA_NOMATCH;
	    }
	    else if (behind_pos.rs_u.ptr != rex.input)
		status = RA_NOMATCH;
	    break;

	  case NEWL:
	    if ((c != NUL || !REG_MULTI || rex.lnum > rex.reg_maxline
			     || rex.reg_line_lbr)
					   && (c != '\n' || !rex.reg_line_lbr))
		status = RA_NOMATCH;
	    else if (rex.reg_line_lbr)
		ADVANCE_REGINPUT();
	    else
		reg_nextline();
	    break;

	  case END:
	    status = RA_MATCH;	
	    break;

	  default:
	    iemsg(e_corrupted_regexp_program);
#ifdef DEBUG
	    printf("Illegal op code %d\n", op);
#endif
	    status = RA_FAIL;
	    break;
	  }
	}

	
	if (status != RA_CONT)
	    break;

	
	scan = next;

    } 

    
    
    while (regstack.ga_len > 0 && status != RA_FAIL)
    {
	rp = (regitem_T *)((char *)regstack.ga_data + regstack.ga_len) - 1;
	switch (rp->rs_state)
	{
	  case RS_NOPEN:
	    
	    regstack_pop(&scan);
	    break;

	  case RS_MOPEN:
	    
	    if (status == RA_NOMATCH)
		restore_se(&rp->rs_un.sesave, &rex.reg_startpos[rp->rs_no],
						  &rex.reg_startp[rp->rs_no]);
	    regstack_pop(&scan);
	    break;

#ifdef FEAT_SYN_HL
	  case RS_ZOPEN:
	    
	    if (status == RA_NOMATCH)
		restore_se(&rp->rs_un.sesave, &reg_startzpos[rp->rs_no],
						 &reg_startzp[rp->rs_no]);
	    regstack_pop(&scan);
	    break;
#endif

	  case RS_MCLOSE:
	    
	    if (status == RA_NOMATCH)
		restore_se(&rp->rs_un.sesave, &rex.reg_endpos[rp->rs_no],
						    &rex.reg_endp[rp->rs_no]);
	    regstack_pop(&scan);
	    break;

#ifdef FEAT_SYN_HL
	  case RS_ZCLOSE:
	    
	    if (status == RA_NOMATCH)
		restore_se(&rp->rs_un.sesave, &reg_endzpos[rp->rs_no],
						   &reg_endzp[rp->rs_no]);
	    regstack_pop(&scan);
	    break;
#endif

	  case RS_BRANCH:
	    if (status == RA_MATCH)
		
		regstack_pop(&scan);
	    else
	    {
		if (status != RA_BREAK)
		{
		    
		    reg_restore(&rp->rs_un.regsave, &backpos);
		    scan = rp->rs_scan;
		}
		if (scan == NULL || OP(scan) != BRANCH)
		{
		    
		    status = RA_NOMATCH;
		    regstack_pop(&scan);
		}
		else
		{
		    
		    rp->rs_scan = regnext(scan);
		    reg_save(&rp->rs_un.regsave, &backpos);
		    scan = OPERAND(scan);
		}
	    }
	    break;

	  case RS_BRCPLX_MORE:
	    
	    if (status == RA_NOMATCH)
	    {
		reg_restore(&rp->rs_un.regsave, &backpos);
		--brace_count[rp->rs_no];	
	    }
	    regstack_pop(&scan);
	    break;

	  case RS_BRCPLX_LONG:
	    
	    if (status == RA_NOMATCH)
	    {
		
		reg_restore(&rp->rs_un.regsave, &backpos);
		--brace_count[rp->rs_no];
		
		status = RA_CONT;
	    }
	    regstack_pop(&scan);
	    if (status == RA_CONT)
		scan = regnext(scan);
	    break;

	  case RS_BRCPLX_SHORT:
	    
	    if (status == RA_NOMATCH)
		
		reg_restore(&rp->rs_un.regsave, &backpos);
	    regstack_pop(&scan);
	    if (status == RA_NOMATCH)
	    {
		scan = OPERAND(scan);
		status = RA_CONT;
	    }
	    break;

	  case RS_NOMATCH:
	    
	    
	    
	    if (status == (rp->rs_no == NOMATCH ? RA_MATCH : RA_NOMATCH))
		status = RA_NOMATCH;
	    else
	    {
		status = RA_CONT;
		if (rp->rs_no != SUBPAT)	
		    reg_restore(&rp->rs_un.regsave, &backpos);
	    }
	    regstack_pop(&scan);
	    if (status == RA_CONT)
		scan = regnext(scan);
	    break;

	  case RS_BEHIND1:
	    if (status == RA_NOMATCH)
	    {
		regstack_pop(&scan);
		regstack.ga_len -= sizeof(regbehind_T);
	    }
	    else
	    {
		
		
		
		
		

		
		reg_save(&(((regbehind_T *)rp) - 1)->save_after, &backpos);

		
		
		
		
		
		
		(((regbehind_T *)rp) - 1)->save_behind = behind_pos;
		behind_pos = rp->rs_un.regsave;

		rp->rs_state = RS_BEHIND2;

		reg_restore(&rp->rs_un.regsave, &backpos);
		scan = OPERAND(rp->rs_scan) + 4;
	    }
	    break;

	  case RS_BEHIND2:
	    
	    if (status == RA_MATCH && reg_save_equal(&behind_pos))
	    {
		
		behind_pos = (((regbehind_T *)rp) - 1)->save_behind;
		if (rp->rs_no == BEHIND)
		    reg_restore(&(((regbehind_T *)rp) - 1)->save_after,
								    &backpos);
		else
		{
		    
		    
		    
		    status = RA_NOMATCH;
		    restore_subexpr(((regbehind_T *)rp) - 1);
		}
		regstack_pop(&scan);
		regstack.ga_len -= sizeof(regbehind_T);
	    }
	    else
	    {
		int limit;

		
		
		no = OK;
		limit = OPERAND_MIN(rp->rs_scan);
		if (REG_MULTI)
		{
		    if (limit > 0
			    && ((rp->rs_un.regsave.rs_u.pos.lnum
						    < behind_pos.rs_u.pos.lnum
				    ? (colnr_T)STRLEN(rex.line)
				    : behind_pos.rs_u.pos.col)
				- rp->rs_un.regsave.rs_u.pos.col >= limit))
			no = FAIL;
		    else if (rp->rs_un.regsave.rs_u.pos.col == 0)
		    {
			if (rp->rs_un.regsave.rs_u.pos.lnum
					< behind_pos.rs_u.pos.lnum
				|| reg_getline(
					--rp->rs_un.regsave.rs_u.pos.lnum)
								  == NULL)
			    no = FAIL;
			else
			{
			    reg_restore(&rp->rs_un.regsave, &backpos);
			    rp->rs_un.regsave.rs_u.pos.col =
						 (colnr_T)STRLEN(rex.line);
			}
		    }
		    else
		    {
			if (has_mbyte)
			{
			    char_u *line =
				  reg_getline(rp->rs_un.regsave.rs_u.pos.lnum);

			    rp->rs_un.regsave.rs_u.pos.col -=
				(*mb_head_off)(line, line
				    + rp->rs_un.regsave.rs_u.pos.col - 1) + 1;
			}
			else
			    --rp->rs_un.regsave.rs_u.pos.col;
		    }
		}
		else
		{
		    if (rp->rs_un.regsave.rs_u.ptr == rex.line)
			no = FAIL;
		    else
		    {
			MB_PTR_BACK(rex.line, rp->rs_un.regsave.rs_u.ptr);
			if (limit > 0 && (int)(behind_pos.rs_u.ptr
				     - rp->rs_un.regsave.rs_u.ptr) > limit)
			    no = FAIL;
		    }
		}
		if (no == OK)
		{
		    
		    reg_restore(&rp->rs_un.regsave, &backpos);
		    scan = OPERAND(rp->rs_scan) + 4;
		    if (status == RA_MATCH)
		    {
			
			
			status = RA_NOMATCH;
			restore_subexpr(((regbehind_T *)rp) - 1);
		    }
		}
		else
		{
		    
		    behind_pos = (((regbehind_T *)rp) - 1)->save_behind;
		    if (rp->rs_no == NOBEHIND)
		    {
			reg_restore(&(((regbehind_T *)rp) - 1)->save_after,
								    &backpos);
			status = RA_MATCH;
		    }
		    else
		    {
			
			
			
			if (status == RA_MATCH)
			{
			    status = RA_NOMATCH;
			    restore_subexpr(((regbehind_T *)rp) - 1);
			}
		    }
		    regstack_pop(&scan);
		    regstack.ga_len -= sizeof(regbehind_T);
		}
	    }
	    break;

	  case RS_STAR_LONG:
	  case RS_STAR_SHORT:
	    {
		regstar_T	    *rst = ((regstar_T *)rp) - 1;

		if (status == RA_MATCH)
		{
		    regstack_pop(&scan);
		    regstack.ga_len -= sizeof(regstar_T);
		    break;
		}

		
		if (status != RA_BREAK)
		    reg_restore(&rp->rs_un.regsave, &backpos);

		
		for (;;)
		{
		    if (status != RA_BREAK)
		    {
			
			if (rp->rs_state == RS_STAR_LONG)
			{
			    
			    
			    if (--rst->count < rst->minval)
				break;
			    if (rex.input == rex.line)
			    {
				
				if (rex.lnum == 0)
				{
				    status = RA_NOMATCH;
				    break;
				}
				--rex.lnum;
				rex.line = reg_getline(rex.lnum);
				
				
				if (rex.line == NULL)
				    break;
				rex.input = rex.line + reg_getline_len(rex.lnum);
				fast_breakcheck();
			    }
			    else
				MB_PTR_BACK(rex.line, rex.input);
			}
			else
			{
			    
			    
			    
			    
			    if (rst->count == rst->minval
				  || regrepeat(OPERAND(rp->rs_scan), 1L) == 0)
				break;
			    ++rst->count;
			}
			if (got_int)
			    break;
		    }
		    else
			status = RA_NOMATCH;

		    
		    if (rst->nextb == NUL || *rex.input == rst->nextb
					     || *rex.input == rst->nextb_ic)
		    {
			reg_save(&rp->rs_un.regsave, &backpos);
			scan = regnext(rp->rs_scan);
			status = RA_CONT;
			break;
		    }
		}
		if (status != RA_CONT)
		{
		    
		    regstack_pop(&scan);
		    regstack.ga_len -= sizeof(regstar_T);
		    status = RA_NOMATCH;
		}
	    }
	    break;
	}

	
	
	if (status == RA_CONT || rp == (regitem_T *)
			     ((char *)regstack.ga_data + regstack.ga_len) - 1)
	    break;

#ifdef FEAT_RELTIME
	if (bt_did_time_out(timed_out))
	{
	    status = RA_FAIL;
	    break;
	}
#endif
    }

    
    if (status == RA_CONT)
	continue;

    
    if (regstack.ga_len == 0 || status == RA_FAIL)
    {
	if (scan == NULL)
	{
	    
	    
	    iemsg(e_corrupted_regexp_program);
#ifdef DEBUG
	    printf("Premature EOL\n");
#endif
	}
	return (status == RA_MATCH);
    }

  } 

  
}


    static int
regtry(
    bt_regprog_T	*prog,
    colnr_T		col,
    int			*timed_out)	
{
    rex.input = rex.line + col;
    rex.need_clear_subexpr = TRUE;
#ifdef FEAT_SYN_HL
    
    rex.need_clear_zsubexpr = (prog->reghasz == REX_SET);
#endif

    if (regmatch(prog->program + 1, timed_out) == 0)
	return 0;

    cleanup_subexpr();
    if (REG_MULTI)
    {
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
	int		i;

	cleanup_zsubexpr();
	re_extmatch_out = make_extmatch();
	if (re_extmatch_out == NULL)
	    return 0;
	for (i = 0; i < NSUBEXP; i++)
	{
	    if (REG_MULTI)
	    {
		
		if (reg_startzpos[i].lnum >= 0
			&& reg_endzpos[i].lnum == reg_startzpos[i].lnum
			&& reg_endzpos[i].col >= reg_startzpos[i].col)
		    re_extmatch_out->matches[i] =
			vim_strnsave(reg_getline(reg_startzpos[i].lnum)
						       + reg_startzpos[i].col,
				   reg_endzpos[i].col - reg_startzpos[i].col);
	    }
	    else
	    {
		if (reg_startzp[i] != NULL && reg_endzp[i] != NULL)
		    re_extmatch_out->matches[i] =
			    vim_strnsave(reg_startzp[i],
						reg_endzp[i] - reg_startzp[i]);
	    }
	}
    }
#endif
    return 1 + rex.lnum;
}


    static int
bt_regexec_both(
    char_u	*line,
    colnr_T	startcol,	
    int		*timed_out)	
{
    bt_regprog_T    *prog;
    char_u	    *s;
    colnr_T	    col = startcol;
    int	    retval = 0L;

    
    
    
    
    if (regstack.ga_data == NULL)
    {
	
	
	ga_init2(&regstack, 1, REGSTACK_INITIAL);
	(void)ga_grow(&regstack, REGSTACK_INITIAL);
	regstack.ga_growsize = REGSTACK_INITIAL * 8;
    }

    if (backpos.ga_data == NULL)
    {
	ga_init2(&backpos, sizeof(backpos_T), BACKPOS_INITIAL);
	(void)ga_grow(&backpos, BACKPOS_INITIAL);
	backpos.ga_growsize = BACKPOS_INITIAL * 8;
    }

    if (REG_MULTI)
    {
	prog = (bt_regprog_T *)rex.reg_mmatch->regprog;
	line = reg_getline((linenr_T)0);
	rex.reg_startpos = rex.reg_mmatch->startpos;
	rex.reg_endpos = rex.reg_mmatch->endpos;
    }
    else
    {
	prog = (bt_regprog_T *)rex.reg_match->regprog;
	rex.reg_startp = rex.reg_match->startp;
	rex.reg_endp = rex.reg_match->endp;
    }

    
    if (prog == NULL || line == NULL)
    {
	iemsg(e_null_argument);
	goto theend;
    }

    
    if (prog_magic_wrong())
	goto theend;

    
    if (rex.reg_maxcol > 0 && col >= rex.reg_maxcol)
	goto theend;

    
    if (prog->regflags & RF_ICASE)
	rex.reg_ic = TRUE;
    else if (prog->regflags & RF_NOICASE)
	rex.reg_ic = FALSE;

    
    if (prog->regflags & RF_ICOMBINE)
	rex.reg_icombine = TRUE;

    
    if (prog->regmust != NULL)
    {
	int c;

	if (has_mbyte)
	    c = (*mb_ptr2char)(prog->regmust);
	else
	    c = *prog->regmust;
	s = line + col;

	
	
	if (!rex.reg_ic && !has_mbyte)
	    while ((s = vim_strbyte(s, c)) != NULL)
	    {
		if (cstrncmp(s, prog->regmust, &prog->regmlen) == 0)
		    break;		
		++s;
	    }
	else if (!rex.reg_ic || (!enc_utf8 && mb_char2len(c) > 1))
	    while ((s = vim_strchr(s, c)) != NULL)
	    {
		if (cstrncmp(s, prog->regmust, &prog->regmlen) == 0)
		    break;		
		MB_PTR_ADV(s);
	    }
	else
	    while ((s = cstrchr(s, c)) != NULL)
	    {
		if (cstrncmp(s, prog->regmust, &prog->regmlen) == 0)
		    break;		
		MB_PTR_ADV(s);
	    }
	if (s == NULL)		
	    goto theend;
    }

    rex.line = line;
    rex.lnum = 0;
    reg_toolong = FALSE;

    
    if (prog->reganch)
    {
	int	c;

	if (has_mbyte)
	    c = (*mb_ptr2char)(rex.line + col);
	else
	    c = rex.line[col];
	if (prog->regstart == NUL
		|| prog->regstart == c
		|| (rex.reg_ic
		    && (((enc_utf8 && utf_fold(prog->regstart) == utf_fold(c)))
			|| (c < 255 && prog->regstart < 255 &&
			    MB_TOLOWER(prog->regstart) == MB_TOLOWER(c)))))
	    retval = regtry(prog, col, timed_out);
	else
	    retval = 0;
    }
    else
    {
	
	while (!got_int)
	{
	    if (prog->regstart != NUL)
	    {
		
		
		if (!rex.reg_ic && !has_mbyte)
		    s = vim_strbyte(rex.line + col, prog->regstart);
		else
		    s = cstrchr(rex.line + col, prog->regstart);
		if (s == NULL)
		{
		    retval = 0;
		    break;
		}
		col = (int)(s - rex.line);
	    }

	    
	    if (rex.reg_maxcol > 0 && col >= rex.reg_maxcol)
	    {
		retval = 0;
		break;
	    }

	    retval = regtry(prog, col, timed_out);
	    if (retval > 0)
		break;

	    
	    if (rex.lnum != 0)
	    {
		rex.lnum = 0;
		rex.line = reg_getline((linenr_T)0);
	    }
	    if (rex.line[col] == NUL)
		break;
	    if (has_mbyte)
		col += (*mb_ptr2len)(rex.line + col);
	    else
		++col;
#ifdef FEAT_RELTIME
	    if (bt_did_time_out(timed_out))
		break;
#endif
	}
    }

theend:
    
    
    if (reg_tofreelen > 400)
	VIM_CLEAR(reg_tofree);
    if (regstack.ga_maxlen > REGSTACK_INITIAL)
	ga_clear(&regstack);
    if (backpos.ga_maxlen > BACKPOS_INITIAL)
	ga_clear(&backpos);

    if (retval > 0)
    {
	
	
	if (REG_MULTI)
	{
	    lpos_T *start = &rex.reg_mmatch->startpos[0];
	    lpos_T *end = &rex.reg_mmatch->endpos[0];

	    if (end->lnum < start->lnum
			|| (end->lnum == start->lnum && end->col < start->col))
		rex.reg_mmatch->endpos[0] = rex.reg_mmatch->startpos[0];

	    
	    
	    rex.reg_mmatch->rmm_matchcol = col;
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


    static int
bt_regexec_nl(
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

    return bt_regexec_both(line, col, NULL);
}


    static int
bt_regexec_multi(
    regmmatch_T	*rmp,
    win_T	*win,		
    buf_T	*buf,		
    linenr_T	lnum,		
    colnr_T	col,		
    int		*timed_out)	
{
    init_regexec_multi(rmp, win, buf, lnum);
    return bt_regexec_both(NULL, col, timed_out);
}


    static int
re_num_cmp(long_u val, char_u *scan)
{
    long_u  n = OPERAND_MIN(scan);

    if (OPERAND_CMP(scan) == '>')
	return val > n;
    if (OPERAND_CMP(scan) == '<')
	return val < n;
    return val == n;
}

#ifdef BT_REGEXP_DUMP


    static void
regdump(char_u *pattern, bt_regprog_T *r)
{
    char_u  *s;
    int	    op = EXACTLY;	
    char_u  *next;
    char_u  *end = NULL;
    FILE    *f;

#ifdef BT_REGEXP_LOG
    f = fopen("bt_regexp_log.log", "a");
#else
    f = stdout;
#endif
    if (f == NULL)
	return;
    fprintf(f, "-------------------------------------\n\r\nregcomp(%s):\r\n", pattern);

    s = r->program + 1;
    
    
    while (op != END || s <= end)
    {
	op = OP(s);
	fprintf(f, "%2d%s", (int)(s - r->program), regprop(s)); 
	next = regnext(s);
	if (next == NULL)	
	    fprintf(f, "(0)");
	else
	    fprintf(f, "(%d)", (int)((s - r->program) + (next - s)));
	if (end < next)
	    end = next;
	if (op == BRACE_LIMITS)
	{
	    
	    fprintf(f, " minval %ld, maxval %ld", OPERAND_MIN(s), OPERAND_MAX(s));
	    s += 8;
	}
	else if (op == BEHIND || op == NOBEHIND)
	{
	    
	    fprintf(f, " count %ld", OPERAND_MIN(s));
	    s += 4;
	}
	else if (op == RE_LNUM || op == RE_COL || op == RE_VCOL)
	{
	    
	    fprintf(f, " count %ld", OPERAND_MIN(s));
	    s += 5;
	}
	s += 3;
	if (op == ANYOF || op == ANYOF + ADD_NL
		|| op == ANYBUT || op == ANYBUT + ADD_NL
		|| op == EXACTLY)
	{
	    
	    fprintf(f, "\nxxxxxxxxx\n");
	    while (*s != NUL)
		fprintf(f, "%c", *s++);
	    fprintf(f, "\nxxxxxxxxx\n");
	    s++;
	}
	fprintf(f, "\r\n");
    }

    
    if (r->regstart != NUL)
	fprintf(f, "start `%s' 0x%x; ", r->regstart < 256
		? (char *)transchar(r->regstart)
		: "multibyte", r->regstart);
    if (r->reganch)
	fprintf(f, "anchored; ");
    if (r->regmust != NULL)
	fprintf(f, "must have \"%s\"", r->regmust);
    fprintf(f, "\r\n");

#ifdef BT_REGEXP_LOG
    fclose(f);
#endif
}
#endif	    

#ifdef DEBUG

    static char_u *
regprop(char_u *op)
{
    char	    *p;
    static char	    buf[50];
    static size_t   buflen = 0;

    STRCPY(buf, ":");
    buflen = 1;

    switch ((int) OP(op))
    {
      case BOL:
	p = "BOL";
	break;
      case EOL:
	p = "EOL";
	break;
      case RE_BOF:
	p = "BOF";
	break;
      case RE_EOF:
	p = "EOF";
	break;
      case CURSOR:
	p = "CURSOR";
	break;
      case RE_VISUAL:
	p = "RE_VISUAL";
	break;
      case RE_LNUM:
	p = "RE_LNUM";
	break;
      case RE_MARK:
	p = "RE_MARK";
	break;
      case RE_COL:
	p = "RE_COL";
	break;
      case RE_VCOL:
	p = "RE_VCOL";
	break;
      case BOW:
	p = "BOW";
	break;
      case EOW:
	p = "EOW";
	break;
      case ANY:
	p = "ANY";
	break;
      case ANY + ADD_NL:
	p = "ANY+NL";
	break;
      case ANYOF:
	p = "ANYOF";
	break;
      case ANYOF + ADD_NL:
	p = "ANYOF+NL";
	break;
      case ANYBUT:
	p = "ANYBUT";
	break;
      case ANYBUT + ADD_NL:
	p = "ANYBUT+NL";
	break;
      case IDENT:
	p = "IDENT";
	break;
      case IDENT + ADD_NL:
	p = "IDENT+NL";
	break;
      case SIDENT:
	p = "SIDENT";
	break;
      case SIDENT + ADD_NL:
	p = "SIDENT+NL";
	break;
      case KWORD:
	p = "KWORD";
	break;
      case KWORD + ADD_NL:
	p = "KWORD+NL";
	break;
      case SKWORD:
	p = "SKWORD";
	break;
      case SKWORD + ADD_NL:
	p = "SKWORD+NL";
	break;
      case FNAME:
	p = "FNAME";
	break;
      case FNAME + ADD_NL:
	p = "FNAME+NL";
	break;
      case SFNAME:
	p = "SFNAME";
	break;
      case SFNAME + ADD_NL:
	p = "SFNAME+NL";
	break;
      case PRINT:
	p = "PRINT";
	break;
      case PRINT + ADD_NL:
	p = "PRINT+NL";
	break;
      case SPRINT:
	p = "SPRINT";
	break;
      case SPRINT + ADD_NL:
	p = "SPRINT+NL";
	break;
      case WHITE:
	p = "WHITE";
	break;
      case WHITE + ADD_NL:
	p = "WHITE+NL";
	break;
      case NWHITE:
	p = "NWHITE";
	break;
      case NWHITE + ADD_NL:
	p = "NWHITE+NL";
	break;
      case DIGIT:
	p = "DIGIT";
	break;
      case DIGIT + ADD_NL:
	p = "DIGIT+NL";
	break;
      case NDIGIT:
	p = "NDIGIT";
	break;
      case NDIGIT + ADD_NL:
	p = "NDIGIT+NL";
	break;
      case HEX:
	p = "HEX";
	break;
      case HEX + ADD_NL:
	p = "HEX+NL";
	break;
      case NHEX:
	p = "NHEX";
	break;
      case NHEX + ADD_NL:
	p = "NHEX+NL";
	break;
      case OCTAL:
	p = "OCTAL";
	break;
      case OCTAL + ADD_NL:
	p = "OCTAL+NL";
	break;
      case NOCTAL:
	p = "NOCTAL";
	break;
      case NOCTAL + ADD_NL:
	p = "NOCTAL+NL";
	break;
      case WORD:
	p = "WORD";
	break;
      case WORD + ADD_NL:
	p = "WORD+NL";
	break;
      case NWORD:
	p = "NWORD";
	break;
      case NWORD + ADD_NL:
	p = "NWORD+NL";
	break;
      case HEAD:
	p = "HEAD";
	break;
      case HEAD + ADD_NL:
	p = "HEAD+NL";
	break;
      case NHEAD:
	p = "NHEAD";
	break;
      case NHEAD + ADD_NL:
	p = "NHEAD+NL";
	break;
      case ALPHA:
	p = "ALPHA";
	break;
      case ALPHA + ADD_NL:
	p = "ALPHA+NL";
	break;
      case NALPHA:
	p = "NALPHA";
	break;
      case NALPHA + ADD_NL:
	p = "NALPHA+NL";
	break;
      case LOWER:
	p = "LOWER";
	break;
      case LOWER + ADD_NL:
	p = "LOWER+NL";
	break;
      case NLOWER:
	p = "NLOWER";
	break;
      case NLOWER + ADD_NL:
	p = "NLOWER+NL";
	break;
      case UPPER:
	p = "UPPER";
	break;
      case UPPER + ADD_NL:
	p = "UPPER+NL";
	break;
      case NUPPER:
	p = "NUPPER";
	break;
      case NUPPER + ADD_NL:
	p = "NUPPER+NL";
	break;
      case BRANCH:
	p = "BRANCH";
	break;
      case EXACTLY:
	p = "EXACTLY";
	break;
      case NOTHING:
	p = "NOTHING";
	break;
      case BACK:
	p = "BACK";
	break;
      case END:
	p = "END";
	break;
      case MOPEN + 0:
	p = "MATCH START";
	break;
      case MOPEN + 1:
      case MOPEN + 2:
      case MOPEN + 3:
      case MOPEN + 4:
      case MOPEN + 5:
      case MOPEN + 6:
      case MOPEN + 7:
      case MOPEN + 8:
      case MOPEN + 9:
	buflen += sprintf(buf + buflen, "MOPEN%d", OP(op) - MOPEN);
	p = NULL;
	break;
      case MCLOSE + 0:
	p = "MATCH END";
	break;
      case MCLOSE + 1:
      case MCLOSE + 2:
      case MCLOSE + 3:
      case MCLOSE + 4:
      case MCLOSE + 5:
      case MCLOSE + 6:
      case MCLOSE + 7:
      case MCLOSE + 8:
      case MCLOSE + 9:
	buflen += sprintf(buf + buflen, "MCLOSE%d", OP(op) - MCLOSE);
	p = NULL;
	break;
      case BACKREF + 1:
      case BACKREF + 2:
      case BACKREF + 3:
      case BACKREF + 4:
      case BACKREF + 5:
      case BACKREF + 6:
      case BACKREF + 7:
      case BACKREF + 8:
      case BACKREF + 9:
	buflen += sprintf(buf + buflen, "BACKREF%d", OP(op) - BACKREF);
	p = NULL;
	break;
      case NOPEN:
	p = "NOPEN";
	break;
      case NCLOSE:
	p = "NCLOSE";
	break;
#ifdef FEAT_SYN_HL
      case ZOPEN + 1:
      case ZOPEN + 2:
      case ZOPEN + 3:
      case ZOPEN + 4:
      case ZOPEN + 5:
      case ZOPEN + 6:
      case ZOPEN + 7:
      case ZOPEN + 8:
      case ZOPEN + 9:
	buflen += sprintf(buf + buflen, "ZOPEN%d", OP(op) - ZOPEN);
	p = NULL;
	break;
      case ZCLOSE + 1:
      case ZCLOSE + 2:
      case ZCLOSE + 3:
      case ZCLOSE + 4:
      case ZCLOSE + 5:
      case ZCLOSE + 6:
      case ZCLOSE + 7:
      case ZCLOSE + 8:
      case ZCLOSE + 9:
	buflen += sprintf(buf + buflen, "ZCLOSE%d", OP(op) - ZCLOSE);
	p = NULL;
	break;
      case ZREF + 1:
      case ZREF + 2:
      case ZREF + 3:
      case ZREF + 4:
      case ZREF + 5:
      case ZREF + 6:
      case ZREF + 7:
      case ZREF + 8:
      case ZREF + 9:
	buflen += sprintf(buf + buflen, "ZREF%d", OP(op) - ZREF);
	p = NULL;
	break;
#endif
      case STAR:
	p = "STAR";
	break;
      case PLUS:
	p = "PLUS";
	break;
      case NOMATCH:
	p = "NOMATCH";
	break;
      case MATCH:
	p = "MATCH";
	break;
      case BEHIND:
	p = "BEHIND";
	break;
      case NOBEHIND:
	p = "NOBEHIND";
	break;
      case SUBPAT:
	p = "SUBPAT";
	break;
      case BRACE_LIMITS:
	p = "BRACE_LIMITS";
	break;
      case BRACE_SIMPLE:
	p = "BRACE_SIMPLE";
	break;
      case BRACE_COMPLEX + 0:
      case BRACE_COMPLEX + 1:
      case BRACE_COMPLEX + 2:
      case BRACE_COMPLEX + 3:
      case BRACE_COMPLEX + 4:
      case BRACE_COMPLEX + 5:
      case BRACE_COMPLEX + 6:
      case BRACE_COMPLEX + 7:
      case BRACE_COMPLEX + 8:
      case BRACE_COMPLEX + 9:
	buflen += sprintf(buf + buflen, "BRACE_COMPLEX%d", OP(op) - BRACE_COMPLEX);
	p = NULL;
	break;
      case MULTIBYTECODE:
	p = "MULTIBYTECODE";
	break;
      case NEWL:
	p = "NEWL";
	break;
      default:
	buflen += sprintf(buf + buflen, "corrupt %d", OP(op));
	p = NULL;
	break;
    }
    if (p != NULL)
	STRCPY(buf + buflen, p);
    return (char_u *)buf;
}
#endif	    
