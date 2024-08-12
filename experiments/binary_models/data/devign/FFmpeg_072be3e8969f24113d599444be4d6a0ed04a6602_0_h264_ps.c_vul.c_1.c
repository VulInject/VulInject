int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6, VAR7 = 0;
    unsigned int VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12;
    VAR5 = FUN2(&VAR4->VAR13, 8);
    VAR7 |= FUN3(&VAR4->VAR13) << 0;
    VAR7 |= FUN3(&VAR4->VAR13) << 1;
    VAR7 |= FUN3(&VAR4->VAR13) << 2;
    VAR7 |= FUN3(&VAR4->VAR13) << 3;
    FUN2(&VAR4->VAR13, 4);
    VAR6 = FUN2(&VAR4->VAR13, 8);
    VAR8 = FUN4(&VAR4->VAR13);
    if (VAR8 >= VAR14)
    {
        FUN5(VAR2->VAR4.VAR15, VAR16, "", VAR8);
        return -1;
    }
    VAR12 = FUN6(sizeof(VAR11));
    if (VAR12 == NULL)
        return -1;
    VAR12->VAR17 = 24;
    VAR12->VAR5 = VAR5;
    VAR12->VAR7 = VAR7;
    VAR12->VAR6 = VAR6;
    memset(VAR12->VAR18, 16, sizeof(VAR12->VAR18));
    memset(VAR12->VAR19, 16, sizeof(VAR12->VAR19));
    VAR12->VAR20 = 0;
    if (VAR12->VAR5 >= 100)
    {
        VAR12->VAR21 = FUN4(&VAR4->VAR13);
        if (VAR12->VAR21 > 3)
        {
            FUN5(VAR2->VAR4.VAR15, VAR16, "", VAR12->VAR21);
            goto VAR22;
        }
        else if (VAR12->VAR21 == 3)
        {
            VAR12->VAR23 = FUN3(&VAR4->VAR13);
        }
        VAR12->VAR24 = FUN7(&VAR4->VAR13) + 8;
        VAR12->VAR25 = FUN7(&VAR4->VAR13) + 8;
        VAR12->VAR26 = FUN3(&VAR4->VAR13);
        FUN8(VAR2, VAR12, NULL, 1, VAR12->VAR18, VAR12->VAR19);
    }
    else
    {
        VAR12->VAR21 = 1;
        VAR12->VAR24 = 8;
        VAR12->VAR25 = 8;
    }
    VAR10 = FUN7(&VAR4->VAR13);
    if (VAR10 < VAR27 - 4 || VAR10 > VAR28 - 4)
    {
        FUN5(VAR2->VAR4.VAR15, VAR16, "", VAR10);
        return VAR29;
    }
    VAR12->VAR30 = VAR10 + 4;
    VAR12->VAR31 = FUN4(&VAR4->VAR13);
    if (VAR12->VAR31 == 0)
    {
        VAR12->VAR32 = FUN7(&VAR4->VAR13) + 4;
    }
    else if (VAR12->VAR31 == 1)
    {
        VAR12->VAR33 = FUN3(&VAR4->VAR13);
        VAR12->VAR34 = FUN9(&VAR4->VAR13);
        VAR12->VAR35 = FUN9(&VAR4->VAR13);
        VAR12->VAR36 = FUN7(&VAR4->VAR13);
        if ((unsigned)VAR12->VAR36 >= FUN10(VAR12->VAR37))
        {
            FUN5(VAR2->VAR4.VAR15, VAR16, "", VAR12->VAR36);
            goto VAR22;
        }
        for (VAR9 = 0; VAR9 < VAR12->VAR36; VAR9++)
            VAR12->VAR37[VAR9] = FUN9(&VAR4->VAR13);
    }
    else if (VAR12->VAR31 != 2)
    {
        FUN5(VAR2->VAR4.VAR15, VAR16, "", VAR12->VAR31);
        goto VAR22;
    }
    VAR12->VAR38 = FUN4(&VAR4->VAR13);
    if (VAR12->VAR38 > VAR39 - 2 || VAR12->VAR38 >= 32U)
    {
        FUN5(VAR2->VAR4.VAR15, VAR16, "");
        goto VAR22;
    }
    VAR12->VAR40 = FUN3(&VAR4->VAR13);
    VAR12->VAR41 = FUN7(&VAR4->VAR13) + 1;
    VAR12->VAR42 = FUN7(&VAR4->VAR13) + 1;
    if ((unsigned)VAR12->VAR41 >= VAR43 / 16 || (unsigned)VAR12->VAR42 >= VAR43 / 16 || FUN11(16 * VAR12->VAR41, 16 * VAR12->VAR42, 0, VAR2->VAR4.VAR15))
    {
        FUN5(VAR2->VAR4.VAR15, VAR16, "");
        goto VAR22;
    }
    VAR12->VAR44 = FUN3(&VAR4->VAR13);
    if (!VAR12->VAR44)
        VAR12->VAR45 = FUN3(&VAR4->VAR13);
    else
        VAR12->VAR45 = 0;
    VAR12->VAR46 = FUN3(&VAR4->VAR13);
    if (!VAR12->VAR44 && !VAR12->VAR46)
    {
        FUN5(VAR2->VAR4.VAR15, VAR16, "");
        goto VAR22;
    }
    if (VAR12->VAR45)
        FUN5(VAR2->VAR4.VAR15, VAR16, "");
    VAR12->VAR47 = FUN3(&VAR4->VAR13);
    if (VAR12->VAR47)
    {
        int VAR48 = VAR12->VAR21 & 2 ? 16 : 8;
        int VAR49 = VAR12->VAR21 == 3 ? 16 : 8;
        VAR12->VAR50 = FUN7(&VAR4->VAR13);
        VAR12->VAR51 = FUN7(&VAR4->VAR13);
        VAR12->VAR52 = FUN7(&VAR4->VAR13);
        VAR12->VAR53 = FUN7(&VAR4->VAR13);
        if (VAR12->VAR50 || VAR12->VAR52)
        {
            FUN5(VAR2->VAR4.VAR15, VAR16, "");
        }
        if (VAR12->VAR51 >= VAR49 || VAR12->VAR53 >= VAR48)
        {
            FUN5(VAR2->VAR4.VAR15, VAR16, "");
        }
    }
    else
    {
        VAR12->VAR50 = VAR12->VAR51 = VAR12->VAR52 = VAR12->VAR53 = 0;
    }
    VAR12->VAR54 = FUN3(&VAR4->VAR13);
    if (VAR12->VAR54)
        if (FUN12(VAR2, VAR12) < 0)
            goto VAR22;
    if (!VAR12->VAR55.VAR56)
        VAR12->VAR55.VAR56 = 1;
    if (VAR4->VAR15->VAR57 & VAR58)
    {
        static const char VAR59[4][5] = {"", "", "", ""};
        FUN5(VAR2->VAR4.VAR15, VAR60, "", VAR8, VAR12->VAR5, VAR12->VAR6, VAR12->VAR31, VAR12->VAR38, VAR12->VAR41, VAR12->VAR42, VAR12->VAR44 ? "" : (VAR12->VAR45 ? "" : ""), VAR12->VAR46 ? "" : "", VAR12->VAR50, VAR12->VAR51, VAR12->VAR52, VAR12->VAR53, VAR12->VAR54 ? "" : "", VAR59[VAR12->VAR21], VAR12->VAR61 ? VAR12->VAR62 : 0, VAR12->VAR61 ? VAR12->VAR63 : 0);
    }
    FUN13(VAR2->VAR64[VAR8]);
    VAR2->VAR64[VAR8] = VAR12;
    VAR2->VAR12 = *VAR12;
    return 0;
VAR22:
    FUN13(VAR12);
    return -1;
}