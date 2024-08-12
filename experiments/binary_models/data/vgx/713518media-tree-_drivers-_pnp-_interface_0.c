static FUN1(VAR1);

static VAR2 FUN2(struct VAR3 *VAR4, struct VAR5 *VAR6,
char *VAR7)
{
char *VAR8 = VAR7;
struct VAR9 *VAR10 = FUN3(VAR4);
struct VAR11 *VAR12 = VAR10->VAR13;

while (VAR12) {
VAR8 += sprintf(VAR8, "", VAR12->VAR13);
VAR12 = VAR12->VAR14;
}
return (VAR8 - VAR7);
}