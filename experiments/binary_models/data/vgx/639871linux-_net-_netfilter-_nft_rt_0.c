static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4, bool VAR5)
{
const struct VAR6 *VAR7 = FUN2(VAR4);

if (FUN3(VAR2, VAR8, FUN4(VAR7->VAR9)))
goto VAR10;
if (FUN5(VAR2, VAR11, VAR7->VAR12))
goto VAR10;
return 0;

VAR10:
return -1;
}