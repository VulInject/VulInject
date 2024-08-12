static FUN1(VAR1, VAR2, VAR3, NULL, 5);
static FUN1(VAR4, VAR2, VAR3, NULL, 6);
static FUN1(VAR5, VAR2, VAR3, NULL, 7);
static FUN1(VAR6, VAR2, VAR3, NULL, 7);

static VAR7 FUN2(struct VAR8 *VAR9, struct VAR10 *VAR11,
char *VAR12)
{
int VAR13 = FUN3(VAR11)->VAR14;
struct VAR15 *VAR16 = FUN4(VAR9);

return sprintf(VAR12, "", (VAR16->VAR17 >> VAR13) & 1);
}