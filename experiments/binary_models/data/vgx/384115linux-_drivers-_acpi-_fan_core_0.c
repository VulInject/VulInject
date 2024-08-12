static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

if (VAR4->VAR5) {
struct VAR6 *VAR7 = FUN3(&VAR2->VAR8);

FUN4(VAR7);
}
FUN5(&VAR2->VAR8.VAR9, "");
FUN5(&VAR4->VAR10->VAR7.VAR9, "");
FUN6(VAR4->VAR10);

return 0;
}