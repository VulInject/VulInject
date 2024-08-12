static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

VAR4 = FUN2(VAR2, struct VAR3,
VAR5);

if (VAR4->VAR6) {
VAR4->VAR6 = false;
FUN3(VAR4);

if (VAR4->VAR7) {
VAR4->VAR7 = 0;
FUN4(&VAR4->VAR8);
FUN5(&VAR4->VAR9->VAR10, "");
}

return;
}

FUN6(VAR4);
}