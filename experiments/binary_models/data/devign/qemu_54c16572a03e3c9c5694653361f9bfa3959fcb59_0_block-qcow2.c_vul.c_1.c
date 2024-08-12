static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9, VAR10, *VAR11 = &VAR10;
    int VAR12, VAR13;
    VAR14 *VAR15 = NULL;
    memset(VAR11, 0, sizeof(*VAR11));
    if (VAR4->VAR16[0] == '')
    {
        FUN2(VAR2, VAR4->VAR16, sizeof(VAR4->VAR16));
    }
    if (FUN3(VAR2, VAR4->VAR16) >= 0)
        return -VAR17;
    VAR11->VAR16 = FUN4(VAR4->VAR16);
    if (!VAR11->VAR16)
        goto VAR18;
    VAR11->VAR19 = FUN4(VAR4->VAR19);
    if (!VAR11->VAR19)
        goto VAR18;
    VAR11->VAR20 = VAR4->VAR20;
    VAR11->VAR21 = VAR4->VAR21;
    VAR11->VAR22 = VAR4->VAR22;
    VAR11->VAR23 = VAR4->VAR23;
    VAR13 = FUN5(VAR2, VAR6->VAR24, VAR6->VAR25, 1);
    if (VAR13 < 0)
        goto VAR18;
    VAR11->VAR24 = FUN6(VAR2, VAR6->VAR25 * sizeof(VAR14));
    VAR11->VAR25 = VAR6->VAR25;
    VAR15 = FUN7(VAR6->VAR25 * sizeof(VAR14));
    if (!VAR15)
        goto VAR18;
    for (VAR12 = 0; VAR12 < VAR6->VAR25; VAR12++)
    {
        VAR15[VAR12] = FUN8(VAR6->VAR15[VAR12]);
    }
    if (FUN9(VAR6->VAR26, VAR11->VAR24, VAR15, VAR6->VAR25 * sizeof(VAR14)) != (VAR6->VAR25 * sizeof(VAR14)))
        goto VAR18;
    FUN10(VAR15);
    VAR15 = NULL;
    VAR9 = FUN7((VAR6->VAR27 + 1) * sizeof(VAR8));
    if (!VAR9)
        goto VAR18;
    memcpy(VAR9, VAR6->VAR28, VAR6->VAR27 * sizeof(VAR8));
    VAR6->VAR28 = VAR9;
    VAR6->VAR28[VAR6->VAR27++] = *VAR11;
    if (FUN11(VAR2) < 0)
        goto VAR18;
    FUN12(VAR2);
    return 0;
VAR18:
    FUN10(VAR11->VAR19);
    FUN10(VAR15);
    return -1;