static int FUN1(void)
{
int VAR1 = (int)FUN2(VAR2);

if (VAR1 <= 0) {
FUN3("");
goto VAR3;
} else if (VAR1 > VAR4) {
FUN3("", (int)VAR4);
goto VAR3;
}

return VAR1;

VAR3:
FUN4(VAR5);
}