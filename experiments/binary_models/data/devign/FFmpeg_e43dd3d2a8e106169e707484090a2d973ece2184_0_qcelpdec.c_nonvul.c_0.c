static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    float *VAR14 = VAR3;
    int VAR15, VAR16;
    float VAR17[10], VAR18[10];
    float VAR19[16];
    float *VAR20;
    VAR16 = 160 * FUN2(VAR2->VAR21);
    if (*VAR4 < VAR16)
    {
        FUN3(VAR2, VAR22, "");
        return FUN4(VAR23);
    }
    if ((VAR12->VAR24 = FUN5(VAR2, VAR9, &VAR8)) == VAR25)
    {
        FUN6(VAR2, "");
        goto VAR26;
    }
    if (VAR12->VAR24 == VAR27 && (VAR12->VAR28 = FUN7(VAR8)) == 0xFFFF)
    {
        FUN6(VAR2, "");
        goto VAR26;
    }
    if (VAR12->VAR24 > VAR29)
    {
        const VAR30 *VAR31 = VAR32[VAR12->VAR24];
        const VAR30 *VAR33 = VAR32[VAR12->VAR24] + VAR34[VAR12->VAR24];
        VAR7 *VAR35 = (VAR7 *)&VAR12->VAR36;
        FUN8(&VAR12->VAR37, VAR8, 8 * VAR9);
        memset(&VAR12->VAR36, 0, sizeof(VAR38));
        for (; VAR31 < VAR33; VAR31++)
            VAR35[VAR31->VAR39] |= FUN9(&VAR12->VAR37, VAR31->VAR40) << VAR31->VAR41;
        if (VAR12->VAR36.VAR42)
        {
            FUN6(VAR2, "");
            goto VAR26;
        }
        if (VAR12->VAR24 == VAR43 && FUN10(VAR12->VAR36.VAR44))
        {
            FUN6(VAR2, "");
            goto VAR26;
        }
        if (VAR12->VAR24 >= VAR45)
        {
            for (VAR15 = 0; VAR15 < 4; VAR15++)
            {
                if (VAR12->VAR36.VAR46[VAR15] && VAR12->VAR36.VAR47[VAR15] >= 124)
                {
                    FUN6(VAR2, "");
                    goto VAR26;
                }
            }
        }
    }
    FUN11(VAR12, VAR19);
    FUN12(VAR12, VAR19, VAR14);
    if (FUN13(VAR12, VAR17) < 0)
    {
        FUN6(VAR2, "");
        goto VAR26;
    }
    FUN14(VAR12, VAR14);
    if (VAR12->VAR24 == VAR25)
    {
    VAR26:
        VAR12->VAR24 = VAR25;
        VAR12->VAR48++;
        FUN11(VAR12, VAR19);
        FUN12(VAR12, VAR19, VAR14);
        FUN13(VAR12, VAR17);
        FUN14(VAR12, VAR14);
    }
    else
        VAR12->VAR48 = 0;
    VAR20 = VAR12->VAR20 + 10;
    for (VAR15 = 0; VAR15 < 4; VAR15++)
    {
        FUN15(VAR12, VAR17, VAR18, VAR15);
        FUN16(VAR20, VAR18, VAR14 + VAR15 * 40, 40, 10);
        VAR20 += 40;
    }
    FUN17(VAR12, VAR14, VAR18);
    memcpy(VAR12->VAR20, VAR12->VAR20 + 160, 10 * sizeof(float));
    memcpy(VAR12->VAR49, VAR17, sizeof(VAR12->VAR49));
    VAR12->VAR50 = VAR12->VAR24;
    *VAR4 = VAR16;
    return VAR9;
}