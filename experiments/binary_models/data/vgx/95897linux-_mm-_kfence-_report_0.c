void FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
const int VAR5 = FUN2(VAR4->VAR5);
const unsigned long VAR6 = VAR4->VAR7;
const struct VAR8 *const VAR9 = VAR4->VAR9;

FUN3(&VAR4->VAR10);

if (VAR4->VAR11 == VAR12) {
FUN4(VAR2, "", VAR4 - VAR3);
return;
}

FUN4(VAR2, "",
VAR4 - VAR3, (void *)VAR6, (void *)(VAR6 + VAR5 - 1),
VAR5, (VAR9 && VAR9->VAR13) ? VAR9->VAR13 : "");

FUN5(VAR2, VAR4, true);

if (VAR4->VAR11 == VAR14) {
FUN4(VAR2, "");
FUN5(VAR2, VAR4, false);
}
}