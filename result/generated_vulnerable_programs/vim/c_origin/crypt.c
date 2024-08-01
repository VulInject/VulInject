


#include "vim.h"

#if defined(FEAT_CRYPT) || defined(PROTO)


typedef struct {
    char	*name;		
    char	*magic;		
    int		salt_len;	
    int		seed_len;	
    int		add_len;	
				
#ifdef CRYPT_NOT_INPLACE
    int		works_inplace;	
#endif
    int		whole_undofile;	

    
    int (*self_test_fn)(void);

    
    int (* init_fn)(cryptstate_T *state, char_u *key, crypt_arg_T *arg);

    
    
    void (*encode_fn)(cryptstate_T *state, char_u *from, size_t len,
							char_u *to, int last);
    void (*decode_fn)(cryptstate_T *state, char_u *from, size_t len,
							char_u *to, int last);

    
    
    int (*encode_buffer_fn)(cryptstate_T *state, char_u *from, size_t len,
						    char_u **newptr, int last);
    int (*decode_buffer_fn)(cryptstate_T *state, char_u *from, size_t len,
						    char_u **newptr, int last);

    
    
    
    
    
    
    
    void (*encode_inplace_fn)(cryptstate_T *state, char_u *p1, size_t len,
							char_u *p2, int last);
    void (*decode_inplace_fn)(cryptstate_T *state, char_u *p1, size_t len,
							char_u *p2, int last);
} cryptmethod_T;

static int crypt_sodium_init_(cryptstate_T *state, char_u *key, crypt_arg_T *arg);
static int crypt_sodium_buffer_decode(cryptstate_T *state, char_u *from, size_t len, char_u **buf_out, int last);
static int crypt_sodium_buffer_encode(cryptstate_T *state, char_u *from, size_t len, char_u **buf_out, int last);
# if defined(FEAT_SODIUM) || defined(PROTO)
static void crypt_long_long_to_char(int int n, char_u *s);
static void crypt_int_to_char(int n, char_u *s);
static int int crypt_char_to_long_long(char_u *s);
static int crypt_char_to_int(char_u *s);
#endif
#if defined(FEAT_EVAL) && defined(FEAT_SODIUM)
static void crypt_sodium_report_hash_params(unsigned int int opslimit, unsigned int int ops_def, size_t memlimit, size_t mem_def, int alg, int alg_def);
#endif


static cryptmethod_T cryptmethods[CRYPT_M_COUNT] = {
    
    {
	"zip",
	"VimCrypt~01!",
	0,
	0,
	0,
#ifdef CRYPT_NOT_INPLACE
	TRUE,
#endif
	FALSE,
	NULL,
	crypt_zip_init,
	crypt_zip_encode, crypt_zip_decode,
	NULL, NULL,
	crypt_zip_encode, crypt_zip_decode,
    },

    
    {
	"blowfish",
	"VimCrypt~02!",
	8,
	8,
	0,
#ifdef CRYPT_NOT_INPLACE
	TRUE,
#endif
	FALSE,
	blowfish_self_test,
	crypt_blowfish_init,
	crypt_blowfish_encode, crypt_blowfish_decode,
	NULL, NULL,
	crypt_blowfish_encode, crypt_blowfish_decode,
    },

    
    {
	"blowfish2",
	"VimCrypt~03!",
	8,
	8,
	0,
#ifdef CRYPT_NOT_INPLACE
	TRUE,
#endif
	TRUE,
	blowfish_self_test,
	crypt_blowfish_init,
	crypt_blowfish_encode, crypt_blowfish_decode,
	NULL, NULL,
	crypt_blowfish_encode, crypt_blowfish_decode,
    },

    
    {
	"xchacha20",
	"VimCrypt~04!",
#ifdef FEAT_SODIUM
	crypto_pwhash_argon2id_SALTBYTES, 
#else
	16,
#endif
	8,
	0,
#ifdef CRYPT_NOT_INPLACE
	FALSE,
#endif
	FALSE,
	NULL,
	crypt_sodium_init_,
	NULL, NULL,
	crypt_sodium_buffer_encode, crypt_sodium_buffer_decode,
	NULL, NULL,
    },
    
    {
	"xchacha20v2",
	"VimCrypt~05!",
#ifdef FEAT_SODIUM
	crypto_pwhash_argon2id_SALTBYTES, 
#else
	16,
#endif
	8,
	
	20,
#ifdef CRYPT_NOT_INPLACE
	FALSE,
#endif
	FALSE,
	NULL,
	crypt_sodium_init_,
	NULL, NULL,
	crypt_sodium_buffer_encode, crypt_sodium_buffer_decode,
	NULL, NULL,
    },

    
    
};

