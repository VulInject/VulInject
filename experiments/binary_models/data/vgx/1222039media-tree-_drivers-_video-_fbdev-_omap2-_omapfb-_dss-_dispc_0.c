static int FUN1(unsigned long VAR1, unsigned long VAR2,
const struct VAR3 *VAR4,
u16 VAR5, u16 VAR6, u16 VAR7, u16 VAR8,
enum omap_color_mode VAR9, bool *VAR10,
int *VAR11, int *VAR12, int *VAR13, int *VAR14,
u16 VAR15, unsigned long *VAR16, bool VAR17)
{
int VAR18;
u16 VAR19, VAR20;
int VAR21 = FUN2(*VAR13, *VAR14);
const int VAR22 =
FUN3(VAR23);

*VAR10 = false;

do {
VAR20 = VAR6 / *VAR14;
VAR19 = VAR5 / *VAR13;
*VAR16 = VAR24.VAR25->FUN4(VAR1, VAR19,
VAR20, VAR7, VAR8, VAR17);
VAR18 = (VAR19 > VAR22 || !*VAR16 ||
*VAR16 > FUN5());
if (VAR18) {
if (*VAR13 == *VAR14) {
*VAR13 = VAR21;
++*VAR14;
} else {
FUN6(*VAR13, *VAR14);
if (*VAR13 < *VAR14)
++*VAR13;
}
}
} while (*VAR13 <= *VAR11 && *VAR14 <= *VAR12 && VAR18);

if (VAR18) {
FUN7("");
return -VAR26;
}

if (VAR19 > VAR22) {
FUN7("");
return -VAR26;
}
return 0;
}