bool FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR3;
    VAR4 *VAR5;
    VAR5 = FUN2(&VAR2->VAR6);
    if (VAR5)
    {
        FUN3(&VAR2->VAR6, VAR5, VAR7);
        FUN4(&VAR8, VAR5, VAR7);
        FUN5(VAR5);
        VAR3 = FUN6(sizeof(*VAR3));
        VAR3->VAR9 = FUN7(VAR10, VAR3);
        FUN8(VAR3->VAR9);
    }
    return (VAR5 != NULL);
}