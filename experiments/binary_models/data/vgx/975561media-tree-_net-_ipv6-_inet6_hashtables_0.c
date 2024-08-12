}
FUN1(VAR1);

static inline int FUN2(struct VAR2 *VAR3, struct VAR4 *VAR4,
const unsigned short VAR5,
const struct VAR6 *VAR7,
const int VAR8, bool VAR9)
{
int VAR10 = -1;

if (FUN3(FUN4(VAR3), VAR4) && FUN5(VAR3)->VAR11 == VAR5 &&
VAR3->VAR12 == VAR13) {

VAR10 = 1;
if (!FUN6(&VAR3->VAR14)) {
if (!FUN7(&VAR3->VAR14, VAR7))
return -1;
VAR10++;
}
if (VAR3->VAR15 || VAR9) {
if (VAR3->VAR15 != VAR8)
return -1;
VAR10++;
}
if (VAR3->VAR16 == FUN8())
VAR10++;
}
return VAR10;
}