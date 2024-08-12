static int FUN1(struct VAR1 *VAR2, const char *VAR3)
{
size_t VAR4, VAR5, VAR6;
const struct VAR7 *VAR8;
struct VAR9 *VAR10;
char VAR11[100];
const VAR12 *VAR13;
int VAR14, VAR15, VAR16, VAR17, VAR18;
VAR19 *VAR20;

snprintf(VAR11, sizeof(VAR11), "", VAR2->VAR21.VAR8.VAR22, VAR3);

VAR14 = FUN2(&VAR8, VAR11, VAR2->VAR23);
if (VAR14) {
FUN3("", VAR14);
return VAR14;
}

VAR13 = VAR8->VAR13;
VAR5 = VAR8->VAR24;


VAR4 = strlen(VAR25) + 1;

if (VAR5 < VAR4) {
FUN3("",
VAR5, VAR4);
VAR14 = -VAR26;
goto VAR27;
}

if (memcmp(VAR13, VAR25, VAR4) != 0) {
FUN3("",
VAR4);
VAR14 = -VAR26;
goto VAR27;
}

VAR5 -= VAR4;
VAR13 += VAR4;


while (VAR5 > sizeof(struct VAR9)) {

VAR10 = (struct VAR9 *) VAR13;

VAR15 = FUN4(&VAR10->VAR28);
VAR6 = FUN4(&VAR10->VAR5);

VAR5 -= sizeof(*VAR10);
VAR13 += sizeof(*VAR10);

FUN5(VAR29, "",
VAR15, VAR6, VAR6);

if (VAR5 < VAR6) {
FUN3("",
VAR5, VAR6, VAR15);
VAR14 = -VAR26;
goto VAR27;
}

switch (VAR15) {
case VAR30:
FUN6(VAR2->VAR31->VAR32, VAR13,
FUN7(sizeof(VAR2->VAR31->VAR32), VAR6+1));

FUN5(VAR29,
"",
VAR2->VAR31->VAR32);
break;
case VAR33:
FUN5(VAR29, "",
VAR6);

VAR2->VAR34 = FUN8(VAR13, VAR6, VAR35);

if (VAR2->VAR34 == NULL) {
FUN3("");
VAR14 = -VAR36;
goto VAR27;
}

VAR2->VAR37 = VAR6;
break;
case VAR38:
FUN5(VAR29, "",
VAR6);


if (VAR2->VAR8 != NULL)
break;

VAR2->VAR8 = FUN9(VAR6);

if (VAR2->VAR8 == NULL) {
FUN3("", VAR6);
VAR14 = -VAR36;
goto VAR27;
}

memcpy(VAR2->VAR8, VAR13, VAR6);
VAR2->VAR39 = VAR6;
break;
case VAR40:
FUN5(VAR29, "",
VAR6);

VAR2->VAR41 = FUN8(VAR13, VAR6, VAR35);

if (VAR2->VAR41 == NULL) {
FUN3("", VAR6);
VAR14 = -VAR36;
goto VAR27;
}

VAR2->VAR42 = VAR6;
break;
case VAR43:
VAR20 = (VAR19 *) VAR13;
VAR2->VAR21.VAR44 = FUN4(VAR20);

FUN5(VAR29,
"",
VAR2->VAR21.VAR44);
break;
case VAR45:
FUN5(VAR29,
"",
VAR6);

for (VAR16 = 0; VAR16 < VAR46; VAR16++) {
VAR17 = VAR16 / 8;
VAR18 = VAR16 % 8;

if (VAR17 == VAR6)
break;

if (VAR13[VAR17] & (1 << VAR18))
FUN10(VAR16, VAR2->VAR47);
}

FUN11(VAR29, "", "",
VAR2->VAR47,
sizeof(VAR2->VAR47));
break;
case VAR48:
if (VAR6 != sizeof(*VAR20))
break;

VAR20 = (VAR19 *) VAR13;
VAR2->VAR21.VAR49 = FUN4(VAR20);

FUN5(VAR29,
"",
VAR2->VAR21.VAR49);
break;
case VAR50:
if (VAR6 != sizeof(*VAR20))
break;

VAR20 = (VAR19 *) VAR13;
VAR2->VAR21.VAR51 = FUN4(VAR20);

FUN5(VAR29,
"",
VAR2->VAR21.VAR51);
break;
case VAR52:
if (VAR6 != sizeof(*VAR20))
break;

VAR20 = (VAR19 *) VAR13;
VAR2->VAR53 = FUN12(unsigned int, FUN4(VAR20),
VAR54);

if (VAR2->VAR53 > 1 && !VAR2->VAR55)
VAR2->VAR56 = 2;

FUN5(VAR29,
"", VAR2->VAR53);
break;
default:
FUN5(VAR29, "",
FUN4(&VAR10->VAR28));
break;
}

VAR5 -= VAR6;
VAR13 += VAR6;
}

VAR14 = 0;
VAR27:
FUN13(VAR8);

return VAR14;
}