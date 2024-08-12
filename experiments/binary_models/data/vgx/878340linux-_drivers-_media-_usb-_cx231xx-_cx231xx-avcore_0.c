int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
int VAR4 = 0;

switch (FUN2(VAR3)->VAR5) {
case VAR6:
case VAR7:
if ((VAR2->VAR8.VAR5 == VAR9) &&
(VAR2->VAR10 != VAR11)) {

VAR4 = FUN3(VAR2,
VAR11);
if (VAR4 < 0) {
FUN4(VAR2->VAR2,
"",
VAR12, VAR4);
return VAR4;
}
}
VAR4 = FUN5(VAR2,
FUN2(VAR3)->VAR5,
FUN2(VAR3)->VAR13);
break;
case VAR14:
case VAR15:
if ((VAR2->VAR8.VAR5 == VAR9) &&
(VAR2->VAR10 != VAR16)) {

VAR4 = FUN3(VAR2,
VAR16);
if (VAR4 < 0) {
FUN4(VAR2->VAR2,
"",
VAR12, VAR4);
return VAR4;
}
}
switch (VAR2->VAR17) { 
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
VAR4 = FUN5(VAR2,
VAR14,
FUN2(VAR3)->VAR13);
break;
default:
if (VAR2->VAR23 == VAR24)
VAR4 = FUN5(VAR2,
VAR14,
FUN2(VAR3)->VAR13);
else
VAR4 = FUN5(VAR2,
VAR6,
FUN2(VAR3)->VAR13);
break;
}

break;
default:
FUN4(VAR2->VAR2, "",
VAR12, FUN2(VAR3)->VAR5);
break;
}


VAR2->VAR25 = VAR3;

return VAR4;
}