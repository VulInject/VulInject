

#include	"vim.h"


#if !defined(VAX) && !defined(PROTO)
#   include <gen64def.h>
#else

typedef struct _generic_64 {
#   pragma __nomember_alignment
    __union  {				
	
	

	unsigned int gen64$l_longword [2]; 
	unsigned short int gen64$w_word [4]; 
    } gen64$r_quad_overlay;
} GENERIC_64;
#endif

typedef struct
{
    char	class;
    char	type;
    short	width;
    union
    {
	struct
	{
	    char	_basic[3];
	    char	length;
	}	y;
	int	basic;
    }	x;
    int		extended;
}	TT_MODE;

typedef struct
{
    short	buflen;
    short	itemcode;
    char	*bufadrs;
    int		*retlen;
}	ITEM;

typedef struct
{
    ITEM	equ;
    int		nul;
}	ITMLST1;

typedef struct
{
    ITEM	index;
    ITEM	string;
    int	nul;
}	ITMLST2;

static TT_MODE	orgmode;
static short	iochan;			
static short	iosb[4];		

static int vms_match_num = 0;
static int vms_match_free = 0;
static char_u **vms_fmatch = NULL;
static char *Fspec_Rms;		       



static TT_MODE	get_tty(void);
static void	set_tty(int row, int col);

#define EXPL_ALLOC_INC 64

#define EQN(S1,S2,LN) (strncmp(S1,S2,LN) == 0)
#define SKIP_FOLLOWING_SLASHES(Str) do { while (Str[1] == '/') ++Str; } while (0)



    static void
vul_desc(DESC *des, char *str)
{
    des->dsc$b_dtype = DSC$K_DTYPE_T;
    des->dsc$b_class = DSC$K_CLASS_S;
    des->dsc$a_pointer = str;
    des->dsc$w_length = str ? strlen(str) : 0;
}


    static void
vul_item(ITEM *itm, short len, short cod, char *adr, int *ret)
{
    itm->buflen   = len;
    itm->itemcode = cod;
    itm->bufadrs  = adr;
    itm->retlen   = ret;
}

    void
mch_settmode(tmode_T tmode)
{
    int	status;

    if ( tmode == TMODE_RAW )
	set_tty(0, 0);
    else
    {
	switch (orgmode.width)
	{
	    case 132:	OUT_STR_NF((char_u *)"\033[?3h\033>");	break;
	    case 80:	OUT_STR_NF((char_u *)"\033[?3l\033>");	break;
	    default:	break;
	}
	out_flush();
	status = sys$qiow(0, iochan, IO$_SETMODE, iosb, 0, 0,
					  &orgmode, sizeof(TT_MODE), 0,0,0,0);
	if (status!=SS$_NORMAL || (iosb[0]&0xFFFF)!=SS$_NORMAL)
	    return;
	(void)sys$dassgn(iochan);
	iochan = 0;
    }
}

    static void
set_tty(int row, int col)
{
    int		    status;
    TT_MODE	    newmode;		
    static short    first_time = TRUE;

    if (first_time)
    {
	orgmode = get_tty();
	first_time = FALSE;
    }
    newmode = get_tty();
    if (col)
	newmode.width		 = col;
    if (row)
	newmode.x.y.length       = row;
    newmode.x.basic		|= (TT$M_NOECHO | TT$M_HOSTSYNC);
    newmode.x.basic		&= ~TT$M_TTSYNC;
    newmode.extended		|= TT2$M_PASTHRU;
    status = sys$qiow(0, iochan, IO$_SETMODE, iosb, 0, 0,
			  &newmode, sizeof(newmode), 0, 0, 0, 0);
    if (status!=SS$_NORMAL || (iosb[0]&0xFFFF)!=SS$_NORMAL)
	return;
}

    static TT_MODE
