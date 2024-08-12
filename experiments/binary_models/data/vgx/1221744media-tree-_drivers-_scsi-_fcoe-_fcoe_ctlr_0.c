static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

FUN2(&VAR2->VAR5);
VAR4 = VAR2->VAR6;
if (!VAR4 || !VAR2->VAR7)
goto VAR8;

FUN3(VAR2, "");


if (VAR4->VAR9) {
FUN3(VAR2, "");
VAR4 = FUN4(VAR2);
if (!VAR4 || VAR4->VAR9) {
FUN3(VAR2, "");
FUN5(VAR4, &VAR2->VAR10, VAR11)
VAR4->VAR9 = 0;
VAR4 = FUN4(VAR2);
}
}
if (VAR4) {
FUN6(VAR2);
VAR2->VAR7 = 0;
} else 
FUN3(VAR2, "");
VAR8:
FUN7(&VAR2->VAR5);
}