int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

FUN2(&VAR2->VAR4);

if (VAR2->VAR5) {
int VAR6;
u8 VAR7[16];

VAR6 = FUN3(VAR2->VAR8, VAR9, VAR2->VAR10, VAR11);
if (VAR6 != VAR11) {
FUN4("");
VAR3 = -1;
goto VAR12;
}

VAR3 = FUN5(VAR2->VAR8, VAR13,
VAR14 | VAR15 | VAR16);
if (VAR3 < 0) {
FUN4("");
VAR3 = -1;
goto VAR12;
}


VAR6 = FUN3(VAR2->VAR8, VAR17, VAR7, 16);
if (VAR6 != 16) {
FUN4("");
VAR3 = -1;
goto VAR12;
}
FUN6(VAR2->VAR5, VAR7);

VAR3 = 0;
} else
VAR3 = -1;

VAR12:
FUN7(&VAR2->VAR4);
return VAR3;
}