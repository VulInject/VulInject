static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *const VAR13 = (VAR11 *)&VAR9->VAR12;
    int VAR14, VAR15;
    if (VAR13->VAR3[0])
        VAR2->FUN2(VAR2, VAR13);
    VAR13->VAR16 = 0;
    if (VAR2->FUN3(VAR2, VAR13) < 0)
    {
        FUN4(VAR2, VAR17, "");
        return -1;
    }
    VAR13->VAR18 = VAR19;
    VAR13->VAR20 = 1;
    VAR9->VAR21 = FUN5(VAR9->VAR21, &VAR9->VAR22, VAR7 + VAR23);
    if (VAR2->VAR24 == VAR25)
        VAR9->VAR26.FUN6((VAR27 *)VAR9->VAR21, (VAR27 *)VAR6, VAR7 / 4);
    else
    {
        int VAR28;
        for (VAR28 = 0; VAR28 < VAR7; VAR28++)
            VAR9->VAR21[VAR28] = VAR29[VAR6[VAR28]];
    }
    FUN7(&VAR9->VAR30, VAR9->VAR21, VAR7 * 8);
    for (VAR15 = 0; VAR15 < VAR9->VAR31; VAR15++)
    {
        for (VAR14 = 0; VAR14 < VAR9->VAR32; VAR14++)
        {
            if (FUN8(VAR9, VAR9->VAR33) < 0)
                return -1;
            FUN9(VAR9, VAR14, VAR15);
        }
    }
    if (VAR9->VAR32 != VAR9->VAR34)
    {
        VAR14 = VAR9->VAR32;
        for (VAR15 = 0; VAR15 < VAR9->VAR31; VAR15++)
        {
            if (FUN8(VAR9, VAR9->VAR33) < 0)
                return -1;
            FUN9(VAR9, VAR14, VAR15);
        }
    }
    if (VAR9->VAR31 != VAR9->VAR35)
    {
        VAR15 = VAR9->VAR31;
        for (VAR14 = 0; VAR14 < VAR9->VAR34; VAR14++)
        {
            if (FUN8(VAR9, VAR9->VAR33) < 0)
                return -1;
            FUN9(VAR9, VAR14, VAR15);
        }
    }
    int VAR28;
    FUN10("", 8 * VAR7, FUN11(&VAR9->VAR30));
    for (VAR28 = FUN11(&VAR9->VAR30); VAR28 < 8 * VAR7; VAR28++)
    {
        FUN10("", FUN12(&VAR9->VAR30));
    }
    for (VAR28 = 0; VAR28 < VAR36->VAR2->VAR37; VAR28++)
    {
        FUN10("", ((VAR5 *)VAR36->VAR2->VAR38)[VAR28]);
    }
    *VAR12 = *(VAR11 *)&VAR9->VAR12;
    *VAR4 = sizeof(VAR39);
    FUN13();
    return (FUN11(&VAR9->VAR30) + 31) / 32 * 4;
}