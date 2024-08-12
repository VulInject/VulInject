static void
FUN1(VAR1 *VAR2,
VAR3 *VAR4, VAR5 *VAR6, int VAR7, char *VAR8)
{
unsigned char    *VAR9;
int	VAR10;
size_t	VAR11;

for (VAR10 = 0; VAR10 < VAR7; VAR10++, VAR6++) {
GElf_Shdr VAR12;

VAR11 = 0;
if (VAR13 && !VAR14)
VAR9 = (unsigned char *)FUN2(VAR6->VAR15, &VAR11);
else
VAR9 = (unsigned char *)FUN3(VAR6->VAR15, &VAR11);

if ((FUN4(VAR6->VAR15, &VAR12) != NULL) &&
(VAR12.VAR16 == VAR17)) {
continue;
}
if (VAR13 && !VAR14) {
(void) FUN5("", VAR6->VAR18);
FUN6(VAR9, VAR11);
continue;
}
if (VAR12.VAR16 == VAR19) {
FUN7(VAR2, VAR6, VAR8);
continue;
}
if (VAR12.VAR16 == VAR20) {
FUN7(VAR2, VAR6, VAR8);
continue;
}
if (VAR12.VAR16 == VAR21) {
FUN8(VAR6, 1);
continue;
}
if (VAR12.VAR16 == VAR22) {
FUN9(VAR2, VAR4, VAR6, 1, VAR8);
continue;
}
if (VAR12.VAR16 == VAR23) {
FUN9(VAR2, VAR4, VAR6, 1, VAR8);
continue;
}
if (VAR12.VAR16 == VAR24) {
FUN10(VAR2, VAR6, 1, VAR8);
continue;
}

(void) FUN5("", VAR6->VAR18);
FUN6(VAR9, VAR11);
}
(void) FUN5("");
}