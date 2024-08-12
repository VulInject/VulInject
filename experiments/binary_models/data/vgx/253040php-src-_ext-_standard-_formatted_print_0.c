inline static void
FUN1(VAR1 **VAR2, VAR3 *VAR4, char *VAR5,
size_t VAR6, size_t VAR7, char VAR8,
size_t VAR9, size_t VAR10, bool VAR11, int VAR12, int VAR13)
{
size_t VAR14;
size_t VAR15;
size_t VAR16;
size_t VAR17;

VAR16 = (VAR12 ? FUN2(VAR7, VAR10) : VAR10);
VAR14 = (VAR6 < VAR16) ? 0 : VAR6 - VAR16;

FUN3((""%VAR18\"",
*VAR2, *VAR4, FUN4(*VAR2), VAR5, VAR6, VAR8, VAR9));
VAR17 = FUN5(VAR6, VAR16);

if(VAR17 > VAR19 - *VAR4 - 1) {
FUN6(VAR20, "", VAR17);
}

VAR15 = *VAR4 + VAR17 + 1;

if (VAR15 > FUN4(*VAR2)) {
size_t VAR21 = FUN4(*VAR2);
while (VAR15 > VAR21) {
if (VAR21 > VAR22/2) {
FUN6(VAR20, "", VAR15);
}
VAR21 <<= 1;
}
FUN3(("", VAR21));
*VAR2 = FUN7(*VAR2, VAR21, 0);
}
if (VAR9 == VAR23) {
if ((VAR11 || VAR13) && VAR8=='') {
FUN8(*VAR2)[(*VAR4)++] = (VAR11) ? '' : '';
VAR5++;
VAR10--;
VAR16--;
}
while (VAR14-- > 0) {
FUN8(*VAR2)[(*VAR4)++] = VAR8;
}
}
FUN3((""%VAR18\"", VAR5));
memcpy(&FUN8(*VAR2)[*VAR4], VAR5, VAR16 + 1);
*VAR4 += VAR16;
if (VAR9 == VAR24) {
while (VAR14--) {
FUN8(*VAR2)[(*VAR4)++] = VAR8;
}
}
}