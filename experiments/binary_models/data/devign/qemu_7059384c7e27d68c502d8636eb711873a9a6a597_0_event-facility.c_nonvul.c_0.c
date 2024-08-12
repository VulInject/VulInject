static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR1 *new;
    FUN4(&VAR4->VAR7, sizeof(VAR4->VAR7), VAR8, VAR6, NULL);
    new = FUN5(VAR9);
    FUN6(VAR2, VAR9, new, NULL);
    FUN7(new);
    FUN8(FUN3(new), &VAR4->VAR7.VAR10);
    new = FUN5(VAR11);
    FUN6(VAR2, VAR11, new, NULL);
    FUN7(new);
    FUN8(FUN3(new), &VAR4->VAR7.VAR10);
}