static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6, *VAR7;

VAR7 = VAR4->VAR7;


if (!FUN2(&VAR4->VAR8))
return;


if (VAR7->VAR9) {
FUN3(&VAR4->VAR8, VAR7->VAR9->VAR8.VAR10);
return;
}

FUN3(&VAR4->VAR8, &VAR7->VAR11);
VAR7->VAR9 = VAR4;

FUN4(VAR6, &VAR2->VAR8, VAR12) {
if (VAR6->VAR6 > VAR7->VAR6) {
FUN3(&VAR7->VAR12, VAR6->VAR12.VAR10);
return;
}
}

FUN5(&VAR7->VAR12, &VAR2->VAR8);
}