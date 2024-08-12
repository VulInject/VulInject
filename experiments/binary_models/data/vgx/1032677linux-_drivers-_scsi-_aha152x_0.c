static int FUN1(struct VAR1 *VAR2)
{
int VAR3=0;
unsigned int VAR4 = FUN2(VAR5);
unsigned int VAR6 = FUN2(VAR7);

VAR8 = VAR9;
VAR9=VAR10;

if(VAR6 & VAR11) {
VAR9=VAR12;
FUN3(VAR13,0);
FUN3(VAR7,VAR11);
} else if (VAR4 & VAR14 && VAR8 == VAR15) {
VAR9=VAR16;
} else if (VAR4 & VAR17 && VAR18 &&
(FUN4(VAR18)->VAR19 & VAR20)) {
VAR9=VAR21;
} else if(VAR6 & VAR22) {
VAR9=VAR23;
} else if(VAR6 & VAR24) {
VAR9=VAR15;
FUN3(VAR7,VAR24);
} else if(VAR6 & VAR25) {
VAR9=VAR26;
FUN3(VAR7,VAR25);
} else if(VAR6 & VAR27) {
switch(FUN2(VAR28) & VAR29) {
case VAR30:	VAR9=VAR31;	break;
case VAR32:	VAR9=VAR33;	break;
case VAR34:	VAR9=VAR35;	break;
case VAR36:	VAR9=VAR37;	break;
case VAR38:	VAR9=VAR39;	break;
case VAR40:	VAR9=VAR41;	break;
}
VAR3=1;
}

if((VAR4 & VAR14) && VAR9!=VAR16 && !VAR3) {
FUN5(VAR42, VAR18, "");
}

if(VAR9!=VAR8) {
VAR43=VAR8;
}

return VAR3;
}