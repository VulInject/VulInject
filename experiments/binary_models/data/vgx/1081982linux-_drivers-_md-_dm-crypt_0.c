static bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)

{
if (!FUN2(VAR5, &VAR2->VAR6))
return false;


switch (FUN3(VAR4->VAR7)) {
case VAR8:
case VAR9:
return true;
default:
return false;
}
}