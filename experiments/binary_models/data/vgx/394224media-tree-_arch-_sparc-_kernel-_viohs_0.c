static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
if (!(VAR2->VAR5 & VAR6))
return FUN2(VAR2);

switch (VAR4->VAR7.VAR8) {
case VAR9:
return FUN3(VAR2, VAR4);

case VAR10:
return FUN4(VAR2, VAR4);

case VAR11:
return FUN5(VAR2, VAR4);

default:
return FUN2(VAR2);
}
}