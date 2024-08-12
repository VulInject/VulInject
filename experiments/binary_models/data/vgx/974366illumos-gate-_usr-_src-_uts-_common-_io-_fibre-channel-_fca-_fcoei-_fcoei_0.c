int
FUN1(void)
{
int VAR1;

VAR1 = FUN2(&VAR2);
if (VAR1 != 0) {
FUN3(VAR3, "", VAR1);
return (VAR1);
}

FUN4(&VAR4);
FUN5(VAR3, "");
return (VAR1);
}