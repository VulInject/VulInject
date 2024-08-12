static inline long FUN1(struct VAR1 *VAR1, unsigned int VAR2, unsigned long VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
void VAR8 *VAR9 = FUN2(VAR3);
int VAR10;

VAR5 = VAR1->VAR11;
if (FUN3(!VAR5 || !VAR5->VAR12))
return -VAR13;

switch (VAR2) {
case VAR14:
case VAR15:
case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
return FUN4(VAR1, VAR2, (unsigned long)VAR9);
case VAR25:
return FUN5(VAR5->VAR12, VAR9);
case VAR26:
return FUN6(VAR5, VAR9);
case VAR27:
return FUN7(VAR5->VAR12, VAR9);
case VAR28:
return FUN8(VAR5, VAR9);
case VAR29:
return FUN9(VAR5, VAR9, 0);
case VAR30:
return FUN9(VAR5, VAR9, 1);
case VAR31:
return FUN10(VAR5->VAR12, VAR9);
case VAR32:
return FUN11(VAR5, VAR9);
}

FUN12(&VAR33);
FUN13(VAR7, &VAR34, VAR35) {
if (VAR7->VAR36) {
VAR10 = VAR7->FUN14(VAR5->VAR12, VAR5, VAR2, VAR3);
if (VAR10 != -VAR37) {
FUN15(&VAR33);
return VAR10;
}
}
}
FUN15(&VAR33);
return -VAR37;
}