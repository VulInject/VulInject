static FUN1(VAR1, VAR2, 0);
static FUN1(VAR3, VAR2, 1);
static FUN1(VAR4, VAR2, 2);

static VAR5
FUN2(struct VAR6 *VAR7, struct VAR8 *VAR9, char *VAR10)
{
struct VAR11 *VAR12 = FUN3(VAR7);
return sprintf(VAR10, "", (long) FUN4(VAR12->VAR13, VAR12->VAR14));
}