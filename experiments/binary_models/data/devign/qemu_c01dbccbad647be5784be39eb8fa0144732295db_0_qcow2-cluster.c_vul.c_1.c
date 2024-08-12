int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9 = 0, VAR10, VAR11;
    VAR12 *VAR13, *VAR14;
    uint64_t VAR15 = VAR4->VAR16;
    FUN2(FUN3(), VAR4->VAR17);
    assert(VAR4->VAR17 > 0);
    VAR13 = FUN4(VAR4->VAR17 * sizeof(VAR12));
    VAR11 = FUN5(VAR2, VAR4, &VAR4->VAR18);
    if (VAR11 < 0)
    {
        goto VAR19;
    }
    VAR11 = FUN5(VAR2, VAR4, &VAR4->VAR20);
    if (VAR11 < 0)
    {
        goto VAR19;
    }
    if (VAR6->VAR21)
    {
        FUN6(VAR2);
    }
    if (FUN7(VAR6))
    {
        FUN8(VAR2, VAR6->VAR22, VAR6->VAR23);
    }
    VAR11 = FUN9(VAR2, VAR4->VAR24, &VAR14, &VAR10);
    if (VAR11 < 0)
    {
        goto VAR19;
    }
    FUN10(VAR6->VAR22, VAR14);
    for (VAR8 = 0; VAR8 < VAR4->VAR17; VAR8++)
    {
        if (VAR14[VAR10 + VAR8] != 0)
            VAR13[VAR9++] = VAR14[VAR10 + VAR8];
        VAR14[VAR10 + VAR8] = FUN11((VAR15 + (VAR8 << VAR6->VAR25)) | VAR26);
    }
    VAR11 = FUN12(VAR2, VAR6->VAR22, (void **)&VAR14);
    if (VAR11 < 0)
    {
        goto VAR19;
    }
    if (VAR9 != 0)
    {
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            FUN13(VAR2, FUN14(VAR13[VAR8]), 1, VAR27);
        }
    }
    VAR11 = 0;
VAR19:
    FUN15(VAR13);
    return VAR11;