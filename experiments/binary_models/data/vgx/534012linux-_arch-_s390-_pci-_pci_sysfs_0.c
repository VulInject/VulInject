static FUN1(VAR1);


static VAR2 FUN2(struct VAR3 *VAR4,
struct VAR5 *VAR6, char *VAR7)
{
struct VAR8 *VAR9 = FUN3(FUN4(VAR4));
u32 VAR10 = ~0;

if (VAR11)
VAR10 = VAR9->VAR12;

return FUN5(VAR7, "", VAR10);
}