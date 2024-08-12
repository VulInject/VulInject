static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8)
{
    ebml_master VAR9;
    int64_t VAR10;
    int VAR11, VAR12;
    VAR10 = FUN2(VAR3);
    VAR9 = FUN3(VAR3, VAR13, 0);
    for (VAR11 = 0; VAR11 < VAR5->VAR14; VAR11++)
    {
        ebml_master VAR15, VAR16;
        VAR17 *VAR18 = &VAR5->VAR19[VAR11];
        uint64_t VAR20 = VAR18->VAR20;
        VAR15 = FUN3(VAR3, VAR21, FUN4(VAR8));
        FUN5(VAR3, VAR22, VAR20);
        for (VAR12 = 0; VAR12 < VAR8; VAR12++)
            VAR7[VAR12].VAR23 = 0;
        for (VAR12 = 0; VAR12 < VAR5->VAR14 - VAR11 && VAR18[VAR12].VAR20 == VAR20; VAR12++)
        {
            int VAR24 = VAR18[VAR12].VAR24 - 1;
            FUN6(VAR24 >= 0 && VAR24 < VAR8);
            if (VAR7[VAR24].VAR23)
                continue;
            VAR7[VAR24].VAR23 = 1;
            VAR16 = FUN3(VAR3, VAR25, VAR26);
            FUN5(VAR3, VAR27, VAR18[VAR12].VAR24);
            FUN5(VAR3, VAR28, VAR18[VAR12].VAR29);
            FUN7(VAR3, VAR16);
        }
        VAR11 += VAR12 - 1;
        FUN7(VAR3, VAR15);
    }
    FUN7(VAR3, VAR9);
    return VAR10;
}