void
FUN1(struct VAR1 *VAR2,
enum bfa_fcs_fabric_event VAR3)
{
struct VAR4	*VAR5 = VAR2->VAR6->VAR5;

FUN2(VAR2->VAR6, VAR2->VAR7.VAR8.VAR9);
FUN2(VAR2->VAR6, VAR3);

switch (VAR3) {
case VAR10:
FUN3(VAR2, VAR11);
if (FUN4(VAR5) == VAR12) {
FUN5(&VAR2->VAR7);
} else {
FUN6(VAR2->VAR13, VAR14);
FUN7(VAR2);
}
break;

case VAR15:
FUN3(VAR2, VAR16);
FUN8(VAR2);
break;

case VAR17:
FUN3(VAR2, VAR18);
FUN9(VAR2);
break;

case VAR19:
FUN3(VAR2, VAR20);
FUN6(VAR2->VAR13, VAR14);
break;

case VAR21:
break;

default:
FUN10(VAR2->VAR6, VAR3);
}
}