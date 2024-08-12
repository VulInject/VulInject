static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    while (VAR4->VAR6 < VAR4->VAR7->VAR8)
    {
        int VAR9 = VAR4->VAR6;
        VAR10 *VAR11 = FUN2(VAR2, NULL);
        VAR10 *VAR12 = VAR4->VAR7->VAR13[VAR9];
        if (!VAR11)
            return FUN3(VAR14);
        VAR11->VAR15 = VAR4->VAR16;
        FUN4(&VAR4->VAR17, &VAR4->VAR6, VAR11);
        FUN5(VAR2, VAR4, VAR11);
        VAR5 = FUN6(VAR11, VAR4, VAR12);
        if (VAR5 < 0)
            return VAR5;
    }
    return 0;
}