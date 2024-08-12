int FUN1(struct VAR1 *VAR1, int VAR2, int *VAR3)
{
if (VAR2 != VAR4) {
if (FUN2(VAR1)) {
if (VAR2 < 0 || VAR2 >= VAR1->VAR5) {
*VAR3 = -VAR6;
goto VAR7;
}
} else {
*VAR3 = -VAR8;
goto VAR7;
}
*VAR3 = -VAR8;
goto VAR7;
}

if (VAR2 == VAR4 && !FUN3(VAR1)) {
*VAR3 = -VAR8;
goto VAR7;
}

*VAR3 = 0;
return 1;

VAR7:
return 0;
}