static int FUN1(struct VAR1 *VAR2, VAR3 **VAR4)
{
const struct VAR5 *VAR6 = FUN2(VAR2);
u8 VAR7;

if (((FUN3(VAR6->VAR8) & VAR9) ==
VAR10) &&
((FUN3(VAR6->VAR11) & VAR9) ==
VAR10)) {
FUN4("");

VAR7 = VAR12;
FUN5(VAR4, &VAR7, sizeof(VAR7));

VAR7 = FUN3(VAR6->VAR11) - VAR10 +
((FUN3(VAR6->VAR8) - VAR10) << 4);
FUN5(VAR4, &VAR7, sizeof(VAR7));
} else if ((FUN3(VAR6->VAR11) & VAR13) ==
VAR14) {
FUN4("");

VAR7 = VAR15;
FUN5(VAR4, &VAR7, sizeof(VAR7));

FUN5(VAR4, &VAR6->VAR8, sizeof(VAR6->VAR8));

VAR7 = FUN3(VAR6->VAR11) - VAR14;
FUN5(VAR4, &VAR7, sizeof(VAR7));
} else if ((FUN3(VAR6->VAR8) & VAR13) ==
VAR14) {
FUN4("");

VAR7 = VAR16;
FUN5(VAR4, &VAR7, sizeof(VAR7));

VAR7 = FUN3(VAR6->VAR8) - VAR14;
FUN5(VAR4, &VAR7, sizeof(VAR7));

FUN5(VAR4, &VAR6->VAR11, sizeof(VAR6->VAR11));
} else {
FUN4("");

VAR7 = VAR17;
FUN5(VAR4, &VAR7, sizeof(VAR7));

FUN5(VAR4, &VAR6->VAR8, sizeof(VAR6->VAR8));

FUN5(VAR4, &VAR6->VAR11, sizeof(VAR6->VAR11));
}


FUN5(VAR4, &VAR6->VAR18, sizeof(VAR6->VAR18));

return 0;
}