get_tty(void)
{

    static $DESCRIPTOR(odsc,"SYS$OUTPUT");   

    int		status;
    TT_MODE	tt_mode;

    if (!iochan)
	status = sys$assign(&odsc,&iochan,0,0);

    status = sys$qiow(0, iochan, IO$_SENSEMODE, iosb, 0, 0,
		      &tt_mode, sizeof(tt_mode), 0, 0, 0, 0);
    if (status != SS$_NORMAL || (iosb[0] & 0xFFFF) != SS$_NORMAL)
    {
	tt_mode.width		= 0;
	tt_mode.type		= 0;
	tt_mode.class		= 0;
	tt_mode.x.basic		= 0;
	tt_mode.x.y.length	= 0;
	tt_mode.extended	= 0;
    }
    return(tt_mode);
}


    int
mch_get_shellsize(void)
{
    TT_MODE	tmode;

    tmode = get_tty();			
    Columns = tmode.width;
    Rows = tmode.x.y.length;
    return OK;
}


    void
mch_set_shellsize(void)
{
    set_tty(Rows, Columns);
    switch (Columns)
    {
	case 132:	OUT_STR_NF((char_u *)"\033[?3h\033>");	break;
	case 80:	OUT_STR_NF((char_u *)"\033[?3l\033>");	break;
	default:	break;
    }
    out_flush();
    screen_start();
}

    char_u *
mch_getenv(char_u *lognam)
{
    DESC		d_file_dev, d_lognam  ;
    static char		buffer[LNM$C_NAMLENGTH+1];
    char_u		*cp = NULL;
    unsigned int	attrib;
    int			lengte = 0, dum = 0, idx = 0;
    ITMLST2		itmlst;
    char		*sbuf = NULL;

    vul_desc(&d_lognam, (char *)lognam);
    vul_desc(&d_file_dev, "LNM$FILE_DEV");
    attrib = LNM$M_CASE_BLIND;
    vul_item(&itmlst.index, sizeof(int), LNM$_INDEX, (char *)&idx, &dum);
    vul_item(&itmlst.string, LNM$C_NAMLENGTH, LNM$_STRING, buffer, &lengte);
    itmlst.nul	= 0;
    if (sys$trnlnm(&attrib, &d_file_dev, &d_lognam, NULL,&itmlst) == SS$_NORMAL)
    {
	buffer[lengte] = '\0';
	if (cp = alloc(lengte + 1))
	    strcpy((char *)cp, buffer);
	return(cp);
    }
    else if ((sbuf = getenv((char *)lognam)))
    {
	lengte = strlen(sbuf) + 1;
	cp = alloc(lengte);
	if (cp)
	    strcpy((char *)cp, sbuf);
	return cp;
    }
    else
	return(NULL);
}


    int
mch_setenv(char *var, char *value, int x)
{
    int		res, dum;
    int	attrib = 0L;
    char	acmode = PSL$C_SUPER;	
    DESC	tabnam, lognam;
    ITMLST1	itmlst;

    vul_desc(&tabnam, "LNM$JOB");
    vul_desc(&lognam, var);
    vul_item(&itmlst.equ, value ? strlen(value) : 0, value ? LNM$_STRING : 0,
	    value, &dum);
    itmlst.nul	= 0;
    res = sys$crelnm(&attrib, &tabnam, &lognam, &acmode, &itmlst);
    return((res == 1) ? 0 : -1);
}

    int
vms_sys(char *cmd, char *out, char *inp)
{
    DESC	cdsc, odsc, idsc;
    int	status;

    if (cmd)
	vul_desc(&cdsc, cmd);
    if (out)
	vul_desc(&odsc, out);
    if (inp)
	vul_desc(&idsc, inp);

    lib$spawn(cmd ? &cdsc : NULL,		
	      inp ? &idsc : NULL,		
	      out ? &odsc : NULL,		
	      0, 0, 0, &status, 0, 0, 0, 0, 0, 0);
    return status;
}


    char *
vms_tolower( char *name )
{
    int i,nlen = strlen(name);
    for (i = 0; i < nlen; i++)
	name[i] = TOLOWER_ASC(name[i]);
    return name;
}


    int
vms_sys_status(int status)
{
    if (status != SS$_NORMAL && (status & STS$M_SUCCESS) == 0)
	return status;		
    return 0;
}


    int
