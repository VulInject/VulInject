void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR4);

FUN3(&VAR7);

if (VAR6) {
struct VAR8 *VAR9 = FUN4(VAR6);

if (FUN5(&VAR9->VAR10) == 1) {
FUN6(!FUN7(&VAR9->VAR11));
FUN8(&VAR9->VAR11, &VAR12);
} else {
FUN6(FUN7(&VAR9->VAR11));
}

FUN9(VAR13, VAR13 + 1);
}
VAR2->VAR14++;
FUN10(&VAR7);
}