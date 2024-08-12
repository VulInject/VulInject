int
FUN1(VAR1 *VAR2, u_long VAR3, VAR4 *VAR5)
{
u_long VAR6, VAR7;
struct VAR8 *VAR9;
ptd_entry_t VAR10;

if (!VAR2->VAR11) {
FUN2(VAR2, 0, "");
return (0);
}

if (FUN3(VAR2)) {
FUN2(VAR2, 0, "");
return (0);
}

VAR9 = VAR2->VAR11;
VAR6 = VAR3 & (VAR2->VAR12 - 1);


if (VAR9->VAR13 == NULL) {
*VAR5 = VAR3;
return (VAR2->VAR12 - (int)VAR6);
}
if ((VAR9->VAR13[FUN4(VAR9,VAR3)] & VAR14) == 0)
goto VAR15;

VAR7 = (VAR9->VAR13[FUN4(VAR9,VAR3)] & VAR16) +
(FUN5(VAR9,VAR3) * sizeof(VAR17));


if (FUN6(VAR2, VAR2->VAR18, &VAR10, sizeof VAR10,
FUN7(VAR2, VAR7)) != sizeof VAR10)
goto VAR15;

if ((VAR10 & VAR14) == 0)
goto VAR15;
*VAR5 = (VAR10 & VAR16) + VAR6;
return (VAR2->VAR12 - (int)VAR6);

VAR15:
FUN2(VAR2, 0, "", VAR3);
return (0);
}