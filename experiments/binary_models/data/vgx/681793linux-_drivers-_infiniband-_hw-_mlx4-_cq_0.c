static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 **VAR6, u64 VAR7, int VAR8)
{
int VAR9;
int VAR10 = VAR2->VAR2->VAR11.VAR10;
int VAR12;
int VAR13;

*VAR6 = FUN2(&VAR2->VAR14, VAR7, VAR8 * VAR10,
VAR15);
if (FUN3(*VAR6))
return FUN4(*VAR6);

VAR12 = FUN5(*VAR6, 0, &VAR13);
VAR9 = FUN6(VAR2->VAR2, VAR13, VAR12, &VAR4->VAR16);

if (VAR9)
goto VAR17;

VAR9 = FUN7(VAR2, &VAR4->VAR16, *VAR6);
if (VAR9)
goto VAR18;

return 0;

VAR18:
FUN8(VAR2->VAR2, &VAR4->VAR16);

VAR17:
FUN9(*VAR6);

return VAR9;
}