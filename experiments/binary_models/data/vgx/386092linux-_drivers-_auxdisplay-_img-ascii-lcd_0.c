static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 =
FUN2(VAR1, struct VAR2, VAR1);
ulong VAR4;

VAR4 = *((VAR5 *)&VAR3->VAR6[0]);
FUN3(VAR4, VAR3->VAR7);
VAR4 = *((VAR8 *)&VAR3->VAR6[0]);
FUN4(VAR4, VAR3->VAR7);
VAR4 = *((VAR8 *)&VAR3->VAR6[4]);
FUN4(VAR4, VAR3->VAR7 + 4);
}