#if defined(FEAT_SODIUM) || defined(PROTO)
typedef struct {
    size_t	    count;
    unsigned char   key[crypto_box_SEEDBYTES];
		  
    crypto_secretstream_xchacha20poly1305_state
		    state;
} sodium_state_T;


# ifdef DYNAMIC_SODIUM
#  ifdef MSWIN
#   define SODIUM_PROC FARPROC
#   define load_dll vimLoadLib
#   define symbol_from_dll GetProcAddress
#   define close_dll FreeLibrary
#   define load_dll_error GetWin32Error
#  else
#   error Dynamic loading of libsodium is not supported for now.






#  endif

#  define sodium_init	    load_sodium
#  define sodium_free	    dll_sodium_free
#  define sodium_malloc	    dll_sodium_malloc
#  define sodium_memzero    dll_sodium_memzero
#  define sodium_mlock	    dll_sodium_mlock
#  define sodium_munlock    dll_sodium_munlock
#  define crypto_secretstream_xchacha20poly1305_init_push \
    dll_crypto_secretstream_xchacha20poly1305_init_push
#  define crypto_secretstream_xchacha20poly1305_push \
    dll_crypto_secretstream_xchacha20poly1305_push
#  define crypto_secretstream_xchacha20poly1305_init_pull \
    dll_crypto_secretstream_xchacha20poly1305_init_pull
#  define crypto_secretstream_xchacha20poly1305_pull \
    dll_crypto_secretstream_xchacha20poly1305_pull
#  define crypto_pwhash	    dll_crypto_pwhash
#  define randombytes_buf   dll_randombytes_buf
#  define randombytes_random dll_randombytes_random

static int (*dll_sodium_init)(void) = NULL;
static void (*dll_sodium_free)(void *) = NULL;
static void *(*dll_sodium_malloc)(const size_t) = NULL;
static void (*dll_sodium_memzero)(void * const, const size_t) = NULL;
static int (*dll_sodium_mlock)(void * const, const size_t) = NULL;
static int (*dll_sodium_munlock)(void * const, const size_t) = NULL;
static int (*dll_crypto_secretstream_xchacha20poly1305_init_push)
   (crypto_secretstream_xchacha20poly1305_state *state,
    unsigned char [],
    const unsigned char []) = NULL;
static int (*dll_crypto_secretstream_xchacha20poly1305_push)
   (crypto_secretstream_xchacha20poly1305_state *state,
    unsigned char *c, unsigned int int *clen_p,
    const unsigned char *m, unsigned int int mlen,
    const unsigned char *ad, unsigned int int adlen, unsigned char tag)
    = NULL;
static int (*dll_crypto_secretstream_xchacha20poly1305_init_pull)
   (crypto_secretstream_xchacha20poly1305_state *state,
    const unsigned char [],
    const unsigned char []) = NULL;
static int (*dll_crypto_secretstream_xchacha20poly1305_pull)
   (crypto_secretstream_xchacha20poly1305_state *state,
    unsigned char *m, unsigned int int *mlen_p, unsigned char *tag_p,
    const unsigned char *c, unsigned int int clen,
    const unsigned char *ad, unsigned int int adlen) = NULL;
static int (*dll_crypto_pwhash)(unsigned char * const out,
    unsigned int int outlen,
    const char * const passwd, unsigned int int passwdlen,
    const unsigned char * const salt,
    unsigned int int opslimit, size_t memlimit, int alg)
    = NULL;
static void (*dll_randombytes_buf)(void * const buf, const size_t size);
static unsigned int (*dll_randombytes_random)(void);

static struct {
    const char *name;
    SODIUM_PROC *ptr;
} sodium_funcname_table[] = {
    {"sodium_init", (SODIUM_PROC*)&dll_sodium_init},
    {"sodium_free", (SODIUM_PROC*)&dll_sodium_free},
    {"sodium_malloc", (SODIUM_PROC*)&dll_sodium_malloc},
    {"sodium_memzero", (SODIUM_PROC*)&dll_sodium_memzero},
    {"sodium_mlock", (SODIUM_PROC*)&dll_sodium_mlock},
    {"sodium_munlock", (SODIUM_PROC*)&dll_sodium_munlock},
    {"crypto_secretstream_xchacha20poly1305_init_push", (SODIUM_PROC*)&dll_crypto_secretstream_xchacha20poly1305_init_push},
    {"crypto_secretstream_xchacha20poly1305_push", (SODIUM_PROC*)&dll_crypto_secretstream_xchacha20poly1305_push},
    {"crypto_secretstream_xchacha20poly1305_init_pull", (SODIUM_PROC*)&dll_crypto_secretstream_xchacha20poly1305_init_pull},
    {"crypto_secretstream_xchacha20poly1305_pull", (SODIUM_PROC*)&dll_crypto_secretstream_xchacha20poly1305_pull},
    {"crypto_pwhash", (SODIUM_PROC*)&dll_crypto_pwhash},
    {"randombytes_buf", (SODIUM_PROC*)&dll_randombytes_buf},
    {"randombytes_random", (SODIUM_PROC*)&dll_randombytes_random},
    {NULL, NULL}
};

    static int
