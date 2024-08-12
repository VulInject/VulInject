static VAR1 FUN1(struct VAR2 *VAR3, const struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR3, struct VAR6, VAR8);

if (VAR5->VAR9 != VAR10)
return 0;

if (VAR5->VAR11 < 1) {
FUN3(&VAR7->VAR12->VAR13, "", VAR5->VAR11);
return 0;
}

FUN4(VAR7, VAR5->VAR14[0]);


return 0;
}