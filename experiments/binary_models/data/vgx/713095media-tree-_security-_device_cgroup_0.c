static void FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
struct VAR2 *VAR4, *VAR5;

FUN2(&VAR6);

FUN3(VAR4, VAR5, &VAR1->VAR7, VAR8) {
if (VAR4->VAR9 != VAR3->VAR9)
continue;
if (VAR4->VAR10 != VAR3->VAR10)
continue;
if (VAR4->VAR11 != VAR3->VAR11)
continue;

VAR4->VAR12 &= ~VAR3->VAR12;
if (!VAR4->VAR12) {
FUN4(&VAR4->VAR8);
FUN5(VAR4, VAR13);
}
}
}