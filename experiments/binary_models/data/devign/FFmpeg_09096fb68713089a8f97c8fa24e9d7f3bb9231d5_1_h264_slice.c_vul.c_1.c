static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    const VAR7 *VAR8;
    const VAR9 *VAR10;
    int VAR11;
    unsigned int VAR12, VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17 = VAR4 == VAR2->VAR18 && !VAR2->VAR19;
    int VAR20;
    if (VAR17)
        FUN2(!VAR2->VAR21);
    VAR4->VAR22 = FUN3(&VAR4->VAR23);
    VAR12 = FUN4(&VAR4->VAR23);
    if (VAR12 > 9)
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR12, VAR4->VAR22);
        return VAR26;
    }
    if (VAR12 > 4)
    {
        VAR12 -= 5;
        VAR4->VAR27 = 1;
    }
    else
        VAR4->VAR27 = 0;
    VAR12 = VAR28[VAR12];
    VAR4->VAR12 = VAR12;
    VAR4->VAR29 = VAR12 & 3;
    if (VAR6->VAR30 == VAR31 && VAR4->VAR29 != VAR32)
    {
        FUN5(VAR2->VAR24, VAR25, "");
        return VAR26;
    }
    VAR4->VAR33 = FUN6(&VAR4->VAR23);
    if (VAR4->VAR33 >= VAR34)
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR4->VAR33);
        return VAR26;
    }
    if (!VAR2->VAR35.VAR36[VAR4->VAR33])
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR4->VAR33);
        return VAR26;
    }
    VAR10 = (const VAR9 *)VAR2->VAR35.VAR36[VAR4->VAR33]->VAR37;
    if (!VAR2->VAR35.VAR38[VAR10->VAR39])
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR10->VAR39);
        return VAR26;
    }
    VAR8 = (const VAR7 *)VAR2->VAR35.VAR38[VAR10->VAR39]->VAR37;
    VAR4->VAR40 = FUN7(&VAR4->VAR23, VAR8->VAR41);
    if (!VAR17)
    {
        if (VAR2->VAR42.VAR40 != VAR4->VAR40)
        {
            FUN5(VAR2->VAR24, VAR25, "", VAR2->VAR42.VAR40, VAR4->VAR40);
            return VAR26;
        }
    }
    VAR4->VAR43 = 0;
    if (VAR8->VAR44)
    {
        VAR20 = VAR45;
    }
    else
    {
        if (!VAR8->VAR46 && VAR12 == VAR47)
        {
            FUN5(VAR2->VAR24, VAR25, "");
            return -1;
        }
        VAR15 = FUN8(&VAR4->VAR23);
        if (VAR15)
        {
            VAR16 = FUN8(&VAR4->VAR23);
            VAR20 = VAR48 + VAR16;
        }
        else
        {
            VAR20 = VAR45;
        }
    }
    VAR4->VAR20 = VAR20;
    VAR4->VAR49 = VAR20 != VAR45;
    if (VAR20 == VAR45)
    {
        VAR4->VAR50 = VAR4->VAR40;
        VAR4->VAR51 = 1 << VAR8->VAR41;
    }
    else
    {
        VAR4->VAR50 = 2 * VAR4->VAR40 + 1;
        VAR4->VAR51 = 1 << (VAR8->VAR41 + 1);
    }
    if (VAR6->VAR30 == VAR31)
        FUN3(&VAR4->VAR23);
    if (VAR8->VAR52 == 0)
    {
        VAR4->VAR53 = FUN7(&VAR4->VAR23, VAR8->VAR54);
        if (VAR10->VAR55 == 1 && VAR20 == VAR45)
            VAR4->VAR56 = FUN9(&VAR4->VAR23);
    }
    if (VAR8->VAR52 == 1 && !VAR8->VAR57)
    {
        VAR4->VAR58[0] = FUN9(&VAR4->VAR23);
        if (VAR10->VAR55 == 1 && VAR20 == VAR45)
            VAR4->VAR58[1] = FUN9(&VAR4->VAR23);
    }
    VAR4->VAR59 = 0;
    if (VAR10->VAR60)
        VAR4->VAR59 = FUN6(&VAR4->VAR23);
    if (VAR4->VAR29 == VAR47)
        VAR4->VAR61 = FUN8(&VAR4->VAR23);
    VAR11 = FUN10(&VAR4->VAR62, VAR4->VAR63, &VAR4->VAR23, VAR10, VAR4->VAR29, VAR20, VAR2->VAR24);
    if (VAR11 < 0)
        return VAR11;
    if (VAR4->VAR29 != VAR32)
    {
        VAR11 = FUN11(VAR4, VAR2->VAR24);
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
    if ((VAR10->VAR68 && VAR4->VAR29 == VAR69) || (VAR10->VAR70 == 1 && VAR4->VAR29 == VAR47))
    {
        VAR11 = FUN12(&VAR4->VAR23, VAR8, VAR4->VAR63, VAR4->VAR29, &VAR4->VAR64, VAR2->VAR24);
        if (VAR11 < 0)
            return VAR11;
    }
    VAR4->VAR71 = 0;
    if (VAR6->VAR72)
    {
        VAR11 = FUN13(VAR4, &VAR4->VAR23, VAR6, VAR2->VAR24);
        if (VAR11 < 0 && (VAR2->VAR24->VAR73 & VAR74))
            return VAR26;
    }
    if (VAR4->VAR29 != VAR32 && VAR10->VAR75)
    {
        VAR13 = FUN4(&VAR4->VAR23);
        if (VAR13 > 2)
        {
            FUN5(VAR2->VAR24, VAR25, "", VAR13);
            return VAR26;
        }
        VAR4->VAR76 = VAR13;
    }
    VAR4->VAR77 = 0;
    VAR13 = VAR10->VAR78 + FUN9(&VAR4->VAR23);
    if (VAR13 > 51 + 6 * (VAR8->VAR79 - 8))
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR13);
        return VAR26;
    }
    VAR4->VAR80 = VAR13;
    VAR4->VAR81[0] = FUN14(VAR10, 0, VAR4->VAR80);
    VAR4->VAR81[1] = FUN14(VAR10, 1, VAR4->VAR80);
    if (VAR4->VAR12 == VAR82)
        FUN8(&VAR4->VAR23);
    if (VAR4->VAR12 == VAR82 || VAR4->VAR12 == VAR83)
        FUN9(&VAR4->VAR23);
    VAR4->VAR84 = 1;
    VAR4->VAR85 = 0;
    VAR4->VAR86 = 0;
    if (VAR10->VAR87)
    {
        VAR13 = FUN4(&VAR4->VAR23);
        if (VAR13 > 2)
        {
            FUN5(VAR2->VAR24, VAR25, "", VAR13);
            return VAR26;
        }
        VAR4->VAR84 = VAR13;
        if (VAR4->VAR84 < 2)
            VAR4->VAR84 ^= 1;
        if (VAR4->VAR84)
        {
            VAR4->VAR85 = FUN9(&VAR4->VAR23) * 2;
            VAR4->VAR86 = FUN9(&VAR4->VAR23) * 2;
            if (VAR4->VAR85 > 12 || VAR4->VAR85 < -12 || VAR4->VAR86 > 12 || VAR4->VAR86 < -12)
            {
                FUN5(VAR2->VAR24, VAR25, "", VAR4->VAR85, VAR4->VAR86);
                return VAR26;
            }
        }
    }
    return 0;
}