vms_read(char *inbuf, size_t nbytes)
{
    int		status, function, len;
    TT_MODE	tt_mode;
    ITEM	itmlst[2];     
    static int trm_mask[8] = {-1, -1, -1, -1, -1, -1, -1, -1};

    
    if (!iochan)
	tt_mode = get_tty();

    
    memset(inbuf, 0, nbytes);

    
    vul_item(&itmlst[0], 0, TRM$_MODIFIERS,
	 (char *)( TRM$M_TM_NOECHO  | TRM$M_TM_NOEDIT	 |
		   TRM$M_TM_NOFILTR | TRM$M_TM_TRMNOECHO |
		   TRM$M_TM_NORECALL) , 0);
    vul_item(&itmlst[1], sizeof(trm_mask), TRM$_TERM, (char *)&trm_mask, 0);

    
    function = (IO$_READLBLK | IO$M_EXTEND);
    status = sys$qiow(0, iochan, function, &iosb, 0, 0,
			 inbuf, nbytes-1, 0, 0, &itmlst, sizeof(itmlst));
    len = strlen(inbuf); 

    
    function = (IO$_READLBLK | IO$M_TIMED | IO$M_ESCAPE | IO$M_NOECHO | IO$M_NOFILTR);
    status = sys$qiow(0, iochan, function, &iosb, 0, 0,
			 inbuf+len, nbytes-1-len, 0, 0, 0, 0);

    len = strlen(inbuf); 

    return len;
}


    static int
vms_wproc(char *name, int val)
{
    int i;
    static int vms_match_alloced = 0;

    if (val == DECC$K_FOREIGN ) 
	return 1;

    
    if (vms_match_num == 0)
    {
	
	if (NULL == vms_fmatch)
	{
	    vms_fmatch = ALLOC_MULT(char_u *, EXPL_ALLOC_INC);
	    if (!vms_fmatch)
		return 0;
	    vms_match_alloced = EXPL_ALLOC_INC;
	    vms_match_free = EXPL_ALLOC_INC;
	}
	else
	{
	    
	    vms_match_free = vms_match_alloced;
	}
    }

    
    vms_remove_version(name);
    name=vms_tolower(name);

    
    for (i = 0; i<vms_match_num; i++)
    {
	if (0 == STRCMP((char_u *)name,vms_fmatch[i]))
	    return 1;
    }
    if (--vms_match_free == 0)
    {
	char_u **old_vms_fmatch = vms_fmatch;

	
	vms_match_alloced += EXPL_ALLOC_INC;
	vms_fmatch = vim_realloc(old_vms_fmatch,
		sizeof(char **) * vms_match_alloced);
	if (!vms_fmatch)
	{
	    vim_free(old_vms_fmatch);
	    return 0;
	}
	vms_match_free = EXPL_ALLOC_INC;
    }
    vms_fmatch[vms_match_num] = vim_strsave((char_u *)name);

    ++vms_match_num;
    return 1;
}


    int
