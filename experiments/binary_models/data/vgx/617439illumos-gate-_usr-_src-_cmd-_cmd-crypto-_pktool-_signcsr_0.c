static int
FUN1(VAR1 *VAR2,
VAR3 *VAR4,
VAR5 *VAR6,
uint32_t VAR7,
char *VAR8, char *VAR9,
char *VAR10,
KMF_GENERALNAMECHOICES VAR11,
int VAR12,
uint16_t VAR13,
int VAR14,
VAR15 *VAR16)
{
KMF_RETURN VAR17 = VAR18;
KMF_X509_NAME VAR19, VAR20;


(void) memset(VAR4, 0, sizeof (VAR3));
(void) memset(&VAR19, 0, sizeof (VAR19));
(void) memset(&VAR20, 0, sizeof (VAR20));

FUN2(FUN3(VAR4, 2), "");

FUN2(FUN4(VAR4, VAR6), "");

FUN2(FUN5(VAR4, 0, VAR7),
"");

if (VAR8) {
if (FUN6(VAR8, &VAR19) != VAR18) {
FUN7(VAR21,
FUN8(""));
return (VAR22);
}
FUN2(FUN9(VAR4, &VAR19),
"");
}
if (VAR9) {
if (FUN6(VAR9, &VAR20) != VAR18) {
FUN7(VAR21,
FUN8(""));
return (VAR22);
}
FUN2(FUN10(VAR4, &VAR20),
"");
} else {
VAR4->VAR23.VAR9 = VAR2->VAR24.VAR9;
}

VAR4->VAR23.VAR25 =
VAR2->VAR24.VAR25;

VAR4->VAR23.VAR26 = VAR2->VAR24.VAR26;

VAR4->VAR23.VAR27 =
VAR2->VAR27.VAR28;

if (VAR13 != 0) {
KMF_X509_EXTENSION VAR29;
uint16_t VAR30;

VAR17 = FUN11(&VAR2->VAR24.VAR26,
(VAR31 *)&VAR32, &VAR29);
if (VAR17 == VAR18) {
VAR29.VAR33 |= VAR14;
if (VAR29.VAR34.VAR35->VAR34.VAR36 > 1) {
VAR30 =
VAR29.VAR34.VAR35->VAR34.VAR37[1] << 8;
} else {
VAR30 =
VAR29.VAR34.VAR35->VAR34.VAR37[0];
}
VAR30 |= VAR13;
} else {
FUN2(FUN12(VAR4, VAR14, VAR13),
"");
}
}
if (VAR10 != NULL) {
FUN2(FUN13(VAR4,
VAR12, VAR11, VAR10), "");
}
if (VAR16 != NULL) {
int VAR38;
for (VAR38 = 0; VAR17 == VAR18 && VAR38 < VAR16->VAR39; VAR38++) {
FUN2(FUN14(VAR4,
&VAR16->VAR16[VAR38],
VAR16->VAR40[VAR38]), "");
}
}
VAR41:
if (VAR8 != NULL)
FUN15(&VAR19);
if (VAR9 != NULL)
FUN15(&VAR20);

return (VAR17);
}