int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR1 *VAR6;
int VAR7;

FUN3(VAR8, &VAR5->VAR9);

FUN4(VAR6, VAR2) {
if (VAR6->VAR10->VAR11 != VAR2->VAR10->VAR11)
continue;

switch (VAR3) {
case VAR12:
case VAR13:
if (VAR6->VAR14 == VAR15 &&
(VAR5->VAR16->VAR17->VAR18 &
VAR19)) {
VAR7 = FUN5(VAR5, VAR20,
VAR21);
if (VAR7 < 0)
return VAR7;
}
VAR7 = FUN5(VAR5, VAR6->VAR14,
VAR22);
if (VAR7 < 0)
return VAR7;
break;

case VAR23:
case VAR24:
if (VAR6->VAR14 == VAR15 &&
(VAR5->VAR16->VAR17->VAR18 &
VAR19)) {
FUN6(VAR5, VAR20,
VAR21);
}
FUN6(VAR5, VAR6->VAR14,
VAR22);
break;

case VAR25:
if (VAR6->VAR14 != VAR20)
return -VAR26;
FUN7(VAR27, &VAR5->VAR9);
break;

case VAR28:
if (VAR6->VAR14 != VAR20)
return -VAR26;
FUN3(VAR27, &VAR5->VAR9);
break;

default:
return -VAR26;
}
}

return 0;
}