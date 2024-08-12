static int FUN1(const struct VAR1*);
static int FUN2(const struct VAR2*);
static int FUN3(const VAR3*);
static int FUN4(const char*);

static VAR4 *VAR5;

int FUN5(VAR4 *VAR6, const VAR3 *VAR7)
{
VAR5 = VAR6;
return(FUN3(VAR7));
}