static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    const VAR7 *VAR8;
    const VAR9 *VAR10;
    int VAR11;
    unsigned int VAR12, VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17, VAR18, VAR19;
    int VAR20 = 0;
    VAR4->VAR21 = FUN2(&VAR4->VAR22);
    VAR12 = FUN3(&VAR4->VAR22);
    if (VAR12 > 9)
    {
        FUN4(VAR2->VAR23, VAR24, "", VAR12, VAR4->VAR21);
        return VAR25;
    }
    if (VAR12 > 4)
    {
        VAR12 -= 5;
        VAR4->VAR26 = 1;
    }
    else
        VAR4->VAR26 = 0;
    VAR12 = VAR27[VAR12];
    VAR4->VAR12 = VAR12;
    VAR4->VAR28 = VAR12 & 3;
    if (VAR6->VAR29 == VAR30 && VAR4->VAR28 != VAR31)
    {
        FUN4(VAR2->VAR23, VAR24, "");
        return VAR25;
    }
    VAR4->VAR32 = FUN2(&VAR4->VAR22);
    if (VAR4->VAR32 >= VAR33)
    {
        FUN4(VAR2->VAR23, VAR24, "", VAR4->VAR32);
        return VAR25;
    }
    if (!VAR2->VAR34.VAR35[VAR4->VAR32])
    {
        FUN4(VAR2->VAR23, VAR24, "", VAR4->VAR32);
        return VAR25;
    }
    VAR10 = (const VAR9 *)VAR2->VAR34.VAR35[VAR4->VAR32]->VAR36;
    if (!VAR2->VAR34.VAR37[VAR10->VAR38])
    {
        FUN4(VAR2->VAR23, VAR24, "", VAR10->VAR38);
        return VAR25;
    }
    VAR8 = (const VAR7 *)VAR2->VAR34.VAR37[VAR10->VAR38]->VAR36;
    VAR17 = FUN5(&VAR4->VAR22, VAR8->VAR39);
    if (!VAR2->VAR40)
        VAR2->VAR41.VAR17 = VAR17;
    VAR4->VAR42 = 0;
    VAR18 = VAR6->VAR43 == 0;
    if (VAR8->VAR44)
    {
        VAR19 = VAR45;
    }
    else
    {
        VAR15 = FUN6(&VAR4->VAR22);
        if (VAR15)
        {
            VAR16 = FUN6(&VAR4->VAR22);
            VAR19 = VAR46 + VAR16;
        }
        else
        {
            VAR19 = VAR45;
            VAR20 = VAR8->VAR47;
        }
    }
    if (!VAR2->VAR40)
    {
        VAR2->VAR20 = VAR20;
    }
    VAR4->VAR19 = VAR19;
    VAR4->VAR48 = VAR19 != VAR45;
    if (VAR19 == VAR45)
    {
        VAR2->VAR49 = VAR2->VAR41.VAR17;
        VAR2->VAR50 = 1 << VAR8->VAR39;
    }
    else
    {
        VAR2->VAR49 = 2 * VAR2->VAR41.VAR17 + 1;
        VAR2->VAR50 = 1 << (VAR8->VAR39 + 1);
    }
    if (VAR6->VAR29 == VAR30)
        FUN2(&VAR4->VAR22);
    if (VAR8->VAR51 == 0)
    {
        int VAR52 = FUN5(&VAR4->VAR22, VAR8->VAR53);
        if (!VAR2->VAR40)
            VAR2->VAR41.VAR52 = VAR52;
        if (VAR10->VAR54 == 1 && VAR19 == VAR45)
        {
            int VAR55 = FUN7(&VAR4->VAR22);
            if (!VAR2->VAR40)
                VAR2->VAR41.VAR55 = VAR55;
        }
    }
    if (VAR8->VAR51 == 1 && !VAR8->VAR56)
    {
        int VAR57 = FUN7(&VAR4->VAR22);
        if (!VAR2->VAR40)
            VAR2->VAR41.VAR57[0] = VAR57;
        if (VAR10->VAR54 == 1 && VAR19 == VAR45)
        {
            VAR57 = FUN7(&VAR4->VAR22);
            if (!VAR2->VAR40)
                VAR2->VAR41.VAR57[1] = VAR57;
        }
    }
    if (VAR10->VAR58)
        VAR4->VAR59 = FUN2(&VAR4->VAR22);
    if (VAR4->VAR28 == VAR60)
        VAR4->VAR61 = FUN6(&VAR4->VAR22);
    VAR11 = FUN8(&VAR4->VAR62, VAR4->VAR63, &VAR4->VAR22, VAR10, VAR4->VAR28, VAR19);
    if (VAR11 < 0)
        return VAR11;
    if (VAR4->VAR28 != VAR31)
    {
        VAR11 = FUN9(VAR2, VAR4);
        if (VAR11 < 0)
        {
            VAR4->VAR63[1] = VAR4->VAR63[0] = 0;
            return VAR11;
        }
    }
    VAR4->VAR64.VAR65 = 0;
    for (VAR14 = 0; VAR14 < 2; VAR14++)
    {
        VAR4->VAR64.VAR66[VAR14] = 0;
        VAR4->VAR64.VAR67[VAR14] = 0;
    }
    if ((VAR10->VAR68 && VAR4->VAR28 == VAR69) || (VAR10->VAR70 == 1 && VAR4->VAR28 == VAR60))
        FUN10(&VAR4->VAR22, VAR8, VAR4->VAR63, VAR4->VAR28, &VAR4->VAR64);
    VAR4->VAR71 = 0;
    if (VAR6->VAR43)
    {
        VAR11 = FUN11(VAR2, VAR4, &VAR4->VAR22);
        if (VAR11 < 0 && (VAR2->VAR23->VAR72 & VAR73))
            return VAR25;
    }
    if (VAR4->VAR28 != VAR31 && VAR10->VAR74)
    {
        VAR13 = FUN3(&VAR4->VAR22);
        if (VAR13 > 2)
        {
            FUN4(VAR2->VAR23, VAR24, "", VAR13);
            return VAR25;
        }
        VAR4->VAR75 = VAR13;
    }
    VAR4->VAR76 = 0;
    VAR13 = VAR10->VAR77 + FUN7(&VAR4->VAR22);
    if (VAR13 > 51 + 6 * (VAR8->VAR78 - 8))
    {
        FUN4(VAR2->VAR23, VAR24, "", VAR13);
        return VAR25;
    }
    VAR4->VAR79 = VAR13;
    VAR4->VAR80[0] = FUN12(VAR10, 0, VAR4->VAR79);
    VAR4->VAR80[1] = FUN12(VAR10, 1, VAR4->VAR79);
    if (VAR4->VAR12 == VAR81)
        FUN6(&VAR4->VAR22);
    if (VAR4->VAR12 == VAR81 || VAR4->VAR12 == VAR82)
        FUN7(&VAR4->VAR22);
    VAR4->VAR83 = 1;
    VAR4->VAR84 = 0;
    VAR4->VAR85 = 0;
    if (VAR10->VAR86)
    {
        VAR13 = FUN3(&VAR4->VAR22);
        if (VAR13 > 2)
        {
            FUN4(VAR2->VAR23, VAR24, "", VAR13);
            return VAR25;
        }
        VAR4->VAR83 = VAR13;
        if (VAR4->VAR83 < 2)
            VAR4->VAR83 ^= 1;
        if (VAR4->VAR83)
        {
            VAR4->VAR84 = FUN7(&VAR4->VAR22) * 2;
            VAR4->VAR85 = FUN7(&VAR4->VAR22) * 2;
            if (VAR4->VAR84 > 12 || VAR4->VAR84 < -12 || VAR4->VAR85 > 12 || VAR4->VAR85 < -12)
            {
                FUN4(VAR2->VAR23, VAR24, "", VAR4->VAR84, VAR4->VAR85);
                return VAR25;
            }
        }
    }
    return 0;
}