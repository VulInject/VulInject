static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    ebml_master VAR6, VAR7;
    int64_t VAR8;
    int VAR9;
    VAR8 = FUN2(VAR3);
    if (VAR5->VAR10 > 0)
        if (FUN3(VAR3, VAR5->VAR11, VAR12) < 0)
            return -1;
    VAR6 = FUN4(VAR3, VAR13, VAR5->VAR10);
    for (VAR9 = 0; VAR9 < VAR5->VAR14; VAR9++)
    {
        VAR15 *VAR16 = &VAR5->VAR17[VAR9];
        VAR7 = FUN4(VAR3, VAR18, VAR19);
        FUN5(VAR3, VAR20);
        FUN6(VAR3, FUN7(VAR16->VAR21), 0);
        FUN5(VAR3, VAR16->VAR21);
        FUN8(VAR3, VAR22, VAR16->VAR23);
        FUN9(VAR3, VAR7);
    }
    FUN9(VAR3, VAR6);
    if (VAR5->VAR10 > 0)
    {
        uint64_t VAR24 = VAR5->VAR11 + VAR5->VAR10 - FUN2(VAR3);
        FUN10(VAR3, VAR24);
        FUN3(VAR3, VAR8, VAR12);
        VAR8 = VAR5->VAR11;
    }
    FUN11(VAR5->VAR17);
    FUN11(VAR5);
    return VAR8;
}