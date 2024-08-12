extern int FUN1(void)
{
int VAR1 = VAR2;

FUN2(VAR3, "");

if ((VAR1 = FUN3())) {
FUN4("",
VAR4, FUN5(VAR1));
return VAR1;
}

if ((VAR1 = FUN6(VAR5, NULL))) {
FUN4("",
VAR4, FUN5(VAR1));
return VAR1;
}

FUN7();
FUN8();
if ((VAR1 = FUN9(VAR6.VAR7)))
return VAR1;

if ((VAR1 = FUN10()))
return VAR1;

return VAR1;
}