sodium_runtime_link_init(int verbose)
{
    static HINSTANCE hsodium = NULL;
    const char *libname = DYNAMIC_SODIUM_DLL;
    int i;

    if (hsodium != NULL)
	return OK;

    hsodium = load_dll(libname);
    if (hsodium == NULL)
    {
	if (verbose)
	    semsg(_(e_could_not_load_library_str_str), libname, load_dll_error());
	return FAIL;
    }

    for (i = 0; sodium_funcname_table[i].ptr; ++i)
    {
	if ((*sodium_funcname_table[i].ptr = symbol_from_dll(hsodium,
			sodium_funcname_table[i].name)) == NULL)
	{
	    close_dll(hsodium);
	    hsodium = NULL;
	    if (verbose)
		semsg(_(e_could_not_load_library_function_str), sodium_funcname_table[i].name);
	    return FAIL;
	}
    }
    return OK;
}

    static int
load_sodium(void)
{
    if (sodium_runtime_link_init(TRUE) == FAIL)
	return -1;
    return dll_sodium_init();
}
# endif

# if defined(DYNAMIC_SODIUM) || defined(PROTO)
    int
sodium_enabled(int verbose)
{
    return sodium_runtime_link_init(verbose) == OK;
}
# endif
#endif

#define CRYPT_MAGIC_LEN	12	
static char	crypt_magic_head[] = "VimCrypt~";


    int
crypt_method_nr_from_name(char_u *name)
{
    int i;

    for (i = 0; i < CRYPT_M_COUNT; ++i)
	if (STRCMP(name, cryptmethods[i].name) == 0)
	    return i;
    return 0;
}


    int
crypt_method_nr_from_magic(char *ptr, int len)
{
    int i;

    if (len < CRYPT_MAGIC_LEN)
	return -1;

    for (i = 0; i < CRYPT_M_COUNT; i++)
	if (memcmp(ptr, cryptmethods[i].magic, CRYPT_MAGIC_LEN) == 0)
	    return i;

    i = (int)STRLEN(crypt_magic_head);
    if (len >= i && memcmp(ptr, crypt_magic_head, i) == 0)
	emsg(_(e_file_is_encrypted_with_unknown_method));

    return -1;
}

#ifdef CRYPT_NOT_INPLACE

    int
crypt_works_inplace(cryptstate_T *state)
{
    return cryptmethods[state->method_nr].works_inplace;
}
#endif


    int
crypt_get_method_nr(buf_T *buf)
{
    return crypt_method_nr_from_name(*buf->b_p_cm == NUL ? p_cm : buf->b_p_cm);
}


    int
crypt_method_is_sodium(int method)
{
    return method == CRYPT_M_SOD || method == CRYPT_M_SOD2;
}


    int
crypt_whole_undofile(int method_nr)
{
    return cryptmethods[method_nr].whole_undofile;
}


    int
crypt_get_header_len(int method_nr)
{
    return CRYPT_MAGIC_LEN
	+ cryptmethods[method_nr].salt_len
	+ cryptmethods[method_nr].seed_len
	+ cryptmethods[method_nr].add_len;
}


#if defined(FEAT_SODIUM) || defined(PROTO)

    int
crypt_get_max_header_len(void)
{
    int i;
    int max = 0;
    int temp = 0;

    for (i = 0; i < CRYPT_M_COUNT; ++i)
    {
	temp = crypt_get_header_len(i);
	if (temp > max)
	    max = temp;
    }
    return max;
}
#endif


    void
crypt_set_cm_option(buf_T *buf, int method_nr)
{
    free_string_option(buf->b_p_cm);
    buf->b_p_cm = vim_strsave((char_u *)cryptmethods[method_nr].name);
}


    int
crypt_self_test(void)
{
    int method_nr = crypt_get_method_nr(curbuf);

    if (cryptmethods[method_nr].self_test_fn == NULL)
	return OK;
    return cryptmethods[method_nr].self_test_fn();
}


    cryptstate_T *
crypt_create(
    int		method_nr,
    char_u	*key,
    crypt_arg_T *crypt_arg)
{
    cryptstate_T *state = ALLOC_ONE(cryptstate_T);

    if (state == NULL)
	return state;

    state->method_nr = method_nr;
    if (cryptmethods[method_nr].init_fn(state, key, crypt_arg) == FAIL)
    {
	vim_free(state);
	return NULL;
    }
    return state;
}


    cryptstate_T *
