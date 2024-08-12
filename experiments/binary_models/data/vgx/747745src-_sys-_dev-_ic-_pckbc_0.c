void
FUN1(struct VAR1 *VAR2, pckbc_slot_t VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6[VAR3];
struct VAR7 *VAR8 = FUN2(&VAR5->VAR9);

if (VAR5->VAR10) {
do {
FUN3(VAR2, VAR3, VAR8);
if (VAR8->VAR11)
FUN4("");

FUN5(&VAR5->VAR9, VAR8, VAR12);
VAR8->VAR13 &= ~VAR14;
if (VAR8->VAR13 & VAR15) {
FUN6(VAR8);
} else {
FUN7(&VAR2->VAR16);
FUN8(&VAR5->VAR17, VAR8, VAR12);
}
VAR8 = FUN2(&VAR5->VAR9);
} while (VAR8);
return;
}

if (!FUN9(VAR2, VAR3, VAR8->VAR8[VAR8->VAR18])) {
FUN4("");

return;
}
}