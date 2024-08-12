static int FUN1(void)
{
int VAR1;

VAR1 = FUN2(&VAR2);
if (VAR1 < 0) {
FUN3("", VAR1);
return VAR1;
}

VAR1 = FUN4(VAR3);
FUN5(&VAR2);
if (VAR4 != VAR3) {
FUN3("");
VAR5++;
}

return 0;
}