void FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3, unsigned int VAR4,
const struct VAR5 *VAR6, int VAR7)
{
struct VAR8 *VAR9;

if (FUN2(VAR10))
return;

VAR3 = FUN3(VAR3, VAR11);
if (VAR3 == NULL)
return;


FUN4(VAR3);
FUN5(VAR3, NULL, VAR12);

VAR9 = FUN6(VAR3);
VAR9->VAR13 |= FUN7(VAR14);
if (VAR4 == VAR15 ||
VAR4 == VAR16)
--VAR9->VAR17;

if (FUN8(VAR1, VAR3, VAR6, VAR7)) {
FUN9(VAR10, true);
FUN10(VAR1, VAR3->VAR18, VAR3);
FUN9(VAR10, false);
} else {
FUN11(VAR3);
}
}