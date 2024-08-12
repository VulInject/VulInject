static int FUN1(struct VAR1 *VAR2)
{
const char *VAR3 = FUN2(VAR2);
const u32 VAR4 = VAR5 | VAR6;
struct VAR7 *VAR8 = FUN3(VAR2);
struct VAR9 *VAR10;

VAR10 = FUN4(VAR3, 0, VAR4);
if (FUN5(VAR10))
return FUN6(VAR10);

VAR8->VAR11 = VAR10;

VAR2->VAR12.VAR13 = sizeof(struct VAR14);

return 0;
}