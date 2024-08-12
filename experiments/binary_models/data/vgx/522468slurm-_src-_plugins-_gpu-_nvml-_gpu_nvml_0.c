static bool FUN1(int VAR1, VAR2 *VAR3)
{
nvmlReturn_t VAR4;
VAR4 = FUN2(VAR1, VAR3);
if (VAR4 != VAR5) {
FUN3("", VAR1,
FUN4(VAR4));
return false;
}
return true;
}