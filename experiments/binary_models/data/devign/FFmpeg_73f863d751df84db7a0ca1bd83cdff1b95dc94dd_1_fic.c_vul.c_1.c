static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6->VAR3;
    int VAR12;
    int VAR13, VAR14;
    int VAR15;
    int VAR16;
    int VAR17, VAR18;
    int VAR19 = VAR8->VAR19;
    VAR10 *VAR20;
    if ((VAR12 = FUN2(VAR2, VAR8->VAR21)) < 0)
        return VAR12;
    if (VAR6->VAR22 < VAR23 + 4)
    {
        FUN3(VAR2, VAR24, "");
        return VAR25;
    }
    if (memcmp(VAR11, VAR26, 7))
        FUN3(VAR2, VAR27, "");
    if (VAR11[17])
    {
        if (!VAR8->VAR28)
        {
            FUN3(VAR2, VAR27, "");
            return VAR25;
        }
        goto VAR29;
    }
    VAR14 = VAR11[13];
    if (!VAR14)
    {
        FUN3(VAR2, VAR24, "");
        return VAR25;
    }
    VAR8->VAR30 = VAR11[23] ? VAR31 : VAR32;
    VAR16 = FUN4(VAR11 + 24);
    if (VAR16 > VAR6->VAR22 - VAR23)
    {
        FUN3(VAR2, VAR24, "", VAR16, VAR6->VAR22 - VAR23);
        return VAR25;
    }
    if (!VAR16 || !FUN5(VAR11 + 37) || !FUN5(VAR11 + 39))
        VAR19 = 1;
    if (!VAR19 && VAR16 < 32)
    {
        FUN3(VAR2, VAR27, "");
        VAR19 = 1;
    }
    VAR17 = FUN5(VAR11 + 33);
    VAR18 = FUN5(VAR11 + 35);
    if (!VAR19 && (VAR17 > VAR2->VAR33 || VAR18 > VAR2->VAR34))
    {
        FUN3(VAR2, VAR35, "", VAR17, VAR18);
        VAR19 = 1;
    }
    if (!VAR19 && (FUN5(VAR11 + 37) != 32 || FUN5(VAR11 + 39) != 32))
    {
        FUN3(VAR2, VAR27, "");
        VAR19 = 1;
    }
    VAR8->VAR36 = 16 * (VAR8->VAR37 >> 4) / VAR14;
    if (VAR8->VAR36 % 16)
        VAR8->VAR36 = FUN6(VAR8->VAR36 - 16, 16);
    VAR20 = VAR11 + VAR16 + VAR23 + 4 * VAR14;
    VAR15 = VAR6->VAR22 - VAR14 * 4 - VAR16 - VAR23;
    if (VAR15 <= 0)
    {
        FUN3(VAR2, VAR24, "");
        return VAR25;
    }
    VAR8->VAR21->VAR38 = 1;
    VAR8->VAR21->VAR39 = VAR40;
    FUN7(&VAR8->VAR41, &VAR8->VAR42, VAR14 * sizeof(VAR8->VAR41[0]));
    if (!VAR8->VAR42)
    {
        FUN3(VAR2, VAR24, "");
        return FUN8(VAR43);
    }
    memset(VAR8->VAR41, 0, VAR14 * sizeof(VAR8->VAR41[0]));
    for (VAR13 = 0; VAR13 < VAR14; VAR13++)
    {
        unsigned VAR44 = FUN9(VAR11 + VAR16 + VAR23 + VAR13 * 4);
        unsigned VAR45;
        int VAR46 = VAR8->VAR36 * VAR13;
        int VAR36 = VAR8->VAR36;
        if (VAR13 == VAR14 - 1)
        {
            VAR45 = VAR15;
            VAR36 = FUN6(VAR2->VAR34 - VAR8->VAR36 * (VAR14 - 1), 16);
        }
        else
        {
            VAR45 = FUN9(VAR11 + VAR16 + VAR23 + VAR13 * 4 + 4);
        }
        if (VAR45 < VAR44 || VAR45 > VAR15)
            continue;
        VAR45 -= VAR44;
        VAR8->VAR41[VAR13].VAR11 = VAR20 + VAR44;
        VAR8->VAR41[VAR13].VAR47 = VAR45;
        VAR8->VAR41[VAR13].VAR36 = VAR36;
        VAR8->VAR41[VAR13].VAR46 = VAR46;
    }
    if ((VAR12 = VAR2->FUN10(VAR2, VAR48, VAR8->VAR41, NULL, VAR14, sizeof(VAR8->VAR41[0]))) < 0)
        return VAR12;
    FUN11(&VAR8->VAR28);
    VAR8->VAR28 = FUN12(VAR8->VAR21);
    if (!VAR8->VAR28)
    {
        FUN3(VAR2, VAR24, "");
        return FUN8(VAR43);
    }
    if ((VAR12 = FUN2(VAR2, VAR8->VAR28)) < 0)
    {
        FUN3(VAR2, VAR24, "");
        return VAR12;
    }
    if (!VAR19)
    {
        memcpy(VAR8->VAR49, VAR11 + 59, 32 * 32 * 4);
        FUN13(VAR2, VAR17, VAR18);
    }
VAR29:
    *VAR4 = 1;
    if ((VAR12 = FUN14(VAR3, VAR8->VAR28)) < 0)
        return VAR12;
    return VAR6->VAR22;
}