static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2,
struct VAR3,
VAR2);

FUN3(&VAR4->VAR5->VAR6, "", VAR7);

VAR4->VAR8 = 0;
FUN4(&VAR4->VAR9);
VAR4->VAR10 &= ~VAR11;
VAR4->VAR12 = 1;
FUN5(&VAR4->VAR9);
FUN6(VAR4);
}