crypt_create_from_header(
    int		method_nr,
    char_u	*key,
    char_u	*header)
{
    crypt_arg_T arg;

    CLEAR_FIELD(arg);
    arg.cat_init_from_file = TRUE;

    arg.cat_salt_len = cryptmethods[method_nr].salt_len;
    arg.cat_seed_len = cryptmethods[method_nr].seed_len;
    arg.cat_add_len = cryptmethods[method_nr].add_len;
    if (arg.cat_salt_len > 0)
	arg.cat_salt = header + CRYPT_MAGIC_LEN;
    if (arg.cat_seed_len > 0)
	arg.cat_seed = header + CRYPT_MAGIC_LEN + arg.cat_salt_len;
    if (arg.cat_add_len > 0)
	arg.cat_add = header + CRYPT_MAGIC_LEN
					 + arg.cat_salt_len + arg.cat_seed_len;

    return crypt_create(method_nr, key, &arg);
}


    cryptstate_T *
crypt_create_from_file(FILE *fp, char_u *key)
{
    int		method_nr;
    int		header_len;
    char	magic_buffer[CRYPT_MAGIC_LEN];
    char_u	*buffer;
    cryptstate_T *state;

    if (fread(magic_buffer, CRYPT_MAGIC_LEN, 1, fp) != 1)
	return NULL;
    method_nr = crypt_method_nr_from_magic(magic_buffer, CRYPT_MAGIC_LEN);
    if (method_nr < 0)
	return NULL;

    header_len = crypt_get_header_len(method_nr);
    if ((buffer = alloc(header_len)) == NULL)
	return NULL;
    mch_memmove(buffer, magic_buffer, CRYPT_MAGIC_LEN);
    if (header_len > CRYPT_MAGIC_LEN
	    && fread(buffer + CRYPT_MAGIC_LEN,
				    header_len - CRYPT_MAGIC_LEN, 1, fp) != 1)
    {
	vim_free(buffer);
	return NULL;
    }

    state = crypt_create_from_header(method_nr, key, buffer);
    vim_free(buffer);
    return state;
}


    cryptstate_T *
crypt_create_for_writing(
    int	    method_nr,
    char_u  *key,
    char_u  **header,
    int	    *header_len)
{
    int	    len = crypt_get_header_len(method_nr);
    crypt_arg_T arg;
    cryptstate_T *state;

    CLEAR_FIELD(arg);
    arg.cat_salt_len = cryptmethods[method_nr].salt_len;
    arg.cat_seed_len = cryptmethods[method_nr].seed_len;
    arg.cat_add_len  = cryptmethods[method_nr].add_len;
    arg.cat_init_from_file = FALSE;

    *header_len = len;
    *header = alloc(len);
    if (*header == NULL)
	return NULL;

    mch_memmove(*header, cryptmethods[method_nr].magic, CRYPT_MAGIC_LEN);
    if (arg.cat_salt_len > 0 || arg.cat_seed_len > 0 || arg.cat_add_len > 0)
    {
	if (arg.cat_salt_len > 0)
	    arg.cat_salt = *header + CRYPT_MAGIC_LEN;
	if (arg.cat_seed_len > 0)
	    arg.cat_seed = *header + CRYPT_MAGIC_LEN + arg.cat_salt_len;
	if (arg.cat_add_len > 0)
	    arg.cat_add = *header + CRYPT_MAGIC_LEN
					 + arg.cat_salt_len + arg.cat_seed_len;

	
	
	
#ifdef FEAT_SODIUM
	if (sodium_init() >= 0)
	{
	    if (arg.cat_salt_len > 0)
		randombytes_buf(arg.cat_salt, arg.cat_salt_len);
	    if (arg.cat_seed_len > 0)
		randombytes_buf(arg.cat_seed, arg.cat_seed_len);
	}
	else
#endif
	    sha2_seed(arg.cat_salt, arg.cat_salt_len, arg.cat_seed, arg.cat_seed_len);
    }
    state = crypt_create(method_nr, key, &arg);
    if (state == NULL)
	VIM_CLEAR(*header);
    return state;
}


    void
crypt_free_state(cryptstate_T *state)
{
#ifdef FEAT_SODIUM
    if (crypt_method_is_sodium(state->method_nr))
    {
	sodium_munlock(((sodium_state_T *)state->method_state)->key,
							 crypto_box_SEEDBYTES);
	sodium_memzero(state->method_state, sizeof(sodium_state_T));
	sodium_free(state->method_state);
    }
    else
#endif
	vim_free(state->method_state);
    vim_free(state);
}

#ifdef CRYPT_NOT_INPLACE

    int
