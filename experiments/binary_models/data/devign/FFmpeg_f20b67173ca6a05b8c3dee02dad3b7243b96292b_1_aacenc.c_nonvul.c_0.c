static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    FUN2(&VAR4->VAR8, 8, VAR6->VAR9[0]);
    if (!VAR7)
    {
        FUN3(VAR4, &VAR6->VAR10);
        if (VAR4->VAR11->VAR12)
            VAR4->VAR11->FUN4(VAR4, VAR6);
    }
    FUN5(VAR4, VAR6);
    FUN6(VAR2, VAR4, VAR6);
    FUN7(VAR4, &VAR6->VAR13);
    FUN2(&VAR4->VAR8, 1, !!VAR6->VAR14.VAR15);
    if (VAR4->VAR11->VAR16)
        VAR4->VAR11->FUN8(VAR4, VAR6);
    FUN2(&VAR4->VAR8, 1, 0);
    FUN9(VAR4, VAR6);
    return 0;
}