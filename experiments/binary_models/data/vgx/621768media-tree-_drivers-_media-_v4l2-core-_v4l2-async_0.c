static bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2->VAR7);
return VAR6 &&
VAR4->VAR8.VAR9.VAR10 == VAR6->VAR11->VAR12 &&
VAR4->VAR8.VAR9.VAR13 == VAR6->VAR14;
return false;
}