crypt_encode_alloc(
    cryptstate_T *state,
    char_u	*from,
    size_t	len,
    char_u	**newptr,
    int		last)
{
    cryptmethod_T *method = &cryptmethods[state->method_nr];

    if (method->encode_buffer_fn != NULL)
	
	return method->encode_buffer_fn(state, from, len, newptr, last);
    if (len == 0)
	
	return (int)len;

    *newptr = alloc(len + 50);
    if (*newptr == NULL)
	return -1;
    method->encode_fn(state, from, len, *newptr, last);
    return (int)len;
}


    int
crypt_decode_alloc(
    cryptstate_T *state,
    char_u	*ptr,
    int	len,
    char_u      **newptr,
    int		last)
{
    cryptmethod_T *method = &cryptmethods[state->method_nr];

    if (method->decode_buffer_fn != NULL)
	
	return method->decode_buffer_fn(state, ptr, len, newptr, last);

    if (len == 0)
	
	return len;

    *newptr = alloc(len);
    if (*newptr == NULL)
	return -1;
    method->decode_fn(state, ptr, len, *newptr, last);
    return len;
}
#endif


    void
crypt_encode(
    cryptstate_T *state,
    char_u	*from,
    size_t	len,
    char_u	*to,
    int		last)
{
    cryptmethods[state->method_nr].encode_fn(state, from, len, to, last);
}

#if 0  

    void
crypt_decode(
    cryptstate_T *state,
    char_u	*from,
    size_t	len,
    char_u	*to,
    int		last)
{
    cryptmethods[state->method_nr].decode_fn(state, from, len, to, last);
}
#endif


    void
crypt_encode_inplace(
    cryptstate_T *state,
    char_u	*buf,
    size_t	len,
    int		last)
{
    cryptmethods[state->method_nr].encode_inplace_fn(state, buf, len,
								    buf, last);
}


    void
crypt_decode_inplace(
    cryptstate_T *state,
    char_u	*buf,
    size_t	len,
    int		last)
{
    cryptmethods[state->method_nr].decode_inplace_fn(state, buf, len,
								    buf, last);
}


    void
crypt_free_key(char_u *key)
{
    char_u *p;

    if (key != NULL)
    {
	for (p = key; *p != NUL; ++p)
	    *p = 0;
	vim_free(key);
    }
}


    void
crypt_check_method(int method)
{
    if (method < CRYPT_M_BF2 || method == CRYPT_M_SOD)
    {
	msg_scroll = TRUE;
	msg(_("Warning: Using a weak encryption method; see :help 'cm'"));
    }
}


    void
crypt_check_swapfile_curbuf(void)
{
#ifdef FEAT_SODIUM
    int method = crypt_get_method_nr(curbuf);
    if (crypt_method_is_sodium(method))
    {
	
	
	mf_close_file(curbuf, TRUE);	
	set_option_value_give_err((char_u *)"swf", 0, NULL, OPT_LOCAL);
	msg_scroll = TRUE;
	msg(_("Note: Encryption of swapfile not supported, disabling swap file"));
    }
#endif
}

    void
crypt_check_current_method(void)
{
    crypt_check_method(crypt_get_method_nr(curbuf));
}


    char_u *
crypt_get_key(
    int		store,
    int		twice)	    
{
    char_u	*p1, *p2 = NULL;
    int		round;

    for (round = 0; ; ++round)
    {
	cmdline_star = TRUE;
	cmdline_row = msg_row;
	p1 = getcmdline_prompt(NUL, round == 0
		? (char_u *)_("Enter encryption key: ")
		: (char_u *)_("Enter same key again: "), 0, EXPAND_NOTHING,
		NULL);
	cmdline_star = FALSE;

	if (p1 == NULL)
	    break;

	if (round == twice)
	{
	    if (p2 != NULL && STRCMP(p1, p2) != 0)
	    {
		msg(_("Keys don't match!"));
		crypt_free_key(p1);
		crypt_free_key(p2);
		p2 = NULL;
		round = -1;		
		continue;
	    }

	    if (store)
	    {
		set_option_value_give_err((char_u *)"key", 0L, p1, OPT_LOCAL);
		crypt_free_key(p1);
		p1 = curbuf->b_p_key;
		crypt_check_swapfile_curbuf();
	    }
	    break;
	}
	p2 = p1;
    }

    
    if (!crypt_method_is_sodium(crypt_get_method_nr(curbuf)))
    {
	if (msg_didout)
	    msg_putchar('\n');
	need_wait_return = FALSE;
	msg_didout = FALSE;
    }

    crypt_free_key(p2);
    return p1;
}



    void
crypt_append_msg(
    buf_T *buf)
{
    if (crypt_get_method_nr(buf) == 0)
	STRCAT(IObuff, _("[crypted]"));
    else
    {
	STRCAT(IObuff, "[");
	STRCAT(IObuff, *buf->b_p_cm == NUL ? p_cm : buf->b_p_cm);
	STRCAT(IObuff, "]");
    }
}

    static int
