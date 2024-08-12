int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    VAR8 *VAR10 = NULL;
    QCowSnapshot VAR11, *VAR12 = &VAR11;
    int VAR13, VAR14;
    VAR15 *VAR16 = NULL;
    int64_t VAR17;
    if (VAR6->VAR18 >= VAR19)
    {
        return -VAR20;
    }
    memset(VAR12, 0, sizeof(*VAR12));
    FUN2(VAR2, VAR4->VAR21, sizeof(VAR4->VAR21));
    if (FUN3(VAR2, VAR4->VAR21, NULL) >= 0)
    {
        return -VAR22;
    }
    VAR12->VAR21 = FUN4(VAR4->VAR21);
    VAR12->VAR23 = FUN4(VAR4->VAR23);
    VAR12->VAR24 = VAR2->VAR25 * VAR26;
    VAR12->VAR27 = VAR4->VAR27;
    VAR12->VAR28 = VAR4->VAR28;
    VAR12->VAR29 = VAR4->VAR29;
    VAR12->VAR30 = VAR4->VAR30;
    VAR17 = FUN5(VAR2, VAR6->VAR31 * sizeof(VAR15));
    if (VAR17 < 0)
    {
        VAR14 = VAR17;
        goto VAR32;
    }
    VAR12->VAR17 = VAR17;
    VAR12->VAR31 = VAR6->VAR31;
    VAR16 = FUN6(VAR15, VAR6->VAR31);
    if (VAR6->VAR31 && VAR16 == NULL)
    {
        VAR14 = -VAR33;
        goto VAR32;
    }
    for (VAR13 = 0; VAR13 < VAR6->VAR31; VAR13++)
    {
        VAR16[VAR13] = FUN7(VAR6->VAR16[VAR13]);
    }
    VAR14 = FUN8(VAR2, 0, VAR12->VAR17, VAR6->VAR31 * sizeof(VAR15));
    if (VAR14 < 0)
    {
        goto VAR32;
    }
    VAR14 = FUN9(VAR2->VAR34, VAR12->VAR17, VAR16, VAR6->VAR31 * sizeof(VAR15));
    if (VAR14 < 0)
    {
        goto VAR32;
    }
    FUN10(VAR16);
    VAR16 = NULL;
    VAR14 = FUN11(VAR2, VAR6->VAR17, VAR6->VAR31, 1);
    if (VAR14 < 0)
    {
        goto VAR32;
    }
    VAR9 = FUN12(VAR8, VAR6->VAR18 + 1);
    if (VAR6->VAR35)
    {
        memcpy(VAR9, VAR6->VAR35, VAR6->VAR18 * sizeof(VAR8));
        VAR10 = VAR6->VAR35;
    }
    VAR6->VAR35 = VAR9;
    VAR6->VAR35[VAR6->VAR18++] = *VAR12;
    VAR14 = FUN13(VAR2);
    if (VAR14 < 0)
    {
        FUN10(VAR6->VAR35);
        VAR6->VAR35 = VAR10;
        VAR6->VAR18--;
        goto VAR32;
    }
    FUN10(VAR10);
    FUN14(VAR2, FUN15(VAR6), FUN16(VAR12->VAR27, VAR6->VAR36), VAR37, false);
    {
        BdrvCheckResult VAR38 = {0};
        FUN17(VAR2, &VAR38, 0);
    }
    return 0;
VAR32:
    FUN10(VAR12->VAR21);
    FUN10(VAR12->VAR23);
    FUN10(VAR16);
    return VAR14;
}