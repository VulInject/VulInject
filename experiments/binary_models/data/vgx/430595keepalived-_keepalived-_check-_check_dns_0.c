static void
FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
const VAR5 *VAR6 = VAR4->VAR7;

FUN2(VAR2, "");
FUN2(VAR2, "", FUN3(VAR6->VAR8));
FUN2(VAR2, "", VAR6->VAR9);
}