crypt_sodium_init_(
    cryptstate_T	*state UNUSED,
    char_u		*key UNUSED,
    crypt_arg_T		*arg UNUSED)
{
# ifdef FEAT_SODIUM
    
    unsigned char	dkey[crypto_box_SEEDBYTES]; 
    sodium_state_T	*sd_state;
    int			retval = 0;
    unsigned int int	opslimit;
    unsigned int int	memlimit;
    int			alg;

    if (sodium_init() < 0)
	return FAIL;

    sd_state = (sodium_state_T *)sodium_malloc(sizeof(sodium_state_T));
    sodium_memzero(sd_state, sizeof(sodium_state_T));

    if ((state->method_nr == CRYPT_M_SOD2 && !arg->cat_init_from_file)
	    || state->method_nr == CRYPT_M_SOD)
    {
	opslimit = crypto_pwhash_OPSLIMIT_INTERACTIVE;
	memlimit = crypto_pwhash_MEMLIMIT_INTERACTIVE;
	alg = crypto_pwhash_ALG_DEFAULT;

#if 0
	
	if (state->method_nr == CRYPT_M_SOD2)
	{
	    opslimit = crypto_pwhash_OPSLIMIT_MODERATE;
	    memlimit = crypto_pwhash_MEMLIMIT_MODERATE;
	}
#endif

	
	if (crypto_pwhash(dkey, sizeof(dkey), (const char *)key, STRLEN(key),
			  arg->cat_salt, opslimit, (size_t)memlimit, alg) != 0)
	{
	    
	    sodium_free(sd_state);
	    return FAIL;
	}
	memcpy(sd_state->key, dkey, crypto_box_SEEDBYTES);

	retval += sodium_mlock(sd_state->key, crypto_box_SEEDBYTES);
	retval += sodium_mlock(key, STRLEN(key));

	if (retval < 0)
	{
	    emsg(_(e_encryption_sodium_mlock_failed));
	    sodium_free(sd_state);
	    return FAIL;
	}
	
	if (state->method_nr == CRYPT_M_SOD2 && arg->cat_add != NULL)
	{
	    char_u	buffer[20];
	    char_u	*p = buffer;
	    vim_memset(buffer, 0, 20);

	    crypt_long_long_to_char(opslimit, p);
	    p += sizeof(opslimit);

	    crypt_long_long_to_char(memlimit, p);
	    p += sizeof(memlimit);

	    crypt_int_to_char(alg, p);
	    memcpy(arg->cat_add, buffer, sizeof(opslimit) + sizeof(memlimit) + sizeof(alg));
	}
    }
    else
    {
	char_u	buffer[20];
	char_u	*p = buffer;
	vim_memset(buffer, 0, 20);
	int	size = sizeof(opslimit) +
	    sizeof(memlimit) + sizeof(alg);

	
	if (arg->cat_add_len < size)
	{
	    sodium_free(sd_state);
	    return FAIL;
	}

	
	memcpy(p, arg->cat_add, size);
	arg->cat_add += size;

	opslimit = crypt_char_to_long_long(p);
	p += sizeof(opslimit);
	memlimit = crypt_char_to_long_long(p);
	p += sizeof(memlimit);
	alg = crypt_char_to_int(p);
	p += sizeof(alg);

#ifdef FEAT_EVAL
	crypt_sodium_report_hash_params(opslimit,
					    crypto_pwhash_OPSLIMIT_INTERACTIVE,
		(size_t)memlimit, crypto_pwhash_MEMLIMIT_INTERACTIVE,
		alg, crypto_pwhash_ALG_DEFAULT);
#endif

	if (crypto_pwhash(dkey, sizeof(dkey), (const char *)key, STRLEN(key),
			  arg->cat_salt, opslimit, (size_t)memlimit, alg) != 0)
	{
	    
	    sodium_free(sd_state);
	    return FAIL;
	}
	memcpy(sd_state->key, dkey, crypto_box_SEEDBYTES);

	retval += sodium_mlock(sd_state->key, crypto_box_SEEDBYTES);
	retval += sodium_mlock(key, STRLEN(key));

	if (retval < 0)
	{
	    emsg(_(e_encryption_sodium_mlock_failed));
	    sodium_free(sd_state);
	    return FAIL;
	}
    }
    sd_state->count = 0;
    state->method_state = sd_state;

    return OK;
# else
    emsg(_(e_libsodium_not_built_in));
    return FAIL;
# endif
}


#if 0  
    void
