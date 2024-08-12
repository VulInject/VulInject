static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    struct VAR5 *VAR5;
    while (!FUN3(&VAR4->VAR6))
    {
        VAR5 = FUN4(&VAR4->VAR6);
        FUN5(VAR5, VAR7);
        FUN6(&VAR5->VAR8);
        FUN7(VAR5);
    }
    FUN7(VAR4->VAR9);
    FUN7(VAR4->VAR10);
    FUN7(VAR4->VAR11);
    FUN7(VAR4->VAR12);
    FUN7(VAR4->VAR13);
    FUN8(VAR4->VAR14);
    return 0;
}