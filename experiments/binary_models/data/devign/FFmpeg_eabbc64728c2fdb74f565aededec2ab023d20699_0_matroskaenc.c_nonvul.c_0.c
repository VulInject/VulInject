static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR2 *VAR6;
    VAR7 *VAR8 = VAR5->VAR9;
    ebml_master VAR10, VAR11;
    int64_t VAR12;
    int VAR13;
    VAR12 = FUN2(VAR3);
    if (VAR8->VAR14 > 0)
    {
        if (FUN3(VAR3, VAR8->VAR15, VAR16) < 0)
        {
            VAR12 = -1;
            goto VAR17;
        }
    }
    if (FUN4(VAR3, &VAR6, VAR5, &VAR10, VAR18, VAR8->VAR14) < 0)
    {
        VAR12 = -1;
        goto VAR17;
    }
    for (VAR13 = 0; VAR13 < VAR8->VAR19; VAR13++)
    {
        VAR20 *VAR21 = &VAR8->VAR22[VAR13];
        VAR11 = FUN5(VAR6, VAR23, VAR24);
        FUN6(VAR6, VAR25);
        FUN7(VAR6, FUN8(VAR21->VAR26), 0);
        FUN6(VAR6, VAR21->VAR26);
        FUN9(VAR6, VAR27, VAR21->VAR28);
        FUN10(VAR6, VAR11);
    }
    FUN11(VAR3, &VAR6, VAR5, VAR10);
    if (VAR8->VAR14 > 0)
    {
        uint64_t VAR29 = VAR8->VAR15 + VAR8->VAR14 - FUN2(VAR3);
        FUN12(VAR3, VAR29);
        FUN3(VAR3, VAR12, VAR16);
        VAR12 = VAR8->VAR15;
    }
VAR17:
    FUN13(&VAR5->VAR9->VAR22);
    FUN13(&VAR5->VAR9);
    return VAR12;
}