crypt_sodium_encode(
    cryptstate_T *state UNUSED,
    char_u	*from UNUSED,
    size_t	len UNUSED,
    char_u	*to UNUSED,
    int		last UNUSED)
{
# ifdef FEAT_SODIUM
    
    sodium_state_T *sod_st = state->method_state;
    unsigned char  tag = last
			? crypto_secretstream_xchacha20poly1305_TAG_FINAL  : 0;

    if (sod_st->count == 0)
    {
	if (len <= crypto_secretstream_xchacha20poly1305_HEADERBYTES)
	{
	    emsg(_(e_libsodium_cannot_encrypt_header));
	    return;
	}
	crypto_secretstream_xchacha20poly1305_init_push(&sod_st->state,
							      to, sod_st->key);
	to += crypto_secretstream_xchacha20poly1305_HEADERBYTES;
    }

    if (sod_st->count && len <= crypto_secretstream_xchacha20poly1305_ABYTES)
    {
	emsg(_(e_libsodium_cannot_encrypt_buffer));
	return;
    }

    crypto_secretstream_xchacha20poly1305_push(&sod_st->state, to, NULL,
						      from, len, NULL, 0, tag);

    sod_st->count++;
# endif
}
#endif


#if 0  
    void
crypt_sodium_decode(
    cryptstate_T *state UNUSED,
    char_u	*from UNUSED,
    size_t	len UNUSED,
    char_u	*to UNUSED,
    int		last UNUSED)
{
# ifdef FEAT_SODIUM
    
    sodium_state_T *sod_st = state->method_state;
    unsigned char  tag;
    unsigned int int buf_len;
    char_u *p1 = from;
    char_u *p2 = to;
    char_u *buf_out;

    if (sod_st->count == 0
		   && len <= crypto_secretstream_xchacha20poly1305_HEADERBYTES)
    {
	emsg(_(e_libsodium_cannot_decrypt_header));
	return;
    }

    buf_out = (char_u *)alloc(len);

    if (buf_out == NULL)
    {
	emsg(_(e_libsodium_cannot_allocate_buffer));
	return;
    }
    if (sod_st->count == 0)
    {
	if (crypto_secretstream_xchacha20poly1305_init_pull(
				       &sod_st->state, from, sod_st->key) != 0)
	{
	    emsg(_(e_libsodium_decryption_failed_header_incomplete));
	    goto fail;
	}

	from += crypto_secretstream_xchacha20poly1305_HEADERBYTES;
	len -= crypto_secretstream_xchacha20poly1305_HEADERBYTES;

	if (p1 == p2)
	    to += crypto_secretstream_xchacha20poly1305_HEADERBYTES;
    }

    if (sod_st->count && len <= crypto_secretstream_xchacha20poly1305_ABYTES)
    {
	emsg(_(e_libsodium_cannot_decrypt_buffer));
	goto fail;
    }
    if (crypto_secretstream_xchacha20poly1305_pull(&sod_st->state,
			     buf_out, &buf_len, &tag, from, len, NULL, 0) != 0)
    {
	emsg(_(e_libsodium_decryption_failed));
	goto fail;
    }
    sod_st->count++;

    if (tag == crypto_secretstream_xchacha20poly1305_TAG_FINAL && !last)
    {
	emsg(_(e_libsodium_decryption_failed_premature));
	goto fail;
    }
    if (p1 == p2)
	mch_memmove(p2, buf_out, buf_len);

fail:
    vim_free(buf_out);
# endif
}
#endif


    static int
crypt_sodium_buffer_encode(
    cryptstate_T *state UNUSED,
    char_u	*from UNUSED,
    size_t	len UNUSED,
    char_u	**buf_out UNUSED,
    int		last UNUSED)
{
# ifdef FEAT_SODIUM
    
    unsigned int int	out_len;
    char_u		*ptr;
    unsigned char	tag = last
			? crypto_secretstream_xchacha20poly1305_TAG_FINAL  : 0;
    int			length;
    sodium_state_T	*sod_st = state->method_state;
    int			first = (sod_st->count == 0);

    length = (int)len + crypto_secretstream_xchacha20poly1305_ABYTES
	     + (first ? crypto_secretstream_xchacha20poly1305_HEADERBYTES : 0);
    *buf_out = alloc_clear(length);
    if (*buf_out == NULL)
    {
	emsg(_(e_libsodium_cannot_allocate_buffer));
	return -1;
    }
    ptr = *buf_out;

    if (first)
    {
	crypto_secretstream_xchacha20poly1305_init_push(&sod_st->state,
		ptr, sod_st->key);
	ptr += crypto_secretstream_xchacha20poly1305_HEADERBYTES;
    }

    crypto_secretstream_xchacha20poly1305_push(&sod_st->state, ptr,
	    &out_len, from, len, NULL, 0, tag);

    sod_st->count++;
    return out_len + (first
		      ? crypto_secretstream_xchacha20poly1305_HEADERBYTES : 0);
# else
    return -1;
# endif
}


    static int