mch_expand_wildcards(int num_pat, char_u **pat, int *num_file, char_u ***file, int flags)
{
    int		i, cnt = 0;
    char_u	buf[MAXPATHL];
    char       *result;
    int		dir;
    int files_alloced, files_free;

    *num_file = 0;			
    files_alloced = EXPL_ALLOC_INC;
    files_free = EXPL_ALLOC_INC;
    *file = ALLOC_MULT(char_u *, files_alloced);
    if (*file == NULL)
    {
	*num_file = 0;
	return FAIL;
    }
    for (i = 0; i < num_pat; i++)
    {
	
	if (vim_strchr(pat[i],'$') || vim_strchr(pat[i],'~'))
	    expand_env(pat[i],buf,MAXPATHL);
	else
	    STRCPY(buf,pat[i]);

	vms_match_num = 0; 
	result = decc$translate_vms(vms_fixfilename(buf));
	if ( (int) result == 0 || (int) result == -1  )
	{
	    cnt = 0;
	}
	else
	{
	    cnt = decc$to_vms(result, vms_wproc, 1  , (flags & EW_DIR ? 0:1 ) ) ;
	}
	if (cnt > 0)
	    cnt = vms_match_num;

	if (cnt < 1)
	    continue;

	for (i = 0; i < cnt; i++)
	{
	    
	    if (!(flags & EW_NOTFOUND) && mch_getperm(vms_fmatch[i]) < 0)
		continue;

	    
	    dir = (mch_isdir(vms_fmatch[i]));
	    if (( dir && !(flags & EW_DIR)) || (!dir && !(flags & EW_FILE)))
		continue;

	    
	    if (!dir && (flags & EW_EXEC)
		 && !mch_can_exe(vms_fmatch[i], NULL, !(flags & EW_SHELLCMD)))
		continue;

	    
	    if (--files_free < 1)
	    {
		char_u **old_file = *file;

		files_alloced += EXPL_ALLOC_INC;
		*file = vim_realloc(old_file, sizeof(char_u **) * files_alloced);
		if (*file == NULL)
		{
		    vim_free(old_file);
		    *file = (char_u **)"";
		    *num_file = 0;
		    return(FAIL);
		}
		files_free = EXPL_ALLOC_INC;
	    }

	    (*file)[*num_file++] = vms_fmatch[i];
	}
    }
    return OK;
}

    int
mch_expandpath(garray_T *gap, char_u *path, int flags)
{
    int		i,cnt = 0;
    char       *result;

    vms_match_num = 0;
    
    
    result = decc$translate_vms(vms_fixfilename(path));
    if ( (int) result == 0 || (int) result == -1  )
    {
	cnt = 0;
    }
    else
    {
	cnt = decc$to_vms(result, vms_wproc, 1 , (flags & EW_DIR ? 0:1 ) );
    }
    if (cnt > 0)
	cnt = vms_match_num;
    for (i = 0; i < cnt; i++)
    {
	if (mch_getperm(vms_fmatch[i]) >= 0) 
	    addfile(gap, vms_fmatch[i], flags);
    }
    return cnt;
}


    static void
vms_unix_mixed_filespec(char *in, char *out)
{
    char *lastcolon;
    char *end_of_dir;
    char ch;
    int len;
    char *out_str=out;

    
    
    lastcolon = strrchr(in, ':');   
    if (lastcolon != NULL)
    {
	len = lastcolon - in + 1;
	strncpy(out, in, len);
	out += len;
	in += len;
    }

    end_of_dir = NULL;	

    
    ch = *in;
    if ((ch == '[') || (ch == '/') || (ch == '<')) 
    {
	ch = '[';
	SKIP_FOLLOWING_SLASHES(in);
    }
    else if (EQN(in, "../", 3)) 
    {
	*out++ = '[';
	*out++ = '-';
	end_of_dir = out;
	ch = '.';
	in += 2;
	SKIP_FOLLOWING_SLASHES(in);
    }
    else
    {		    
	while (EQN(in, "./", 2))	
	{
	    in += 2;
	    SKIP_FOLLOWING_SLASHES(in);
    }
    if (strchr(in, '/') == NULL)  
    {
	strcpy(out, in);	
	return;
    }
    else
    {
	*out++ = '[';	    
	ch = '.';
	--in;
	}
    }

    

    
    *out++ = ch;
    ++in;

    while (*in != '\0')
    {
	ch = *in;
	if ((ch == ']') || (ch == '/') || (ch == '>') )	
	{
	    end_of_dir = out;
	    ch = '.';
	    SKIP_FOLLOWING_SLASHES(in);
	    }
	else if (EQN(in, "../", 3))	
	{
	    *out++ = '-';
	    end_of_dir = out;
	    ch = '.';
	    in += 2;
	    SKIP_FOLLOWING_SLASHES(in);
	    }
	else
	{
	    while (EQN(in, "./", 2))  
	    {
		end_of_dir = out;
		in += 2;
		SKIP_FOLLOWING_SLASHES(in);
		ch = *in;
	    }
	}

    
	*out++ = ch;
	++in;
    }

    *out = '\0';    

    if (end_of_dir != NULL) 
	*end_of_dir = ']';
}


    static int
