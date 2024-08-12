bool FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4;

VAR4 = FUN2(FUN3(VAR2));
if (!VAR4)
return false;

switch (VAR4->VAR5) {
case VAR6:
return FUN4(VAR4, VAR2);
case VAR7:
case VAR8:
return FUN5(VAR4, VAR2);
case VAR9:
return FUN6(VAR4, VAR2);
}

FUN7();
}