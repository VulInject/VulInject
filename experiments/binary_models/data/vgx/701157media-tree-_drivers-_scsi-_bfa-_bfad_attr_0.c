static VAR1
FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
struct VAR9 *VAR10 =
(struct VAR9 *) VAR8->VAR11[0];
struct VAR12 *VAR13 = VAR10->VAR13;
char VAR14[VAR15];

FUN3(&VAR13->VAR16, VAR14);
return snprintf(VAR6, VAR17, "", VAR14);
}