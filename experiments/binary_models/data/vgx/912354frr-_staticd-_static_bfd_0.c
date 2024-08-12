static void FUN1(struct VAR1 *VAR1,
const struct VAR2 *VAR3)
{
FUN2(VAR1, "", VAR3->VAR4);

if (VAR3->VAR5 == NULL) {
FUN2(VAR1, "");
return;
}

if (VAR3->VAR6 == VAR7 ||
VAR3->VAR6 == VAR8)
FUN2(VAR1, "", &VAR3->VAR9.VAR10);
else if (VAR3->VAR6 == VAR11 ||
VAR3->VAR6 == VAR12)
FUN2(VAR1, "", &VAR3->VAR9.VAR13);
else
FUN2(VAR1, "");

FUN2(VAR1, "",
VAR3->VAR14 ? "" : "");
}