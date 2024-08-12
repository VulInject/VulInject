void FUN1(void)
{
unsigned long VAR1 = VAR2;

switch ((enum VAR3)(VAR1 & VAR4)) {
case VAR5:
break;
case VAR6:
FUN2();
break;
case VAR7:
FUN3(VAR8, VAR9);
break;
case VAR10:
FUN4();
break;
case VAR11:
FUN5(VAR8,
VAR9);
break;
case VAR12:
FUN6();
break;
case VAR13:
FUN7(VAR8,
VAR9);
break;
}

switch ((enum VAR14)(VAR1 & VAR15)) {
case VAR16:
break;
case VAR17:
FUN8();
break;
case VAR18:
FUN9(VAR8, VAR9);
break;
}

FUN10(FUN11(), &VAR19);
}