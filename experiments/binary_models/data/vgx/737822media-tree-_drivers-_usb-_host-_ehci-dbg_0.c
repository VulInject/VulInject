static unsigned FUN1(char *VAR1, struct VAR2 *VAR3,
struct VAR4 *VAR5, struct VAR6 *VAR7, unsigned VAR8)
{
u32			VAR9 = FUN2(VAR3, &VAR5->VAR10);
struct VAR11		*VAR12;
char			*VAR13 = "";
unsigned		VAR14 = 0;


FUN3(VAR12, &VAR7->VAR15, VAR15) {
VAR14++;
switch ((FUN4(VAR3, VAR12->VAR16) >> 8)	& 0x03) {
case 0:
VAR13 = "";
continue;
case 1:
VAR13 = "";
continue;
}
}

return FUN5(VAR1, VAR8, "",
FUN6(VAR9), VAR9 & 0x007f,
(VAR9 >> 8) & 0x000f, VAR13, VAR7->VAR17.VAR18,
VAR7->VAR17.VAR19, VAR14, 0x7ff & (VAR9 >> 16));
}