static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int64_t VAR12 = FUN2(VAR4);
    uint32_t VAR13 = FUN3(VAR4);
    if (FUN3(VAR4) != FUN4('', '', '', ''))
    {
        return -1;
    }
    FUN5(VAR2->VAR14, VAR15, "");
    VAR6 = FUN6(sizeof(VAR5));
    if (!VAR6)
    {
        return FUN7(VAR16);
    }
    VAR2->VAR17++;
    if ((VAR11 = FUN8(&VAR2->VAR18, VAR2->VAR17 * sizeof(VAR5 *))) < 0)
    {
        FUN9(&VAR6);
        return VAR11;
    }
    VAR2->VAR18[VAR2->VAR17 - 1] = VAR6;
    VAR7 = FUN10(VAR4);
    FUN11(VAR4);
    VAR6->VAR19 = FUN3(VAR4);
    VAR8 = FUN3(VAR4);
    VAR6->VAR20 = FUN3(VAR4);
    VAR6->VAR21 = FUN6(VAR6->VAR20 * sizeof(VAR22));
    if (!VAR6->VAR21)
    {
        return FUN7(VAR16);
    }
    for (VAR9 = 0; VAR9 < VAR6->VAR20; VAR9++)
    {
        int64_t VAR23, VAR24;
        if (VAR7 == 1)
        {
            VAR23 = FUN12(VAR4);
            VAR24 = FUN12(VAR4);
        }
        else
        {
            VAR23 = FUN3(VAR4);
            VAR24 = FUN3(VAR4);
        }
        VAR6->VAR21[VAR9].VAR23 = VAR23;
        VAR6->VAR21[VAR9].VAR25 = VAR24;
        for (VAR10 = 0; VAR10 < ((VAR8 >> 4) & 3) + 1; VAR10++)
            FUN10(VAR4);
        for (VAR10 = 0; VAR10 < ((VAR8 >> 2) & 3) + 1; VAR10++)
            FUN10(VAR4);
        for (VAR10 = 0; VAR10 < ((VAR8 >> 0) & 3) + 1; VAR10++)
            FUN10(VAR4);
    }
    FUN13(VAR4, VAR12 + VAR13, VAR26);
    return 0;
}