static int FUN1(VAR1 *VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    VAR11 = FUN2(VAR2, VAR3, &VAR9, &VAR10);
    if (VAR11 < 0)
    {
        return VAR11;
    }
    VAR4 = FUN3(VAR4, VAR6->VAR13 - VAR10);
    for (VAR12 = 0; VAR12 < VAR4; VAR12++)
    {
        uint64_t VAR14;
        VAR14 = FUN4(VAR9[VAR10 + VAR12]);
        FUN5(VAR2, VAR6->VAR15, VAR9);
        if (VAR14 & VAR16)
        {
            VAR9[VAR10 + VAR12] = FUN6(VAR17);
            FUN7(VAR2, VAR14, 1, VAR18);
        }
        else
        {
            VAR9[VAR10 + VAR12] |= FUN6(VAR17);
        }
    }
    FUN8(VAR2, VAR6->VAR15, (void **)&VAR9);
    return VAR4;
}