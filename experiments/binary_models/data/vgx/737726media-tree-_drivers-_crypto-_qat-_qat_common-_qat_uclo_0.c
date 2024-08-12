static int FUN1(struct VAR1 *VAR2)
{
unsigned char VAR3, VAR4, VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR11 = VAR2->VAR11;

for (VAR3 = 0; VAR3 < VAR2->VAR12->VAR13; VAR3++) {
if (!FUN2(VAR3,
(unsigned long *)&VAR2->VAR12->VAR14))
continue;
VAR9 = &VAR11->VAR9[VAR3];
for (VAR5 = 0; VAR5 < FUN3(unsigned int, VAR9->VAR15,
VAR16); VAR5++) {
if (!VAR11->VAR9[VAR3].VAR17[VAR5].VAR18)
continue;
VAR7 = VAR9->VAR17[VAR5].VAR18->VAR19;
if (FUN4(VAR2, VAR3,
(char)VAR20
(VAR7->VAR21))) {
FUN5("");
return -VAR22;
}
VAR4 = FUN6(VAR7->VAR21);
if (FUN7(VAR2, VAR3, VAR4)) {
FUN5("");
return -VAR22;
}
if (FUN8(VAR2, VAR3, VAR23,
(char)VAR24
(VAR7->VAR21))) {
FUN5("");
return -VAR22;
}
if (FUN8(VAR2, VAR3, VAR25,
(char)VAR26
(VAR7->VAR21))) {
FUN5("");
return -VAR22;
}
}
}
return 0;
}