static bool FUN1(struct VAR1 *VAR2, int VAR3)
{
uint8_t VAR4[2];
int VAR5;

if (FUN2(VAR2)) {
VAR4[0] = (VAR6)VAR3;
VAR4[1] = (VAR6)(VAR3 >> 8);
VAR5 = FUN3(VAR2, VAR7, VAR8,
VAR9, VAR10,
(VAR11 *)VAR4, sizeof(VAR4), VAR12);
if (FUN4(VAR5 < 0)) {
FUN5(VAR13, "",
VAR2->VAR14->VAR15, VAR2->VAR16, VAR5);
return false;
} else {
FUN5(VAR17, "",
VAR2->VAR14->VAR15, VAR2->VAR16,
VAR3);
}
return true;
}
return false;
}