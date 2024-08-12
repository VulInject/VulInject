int
FUN1(struct VAR1 *VAR2, u_long VAR3, caddr_t VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = (struct VAR8 *) VAR4;
struct VAR10 *VAR11;
int VAR12, VAR13 = 0;

VAR12 = FUN2();

switch(VAR3) {
case VAR14:
VAR2->VAR15 |= VAR16;
if (!(VAR2->VAR15 & VAR17))
FUN3(VAR6);
break;

case VAR18:
if (VAR2->VAR15 & VAR16) {
if (VAR2->VAR15 & VAR17)
VAR13 = VAR19;
else
FUN3(VAR6);
} else {
if (VAR2->VAR15 & VAR17)
FUN4(VAR6, 0);
}
break;

case VAR20:
case VAR21:
VAR11 = &VAR6->VAR22;
VAR13 = FUN5(VAR2, VAR9, &VAR11->VAR23, VAR3);
break;

case VAR24:
VAR13 = FUN6((struct VAR25 *)VAR9->VAR26,
NULL, VAR6->VAR27, &VAR6->VAR28.VAR29);
break;

default:
VAR13 = FUN7(VAR2, &VAR6->VAR30, VAR3, VAR4);
}

if (VAR13 == VAR19) {
if (VAR2->VAR15 & VAR17)
FUN8(VAR6);
VAR13 = 0;
}

FUN9(VAR12);
return (VAR13);
}