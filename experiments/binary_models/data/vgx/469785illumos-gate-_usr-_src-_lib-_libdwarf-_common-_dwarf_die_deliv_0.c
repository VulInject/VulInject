static int
FUN1(Dwarf_Debug VAR1,
Dwarf_Die VAR2,
Dwarf_CU_Context VAR3,
Dwarf_Bool VAR4,
VAR5 * VAR6, VAR7 * VAR8)
{
Dwarf_Die VAR9 = 0;
Dwarf_Byte_Ptr VAR10 = 0;
Dwarf_Byte_Ptr VAR11 = 0;


Dwarf_Byte_Ptr VAR12 = 0;
Dwarf_Unsigned VAR13 = 0;
Dwarf_Unsigned VAR14 = 0;
int VAR15 = 0;
int VAR16 = 0;

VAR17 *VAR18 =  0;

if (VAR1 == NULL) {
FUN2(NULL, VAR8, VAR19);
return (VAR20);
}
VAR18 = VAR4? VAR1->VAR21.VAR22:
VAR1->VAR23.VAR22;
if (VAR2 == NULL) {


Dwarf_Off VAR24 = 0;
Dwarf_Unsigned VAR25 = 0;
int VAR26 = 0;


if (!VAR3) {
FUN3(VAR1,VAR3);
return (VAR20);
}
VAR24 = VAR3->VAR27;
VAR11 = VAR18 + VAR24;
VAR26 = FUN4(VAR1, VAR24,VAR4,
&VAR25,VAR8);
if (VAR26 != VAR28) {
return VAR26;
}
VAR10 = VAR11 + VAR25;
VAR12 = FUN5(VAR3);


VAR3->VAR29 = VAR30;
VAR3->VAR31 = VAR24 + VAR25;
} else {

Dwarf_Bool VAR32 = false;
Dwarf_Signed VAR33 = 0;


FUN6(VAR2, VAR20);

VAR10 = VAR2->VAR34;
if (*VAR10 == 0) {
return (VAR35);
}
VAR3 = VAR2->VAR36;
VAR11 = VAR18+ VAR3->VAR27;
VAR12 = FUN5(VAR3);

if ((*VAR10) == 0) {
return (VAR35);
}
VAR33 = 0;
do {
int VAR37 = 0;
Dwarf_Byte_Ptr VAR38 = 0;

VAR37 = FUN7(VAR10,
VAR3, VAR12,
VAR11, true, &VAR32,
&VAR38,
VAR8);
if(VAR37 != VAR28) {
return VAR37;
}
if (VAR38 < VAR10) {

FUN2(VAR1, VAR8, VAR39);
return (VAR20);
}
if (VAR38 > VAR12) {
FUN2(VAR1, VAR8, VAR40);
return (VAR20);
}
VAR10 = VAR38;


if (VAR10 < VAR12) {
if ((*VAR10) == 0 && VAR32) {
VAR10++;
VAR32 = false;
}
}


if ((VAR10 == VAR12) ||
((*VAR10) == 0)) {

for (;;) {
if (VAR33 == 0) {

break;
}
if (VAR10 == VAR12) {

return VAR35;
}
if (*VAR10) {

break;
}

VAR33--;
VAR10++;
}
} else {
VAR33 = VAR32 ? VAR33 + 1 : VAR33;
}
} while (VAR33 != 0);
}


if (VAR10 >= VAR12) {
return (VAR35);
}
if ((*VAR10) == 0) {
return (VAR35);
}

VAR9 = (VAR5) FUN8(VAR1, VAR41, 1);
if (VAR9 == NULL) {
FUN2(VAR1, VAR8, VAR42);
return (VAR20);
}

VAR9->VAR43 = VAR4;
VAR9->VAR34 = VAR10;
VAR9->VAR36 =
VAR2 == NULL ? VAR3 : VAR2->VAR36;

FUN9(VAR10, VAR14,VAR1,VAR8,VAR12);
VAR16 = FUN10(VAR1,
&VAR10,VAR12,&VAR14,VAR8);
if (VAR16 == VAR20) {
FUN11(VAR1, VAR9, VAR41);
return VAR16;
}
if (VAR10 > VAR12) {

FUN11(VAR1, VAR9, VAR41);
FUN2(VAR1, VAR8, VAR44);
return (VAR20);
}
VAR13 = (VAR45) VAR14;
if (VAR13 == 0) {

FUN11(VAR1, VAR9, VAR41);
return (VAR35);
}
VAR9->VAR46 = VAR13;
VAR15 = FUN12(VAR9->VAR36,
VAR13,
&VAR9->VAR47,VAR8);
if (VAR15 == VAR20) {
FUN11(VAR1, VAR9, VAR41);
return VAR15;
}
if (VAR15 == VAR35) {
dwarfstring VAR48;
FUN11(VAR1, VAR9, VAR41);
FUN13(&VAR48);
FUN14(&VAR48,
"",
VAR13);
FUN15(VAR1, VAR8,
VAR49,FUN16(&VAR48));
FUN17(&VAR48);
return VAR20;
}
if (VAR2 == NULL && !FUN18(VAR9->VAR47->VAR50)) {
FUN11(VAR1, VAR9, VAR41);
FUN2(VAR1, VAR8, VAR51);
return VAR20;
}

*VAR6 = VAR9;
return (VAR28);
}