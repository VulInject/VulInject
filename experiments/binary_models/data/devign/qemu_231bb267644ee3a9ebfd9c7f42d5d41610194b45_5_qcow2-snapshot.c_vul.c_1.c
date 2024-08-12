int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    VAR8 *VAR10 = NULL;
    QCowSnapshot VAR11, *VAR12 = &VAR11;
    int VAR13, VAR14;
    VAR15 *VAR16 = NULL;
    int64_t VAR17;
    memset(VAR12, 0, sizeof(*VAR12));
    if (VAR4->VAR18[0] == '')
    {
        FUN2(VAR2, VAR4->VAR18, sizeof(VAR4->VAR18));
    }
    if (FUN3(VAR2, VAR4->VAR18, NULL) >= 0)
    {
        return -VAR19;
    }
    VAR12->VAR18 = FUN4(VAR4->VAR18);
    VAR12->VAR20 = FUN4(VAR4->VAR20);
    VAR12->VAR21 = VAR2->VAR22 * VAR23;
    VAR12->VAR24 = VAR4->VAR24;
    VAR12->VAR25 = VAR4->VAR25;
    VAR12->VAR26 = VAR4->VAR26;
    VAR12->VAR27 = VAR4->VAR27;
    VAR17 = FUN5(VAR2, VAR6->VAR28 * sizeof(VAR15));
    if (VAR17 < 0)
    {
        VAR14 = VAR17;
        goto VAR29;
    }
    VAR12->VAR17 = VAR17;
    VAR12->VAR28 = VAR6->VAR28;
    VAR16 = FUN6(VAR6->VAR28 * sizeof(VAR15));
    for (VAR13 = 0; VAR13 < VAR6->VAR28; VAR13++)
    {
        VAR16[VAR13] = FUN7(VAR6->VAR16[VAR13]);
    }
    VAR14 = FUN8(VAR2, VAR30, VAR12->VAR17, VAR6->VAR28 * sizeof(VAR15));
    if (VAR14 < 0)
    {
        goto VAR29;
    }
    VAR14 = FUN9(VAR2->VAR31, VAR12->VAR17, VAR16, VAR6->VAR28 * sizeof(VAR15));
    if (VAR14 < 0)
    {
        goto VAR29;
    }
    FUN10(VAR16);
    VAR16 = NULL;
    VAR14 = FUN11(VAR2, VAR6->VAR17, VAR6->VAR28, 1);
    if (VAR14 < 0)
    {
        goto VAR29;
    }
    VAR9 = FUN6((VAR6->VAR32 + 1) * sizeof(VAR8));
    if (VAR6->VAR33)
    {
        memcpy(VAR9, VAR6->VAR33, VAR6->VAR32 * sizeof(VAR8));
        VAR10 = VAR6->VAR33;
    }
    VAR6->VAR33 = VAR9;
    VAR6->VAR33[VAR6->VAR32++] = *VAR12;
    VAR14 = FUN12(VAR2);
    if (VAR14 < 0)
    {
        FUN10(VAR6->VAR33);
        VAR6->VAR33 = VAR10;
        VAR6->VAR32--;
        goto VAR29;
    }
    FUN10(VAR10);
    FUN13(VAR2, FUN14(VAR6), FUN15(VAR12->VAR24, VAR6->VAR34) >> VAR35, VAR36);
    {
        BdrvCheckResult VAR37 = {0};
        FUN16(VAR2, &VAR37, 0);
    }
    return 0;
VAR29:
    FUN10(VAR12->VAR18);
    FUN10(VAR12->VAR20);
    FUN10(VAR16);
    return VAR14;
}