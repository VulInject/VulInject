static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
struct VAR5 **VAR6, struct VAR5 **VAR7,
struct VAR8 *VAR9)
{
struct VAR5 *VAR10;
struct VAR5 *VAR11;
int VAR12;

*VAR7 = NULL;
*VAR6 = NULL;

if (FUN2(*VAR4) || !FUN3(VAR2))
return 0;

VAR10 = FUN4(VAR2, VAR13, VAR9);
if (!VAR10 || VAR10 == FUN5(-VAR14)) {
*VAR4 &= ~FUN6();
return 0;
}
if (FUN7(VAR10))
return FUN8(VAR10);

VAR11 = FUN9(VAR10, VAR15);
if (!VAR11) {
VAR12 = -VAR16;
goto VAR17;
}

VAR12 = FUN10(VAR11, VAR4);
if (VAR12 < 0)
goto VAR18;

if (VAR12 == 0)
FUN11(VAR11);
else
*VAR7 = VAR11;

if (!FUN12(*VAR4))
FUN11(VAR10);
else
*VAR6 = VAR10;

return 0;

VAR18:
FUN11(VAR11);
VAR17:
FUN11(VAR10);
return VAR12;
}