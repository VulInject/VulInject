static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR4;
VAR5 *VAR6 = VAR2->VAR7;
VAR8 *VAR9 = NULL;
uint8_t VAR10[255] = {0};
int VAR11, VAR12 = 0;

if (!(VAR4->VAR13 & VAR14)) {
FUN2(VAR2, VAR15, "");
return -1;
}

VAR6->VAR16 |= 0x00080000; 
for (VAR11 = 0; VAR11 < VAR2->VAR17; ++VAR11) {
VAR18 *VAR19 = VAR2->VAR20[VAR11];
VAR8 *VAR21 = FUN3(sizeof(*VAR21));
if (!VAR21)
return FUN4(VAR22);
VAR19->VAR7 = VAR21;

VAR21->VAR23 = FUN5(VAR24, VAR19->VAR25->VAR26);
if (VAR19->VAR25->VAR27 == VAR28) {
if (VAR19->VAR25->VAR26 != VAR29) {
FUN2(VAR2, VAR15, "");
return -1;
}
if (VAR19->VAR25->VAR30 != 48000) {
FUN2(VAR2, VAR15, "");
return -1;
}
if (VAR19->VAR25->VAR31 != 1) {
FUN2(VAR2, VAR15, "");
return -1;
}
VAR21->VAR32 = 2;
VAR21->VAR30 = VAR19->VAR25->VAR30;
FUN6(VAR19, 64, 1, VAR21->VAR30);
VAR21->VAR33 = 16;
VAR21->VAR34 = -2;
VAR21->VAR35 = -2;
VAR21->VAR36 = -2;
VAR6->VAR37++;
VAR6->VAR16 |= 0x04000000; 
VAR12 = '';
} else if (VAR19->VAR25->VAR27 == VAR38) {
if (VAR11 != 0) {
FUN2(VAR2, VAR15, "");
return -1;
}

if (VAR19->VAR25->VAR39 == 480 || VAR19->VAR25->VAR39 == 512) { 
VAR21->VAR34 = 5;
VAR21->VAR30 = 60;
VAR6->VAR16 |= 0x00000080;
VAR6->VAR40 = (VAR41){ 1001, 60000 };
} else if (VAR19->VAR25->VAR39 == 576 || VAR19->VAR25->VAR39 == 608) { 
VAR21->VAR34 = 6;
VAR21->VAR23++;
VAR21->VAR30 = 50;
VAR6->VAR16 |= 0x00000040;
VAR6->VAR40 = (VAR41){ 1, 50 };
} else {
FUN2(VAR2, VAR15, ""
"");
return -1;
}
FUN6(VAR19, 64, VAR6->VAR40.VAR42, VAR6->VAR40.VAR43);
if (FUN7(VAR19) < 0)
VAR21->VAR35 = -1;
VAR21->VAR33 = VAR19->VAR25->VAR44;
VAR21->VAR36 = 2; 

VAR9 = VAR21;

switch (VAR19->VAR25->VAR26) {
case VAR45:
VAR21->VAR32 = 1;
VAR6->VAR16 |= 0x00004000;
VAR12 = '';
break;
case VAR46:
VAR21->VAR32 = 9;
VAR6->VAR47++;
VAR12 = '';
break;
case VAR48:
VAR21->VAR49 = -1;
VAR21->VAR32 = 4;
VAR6->VAR47++;
VAR6->VAR16 |= 0x00008000;
VAR12 = '';
break;
case VAR50:
if (VAR19->VAR25->VAR51 == VAR52) {
VAR21->VAR23 += 2;
VAR21->VAR32 = 6;
VAR6->VAR16 |= 0x00002000;
VAR12 = '';
} else {
VAR21->VAR32 = 5;
VAR6->VAR16 |= 0x00001000;
VAR12 = '';
}
break;
default:
FUN2(VAR2, VAR15, "");
return -1;
}
}

VAR21->VAR12 = VAR12<<8 | (''+VAR10[VAR12]++);
VAR21->VAR53 = VAR2->VAR17 - VAR19->VAR54;
}

if (FUN8(VAR2, VAR55, (VAR41){ 1, 48000 }) < 0)
return -1;

FUN9(&VAR6->VAR56, VAR9);
VAR6->VAR16 |= 0x200000; 

FUN10(VAR2, 0);
FUN11(VAR2);
FUN12(VAR2);

VAR6->VAR57 = 3;

FUN13(VAR4);
return 0;
}