static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    ebml_master VAR7;
    int64_t VAR8;
    int VAR9, VAR10;
    VAR8 = FUN2(VAR3);
    VAR7 = FUN3(VAR3, VAR11, 0);
    for (VAR9 = 0; VAR9 < VAR5->VAR12; VAR9++)
    {
        ebml_master VAR13, VAR14;
        VAR15 *VAR16 = &VAR5->VAR17[VAR9];
        uint64_t VAR18 = VAR16->VAR18;
        VAR13 = FUN3(VAR3, VAR19, FUN4(VAR6));
        FUN5(VAR3, VAR20, VAR18);
        for (VAR10 = 0; VAR10 < VAR5->VAR12 - VAR9 && VAR16[VAR10].VAR18 == VAR18; VAR10++)
        {
            VAR14 = FUN3(VAR3, VAR21, VAR22);
            FUN5(VAR3, VAR23, VAR16[VAR10].VAR24);
            FUN5(VAR3, VAR25, VAR16[VAR10].VAR26);
            FUN6(VAR3, VAR14);
        }
        VAR9 += VAR10 - 1;
        FUN6(VAR3, VAR13);
    }
    FUN6(VAR3, VAR7);
    FUN7(VAR5->VAR17);
    FUN7(VAR5);
    return VAR8;
}