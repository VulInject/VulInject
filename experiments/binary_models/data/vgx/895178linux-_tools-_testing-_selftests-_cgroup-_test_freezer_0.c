static int FUN1(const char *VAR1, bool VAR2)
{
int VAR3, VAR4 = -1;

VAR3 = FUN2(VAR1);
if (VAR3 < 0)
return VAR3;

VAR4 = FUN3(VAR1, VAR2);
if (VAR4) {
FUN4("");
goto VAR5;
}

VAR4 = FUN5(VAR3);
if (VAR4)
goto VAR5;

VAR4 = FUN6(VAR1, VAR2);
VAR5:
close(VAR3);
return VAR4;
}