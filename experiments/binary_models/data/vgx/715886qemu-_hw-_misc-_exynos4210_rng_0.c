static void FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = NULL;


if ((VAR2->VAR5 & VAR6) == 0) {
goto VAR7;
}


if ((VAR2->VAR8 & VAR9) == 0) {
goto VAR7;
}


if ((VAR2->VAR8 & VAR10) == 0) {
goto VAR7;
}


if (FUN2(VAR2->VAR11, sizeof(VAR2->VAR11), &VAR4)) {
FUN3(VAR4);
} else {

VAR2->VAR5 |= VAR12;
}

VAR7:

VAR2->VAR8 &= ~VAR10;
}