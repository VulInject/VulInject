FUN1(
VAR1 *VAR2,
VAR1 *nullptr,
int *VAR3,
VAR1 *VAR4)
{
register unsigned int VAR5, VAR6;
register int VAR7, VAR8;
register boolean VAR9 = VAR10;

VAR5 = *VAR2;
VAR7 = FUN2(VAR5) - VAR11;


if (VAR7 > VAR12) {

if ((VAR7 > VAR12 + 1) || 
FUN3(VAR5) || FUN4(VAR5)) {
if (FUN4(VAR5)) VAR8 = 0x7fffffff;
else VAR8 = 0x80000000; 

if (FUN5()) {
return(VAR13);
}
FUN6();
*VAR3 = VAR8;
return(VAR14);
}
}

if (VAR7 >= 0) {
VAR6 = VAR5;
FUN7(VAR6);
FUN8(VAR6,VAR7);
if (FUN9(VAR5))  VAR8 = -FUN10(VAR6);
else VAR8 = FUN10(VAR6);


if (FUN11(VAR5,VAR7)) {
VAR9 = VAR15;

switch (FUN12()) {
case VAR16:
if (FUN4(VAR5)) VAR8++;
break;
case VAR17:
if (FUN9(VAR5)) VAR8--;
break;
case VAR18:
if (FUN13(VAR5,VAR7)) {
if (FUN14(VAR5,VAR7) 
|| (FUN15(VAR6)))
if (FUN4(VAR5)) VAR8++;
else VAR8--;
}
} 
}
}
else {
VAR8 = 0;


if (FUN16(VAR5)) {
VAR9 = VAR15;

switch (FUN12()) {
case VAR16:
if (FUN4(VAR5)) VAR8++;
break;
case VAR17:
if (FUN9(VAR5)) VAR8--;
break;
case VAR18:
if (VAR7 == -1)
if (FUN3(VAR5))
if (FUN4(VAR5)) VAR8++;
else VAR8--;
} 
}
}
*VAR3 = VAR8;
if (VAR9) {
if (FUN17()) return(VAR19);
else FUN18();
}
return(VAR14);
}