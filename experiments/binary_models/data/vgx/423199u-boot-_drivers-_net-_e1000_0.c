static VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = &VAR3->VAR5;
uint32_t VAR6;
int32_t VAR7 = VAR8;
uint16_t VAR9;

if (VAR3->VAR10 == VAR11)
VAR6 = FUN2(VAR3, VAR12);
else
VAR6 = FUN2(VAR3, VAR13);

FUN3();

switch (VAR3->VAR10) {
case VAR14:
case VAR15:
case VAR16:
case VAR17:
VAR5->VAR18 = VAR19;
VAR5->VAR20 = 64;
VAR5->VAR21 = 3;
VAR5->VAR22 = 6;
VAR5->VAR23 = 50;
VAR5->VAR24 = false;
VAR5->VAR25 = false;
break;
case VAR26:
case VAR27:
case VAR28:
case VAR29:
case VAR30:
VAR5->VAR18 = VAR19;
VAR5->VAR21 = 3;
VAR5->VAR23 = 50;
if (VAR6 & VAR31) {
VAR5->VAR20 = 256;
VAR5->VAR22 = 8;
} else {
VAR5->VAR20 = 64;
VAR5->VAR22 = 6;
}
VAR5->VAR24 = false;
VAR5->VAR25 = false;
break;
case VAR32:
case VAR33:
case VAR34:
case VAR35:
if (VAR6 & VAR36) {
VAR5->VAR18 = VAR37;
VAR5->VAR21 = 8;
VAR5->VAR23 = 1;
if (VAR6 & VAR38) {
VAR5->VAR39 = 32;
VAR5->VAR22 = 16;
} else {
VAR5->VAR39 = 8;
VAR5->VAR22 = 8;
}
} else {
VAR5->VAR18 = VAR19;
VAR5->VAR21 = 3;
VAR5->VAR23 = 50;
if (VAR6 & VAR38) {
VAR5->VAR20 = 256;
VAR5->VAR22 = 8;
} else {
VAR5->VAR20 = 64;
VAR5->VAR22 = 6;
}
}
VAR5->VAR24 = false;
VAR5->VAR25 = false;
break;
case VAR40:
case VAR41:
VAR5->VAR18 = VAR37;
VAR5->VAR21 = 8;
VAR5->VAR23 = 1;
if (VAR6 & VAR38) {
VAR5->VAR39 = 32;
VAR5->VAR22 = 16;
} else {
VAR5->VAR39 = 8;
VAR5->VAR22 = 8;
}
VAR5->VAR24 = false;
VAR5->VAR25 = false;
break;
case VAR42:
case VAR43:
VAR5->VAR18 = VAR37;
VAR5->VAR21 = 8;
VAR5->VAR23 = 1;
if (VAR6 & VAR38) {
VAR5->VAR39 = 32;
VAR5->VAR22 = 16;
} else {
VAR5->VAR39 = 8;
VAR5->VAR22 = 8;
}
if (FUN4(VAR3) == false) {
VAR5->VAR24 = true;
VAR5->VAR25 = true;

VAR5->VAR18 = VAR44;
VAR5->VAR20 = 2048;


VAR6 &= ~VAR45;
FUN5(VAR3, VAR13, VAR6);
}
break;
case VAR46:
VAR5->VAR18 = VAR37;
VAR5->VAR21 = 8;
VAR5->VAR23 = 1;
if (VAR6 & VAR38) {
VAR5->VAR39 = 32;
VAR5->VAR22 = 16;
} else {
VAR5->VAR39 = 8;
VAR5->VAR22 = 8;
}
VAR5->VAR24 = true;
VAR5->VAR25 = false;
break;
case VAR11:

VAR5->VAR18 = VAR47;
VAR5->VAR21 = 8;
VAR5->VAR23 = 1;
VAR5->VAR39 = 32;
VAR5->VAR22 = 16;
VAR5->VAR24 = true;
VAR5->VAR25 = false;
break;
default:
break;
}

if (VAR5->VAR18 == VAR37 ||
VAR5->VAR18 == VAR47) {

if (VAR3->VAR10 <= VAR35) {

VAR5->VAR20 = 64;
VAR7 = FUN6(VAR3, VAR48, 1,
&VAR9);
if (VAR7)
return VAR7;
VAR9 = (VAR9 & VAR49)
>> VAR50;

if (VAR9)
VAR9++;
} else {
VAR9 = (VAR51)((VAR6 &
VAR52) >>
VAR53);
}

VAR5->VAR20 = 1 << (VAR9 + VAR54);
}
return VAR7;
}