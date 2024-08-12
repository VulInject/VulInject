static int FUN1(struct VAR1 *VAR1, void *VAR2, unsigned int *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR1);

FUN3(1, "", VAR6,
VAR5->VAR7, VAR5->VAR8);

*VAR3 = VAR5->VAR9;
return 0;
}