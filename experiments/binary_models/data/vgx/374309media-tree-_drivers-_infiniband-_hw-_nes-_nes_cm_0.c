static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5 = 0;
int VAR6 = VAR4->VAR7;
VAR8 *VAR9 = VAR4->VAR10;

enum nes_cm_event_type VAR11 = VAR12;
u32 VAR13;

VAR5 = FUN2(VAR2, VAR9, &VAR13, VAR6);
if (VAR5) {
FUN3(VAR14, "");
if (VAR2->VAR15 == VAR16) {
FUN3(VAR14, ""
"", VAR17,
VAR18, VAR2, VAR2->VAR19,
VAR2->VAR15);
FUN4(VAR2, VAR4, 1);
} else {
FUN5(VAR2, VAR4, 1);
}
return;
}

switch (VAR2->VAR15) {
case VAR20:
if (VAR13 == VAR21)

FUN6(1);
VAR2->VAR15 = VAR22;
VAR11 = VAR23;
FUN7(&VAR2->VAR24,
VAR25);
break;
case VAR16:
FUN8(VAR2);
if (VAR13 == VAR21) {
VAR11 = VAR26;
VAR2->VAR15 = VAR27;
} else {
VAR11 = VAR28;
VAR2->VAR15 = VAR29;
}

break;
default:
FUN6(1);
break;
}
FUN9(VAR4);
FUN10(VAR2, VAR11);
}