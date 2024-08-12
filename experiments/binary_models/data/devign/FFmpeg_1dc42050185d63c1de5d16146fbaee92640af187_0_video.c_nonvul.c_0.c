static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5 = NULL;
    if (VAR2->VAR6->VAR7)
        VAR5 = VAR2->VAR6->VAR8[0];
    if (VAR5)
    {
        VAR3 *VAR9;
        VAR5->VAR10 = FUN2(VAR5, VAR11, VAR5->VAR12, VAR5->VAR13);
        if (!VAR5->VAR10)
            return FUN3(VAR14);
        FUN4(VAR5->VAR10, VAR4);
        VAR9 = FUN5(VAR5->VAR10, ~0);
        if (!VAR9)
            return FUN3(VAR14);
        return FUN6(VAR5, VAR9);
    }
    return 0;
}