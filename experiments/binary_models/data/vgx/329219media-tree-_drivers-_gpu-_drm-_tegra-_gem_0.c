void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR6;
struct VAR7 *VAR8 = FUN2(VAR2);

if (VAR4->VAR9)
FUN3(VAR4, VAR8);

if (VAR2->VAR10) {
FUN4(VAR2->VAR10, VAR8->VAR11,
VAR12);
FUN5(VAR2, NULL);
} else {
FUN6(VAR2->VAR5, VAR8);
}

FUN7(VAR2);
FUN8(VAR8);
}