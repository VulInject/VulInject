static bool FUN1(void)
{
u32 VAR1;

if (VAR2) {
VAR1 = FUN2(VAR2);
if (VAR1 == VAR3) {
FUN3(0, VAR2);
return true;
}
}

return false;
}