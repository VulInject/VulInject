void
FUN1(struct VAR1 *VAR2, const char *VAR3, size_t VAR4,
uint32_t VAR5, VAR6 *VAR7, uint32_t VAR8)
{
const char		*VAR9 = VAR3 + *VAR7;
const struct VAR10	*VAR11 = (struct VAR10 *)VAR9;
const struct VAR12	*VAR13;
VAR14		*VAR15, VAR16, VAR17, VAR18, VAR19;
uint32_t		 VAR20, VAR21;
uint64_t		 VAR22;
const char		*VAR23, *VAR24;

VAR17 = FUN2(VAR11->VAR25);
VAR18 = FUN3(VAR11->VAR25);
VAR19 = FUN4(VAR11->VAR25);
VAR23 = FUN5(VAR2, VAR3, VAR4, VAR11->VAR26);

if (VAR19)
FUN6("", VAR8);
else
FUN6("", VAR8);

if ((VAR24 = FUN7(VAR17)) != NULL)
FUN6("", VAR24, VAR23);

if (VAR11->VAR27 <= VAR28) {
VAR22 = VAR11->VAR27;
VAR21 = sizeof(struct VAR29);
} else {
VAR22 = FUN8(VAR11);
VAR21 = sizeof(struct VAR10);
}

switch (VAR17) {
case VAR30:
case VAR31:
break;
case VAR32:
VAR20 = *((VAR6 *)(VAR9 + VAR21));
VAR21 += sizeof(VAR6);
FUN6("",
FUN9(FUN10(VAR20)), FUN11(VAR20),
FUN12(VAR20));
break;
case VAR33:
VAR20 = *((VAR6 *)(VAR9 + VAR21));
VAR21 += sizeof(VAR6);
FUN6("",
FUN13(FUN14(VAR20)), FUN15(VAR20),
FUN16(VAR20));
break;
case VAR34:
VAR13 = (struct VAR12 *)(VAR9 + VAR21);
FUN6("", VAR13->VAR35,
VAR13->VAR36, VAR13->VAR37);
VAR21 += sizeof(struct VAR12);
break;
case VAR38:
VAR15 = (VAR14 *)(VAR9 + VAR21);
FUN6("", VAR11->VAR39, *VAR15);
for (VAR16 = 1; VAR16 < VAR18; VAR16++) {
VAR15++;
if ((const char *)VAR15 > VAR3 + VAR4)
FUN17(1, "");

FUN6("", *VAR15);
}
FUN6("");
VAR21 += (VAR18 + (VAR18 & 1)) * sizeof(VAR14);
break;
case VAR40:
case VAR41:
FUN6("", VAR22);

if (VAR22 < VAR42) {
for (VAR16 = 0; VAR16 < VAR18; VAR16++) {
struct VAR43	*VAR44;

if (VAR9 + VAR21 > VAR3 + VAR4)
FUN17(1, "");

if (VAR21 > (VAR5 - sizeof(*VAR44)))
break;

VAR44 = (struct VAR43 *)(VAR9 + VAR21);
VAR21 += sizeof(struct VAR43);

FUN6("",
FUN5(VAR2, VAR3, VAR4,
VAR44->VAR45),
VAR44->VAR46, VAR44->VAR47);
}
} else {
for (VAR16 = 0; VAR16 < VAR18; VAR16++) {
struct VAR48	*VAR49;

if (VAR9 + VAR21 > VAR3 + VAR4)
FUN17(1, "");

if (VAR21 > (VAR5 - sizeof(*VAR49)))
break;

VAR49 = (struct VAR48 *)(VAR9 + VAR21);
VAR21 += sizeof(struct VAR48);

FUN6("",
FUN5(VAR2, VAR3, VAR4,
VAR49->VAR50),
VAR49->VAR51, FUN18(VAR49));
}
}
break;
case VAR52:
FUN6("");
for (VAR16 = 0; VAR16 < VAR18; VAR16++) {
struct VAR53	*VAR54;

if (VAR9 + VAR21 > VAR3 + VAR4)
FUN17(1, "");

if (VAR21 > (VAR5 - sizeof(*VAR54)))
break;

VAR54 = (struct VAR53 *)(VAR9 + VAR21);
VAR21 += sizeof(struct VAR53);

FUN6("",
FUN5(VAR2, VAR3, VAR4, VAR54->VAR55),
VAR54->VAR56);
}
break;
case VAR57:
case VAR58:
case VAR59:
case VAR60:
case VAR61:
FUN6("", VAR11->VAR39);
break;
default:
FUN17(1, "", VAR17, *VAR7);
}

FUN6("");

*VAR7 += VAR21;
}