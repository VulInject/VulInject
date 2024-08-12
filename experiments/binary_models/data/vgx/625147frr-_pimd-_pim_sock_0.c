static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
VAR5 *VAR6)
{
struct VAR7 *VAR8;
struct VAR9 *VAR10 = (struct VAR9 *)VAR4;

for (VAR8 = FUN2(VAR2); VAR8 != NULL;
VAR8 = FUN3(VAR2, VAR8)) {
if ((VAR8->VAR11 == VAR12) &&
(VAR8->VAR13 == VAR14)) {
struct VAR15 *VAR16;

VAR16 = (struct VAR15 *)FUN4(VAR8);

if (VAR10)
VAR10->VAR17 = VAR16->VAR18;
if (VAR6)
*VAR6 = VAR16->VAR19;
break;
}
}
}