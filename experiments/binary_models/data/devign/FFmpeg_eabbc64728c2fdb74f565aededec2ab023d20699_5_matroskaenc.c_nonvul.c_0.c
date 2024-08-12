static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR3->VAR11;
    VAR12 *VAR13, *VAR14 = VAR3->VAR14;
    ebml_master VAR15;
    int64_t VAR16;
    int VAR17, VAR18, VAR19;
    VAR16 = FUN2(VAR14);
    VAR19 = FUN3(VAR14, &VAR13, VAR10, &VAR15, VAR20, 0);
    if (VAR19 < 0)
        return VAR19;
    for (VAR17 = 0; VAR17 < VAR5->VAR21; VAR17++)
    {
        ebml_master VAR22, VAR23;
        VAR24 *VAR25 = &VAR5->VAR26[VAR17];
        uint64_t VAR27 = VAR25->VAR27;
        int VAR28 = 0;
        for (VAR18 = 0; VAR18 < VAR8; VAR18++)
            VAR7[VAR18].VAR29 = 0;
        for (VAR18 = 0; VAR18 < VAR5->VAR21 - VAR17 && VAR25[VAR18].VAR27 == VAR27; VAR18++)
        {
            int VAR30 = VAR25[VAR18].VAR31;
            FUN4(VAR30 >= 0 && VAR30 < VAR8);
            if (VAR7[VAR30].VAR29 && VAR3->VAR32[VAR30]->VAR33->VAR34 != VAR35)
                continue;
            VAR7[VAR30].VAR29 = 1;
            VAR28++;
        }
        VAR22 = FUN5(VAR13, VAR36, FUN6(VAR28));
        FUN7(VAR13, VAR37, VAR27);
        for (VAR18 = 0; VAR18 < VAR8; VAR18++)
            VAR7[VAR18].VAR29 = 0;
        for (VAR18 = 0; VAR18 < VAR5->VAR21 - VAR17 && VAR25[VAR18].VAR27 == VAR27; VAR18++)
        {
            int VAR30 = VAR25[VAR18].VAR31;
            FUN4(VAR30 >= 0 && VAR30 < VAR8);
            if (VAR7[VAR30].VAR29 && VAR3->VAR32[VAR30]->VAR33->VAR34 != VAR35)
                continue;
            VAR7[VAR30].VAR29 = 1;
            VAR23 = FUN5(VAR13, VAR38, VAR39);
            FUN7(VAR13, VAR40, VAR25[VAR18].VAR30);
            FUN7(VAR13, VAR41, VAR25[VAR18].VAR42);
            FUN7(VAR13, VAR43, VAR25[VAR18].VAR44);
            if (VAR25[VAR18].VAR45 != -1)
                FUN7(VAR13, VAR46, VAR25[VAR18].VAR45);
            FUN8(VAR13, VAR23);
        }
        VAR17 += VAR18 - 1;
        FUN8(VAR13, VAR22);
    }
    FUN9(VAR14, &VAR13, VAR10, VAR15);
    return VAR16;
}