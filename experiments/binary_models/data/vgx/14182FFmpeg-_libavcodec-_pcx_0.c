static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
int *VAR5, VAR6 *VAR7)
{
GetByteContext VAR8;
int VAR9, VAR10, VAR11, VAR12, VAR13;
int VAR14;
unsigned int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22,
VAR23;
VAR24 *VAR25, *VAR26;

if (VAR7->VAR27 < VAR28) {
FUN2(VAR2, VAR29, "");
return VAR30;
}

FUN3(&VAR8, VAR7->VAR31, VAR7->VAR27);

if (FUN4(&VAR8) != 0x0a || FUN4(&VAR8) > 5) {
FUN2(VAR2, VAR29, "");
return VAR30;
}

VAR9                     = FUN4(&VAR8);
VAR17                 = FUN4(&VAR8);
VAR10                           = FUN5(&VAR8);
VAR11                           = FUN5(&VAR8);
VAR12                           = FUN5(&VAR8);
VAR13                           = FUN5(&VAR8);
VAR2->VAR32.VAR33 = FUN5(&VAR8);
VAR2->VAR32.VAR34 = FUN5(&VAR8);

if (VAR12 < VAR10 || VAR13 < VAR11) {
FUN2(VAR2, VAR29, "");
return VAR30;
}

VAR15 = VAR12 - VAR10 + 1;
VAR16 = VAR13 - VAR11 + 1;

FUN6(&VAR8, 49);
VAR19            = FUN4(&VAR8);
VAR18     = FUN5(&VAR8);
VAR23 = VAR19 * VAR18;

if (VAR23 < (VAR15 * VAR17 * VAR19 + 7) / 8 ||
(!VAR9 && VAR23 > FUN7(&VAR8) / VAR16)) {
FUN2(VAR2, VAR29, "");
return VAR30;
}

switch ((VAR19 << 8) + VAR17) {
case 0x0308:
VAR2->VAR35 = VAR36;
break;
case 0x0108:
case 0x0104:
case 0x0102:
case 0x0101:
case 0x0401:
case 0x0301:
case 0x0201:
VAR2->VAR35 = VAR37;
break;
default:
FUN2(VAR2, VAR29, "");
return VAR30;
}

FUN6(&VAR8, 60);

if ((VAR14 = FUN8(VAR2, VAR15, VAR16)) < 0)
return VAR14;

if ((VAR14 = FUN9(VAR2, VAR4, 0)) < 0)
return VAR14;

VAR4->VAR38 = VAR39;

VAR25    = VAR4->VAR31[0];
VAR20 = VAR4->VAR40[0];

VAR26 = FUN10(VAR23 + VAR41);
if (!VAR26)
return FUN11(VAR42);

if (VAR19 == 3 && VAR17 == 8) {
for (VAR21 = 0; VAR21 < VAR16; VAR21++) {
VAR14 = FUN12(&VAR8, VAR26, VAR23, VAR9);
if (VAR14 < 0)
goto VAR43;

for (VAR22 = 0; VAR22 < VAR15; VAR22++) {
VAR25[3 * VAR22]     = VAR26[VAR22];
VAR25[3 * VAR22 + 1] = VAR26[VAR22 + VAR18];
VAR25[3 * VAR22 + 2] = VAR26[VAR22 + (VAR18 << 1)];
}

VAR25 += VAR20;
}
} else if (VAR19 == 1 && VAR17 == 8) {
int VAR44 = VAR7->VAR27 - 769;

if (VAR7->VAR27 < 769) {
FUN2(VAR2, VAR29, "");
VAR14 = VAR2->VAR45 & VAR46 ?
VAR30 : VAR7->VAR27;
goto VAR43;
}

for (VAR21 = 0; VAR21 < VAR16; VAR21++, VAR25 += VAR20) {
VAR14 = FUN12(&VAR8, VAR26, VAR23, VAR9);
if (VAR14 < 0)
goto VAR43;
memcpy(VAR25, VAR26, VAR15);
}

if (FUN13(&VAR8) != VAR44) {
FUN2(VAR2, VAR47, "");
FUN14(&VAR8, VAR44, VAR48);
}
if (FUN15(&VAR8) != 12) {
FUN2(VAR2, VAR29, "");
VAR14 = VAR2->VAR45 & VAR46 ?
VAR30 : VAR7->VAR27;
goto VAR43;
}
} else if (VAR19 == 1) {   
GetBitContext VAR49;

for (VAR21 = 0; VAR21 < VAR16; VAR21++) {
FUN16(&VAR49, VAR26, VAR23);

VAR14 = FUN12(&VAR8, VAR26, VAR23, VAR9);
if (VAR14 < 0)
goto VAR43;

for (VAR22 = 0; VAR22 < VAR15; VAR22++)
VAR25[VAR22] = FUN17(&VAR49, VAR17);
VAR25 += VAR20;
}
} else {    
int VAR50;

for (VAR21 = 0; VAR21 < VAR16; VAR21++) {
VAR14 = FUN12(&VAR8, VAR26, VAR23, VAR9);
if (VAR14 < 0)
goto VAR43;

for (VAR22 = 0; VAR22 < VAR15; VAR22++) {
int VAR51 = 0x80 >> (VAR22 & 7), VAR52 = 0;
for (VAR50 = VAR19 - 1; VAR50 >= 0; VAR50--) {
VAR52 <<= 1;
VAR52  += !!(VAR26[VAR50 * VAR18 + (VAR22 >> 3)] & VAR51);
}
VAR25[VAR22] = VAR52;
}
VAR25 += VAR20;
}
}

VAR14 = FUN13(&VAR8);
if (VAR19 == 1 && VAR17 == 8) {
FUN18(&VAR8, (VAR53 *)VAR4->VAR31[1], 256);
VAR14 += 256 * 3;
} else if (VAR17 * VAR19 == 1) {
FUN19(VAR4->VAR31[1]  , 0xFF000000);
FUN19(VAR4->VAR31[1]+4, 0xFFFFFFFF);
} else if (VAR17 < 8) {
FUN14(&VAR8, 16, VAR48);
FUN18(&VAR8, (VAR53 *)VAR4->VAR31[1], 16);
}

*VAR5 = 1;

VAR43:
FUN20(VAR26);
return VAR14;
}