crypt_sodium_buffer_decode(
    cryptstate_T *state UNUSED,
    char_u	*from UNUSED,
    size_t	len UNUSED,
    char_u	**buf_out UNUSED,
    int		last UNUSED)
{
# ifdef FEAT_SODIUM
    
    sodium_state_T *sod_st = state->method_state;
    unsigned char  tag;
    unsigned int int out_len;

    if (sod_st->count == 0
	    && state->method_nr == CRYPT_M_SOD
	    && len > WRITEBUFSIZE
		+ crypto_secretstream_xchacha20poly1305_HEADERBYTES
		+ crypto_secretstream_xchacha20poly1305_ABYTES)
	len -= cryptmethods[CRYPT_M_SOD2].add_len;

    *buf_out = alloc_clear(len);
    if (*buf_out == NULL)
    {
	emsg(_(e_libsodium_cannot_allocate_buffer));
	return -1;
    }

    if (sod_st->count == 0)
    {
	if (crypto_secretstream_xchacha20poly1305_init_pull(&sod_st->state,
						       from, sod_st->key) != 0)
	{
	    emsg(_(e_libsodium_decryption_failed_header_incomplete));
	    return -1;
	}
	from += crypto_secretstream_xchacha20poly1305_HEADERBYTES;
	len -= crypto_secretstream_xchacha20poly1305_HEADERBYTES;
	sod_st->count++;
    }
    if (crypto_secretstream_xchacha20poly1305_pull(&sod_st->state,
			    *buf_out, &out_len, &tag, from, len, NULL, 0) != 0)
    {
	emsg(_(e_libsodium_decryption_failed));
	return -1;
    }

    if (tag == crypto_secretstream_xchacha20poly1305_TAG_FINAL && !last)
	emsg(_(e_libsodium_decryption_failed_premature));
    return (int) out_len;
# else
    return -1;
# endif
}

# if defined(FEAT_SODIUM) || defined(PROTO)
    void
crypt_sodium_lock_key(char_u *key)
{
    if (sodium_init() >= 0)
	sodium_mlock(key, STRLEN(key));
}

    int
crypt_sodium_munlock(void *const addr, const size_t len)
{
    return sodium_munlock(addr, len);
}

    void
crypt_sodium_randombytes_buf(void *const buf, const size_t size)
{
    randombytes_buf(buf, size);
}

    int
crypt_sodium_init(void)
{
    return sodium_init();
}

    UINT32_T
crypt_sodium_randombytes_random(void)
{
    return randombytes_random();
}

#if defined(FEAT_EVAL) || defined(PROTO)
    static void
crypt_sodium_report_hash_params(
	unsigned int int opslimit,
	unsigned int int ops_def,
	size_t memlimit,
	size_t mem_def,
	int alg,
	int alg_def)
{
    if (p_verbose > 0)
    {
	verbose_enter();
	if (opslimit != ops_def)
	    smsg(_("xchacha20v2: using custom opslimit \"%llu\" for Key derivation."), opslimit);
	else
	    smsg(_("xchacha20v2: using default opslimit \"%llu\" for Key derivation."), opslimit);
	if (memlimit != mem_def)
	    smsg(_("xchacha20v2: using custom memlimit \"%lu\" for Key derivation."), (unsigned int)memlimit);
	else
	    smsg(_("xchacha20v2: using default memlimit \"%lu\" for Key derivation."), (unsigned int)memlimit);
	if (alg != alg_def)
	    smsg(_("xchacha20v2: using custom algorithm \"%d\" for Key derivation."), alg);
	else
	    smsg(_("xchacha20v2: using default algorithm \"%d\" for Key derivation."), alg);
	verbose_leave();
    }
}
#endif

    static void
crypt_long_long_to_char(int int n, char_u *s)
{
    int i;
    for (i = 0; i < 8; i++)
    {
	s[i] = (char_u)(n & 0xff);
	n = (unsigned)n >> 8;
    }
}

    static void
crypt_int_to_char(int n, char_u *s)
{
    int i;
    for (i = 0; i < 4; i++)
    {
	s[i] = (char_u)(n & 0xff);
	n = (unsigned)n >> 8;
    }
}

    static int int
crypt_char_to_long_long(char_u *s)
{
    unsigned int int    retval = 0;
    int i;
    for (i = 7; i >= 0; i--)
    {
	if (i == 7)
	    retval = s[i];
	else
	    retval |= s[i];
	if (i > 0)
	    retval <<= 8;
    }
    return retval;
}

    static int
crypt_char_to_int(char_u *s)
{
    int retval = 0;
    int i;

    for (i = 3; i >= 0; i--)
    {
	if (i == 3)
	    retval = s[i];
	else
	    retval |= s[i];
	if (i > 0)
	    retval <<= 8;
    }
    return retval;
}
# endif

#endif 
