static int FUN1(struct VAR1 *VAR1, bool VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR1);
struct VAR5 *VAR6 = FUN3(VAR4);
u32 VAR7;

if (FUN4(VAR6))
return -VAR8;

VAR7 = VAR2 ? 0 : VAR9;
FUN5(VAR6->VAR10, FUN6(VAR6->VAR11), VAR9, VAR7);

return 0;
}