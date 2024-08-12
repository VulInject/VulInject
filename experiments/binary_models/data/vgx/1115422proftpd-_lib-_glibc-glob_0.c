char *alloca ();




















extern int VAR1;










(VAR2)->VAR3 = (VAR4)->VAR3;

(VAR2)->VAR5 = (VAR4)->VAR5;

(VAR2)->VAR6 = (VAR4)->VAR6;

memcpy ((VAR2)->VAR7, (VAR4)->VAR7, FUN1 (VAR4) + 1);		      \
FUN2 (VAR2, VAR4)						      \
FUN3 (VAR2, VAR4)						      \
FUN4 (VAR2, VAR4)




extern char *getenv ();


extern char *malloc (), *realloc ();
extern void free ();

extern void FUN5 ();
extern void FUN6 (), FUN7 ();



extern void FUN8 ();
extern void bcopy ();


((void) ((VAR8) == 0 ? (FUN8((VAR9), (VAR10)), 0) : (FUN6(), 0)))



static unsigned long VAR11;

__inline
static void *
static char *
FUN9 (void *VAR12, size_t VAR10)
{

if (VAR12 == NULL)
return (char *) malloc (VAR10);
return (char *) realloc (VAR12, VAR10);
}