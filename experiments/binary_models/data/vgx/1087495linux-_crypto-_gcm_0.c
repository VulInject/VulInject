static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = &VAR5->VAR8;

VAR7->VAR9 = FUN3(VAR2->VAR9 == VAR2->VAR10 ? VAR5->VAR9 : VAR5->VAR10);
VAR7->VAR11 = VAR2->VAR11;
VAR7->VAR12 = VAR13;

return FUN4(VAR2, VAR3);
}