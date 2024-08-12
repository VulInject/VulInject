int
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = FUN2(VAR2);
char *VAR5 = NULL;
mode_t VAR6;
bool VAR7;
unsigned int VAR8;
g_autofree char *VAR9 = NULL;
int VAR10;

VAR9 = FUN3(VAR4->VAR11.VAR12);
if (!(VAR5 = strrchr(VAR9, ''))) {
FUN4(VAR13,
FUN5(""),
VAR4->VAR11.VAR12);
return -1;
}

if (VAR5 != VAR9) {

*VAR5 = '';
if (FUN6(VAR9, 0777) < 0) {
FUN7(VAR14, FUN5(""),
VAR9);
return -1;
}
}

VAR8 = VAR15;
VAR7 = (VAR4->VAR16 == VAR17);
VAR6 = VAR4->VAR11.VAR18.VAR6;

if (VAR6 == (VAR19)-1 &&
(VAR7 || !FUN8(VAR4->VAR11.VAR12)))
VAR6 = VAR20;
if (VAR7)
VAR8 |= VAR21;


VAR10 = FUN9(VAR4->VAR11.VAR12,
VAR6,
VAR4->VAR11.VAR18.VAR22,
VAR4->VAR11.VAR18.VAR23,
VAR8);
if (VAR10 < 0)
return -1;

if (FUN10(VAR4->VAR11.VAR12,
VAR4->VAR24.VAR25) < 0)
return -1;

return 0;
}