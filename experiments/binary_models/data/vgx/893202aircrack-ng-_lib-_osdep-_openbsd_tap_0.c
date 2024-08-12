static void FUN1(struct VAR1 * VAR2)
{
struct VAR3 * VAR4 = FUN2(VAR2);

if (VAR4->VAR5) FUN3(VAR4);

close(VAR4->VAR6);
close(VAR4->VAR7);
FUN4(VAR2);
}