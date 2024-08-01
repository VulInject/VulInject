

#define EXTERN
#include "vim.h"

#ifdef __CYGWIN__
# include <cygwin/version.h>
# include <sys/cygwin.h>	
				
# include <limits.h>
#endif

#if defined(MSWIN) && (!defined(FEAT_GUI_MSWIN) || defined(VIMDLL))
# include "iscygpty.h"
#endif


#define EDIT_NONE   0	    
#define EDIT_FILE   1	    
#define EDIT_STDIN  2	    
#define EDIT_TAG    3	    
#define EDIT_QF	    4	    

#if (defined(UNIX) || defined(VMS)) && !defined(NO_VIM_MAIN)
static int file_owned(char *fname);
#endif
static void mainerr(int, char_u *);
static void early_arg_scan(mparm_T *parmp);
#ifndef NO_VIM_MAIN
static void usage(void);
static void parse_command_name(mparm_T *parmp);
static void command_line_scan(mparm_T *parmp);
static void check_tty(mparm_T *parmp);
static void read_stdin(void);
static void create_windows(mparm_T *parmp);
static void edit_buffers(mparm_T *parmp, char_u *cwd);
static void exe_pre_commands(mparm_T *parmp);
static void exe_commands(mparm_T *parmp);
static void source_startup_scripts(mparm_T *parmp);
static void main_start_gui(void);
static void check_swap_exists_action(void);
# ifdef FEAT_EVAL
static void set_progpath(char_u *argv0);
# endif
#endif



static char *(main_errors[]) =
{
    N_("Unknown option argument"),
#define ME_UNKNOWN_OPTION	0
    N_("Too many edit arguments"),
#define ME_TOO_MANY_ARGS	1
    N_("Argument missing after"),
#define ME_ARG_MISSING		2
    N_("Garbage after option argument"),
#define ME_GARBAGE		3
    N_("Too many \"+command\", \"-c command\" or \"--cmd command\" arguments"),
#define ME_EXTRA_CMD		4
    N_("Invalid argument for"),
#define ME_INVALID_ARG		5
};

#ifndef PROTO		


static mparm_T	params;

#ifdef _IOLBF
static void *s_vbuf = NULL;		
#endif

#ifndef NO_VIM_MAIN	

static char_u *start_dir = NULL;	

static int has_dash_c_arg = FALSE;

# ifdef VIMDLL
__declspec(dllexport)
# endif
    int
# ifdef MSWIN
VimMain
# else
main
# endif
(int argc, char **argv)
{
#if defined(STARTUPTIME) || defined(CLEAN_RUNTIMEPATH)
    int		i;
#endif

    
    mch_early_init();

    
    source_startup_scripts(&params);

#if 0
    
    return mzscheme_main();
#else
    return vim_main2();
#endif
}
