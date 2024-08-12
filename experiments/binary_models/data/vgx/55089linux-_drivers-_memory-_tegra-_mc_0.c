VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
unsigned int VAR6, VAR7;
unsigned long VAR8;

if (VAR5->VAR9->VAR10) {
u32 VAR11;
int VAR12;

VAR11 = FUN2(VAR5, VAR13, VAR14);
VAR12 = FUN3(VAR5, VAR11, &VAR7);
if (VAR12 < 0) {
FUN4(VAR5->VAR15, "",
VAR11);
return VAR16;
}


VAR8 = FUN2(VAR5, VAR7, VAR17) & VAR5->VAR9->VAR18;
} else {
VAR8 = FUN5(VAR5, VAR17) & VAR5->VAR9->VAR18;
}

if (!VAR8)
return VAR16;

FUN6(VAR6, &VAR8, 32) {
const char *VAR19 = VAR20[VAR6] ?: "";
const char *VAR21 = "", *VAR22;
const char *VAR23, *VAR24;
u32 VAR25, VAR26;
u32 VAR18 = FUN7(VAR6);
phys_addr_t VAR27 = 0;
u32 VAR28 = 0;
unsigned int VAR29;
char VAR30[7];
u8 VAR31, VAR32;
u32 VAR33;

switch (VAR18) {
case VAR34:
VAR25 = VAR35;
VAR26 = VAR36;
break;

case VAR37:
VAR25 = VAR38;
VAR26 = VAR39;
break;

case VAR40:
VAR25 = VAR41;
VAR26 = VAR42;
break;

case VAR43:
VAR25 = VAR44;
VAR26 = VAR45;
break;

case VAR46:
VAR25 = VAR47;
VAR26 = VAR48;
break;

default:
VAR25 = VAR49;
VAR26 = VAR50;

if (VAR5->VAR9->VAR51)
VAR28 = VAR52;
break;
}

if (VAR5->VAR9->VAR10)
VAR33 = FUN2(VAR5, VAR7, VAR25);
else
VAR33 = FUN5(VAR5, VAR25);

if (VAR5->VAR9->VAR53 > 32) {
if (VAR28) {
if (VAR5->VAR9->VAR10)
VAR27 = FUN2(VAR5, VAR7, VAR28);
else
VAR27 = FUN5(VAR5, VAR28);
} else {
VAR27 = ((VAR33 >> VAR54) &
VAR55);
}
VAR27 <<= 32;
}

if (VAR33 & VAR56)
VAR23 = "";
else
VAR23 = "";

if (VAR33 & VAR57)
VAR24 = "";
else
VAR24 = "";

VAR31 = VAR33 & VAR5->VAR9->VAR58;

for (VAR29 = 0; VAR29 < VAR5->VAR9->VAR59; VAR29++) {
if (VAR5->VAR9->VAR60[VAR29].VAR31 == VAR31) {
VAR21 = VAR5->VAR9->VAR60[VAR29].VAR61;
break;
}
}

VAR32 = (VAR33 & VAR62) >>
VAR63;
VAR22 = VAR64[VAR32];

switch (VAR33 & VAR62) {
case VAR65:
VAR30[0] = '';
VAR30[1] = '';

if (VAR33 & VAR66)
VAR30[2] = '';
else
VAR30[2] = '';

if (VAR33 & VAR67)
VAR30[3] = '';
else
VAR30[3] = '';

if (VAR33 & VAR68)
VAR30[4] = '';
else
VAR30[4] = '';

VAR30[5] = '';
VAR30[6] = '';
break;

default:
VAR30[0] = '';
break;
}

if (VAR5->VAR9->VAR10)
VAR33 = FUN2(VAR5, VAR7, VAR26);
else
VAR33 = FUN5(VAR5, VAR26);
VAR27 |= VAR33;

FUN4(VAR5->VAR15, "",
VAR21, VAR24, VAR23, &VAR27, VAR19,
VAR22, VAR30);
}


if (VAR5->VAR9->VAR10) {
FUN8(VAR5, VAR7, VAR8, VAR17);
FUN8(VAR5, VAR13,
FUN9(VAR5, VAR7),
VAR14);
} else {
FUN10(VAR5, VAR8, VAR17);
}

return VAR69;
}