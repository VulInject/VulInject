static int
FUN1(VAR1 *VAR2, char *VAR3)
{
VAR4	*VAR5 = &VAR2->VAR5;
VAR6	*VAR7 = &VAR2->VAR7;
uint32_t	VAR8 = 0;

assert(VAR2 != NULL);
assert(VAR7->VAR9 != NULL);


if (FUN2(VAR7->VAR9, VAR7->VAR10, &VAR8)
!= VAR11) {
FUN3(""
"");
if (VAR12 == VAR13) {
(void) fprintf(VAR14, FUN4(""
""));
VAR12 = VAR15;
}
} else {

VAR7->VAR8 = VAR8;
VAR7->VAR16 = (VAR17 *)(VAR7->VAR9 +
VAR8);
if (VAR12) {

FUN5(VAR7, VAR3);
}

FUN6(VAR7);
}

if (FUN7(VAR5->VAR18)) {
uint32_t	VAR19[VAR20 / sizeof (VAR21)];
uint32_t	VAR22 = VAR23 + VAR20;
int		VAR24 = 0;
VAR25		*VAR26;

FUN8(VAR19, sizeof (VAR19));
if (FUN9(VAR5->VAR27, VAR19) != 0) {
(void) fprintf(VAR14, FUN4(""
""));
return (VAR28);
}

VAR26 = (VAR25 *)VAR7->VAR9 + VAR29;
VAR7->VAR30 = VAR5->VAR31 + VAR19[0];
VAR7->VAR32[0] = VAR19[0];
FUN3("", VAR7->VAR30);


if (VAR19[1] > 1) {
VAR19[0]++;
VAR19[1]--;
} else {
VAR24 += 2;
}

VAR7->VAR32[1] = VAR19[VAR24];

while (VAR19[VAR24]) {
if (FUN10(VAR26 - 8) != 0 &&
FUN10(VAR26 - 8) != VAR19[VAR24 + 2]) {
(void) fprintf(VAR14, VAR33);
return (VAR28);
}
FUN10(VAR26) = VAR19[VAR24] + VAR5->VAR31;
FUN11(VAR26) = (VAR34)(VAR22 >> 4);
FUN12(VAR26) = VAR19[VAR24 + 1];
VAR22 += VAR19[VAR24 + 1] * VAR20;
VAR26 -= 8;
VAR24 += 2;
}
} else {

if (VAR5->VAR31 >
VAR35 - FUN13(VAR5->VAR18)) {
fprintf(VAR14, FUN4(""
""),
(VAR36)VAR35 - FUN13(VAR5->VAR18));
return (VAR28);
}
VAR7->VAR30 = VAR5->VAR31 +
FUN13(VAR5->VAR18);
FUN3("", VAR7->VAR30);

*((VAR37 *)(VAR7->VAR9 + VAR29)) =
VAR7->VAR30 + 1;
}


*((unsigned char *) (VAR7->VAR9 + VAR38)) = 1;
*((long *)(VAR7->VAR9 + VAR39))
= (VAR5->VAR40 << 16) | (VAR5->VAR41 << 8) | 0xff;

return (VAR11);
}