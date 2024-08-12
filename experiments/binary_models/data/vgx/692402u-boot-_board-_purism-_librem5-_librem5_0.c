bool FUN1(void)
{
u8 VAR1;
int VAR2;
struct VAR3 *VAR4, *VAR5;


VAR2 = FUN2(VAR6, 3, &VAR5);
if (VAR2) {
FUN3("", VAR7);
return VAR2;
}

VAR2 = FUN4(VAR5, 0x6a, 1, &VAR4);
if (VAR2) {
FUN3("", VAR7, VAR2);
return VAR2;
}


VAR1 = FUN5(VAR4, 0x0e) & 0x7f;
if (VAR1 == 0x00 || VAR1 == 0x7f)
return false;

return true;
}