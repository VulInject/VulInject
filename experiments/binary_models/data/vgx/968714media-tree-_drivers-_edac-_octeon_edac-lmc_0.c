FUN1(VAR1);
FUN2(VAR2);
FUN1(VAR2);

static VAR3 FUN3(struct VAR4 *VAR5,
struct VAR6 *VAR7,
const char *VAR8,
size_t VAR9)
{
struct VAR10 *VAR11 = FUN4(VAR5);
struct VAR12 *VAR13 = VAR11->VAR14;

if (!FUN5(VAR8, "", 6))
VAR13->VAR15 = 1;
else if (!FUN5(VAR8, "", 6))
VAR13->VAR15 = 2;

return VAR9;
}