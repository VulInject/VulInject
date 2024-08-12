static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    VAR1 *VAR9 = VAR2->VAR7->VAR10[0];
    VAR3 *VAR11;
    if (FUN2(VAR4))
    {
        VAR11 = VAR4;
    }
    else
    {
        VAR11 = FUN3(VAR2, VAR4->VAR12);
        if (!VAR11)
            return FUN4(VAR13);
        FUN5(VAR11, VAR4);
    }
    VAR6->FUN6(VAR6, VAR4->VAR14, VAR11->VAR14, VAR11->VAR12, VAR11->VAR15);
    if (VAR4 != VAR11)
        FUN7(&VAR4);
    return FUN8(VAR9, VAR11);
}