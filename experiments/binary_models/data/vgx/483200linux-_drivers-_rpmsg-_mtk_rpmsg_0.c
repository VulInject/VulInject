static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(
VAR2, struct VAR3, VAR2);
struct VAR5 *VAR6 = VAR4->VAR6;
struct VAR7 *VAR8;
int VAR9;

FUN3(&VAR4->VAR10);
FUN4(VAR8, &VAR4->VAR11, VAR12) {
if (VAR8->VAR13)
continue;

FUN5(&VAR4->VAR10);
VAR9 = FUN6(VAR4, &VAR8->VAR8);
FUN3(&VAR4->VAR10);
if (VAR9) {
FUN7(&VAR6->VAR14, "");
continue;
}

VAR8->VAR13 = true;
}
FUN5(&VAR4->VAR10);
}