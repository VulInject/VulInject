static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    uint64_t VAR12;
    uint32_t VAR13, VAR14;
    int32_t VAR15 = -1;
    int VAR16, VAR17;
    uint64_t VAR18 = FUN2(VAR9);
    for (VAR16 = 0; VAR16 < VAR6->VAR19; VAR16++)
    {
        if ((VAR6->VAR20[VAR16]->VAR21 == VAR22) && !VAR6->VAR20[VAR16]->VAR23)
        {
            VAR6->VAR20[VAR16]->VAR23 = 1;
            VAR11 = VAR2->VAR24[VAR6->VAR20[VAR16]->VAR25];
            break;
        }
    }
    if (!VAR11)
    {
        FUN3(VAR9, VAR18 - 24);
        return 0;
    }
    FUN3(VAR9, 16);
    VAR12 = FUN2(VAR9);
    FUN3(VAR9, 4);
    VAR14 = FUN4(VAR9);
    for (VAR16 = 0; VAR16 < VAR14; VAR16++)
    {
        VAR13 = FUN4(VAR9);
        VAR17 = FUN3(VAR9, 2);
        if (VAR17 < 0)
        {
            FUN5(VAR2, VAR26, "");
            return VAR17;
        }
        if (VAR15 != VAR13)
        {
            FUN6(VAR11, VAR6->VAR27 + VAR6->VAR28 * VAR13, FUN7(VAR12, VAR16, 10000), VAR6->VAR28, 0, VAR29);
            VAR15 = VAR13;
        }
    }
    VAR6->VAR30 = 1;
    FUN8(VAR9, VAR6->VAR31, VAR18);
    return 0;
}