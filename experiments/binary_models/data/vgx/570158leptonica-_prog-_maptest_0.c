static void
FUN1(VAR1      *VAR2,
const char  *VAR3)
{
char          VAR4[128];
l_int32       VAR5, VAR6, VAR7, VAR8, VAR9;
l_uint32      VAR10;
VAR11  *VAR12;
VAR13         *VAR14;

FUN2("");
VAR14 = FUN3(0);
VAR5 = VAR6 = 0;
VAR8 = 0;
VAR10 = 0;
VAR12 = FUN4(VAR2);
while (VAR12) {
VAR5++;
VAR7 = VAR12->VAR15.VAR16;
if (VAR7 > VAR8) {
VAR8 = VAR7;
VAR10 = VAR12->VAR17.VAR18;
}
FUN5(VAR14, VAR7);
VAR6 += VAR7;
VAR12 = FUN6(VAR12);
}
FUN2("", VAR5, VAR6);
FUN2("", VAR10, VAR8);
VAR9 = FUN7(VAR2, VAR10);
if (VAR8 != VAR9)
FUN2("", VAR8, VAR9);
FUN8(VAR14, VAR19, VAR3, NULL);
snprintf(VAR4, sizeof(VAR4), "", VAR3);
FUN9(VAR4, 1400, 0, 1.0);
FUN10(&VAR14);
return;
}