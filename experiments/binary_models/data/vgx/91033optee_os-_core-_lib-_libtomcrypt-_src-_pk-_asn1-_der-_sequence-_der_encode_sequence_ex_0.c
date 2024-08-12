int FUN1(const VAR1 *VAR2, unsigned long VAR3,
unsigned char *VAR4,        unsigned long *VAR5, int VAR6)
{
int           VAR7;
ltc_asn1_type VAR8;
unsigned long VAR9, VAR10, VAR11, VAR12, VAR13;
void          *VAR14;

FUN2(VAR2    != NULL);
FUN2(VAR4     != NULL);
FUN2(VAR5  != NULL);


VAR11 = 0; VAR12 = 0;
if ((VAR7 = FUN3(VAR2, VAR3, &VAR11, &VAR12)) != VAR15) return VAR16;


if (*VAR5 < VAR11) {
*VAR5 = VAR11;
VAR7 = VAR17;
goto VAR18;
}


VAR10 = 0;
VAR4[VAR10++] = (VAR6 == VAR19) ? 0x30 : 0x31;

VAR11 = *VAR5 - VAR10;
if ((VAR7 = FUN4(VAR12, &VAR4[VAR10], &VAR11)) != VAR15) {
goto VAR18;
}
VAR10 += VAR11;


*VAR5 -= VAR10;
for (VAR13 = 0; VAR13 < VAR3; VAR13++) {
VAR8 = VAR2[VAR13].VAR8;
VAR9 = VAR2[VAR13].VAR9;
VAR14 = VAR2[VAR13].VAR14;

if (VAR8 == VAR20) {
break;
}

switch (VAR8) {
case VAR21:
VAR12 = *VAR5;
if ((VAR7 = FUN5(*((int *)VAR14), VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR22:
VAR12 = *VAR5;
if ((VAR7 = FUN6(VAR14, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR23:
VAR12 = *VAR5;
if ((VAR7 = FUN7(*((unsigned long*)VAR14), VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR24:
VAR12 = *VAR5;
if ((VAR7 = FUN8(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR25:
VAR12 = *VAR5;
if ((VAR7 = FUN9(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR26:
VAR12 = *VAR5;
if ((VAR7 = FUN10(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR27:
VAR4[VAR10] = 0x05;
VAR4[VAR10+1] = 0x00;
VAR12 = 2;
break;

case VAR28:
VAR12 = *VAR5;
if ((VAR7 = FUN11(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR29:
VAR12 = *VAR5;
if ((VAR7 = FUN12(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR30:
VAR12 = *VAR5;
if ((VAR7 = FUN13(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR31:
VAR12 = *VAR5;
if ((VAR7 = FUN14(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR32:
VAR12 = *VAR5;
if ((VAR7 = FUN15(VAR14, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR33:
VAR12 = *VAR5;
if ((VAR7 = FUN16(VAR14, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR34:
VAR12 = *VAR5;
if ((VAR7 = FUN17(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR35:
VAR12 = *VAR5;
if ((VAR7 = FUN18(VAR14, VAR9, VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR19:
VAR12 = *VAR5;
if ((VAR7 = FUN1(VAR14, VAR9, VAR4 + VAR10, &VAR12, VAR8)) != VAR15) {
goto VAR18;
}
break;

case VAR36:
VAR12 = *VAR5;
if ((VAR7 = FUN19(&VAR2[VAR13], VAR4 + VAR10, &VAR12)) != VAR15) {
goto VAR18;
}
break;

case VAR37:
case VAR20:
case VAR38:
default:
VAR7 = VAR16;
goto VAR18;
}

VAR10       += VAR12;
*VAR5 -= VAR12;
}
*VAR5 = VAR10;
VAR7 = VAR15;

VAR18:
return VAR7;
}