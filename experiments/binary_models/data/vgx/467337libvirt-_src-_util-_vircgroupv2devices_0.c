bool
FUN1(VAR1 *VAR2)
{
VIR_AUTOCLOSE VAR3 = -1;
unsigned int VAR4 = 0;

VAR3 = open(VAR2->VAR5.VAR6, VAR7);
if (VAR3 < 0) {
FUN2("", VAR2->VAR5.VAR6);
return false;
}

if (FUN3(VAR3, 0, VAR8, &VAR4, NULL) < 0) {
FUN2("", FUN4(VAR9));
return false;
}

return true;
}