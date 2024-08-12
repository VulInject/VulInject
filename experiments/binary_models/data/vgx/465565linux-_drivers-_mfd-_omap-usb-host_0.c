static void FUN1(struct VAR1 *VAR2)
{
struct VAR3		*VAR4 = FUN2(VAR2);
unsigned			VAR5;

FUN3(VAR2, "");

FUN4(VAR2);

VAR5 = FUN5(VAR4->VAR6, VAR7);

VAR5 |= (VAR8
| VAR9
| VAR10);
VAR5 |= VAR11;
VAR5 &= ~VAR12;

switch (VAR4->VAR13) {
case VAR14:
VAR5 = FUN6(VAR4, VAR5);
break;

case VAR15:
VAR5 = FUN7(VAR4, VAR5);
break;

default:	
VAR5 = FUN7(VAR4, VAR5);
break;
}

FUN8(VAR4->VAR6, VAR7, VAR5);
FUN3(VAR2, "", VAR5);

FUN9(VAR2);
}