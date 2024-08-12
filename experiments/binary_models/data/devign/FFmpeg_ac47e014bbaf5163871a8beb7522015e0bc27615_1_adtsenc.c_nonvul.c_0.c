static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint8_t VAR10[VAR11];
    if (!VAR4->VAR12)
        return 0;
    if (VAR6->VAR13)
    {
        int VAR14 = FUN2(VAR6, VAR10, VAR4->VAR12, VAR6->VAR15);
        if (VAR14 < 0)
            return VAR14;
        FUN3(VAR9, VAR10, VAR11);
        if (VAR6->VAR15)
        {
            FUN3(VAR9, VAR6->VAR16, VAR6->VAR15);
            VAR6->VAR15 = 0;
        }
    }
    FUN3(VAR9, VAR4->VAR17, VAR4->VAR12);
    FUN4(VAR9);
    return 0;
}