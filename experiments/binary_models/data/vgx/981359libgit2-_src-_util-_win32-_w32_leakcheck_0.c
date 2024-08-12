int FUN1(
char * VAR1, size_t VAR2,
int VAR3,
const char *VAR4, const char *VAR5)
{
git_win32_leakcheck_stack_raw_data VAR6;
int VAR7;

if ((VAR7 = FUN2(&VAR6, VAR3)) < 0)
return VAR7;
if ((VAR7 = FUN3(VAR1, VAR2, &VAR6, VAR4, VAR5)) < 0)
return VAR7;
return 0;
}





typedef struct {
char VAR8[VAR9 + 1];
} VAR10;


typedef struct {
git_win32_leakcheck_stacktrace_uid VAR8; 
git_win32_leakcheck_stack_raw_data VAR11;
unsigned int VAR12; 
unsigned int VAR13; 
unsigned int VAR14; 
} VAR15;

static CRITICAL_SECTION VAR16;



static git_win32_leakcheck_stacktrace_row  VAR17[VAR18];
static VAR15 *VAR19[VAR18];

static unsigned int VAR20 = VAR18;
static unsigned int VAR21 = 0; 
static unsigned int VAR22 = 0; 
static unsigned int VAR23 = 0; 
static unsigned int VAR24 = 0; 
static bool VAR25 = false; 

static unsigned int VAR26 = 0; 
static bool VAR27 = false; 


static int FUN4(const void *VAR28, const void *VAR29)
{
VAR30 *VAR31 = (VAR30*)VAR28;
VAR15 *VAR32 = (VAR15 *)VAR29;

return (FUN5(VAR31, &VAR32->VAR11));
}