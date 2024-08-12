int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9 = 0, VAR10, VAR11;
    VAR12 *VAR13, VAR14, VAR15, *VAR16;
    uint64_t VAR17 = VAR4->VAR18;
    bool VAR19 = false;
    FUN2(FUN3(), VAR4->VAR20);
    if (VAR4->VAR20 == 0)
        return 0;
    VAR13 = FUN4(VAR4->VAR20 * sizeof(VAR12));
    VAR14 = (VAR4->VAR21 & ~(VAR6->VAR22 - 1)) >> 9;
    if (VAR4->VAR23)
    {
        VAR19 = true;
        FUN5(&VAR6->VAR24);
        VAR11 = FUN6(VAR2, VAR14, VAR17, 0, VAR4->VAR23);
        FUN7(&VAR6->VAR24);
        if (VAR11 < 0)
            goto VAR25;
    }
    if (VAR4->VAR26 & (VAR6->VAR27 - 1))
    {
        uint64_t VAR28 = VAR4->VAR26 & ~(VAR12)(VAR6->VAR27 - 1);
        VAR19 = true;
        FUN5(&VAR6->VAR24);
        VAR11 = FUN6(VAR2, VAR14 + VAR28, VAR17 + (VAR28 << 9), VAR4->VAR26 - VAR28, VAR6->VAR27);
        FUN7(&VAR6->VAR24);
        if (VAR11 < 0)
            goto VAR25;
    }
    if (VAR19)
    {
        FUN8(VAR6->VAR29);
    }
    FUN9(VAR2, VAR6->VAR29, VAR6->VAR30);
    VAR11 = FUN10(VAR2, VAR4->VAR21, &VAR16, &VAR15, &VAR10);
    if (VAR11 < 0)
    {
        goto VAR25;
    }
    FUN11(VAR6->VAR29, VAR16);
    for (VAR8 = 0; VAR8 < VAR4->VAR20; VAR8++)
    {
        if (VAR16[VAR10 + VAR8] != 0)
            VAR13[VAR9++] = VAR16[VAR10 + VAR8];
        VAR16[VAR10 + VAR8] = FUN12((VAR17 + (VAR8 << VAR6->VAR31)) | VAR32);
    }
    VAR11 = FUN13(VAR2, VAR6->VAR29, (void **)&VAR16);
    if (VAR11 < 0)
    {
        goto VAR25;
    }
    if (VAR9 != 0)
    {
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            FUN14(VAR2, FUN15(VAR13[VAR8]) & ~VAR32, 1);
        }
    }
    VAR11 = 0;
VAR25:
    FUN16(VAR13);
    return VAR11;
}