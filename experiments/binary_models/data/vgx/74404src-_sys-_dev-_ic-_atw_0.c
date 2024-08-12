int
FUN1(struct VAR1 *VAR2, u_long VAR3, caddr_t VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = (struct VAR8 *)VAR4;
int VAR10, VAR11 = 0;


if ((VAR6->VAR12.VAR13 & VAR14) == 0)
return VAR15;

VAR10 = FUN2();

switch (VAR3) {
case VAR16:
VAR2->VAR17 |= VAR18;


case VAR19:
if (VAR2->VAR17 & VAR18) {
if (FUN3(VAR6)) {

FUN4(VAR6);
} else
VAR11 = FUN5(VAR2);
} else if (FUN3(VAR6))
FUN6(VAR2, 1);
break;

case VAR20:
case VAR21:
VAR11 = (VAR3 == VAR20) ?
FUN7(VAR9, &VAR6->VAR22.VAR23) :
FUN8(VAR9, &VAR6->VAR22.VAR23);

if (VAR11 == VAR24) {
if (VAR2->VAR17 & VAR25)
FUN4(VAR6); 
VAR11 = 0;
}
break;

default:
VAR11 = FUN9(VAR2, VAR3, VAR4);
if (VAR11 == VAR24) {
if (FUN3(VAR6))
VAR11 = FUN5(VAR2);
else
VAR11 = 0;
}
break;
}


if (FUN3(VAR6))
FUN10(VAR2);

FUN11(VAR10);
return (VAR11);
}