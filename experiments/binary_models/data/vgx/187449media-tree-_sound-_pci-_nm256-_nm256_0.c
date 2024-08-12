static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
int VAR9;
const struct VAR10 *VAR11;

VAR11 = FUN2(VAR2, VAR12);
if (VAR11) {
FUN3(&VAR2->VAR13, "",
FUN4(VAR11));
switch (VAR11->VAR14) {
case VAR15:
FUN5(&VAR2->VAR13,
"");
return -VAR16;
case VAR17:
VAR18 = 1;

case VAR19:
VAR20 = 1;
break;
}
}

VAR9 = FUN6(&VAR2->VAR13, VAR21, VAR22, VAR23, 0, &VAR6);
if (VAR9 < 0)
return VAR9;

switch (VAR2->VAR24) {
case VAR25:
strcpy(VAR6->VAR26, "");
break;
case VAR27:
strcpy(VAR6->VAR26, "");
break;
case VAR28:
strcpy(VAR6->VAR26, "");
break;
default:
FUN7(&VAR2->VAR13, "", VAR2->VAR24);
FUN8(VAR6);
return -VAR29;
}

if (VAR30)
VAR31 = 0x25a800;	

if (VAR32 < 4)
VAR32 = 4;
if (VAR32 > 128)
VAR32 = 128;
if (VAR33 < 4)
VAR33 = 4;
if (VAR33 > 128)
VAR33 = 128;
if ((VAR9 = FUN9(VAR6, VAR2, &VAR8)) < 0) {
FUN8(VAR6);
return VAR9;
}
VAR6->VAR34 = VAR8;

if (VAR20) {
FUN3(&VAR2->VAR13, "");
VAR8->VAR20 = 1;
}

if (VAR18) {
FUN3(&VAR2->VAR13, "");
VAR8->VAR18 = 1;
}

if ((VAR9 = FUN10(VAR8, 0)) < 0 ||
(VAR9 = FUN11(VAR8)) < 0) {
FUN8(VAR6);
return VAR9;
}

sprintf(VAR6->VAR35, "", VAR6->VAR26);
sprintf(VAR6->VAR36, "",
VAR6->VAR35,
VAR8->VAR37, VAR8->VAR38, VAR8->VAR39);

if ((VAR9 = FUN12(VAR6)) < 0) {
FUN8(VAR6);
return VAR9;
}

FUN13(VAR2, VAR6);
return 0;
}