static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

VAR4->VAR5 = FUN3(FUN4(VAR2),
sizeof(struct VAR6),
VAR7);
VAR4->VAR8 = FUN5(VAR2, "",
32);
VAR4->VAR9 = FUN6(VAR2, "");

return 0;
}