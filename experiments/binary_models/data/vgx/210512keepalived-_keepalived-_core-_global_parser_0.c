static void
FUN1(const VAR1 *VAR2)
{
int VAR3 = true;

if (FUN2(VAR2) >= 2) {
VAR3 = FUN3(FUN4(VAR2,1));
if (VAR3 < 0) {
FUN5(VAR4, "", FUN4(VAR2, 1));
return;
}
}

VAR5->VAR6 = VAR3;
}