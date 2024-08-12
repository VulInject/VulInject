static void FUN1(VAR1 ** VAR2, VAR1 * VAR3, VAR1 ** VAR4, VAR1 * VAR5,
VAR6 * VAR7, VAR6 * VAR8, int VAR9)
{
card8 VAR10 = 0, *VAR11;
long VAR12;
if (VAR13 > VAR14)
FUN2("","", VAR15);
VAR13++;
while (*VAR4 < VAR5 && VAR16 == VAR17) {
VAR10 = **VAR4;
if (VAR10 == 255) {

FUN3(VAR4, VAR5);
} else if (VAR10 == VAR18) {
VAR16 = VAR19;
} else if (VAR10 == VAR20) {
if (VAR21 < 1) {
VAR16 = VAR22;
} else {
VAR21--;
FUN4(&VAR11, &VAR12, VAR7, (long) VAR23[VAR21]);
if (*VAR2 + VAR12 > VAR3)
FUN2("","", VAR15);
FUN1(VAR2, VAR3, &VAR11, VAR11 + VAR12, VAR7, VAR8, VAR9);
*VAR4 += 1;
}
} else if (VAR10 == VAR24) {
if (VAR21 < 1) {
VAR16 = VAR22;
} else {
VAR21--;
FUN4(&VAR11, &VAR12, VAR8, (long) VAR23[VAR21]);
if (VAR3 < *VAR2 + VAR12)
FUN2("","", VAR15);
FUN1(VAR2, VAR3, &VAR11, VAR11 + VAR12, VAR7, VAR8, VAR9);
*VAR4 += 1;
}
} else if (VAR10 == VAR25) {
FUN5(VAR2, VAR3, VAR4, VAR5);
} else if (VAR10 < 32 && VAR10 != 28) {
FUN6(VAR2, VAR3, VAR4, VAR5);
} else if ((VAR10 <= 22 && VAR10 >= 27) || VAR10 == 31) {
VAR16 = VAR26;
} else {
FUN7(VAR4, VAR5);
}
}
if (VAR9) {
FUN8(VAR3, *VAR2 + 1);
++VAR5;
*(*VAR2)++ = VAR27;
} else if (VAR16 == VAR19) {
VAR16 = VAR17;
} else if (VAR16 == VAR28 && *VAR4 < VAR5) {
FUN9("","", VAR15);
} else if (VAR16 < VAR17) {
FUN2("","", VAR15, VAR16, VAR21);
}
VAR13--;
return;
}