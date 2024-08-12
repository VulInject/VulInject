static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR4->VAR7;
struct VAR8 *VAR9 = &VAR6->VAR10.VAR11;
u8 VAR12 = VAR13;

VAR9->VAR14 = VAR4->VAR15.VAR16.VAR17;
VAR9->VAR18 = VAR4->VAR19;
VAR9->VAR20 =
FUN2(VAR4->VAR15.VAR16.VAR20);

switch (VAR4->VAR21) {
case VAR22:
case VAR23:
VAR12 = VAR24;
break;
case VAR25:
VAR12 = VAR26;
break;
case VAR27:
VAR12 = VAR28;
break;
case VAR29:
case VAR30:
VAR12 = VAR31;
break;
case VAR32:
VAR12 = VAR33;
break;
case VAR34:
VAR12 = VAR35;
break;
case VAR36:
VAR12 = VAR37;
break;
case VAR38:
VAR12 = VAR39;
break;
case VAR40:
VAR12 = VAR41;
break;
case VAR42:
VAR12 = VAR43;
break;
}

VAR9->VAR44 = VAR12;


VAR9->VAR45 =
FUN3(VAR2, (VAR46)VAR9->VAR45);


(*VAR4->VAR47)(VAR2, VAR4);
}