vms_fspec_proc(char *fil, int val)
{
    strcpy(Fspec_Rms,fil);
    return(1);
}


    void *
vms_fixfilename(void *instring)
{
    static char		*buf = NULL;
    static size_t	buflen = 0;
    size_t		len;

    
    len = strlen(instring) + 1;
    if (len > buflen)
    {
	buflen = len + 128;
	buf = vim_realloc(buf, buflen * sizeof(char));
    }

#ifdef DEBUG
     char		 *tmpbuf = NULL;
     tmpbuf = ALLOC_MULT(char, buflen);
     strcpy(tmpbuf, instring);
#endif

    Fspec_Rms = buf;				

    if (strchr(instring,'/') == NULL)
	
	strcpy(buf, instring);
    else if (strchr(instring,'"') == NULL)	
    {
	
	if ( (strchr(instring,'[') == NULL) && (strchr(instring,'<') == NULL) &&
	     (strchr(instring,']') == NULL) && (strchr(instring,'>') == NULL) &&
	     (strchr(instring,':') == NULL) )
	{
	    
	    decc$to_vms(instring, vms_fspec_proc, 0, 0);
	}
	else
	{
	    
	    vms_unix_mixed_filespec(instring, buf);
	}
    }
    else
	
	
	
	vms_unix_mixed_filespec(instring, buf);

    return buf;
}


    void
vms_remove_version(void * fname)
{
    char_u	*cp;
    char_u	*fp;

    if ((cp = vim_strchr( fname, ';')) != NULL) 
	*cp = '\0';
    else if ((cp = vim_strrchr( fname, '.')) != NULL )
    {
	if      ((fp = vim_strrchr( fname, ']')) != NULL )
	    {;}
	else if ((fp = vim_strrchr( fname, '>')) != NULL )
	    {;}
	else
	    fp = fname;

	while ( *fp != '\0' && fp < cp )
	    if ( *fp++ == '.' )
		*cp = '\0';
    }
    return ;
}

struct typeahead_st {
    unsigned short numchars;
    unsigned char  firstchar;
    unsigned char  reserved0;
    unsigned int  reserved1;
} typeahead;


    int
RealWaitForChar(
    int		fd UNUSED, 
    int	msec,
    int		*check_for_gpm UNUSED,
    int		*interrupted)
{
    int status;
    struct _generic_64 time_curr;
    struct _generic_64 time_diff;
    struct _generic_64 time_out;
    unsigned int convert_operation = LIB$K_DELTA_SECONDS_F;
    float sec =(float) msec/1000;

    
    if (!iochan)
	get_tty();

    if (sec > 0)
    {
	
	

	
	status = sys$gettim(&time_curr);
	if (status != SS$_NORMAL)
	    return 0; 
	
#if __G_FLOAT==0
# ifndef VAX
	
	status = lib$cvts_to_internal_time(
		&convert_operation, &sec, &time_diff);
# endif
#else   
	status = lib$cvtf_to_internal_time(
		&convert_operation, &sec, &time_diff);
#endif
	if (status != LIB$_NORMAL)
	    return 0; 
	
	status = lib$add_times(
		&time_curr,
		&time_diff,
		&time_out);
	if (status != LIB$_NORMAL)
	    return 0; 
    }

    while (TRUE)
    {
	
	status = sys$qiow(0, iochan, IO$_SENSEMODE | IO$M_TYPEAHDCNT, iosb,
		0, 0, &typeahead, 8, 0, 0, 0, 0);
	if (status != SS$_NORMAL || (iosb[0] & 0xFFFF) != SS$_NORMAL)
	    return 0; 

	if (typeahead.numchars)
	    return 1; 

	
	if (msec == 0)
	{
	    
	    return 0;
	}
	else if (msec < 0)
	{
	    
	    return 1; 
	}
	else
	{
	    
	    status = sys$gettim(&time_curr);
	    if (status != SS$_NORMAL)
		return 0; 

	    status = lib$sub_times(
		    &time_out,
		    &time_curr,
		    &time_diff);
	    if (status != LIB$_NORMAL)
		return 0; 

	    
	}
    }
}
