static int
FUN1(struct VAR1 *VAR2)
{
switch (VAR2->VAR3) {
case VAR4: {
struct VAR5 *VAR6 = FUN2(VAR2);
return VAR6->VAR7.VAR8 == FUN3(VAR9);
}
case VAR10: {
struct VAR11 *VAR12 = FUN4(VAR2);
return FUN5(&VAR12->VAR13);
}
default:
return 0;
}
}