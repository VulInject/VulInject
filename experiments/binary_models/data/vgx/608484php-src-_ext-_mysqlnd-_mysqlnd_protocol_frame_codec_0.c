static void
FUN1(VAR1, VAR2)(VAR3 * const VAR4, VAR5 * const VAR6, VAR7 * const VAR8)
{
FUN2("");
VAR4->VAR9->VAR10 = VAR4->VAR9->VAR11 = 0;
VAR12;
}




*(((char *)(VAR13)))   = *(((char *)(VAR14)));\
*(((char *)(VAR13))+1) = *(((char *)(VAR14))+1);\
*(((char *)(VAR13))+2) = *(((char *)(VAR14))+2);\
*(((char *)(VAR13))+3) = *(((char *)(VAR14))+3); } while (0)

static VAR15 FUN3(
const VAR3 *VAR4, VAR16 *VAR17,
VAR5 *VAR6, VAR7 *VAR8,
VAR18 *VAR19, size_t VAR20, VAR18 *VAR21) {
FUN2("");

size_t VAR22 = VAR20;
size_t VAR23;
if (VAR24 == VAR4->VAR9->VAR25.FUN4((VAR21 + VAR26 + VAR27), &VAR22,
VAR19, VAR20))
{
FUN5(VAR21 + VAR27, VAR20);
VAR23 = VAR22;
} else {
FUN5(VAR21 + VAR27, 0);
memcpy(VAR21 + VAR27 + VAR26, VAR19, VAR20);
VAR23 = VAR20;
}

FUN5(VAR21, VAR23);
FUN6(VAR21 + 3, VAR4->VAR9->VAR11);
FUN7("", VAR23 + VAR27 + VAR26);

ssize_t VAR28 = VAR17->VAR9->VAR25.FUN8(VAR17, VAR21, VAR23 + VAR27 + VAR26, VAR6, VAR8);
VAR4->VAR9->VAR11++;
if (VAR29 == VAR30) {
size_t VAR31 = VAR32 + VAR27;
VAR18 * VAR33 = FUN9(VAR31);
int VAR34 = VAR4->VAR9->VAR25.FUN10(VAR33, VAR31,
VAR21 + VAR27 + VAR26, VAR23);
if (VAR34 == VAR30) {
int VAR35;
FUN11("");
for (VAR35 = 0 ; VAR35 < VAR31; VAR35++) {
if (VAR35 && (VAR35 % 30 == 0)) {
FUN12("");
}
FUN12("", (int)*((char*)&(VAR33[VAR35])));
FUN7("", (int)*((char*)&(VAR33[VAR35])));
}
} else {
FUN11("");
}
FUN13(VAR33);
}
FUN14(VAR28);
}