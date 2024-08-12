extern int FUN1(VAR1);
extern int FUN2(VAR1);
extern int FUN3(VAR1, VAR2 *);
extern int FUN4(VAR1, int, const VAR2 *, VAR2 *);


int VAR3 = 0;
VAR4 **VAR5;
static pthread_once_t VAR6 = VAR7;

static void
FUN5(void)
{
VAR3 = (int)FUN6(VAR8);
VAR5 = malloc(VAR3 * sizeof (*VAR5));
(void) memset(VAR5, 0, VAR3 * sizeof (*VAR5));
}