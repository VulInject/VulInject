long FUN1(struct VAR1 *VAR2, long VAR3,
unsigned long VAR4, unsigned long VAR5)
{
int VAR6;
void VAR7 *VAR8 = (void VAR7 *) VAR4;
void VAR7 *VAR9 = (void VAR7 *) VAR5;
unsigned long VAR7 *VAR10 = (void VAR7 *) VAR5;

switch (VAR3) {

case VAR11: 
case VAR12:
VAR6 = FUN2(VAR2, VAR4, VAR5);
break;


case VAR13: {
struct VAR14 *VAR15;
unsigned long VAR16 = 0;

VAR15 = FUN3(VAR2);
VAR6 = 0;  

switch (VAR4) {
case 0 ... 31:
VAR16 = VAR15->VAR15[VAR4];
break;
case VAR17 ... VAR17 + 31: {
union VAR18 *VAR19;

if (!FUN4(VAR2)) {

VAR16 = -1;
break;
}
VAR19 = FUN5(VAR2);

if (FUN6(VAR2, VAR20)) {

VAR16 = FUN7(&VAR19[(VAR4 & ~1) - VAR17],
VAR4 & 1);
break;
}
VAR16 = FUN8(&VAR19[VAR4 - VAR17], 0);
break;
}
case VAR21:
VAR16 = VAR2->VAR22.VAR23.VAR24;
break;
case VAR25:

VAR16 = VAR26.VAR27;
break;
case VAR28:
VAR16 = VAR15->VAR29;
break;
case VAR30:
VAR16 = VAR15->VAR31;
break;
case VAR32:
VAR16 = VAR15->VAR33;
break;
case VAR34:
VAR16 = VAR15->VAR35;
break;
case VAR36:
VAR16 = VAR15->VAR37;
break;
case VAR38:
VAR16 = VAR15->VAR39;
break;
case VAR40 ... VAR40 + 5: {
VAR41 *VAR42;

if (!VAR43) {
VAR16 = 0;
VAR6 = -VAR44;
goto VAR45;
}
VAR42 = FUN9(VAR2);
VAR16 = VAR42[VAR4 - VAR40];
break;
}
case VAR46:
if (!VAR43) {
VAR16 = 0;
VAR6 = -VAR44;
goto VAR45;
}
VAR16 = VAR2->VAR22.VAR47.VAR48;
break;
default:
VAR16 = 0;
VAR6 = -VAR44;
goto VAR45;
}
VAR6 = FUN10(VAR16, VAR10);
break;
}


case VAR49: 
case VAR50:
VAR6 = FUN11(VAR2, VAR4, VAR5);
break;

case VAR51: {
struct VAR14 *VAR15;
VAR6 = 0;
VAR15 = FUN3(VAR2);

switch (VAR4) {
case 0 ... 31:
VAR15->VAR15[VAR4] = VAR5;

if (VAR4 == 2)
FUN12(VAR2, VAR15);
else if (VAR4 == 4 &&
FUN13(VAR2, VAR15))
FUN12(VAR2, VAR15);
break;
case VAR17 ... VAR17 + 31: {
union VAR18 *VAR19 = FUN5(VAR2);

FUN14(VAR2);
if (FUN6(VAR2, VAR20)) {

FUN15(&VAR19[(VAR4 & ~1) - VAR17],
VAR4 & 1, VAR5);
break;
}
FUN16(&VAR19[VAR4 - VAR17], 0, VAR5);
break;
}
case VAR21:
FUN14(VAR2);
FUN17(VAR2, VAR5);
break;
case VAR28:
VAR15->VAR29 = VAR5;
break;
case VAR34:
VAR15->VAR35 = VAR5;
break;
case VAR36:
VAR15->VAR37 = VAR5;
break;
case VAR38:
VAR15->VAR39 = VAR5;
break;
case VAR40 ... VAR40 + 5: {
VAR41 *VAR42;

if (!VAR43) {
VAR6 = -VAR44;
break;
}

VAR42 = FUN9(VAR2);
VAR42[VAR4 - VAR40] = VAR5;
break;
}
case VAR46:
if (!VAR43) {
VAR6 = -VAR44;
break;
}
VAR2->VAR22.VAR47.VAR48 = VAR5;
break;
default:

VAR6 = -VAR44;
break;
}
break;
}

case VAR52:
VAR6 = FUN18(VAR2, VAR9);
break;

case VAR53:
VAR6 = FUN19(VAR2, VAR9);
break;

case VAR54:
VAR6 = FUN20(VAR2, VAR9);
break;

case VAR55:
VAR6 = FUN21(VAR2, VAR9);
break;
case VAR56:
VAR6 = FUN10(FUN22(VAR2)->VAR57, VAR10);
break;

case VAR58:
VAR6 = FUN23(VAR2, VAR8);
break;

case VAR59:
VAR6 = FUN24(VAR2, VAR8);
break;

default:
VAR6 = FUN25(VAR2, VAR3, VAR4, VAR5);
break;
}
VAR45:
return VAR6;
}