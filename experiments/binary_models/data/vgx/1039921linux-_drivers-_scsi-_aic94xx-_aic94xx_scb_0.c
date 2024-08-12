static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
int VAR5)
{
unsigned long VAR6;
struct VAR7 *VAR8 = &VAR2->VAR9->VAR8;
struct VAR10 *VAR11 = VAR8->VAR11[VAR5];
struct VAR12 *VAR13 = VAR2->VAR9;
struct VAR14 *VAR15 = &VAR13->VAR16[VAR5];
u8  VAR17  = VAR4->VAR18[1];
u32 VAR19 = VAR4->VAR18[2] << ((VAR17 & 3)*8);

VAR17 &= ~3;
switch (VAR17) {
case VAR20:
switch (VAR19) {
case VAR21:
case VAR22:
case VAR23:
case VAR24:
FUN2("",
VAR5, VAR19);
FUN3(&VAR11->VAR25, VAR6);
VAR11->VAR26 = FUN4(VAR19);
FUN5(&VAR11->VAR25, VAR6);
FUN6(VAR11, VAR27,
VAR28);
break;

case VAR29:
FUN2("", VAR5);
break;

default:
FUN2("",
VAR5, VAR17, VAR19);
break;
}
break;
case VAR30:
switch (VAR19) {
case VAR31:
FUN2("",
VAR5);

FUN7(VAR13, VAR15);
FUN6(VAR11, VAR32,
VAR28);
break;

default:
FUN2("",
VAR5, VAR17, VAR19);
break;
}
break;
default:
FUN2("",
VAR4->VAR18[1]);
break;
}
}