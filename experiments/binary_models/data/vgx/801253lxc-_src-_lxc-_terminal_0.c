static bool FUN1(int VAR1, int VAR2)
{
int VAR3;

if (!FUN2(VAR2))
return true;

VAR3 = FUN3(VAR1, VAR2);
if (VAR3 < 0) {
FUN4("", VAR1, VAR2);
return false;
}

return true;
}