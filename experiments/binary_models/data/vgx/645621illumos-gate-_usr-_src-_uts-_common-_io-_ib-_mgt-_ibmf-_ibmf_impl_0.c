void
FUN1(VAR1 *VAR2)
{
uint_t VAR3;

FUN2(VAR4, VAR5, VAR6,
VAR7, "", "",
VAR8, VAR2, VAR2);

FUN3(FUN4(&VAR2->VAR9));

FUN5(&VAR2->VAR9);
VAR3 = VAR2->VAR10--;
if (VAR3 == 1) {
FUN3(VAR2->VAR11 == VAR12);
VAR2->VAR13 |= VAR14;
}
FUN6(&VAR2->VAR9);

if (VAR3 == 1) {
FUN7(VAR2);
}

FUN8(VAR4, VAR5, VAR15,
VAR7, "", "");
}