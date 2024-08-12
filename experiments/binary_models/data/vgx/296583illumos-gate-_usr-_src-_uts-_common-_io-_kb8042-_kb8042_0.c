static void
FUN1(struct VAR1 *VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
struct VAR6	*VAR7;
VAR4		*VAR8;
int		VAR9;
int		VAR10;
int		VAR11;
int		VAR12;
int		VAR13;

VAR7 = (struct VAR6 *)VAR5->VAR14;

switch (VAR7->VAR15) {

case VAR16:
VAR9 = FUN2(VAR5, sizeof (struct VAR17 *));
if (VAR9 != 0) {
FUN3(VAR3, VAR5, 0, VAR9);
return;
}


*(struct VAR17 **)VAR5->VAR18->VAR14 =
&VAR1->VAR19;
VAR5->VAR20->VAR21 = VAR22;
VAR7->VAR23 = 0;
FUN4(VAR3, VAR5);
break;

case VAR24:
FUN5(VAR3, VAR5, 0, 0);
break;

case VAR25:
if (VAR7->VAR26 != VAR27) {
FUN3(VAR3, VAR5, 0, VAR28);
return;
}

VAR1->VAR29.VAR30 = *(VAR31 *)VAR5->VAR18->VAR14;
FUN5(VAR3, VAR5, 0, 0);
break;


case VAR32:
VAR9 = FUN2(VAR5, sizeof (int));
if (VAR9 != 0) {
FUN3(VAR3, VAR5, 0, VAR9);
return;
}
VAR10 =  *(int *)VAR5->VAR18->VAR14;
if (VAR10 != VAR33 && VAR10 != VAR34) {
FUN3(VAR3, VAR5, 0, VAR28);
break;
}
VAR1->VAR35 = VAR10;
FUN5(VAR3, VAR5, 0, 0);
break;

case VAR36:
if (VAR1->VAR37 == -1) {
FUN3(VAR3, VAR5, 0, VAR28);
return;
}

if ((VAR8 = FUN6(sizeof (int), VAR38)) == NULL) {
FUN3(VAR3, VAR5, 0, VAR39);
return;
}

if (VAR1->VAR35 == VAR34)
*(int *)VAR8->VAR40 = VAR41;
else
*(int *)VAR8->VAR40 = VAR1->VAR37;

VAR8->VAR40 += sizeof (int);
if (VAR5->VAR18)
FUN7(VAR5->VAR18);
VAR5->VAR18 = VAR8;
VAR7->VAR26 = sizeof (int);
VAR5->VAR20->VAR21 = VAR22;
VAR7->VAR23 = 0;
FUN4(VAR3, VAR5);
break;

case VAR42:
if (VAR7->VAR26 != VAR27) {
FUN3(VAR3, VAR5, 0, VAR28);
return;
}

VAR1->VAR37 = *(VAR31 *)VAR5->VAR18->VAR14;
FUN5(VAR3, VAR5, 0, 0);
break;

case VAR43:
VAR9 = FUN2(VAR5, sizeof (int));
if (VAR9 != 0) {
FUN3(VAR3, VAR5, 0, VAR9);
return;
}

FUN8(VAR1, *(int *)VAR5->VAR18->VAR14);
FUN5(VAR3, VAR5, 0, 0);
break;

case VAR44:
if (VAR7->VAR26 != VAR27) {
FUN3(VAR3, VAR5, 0, VAR28);
return;
}

VAR10 = (int)(*(VAR31 *)VAR5->VAR18->VAR14);
VAR11 = VAR10 & 0xffff;
VAR13 = (VAR10 >> 16) & 0xffff;

if (VAR11 == 0)
VAR12 = VAR45;
else if (VAR11 == VAR45)
VAR12 = 0;
else {
VAR12 = (VAR46 + VAR11 / 2) / VAR11;
if (VAR12 > VAR45)
VAR12 = VAR45;
}

VAR9 = FUN9(VAR12, VAR13);
if (VAR9 != 0)
FUN3(VAR3, VAR5, 0, VAR9);
else
FUN5(VAR3, VAR5, 0, 0);
break;

default:
FUN10(VAR47, "", VAR7->VAR15);
FUN3(VAR3, VAR5, 0, VAR28);
return;
}
}