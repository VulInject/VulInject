static int FUN1(VAR1 *VAR2)
{
    ebml_master VAR3 = {0};
    int VAR4, VAR5;
    FUN2(VAR2, VAR6, NULL);
    if (FUN3(VAR2->VAR7))
    {
        VAR5 = FUN4(VAR2, VAR2->VAR7, 0, 0, &VAR3);
        if (VAR5 < 0)
            return VAR5;
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++)
    {
        VAR9 *VAR10 = VAR2->VAR11[VAR4];
        if (!FUN3(VAR10->VAR7))
            continue;
        VAR5 = FUN4(VAR2, VAR10->VAR7, VAR12, VAR4 + 1, &VAR3);
        if (VAR5 < 0)
            return VAR5;
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR13; VAR4++)
    {
        VAR14 *VAR15 = VAR2->VAR16[VAR4];
        if (!FUN3(VAR15->VAR7))
            continue;
        VAR5 = FUN4(VAR2, VAR15->VAR7, VAR17, VAR15->VAR18, &VAR3);
        if (VAR5 < 0)
            return VAR5;
    }
    if (VAR3.VAR19)
        FUN5(VAR2->VAR20, VAR3);
    return 0;
}