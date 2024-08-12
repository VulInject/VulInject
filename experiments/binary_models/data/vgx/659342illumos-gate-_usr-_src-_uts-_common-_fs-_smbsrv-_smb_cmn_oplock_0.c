static void
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = &VAR2->VAR5;

FUN2(FUN3(&VAR2->VAR6.VAR7));
FUN2(FUN4(&VAR2->VAR5.VAR8));


if (VAR4->VAR9 == 0 && VAR4->VAR10 == 0 &&
VAR4->VAR11 == 0 && VAR4->VAR12 == 0) {
VAR4->VAR13 = VAR14;
return;
}


else if (VAR4->VAR10 != 0 && (VAR4->VAR11 != 0 || VAR4->VAR12 != 0)) {
VAR4->VAR13 = (VAR15|VAR16|VAR17);
}


else if (VAR4->VAR10 == 0 && VAR4->VAR11 != 0) {
VAR4->VAR13 = (VAR15|VAR16);
}


else if (VAR4->VAR10 != 0 && VAR4->VAR9 != 0) {
VAR4->VAR13 = (VAR15|VAR18);
}


else if (VAR4->VAR10 != 0 && VAR4->VAR9 == 0) {
VAR4->VAR13 = VAR15;
}


else if (VAR4->VAR10 == 0 && VAR4->VAR9 != 0) {
VAR4->VAR13 = VAR18;
}

else {
VAR19 *VAR20;
int VAR21;


FUN2(VAR4->VAR12 != 0);


VAR21 = 0;
FUN5(VAR2, VAR20) {
if (VAR20->VAR22.VAR23 == 0)
continue;
if (VAR20->VAR22.VAR24)
VAR21++;
}


if (VAR21 == VAR4->VAR12) {

VAR4->VAR13 = (VAR15|VAR16|
VAR25);
}


else if (VAR21 == 0) {

VAR4->VAR13 = (VAR15|VAR16|
VAR26);
} else {

VAR4->VAR13 = (VAR15|VAR16);
}
}
}