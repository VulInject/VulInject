static void FUN1(int VAR1) { FUN2(VAR1-1); }
static void FUN2(int VAR1) { FUN1(VAR1-1); }


extern VAR2 * FUN3(int);


static void *
FUN4(const VAR3 * VAR4, VAR3 ** VAR5)
{
VAR2 * VAR6;
VAR7 *VAR8 = NULL;
int VAR9 = 0;

FUN5(VAR10) VAR9 = 1;

if ((VAR6 = FUN3(VAR9)))
if ((VAR6 = FUN6(VAR6, NULL, VAR9, 8)))
VAR8 = FUN7(VAR6, VAR9);

if (!VAR8)
{
*VAR5 = VAR11"";
return NULL;
}
return (void *) VAR8;
}