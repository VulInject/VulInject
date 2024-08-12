static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    FUN3(&VAR4->VAR6);
    FUN4((void *)VAR4->VAR6.VAR7);
    if (VAR4->VAR8)
    {
        FUN5(VAR4, VAR4->VAR8, VAR9);
        return;
    }
    for (VAR5 = VAR10; VAR5 < (VAR10 | VAR11); VAR5++)
        if (!FUN6(VAR4, VAR5))
            FUN7(VAR4, VAR5, VAR9);
    FUN8(VAR4->VAR12.VAR13);
    FUN8(VAR4->VAR12.VAR14);
    FUN8(VAR4->VAR15);
    FUN4(VAR4);
}