static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR10 *const VAR12 = &VAR8->VAR11;
    unsigned VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19;
    int VAR20;
    unsigned VAR21, VAR22;
    VAR23 *VAR24;
    GetByteContext VAR25;
    GetByteContext VAR26;
    FUN2(&VAR8->VAR27, VAR6->VAR3, VAR6->VAR28);
    if (VAR6->VAR28 < 8)
        return VAR29;
    VAR14 = FUN3(&VAR8->VAR27);
    if (VAR14 == 0x4949)
        VAR15 = 1;
    else if (VAR14 == 0x4D4D)
        VAR15 = 0;
    else
    {
        FUN4(VAR2, VAR30, "");
        return -1;
    }
    VAR8->VAR15 = VAR15;
    VAR8->VAR31 = 0;
    VAR8->VAR32 = VAR33;
    VAR8->VAR34 = 0;
    FUN5(VAR8);
    FUN6(&VAR8->VAR11.VAR35);
    if (FUN7(&VAR8->VAR27, VAR15) != 42)
    {
        FUN4(VAR2, VAR30, "");
        return -1;
    }
    VAR8->VAR36 = VAR8->VAR37 = 0;
    VAR13 = FUN8(&VAR8->VAR27, VAR15);
    if (VAR13 >= VAR38 - 14 || VAR6->VAR28 < VAR13 + 14)
    {
        FUN4(VAR2, VAR30, "");
        return VAR29;
    }
    FUN9(&VAR8->VAR27, VAR13, VAR39);
    VAR19 = FUN7(&VAR8->VAR27, VAR15);
    for (VAR17 = 0; VAR17 < VAR19; VAR17++)
    {
        if (FUN10(VAR8) < 0)
            return -1;
    }
    for (VAR17 = 0; VAR17 < VAR8->VAR40; VAR17++)
    {
        const char *VAR41 = FUN11(VAR8->VAR42[VAR17].VAR43);
        if (!VAR41)
        {
            FUN4(VAR2, VAR44, "", VAR8->VAR42[VAR17].VAR43);
            continue;
        }
        if (FUN12(VAR8->VAR42[VAR17].VAR43) != VAR8->VAR42[VAR17].VAR45)
        {
            FUN4(VAR2, VAR44, "", VAR8->VAR42[VAR17].VAR43);
            continue;
        }
        VAR16 = FUN13(&VAR8->VAR11.VAR35, VAR41, VAR8->VAR42[VAR17].VAR46, 0);
        if (VAR16 < 0)
        {
            FUN4(VAR2, VAR30, "", VAR41);
            return VAR16;
        }
    }
    if (!VAR8->VAR37 && !VAR8->VAR47)
    {
        FUN4(VAR2, VAR30, "");
        return -1;
    }
    if ((VAR16 = FUN14(VAR8)) < 0)
        return VAR16;
    if (VAR8->VAR48 == 1 && !VAR8->VAR49)
    {
        FUN4(VAR2, VAR44, "");
        VAR8->VAR49 = VAR6->VAR28 - VAR8->VAR47;
    }
    VAR20 = VAR12->VAR50[0];
    VAR24 = VAR12->VAR3[0];
    if (VAR8->VAR36)
    {
        if (VAR8->VAR36 >= VAR6->VAR28)
            return VAR29;
        FUN2(&VAR25, VAR6->VAR3 + VAR8->VAR36, VAR6->VAR28 - VAR8->VAR36);
    }
    if (VAR8->VAR37)
    {
        if (VAR8->VAR37 >= VAR6->VAR28)
            return VAR29;
        FUN2(&VAR26, VAR6->VAR3 + VAR8->VAR37, VAR6->VAR28 - VAR8->VAR37);
    }
    for (VAR17 = 0; VAR17 < VAR8->VAR51; VAR17 += VAR8->VAR52)
    {
        if (VAR8->VAR36)
            VAR22 = FUN15(&VAR25, VAR8->VAR53, VAR8->VAR15);
        else
            VAR22 = VAR8->VAR49;
        if (VAR8->VAR37)
            VAR21 = FUN15(&VAR26, VAR8->VAR54, VAR8->VAR15);
        else
            VAR21 = VAR8->VAR47;
        if (VAR21 > VAR6->VAR28 || VAR22 > VAR6->VAR28 - VAR21)
        {
            FUN4(VAR2, VAR30, "");
            return -1;
        }
        if (FUN16(VAR8, VAR24, VAR20, VAR6->VAR3 + VAR21, VAR22, FUN17(VAR8->VAR52, VAR8->VAR51 - VAR17)) < 0)
            break;
        VAR24 += VAR8->VAR52 * VAR20;
    }
    if (VAR8->VAR55 == 2)
    {
        VAR24 = VAR12->VAR3[0];
        VAR21 = VAR8->VAR56 >> 3;
        VAR22 = VAR8->VAR57 * VAR21;
        if (VAR8->VAR2->VAR58 == VAR59 || VAR8->VAR2->VAR58 == VAR60)
        {
            for (VAR17 = 0; VAR17 < VAR8->VAR51; VAR17++)
            {
                for (VAR18 = VAR21; VAR18 < VAR22; VAR18 += 2)
                    FUN18(VAR24 + VAR18, FUN19(VAR24 + VAR18) + FUN19(VAR24 + VAR18 - VAR21));
                VAR24 += VAR20;
            }
        }
        else if (VAR8->VAR2->VAR58 == VAR61 || VAR8->VAR2->VAR58 == VAR62)
        {
            for (VAR17 = 0; VAR17 < VAR8->VAR51; VAR17++)
            {
                for (VAR18 = VAR21; VAR18 < VAR22; VAR18 += 2)
                    FUN20(VAR24 + VAR18, FUN21(VAR24 + VAR18) + FUN21(VAR24 + VAR18 - VAR21));
                VAR24 += VAR20;
            }
        }
        else
        {
            for (VAR17 = 0; VAR17 < VAR8->VAR51; VAR17++)
            {
                for (VAR18 = VAR21; VAR18 < VAR22; VAR18++)
                    VAR24[VAR18] += VAR24[VAR18 - VAR21];
                VAR24 += VAR20;
            }
        }
    }
    if (VAR8->VAR31)
    {
        VAR24 = VAR8->VAR11.VAR3[0];
        for (VAR17 = 0; VAR17 < VAR8->VAR51; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR8->VAR11.VAR50[0]; VAR18++)
                VAR24[VAR18] = (VAR8->VAR2->VAR58 == VAR63 ? (1 << VAR8->VAR56) - 1 : 255) - VAR24[VAR18];
            VAR24 += VAR8->VAR11.VAR50[0];
        }
    }
    *VAR11 = VAR8->VAR11;
    *VAR4 = sizeof(VAR64);
    return VAR6->VAR28;
}