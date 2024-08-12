int
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
VAR5 *VAR8 = VAR2->VAR9->VAR10;
struct VAR11 *VAR12 = (struct VAR11 *)VAR2->VAR13;
VAR14 *VAR15;
ulong_t VAR16;
uint8_t VAR17;
int VAR18 = VAR3;
char VAR19[VAR20];	


if (VAR2->VAR21 & (VAR22|VAR23)) {
if (VAR24) {
FUN2("",
VAR2->VAR21,
FUN3(VAR25,
(void *)&(VAR12->VAR26),
VAR19, sizeof (VAR19)));
}
return (VAR27);
}
if (VAR3 < VAR28) {
if (VAR24) {
FUN2("",
VAR3,
FUN3(VAR25,
(void *)&(VAR12->VAR26),
VAR19, sizeof (VAR19)));
}
return (VAR27);
}

VAR15 = (VAR14 *)VAR8;
*VAR6 = VAR15->VAR29;
*VAR7 = VAR15->VAR30;


if ((*VAR6 == VAR31 &&
*VAR7 == VAR32) ||
*VAR6 == VAR33 || *VAR6 == VAR34 ||
*VAR6 == VAR35 ||
(*VAR6 == VAR36 &&
*VAR7 == VAR37)) {
VAR38 *VAR39;
struct VAR40 *VAR41;
VAR14 *VAR42;

VAR3 -= VAR28;
VAR39 = (VAR38 *)&(VAR15->VAR43[1]);
VAR17 = VAR39->VAR44;
VAR16 = FUN4(VAR39, VAR3, &VAR17);

VAR3 -= VAR16;
if (VAR45) {
if (*VAR6 == VAR34 &&
VAR15->VAR46 == FUN5(VAR47) &&
VAR15->VAR48 == FUN5(VAR4)) {
return (VAR49);
}


VAR42 = (VAR14 *)((VAR5 *)VAR39 + VAR16);

if (VAR28 <= VAR3 &&
VAR17 == VAR50 &&
VAR42->VAR46 == FUN5(VAR47) &&
VAR42->VAR48 == FUN5(VAR4)) {
if (*VAR6 == VAR31) {
return (VAR51);
} else {
return (VAR52);
}
}
} else {

VAR41 = (struct VAR40 *)((VAR5 *)VAR39 + VAR16);

if (4 <= VAR3 &&
VAR17 == VAR53 &&
VAR41->VAR54 == FUN5(VAR47) &&
VAR41->VAR55 == FUN5((VAR56 + VAR4) %
(VAR57 + 1))) {
if (*VAR6 == VAR33 &&
*VAR7 == VAR58) {
return (VAR49);
} else if (*VAR6 == VAR31) {
return (VAR51);
} else {
return (VAR52);
}
}
}
}

if (VAR24) {
int VAR59, VAR60;
VAR5 *VAR61 = (VAR5 *)VAR15;
struct VAR62 *VAR63;
struct VAR64 *VAR65;

VAR65 = (struct VAR64 *)FUN6(VAR2,
VAR66, VAR67);
if (VAR65 == NULL) {
FUN7(VAR68,
"",
VAR69);
FUN8(VAR70);
}
VAR63 = &VAR65->VAR71;
VAR3 = VAR18;
FUN2("", VAR3,
FUN3(VAR25, (const void *)&(VAR12->VAR26),
VAR19, sizeof (VAR19)));
FUN2("",
FUN3(VAR25, (const void *)VAR63,
VAR19, sizeof (VAR19)),
*VAR6, FUN9(*VAR6), *VAR7);
for (VAR59 = 0; VAR59 < VAR3; VAR59 += 4) {
FUN2("", VAR59);
for (VAR60 = 0; ((VAR60 < 4) && ((VAR59 + VAR60) < VAR3)); VAR60++)
FUN2("", *VAR61++);
(void) FUN10('');
}
}

return (VAR27);
}