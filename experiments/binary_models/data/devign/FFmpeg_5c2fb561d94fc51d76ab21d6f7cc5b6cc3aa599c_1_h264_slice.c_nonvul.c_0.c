static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    const VAR7 *VAR8;
    const VAR9 *VAR10;
    int VAR11;
    unsigned int VAR12, VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17, VAR18;
    VAR4->VAR19 = FUN2(&VAR4->VAR20);
    VAR12 = FUN3(&VAR4->VAR20);
    if (VAR12 > 9)
    {
        FUN4(VAR2->VAR21, VAR22, "", VAR12, VAR4->VAR19);
        return VAR23;
    }
    if (VAR12 > 4)
    {
        VAR12 -= 5;
        VAR4->VAR24 = 1;
    }
    else
        VAR4->VAR24 = 0;
    VAR12 = VAR25[VAR12];
    VAR4->VAR12 = VAR12;
    VAR4->VAR26 = VAR12 & 3;
    if (VAR6->VAR27 == VAR28 && VAR4->VAR26 != VAR29)
    {
        FUN4(VAR2->VAR21, VAR22, "");
        return VAR23;
    }
    VAR4->VAR30 = FUN2(&VAR4->VAR20);
    if (VAR4->VAR30 >= VAR31)
    {
        FUN4(VAR2->VAR21, VAR22, "", VAR4->VAR30);
        return VAR23;
    }
    if (!VAR2->VAR32.VAR33[VAR4->VAR30])
    {
        FUN4(VAR2->VAR21, VAR22, "", VAR4->VAR30);
        return VAR23;
    }
    VAR10 = (const VAR9 *)VAR2->VAR32.VAR33[VAR4->VAR30]->VAR34;
    if (!VAR2->VAR32.VAR35[VAR10->VAR36])
    {
        FUN4(VAR2->VAR21, VAR22, "", VAR10->VAR36);
        return VAR23;
    }
    VAR8 = (const VAR7 *)VAR2->VAR32.VAR35[VAR10->VAR36]->VAR34;
    VAR4->VAR37 = FUN5(&VAR4->VAR20, VAR8->VAR38);
    VAR4->VAR39 = 0;
    VAR17 = VAR6->VAR40 == 0;
    if (VAR8->VAR41)
    {
        VAR18 = VAR42;
    }
    else
    {
        VAR15 = FUN6(&VAR4->VAR20);
        if (VAR15)
        {
            VAR16 = FUN6(&VAR4->VAR20);
            VAR18 = VAR43 + VAR16;
        }
        else
        {
            VAR18 = VAR42;
        }
    }
    VAR4->VAR18 = VAR18;
    VAR4->VAR44 = VAR18 != VAR42;
    if (VAR18 == VAR42)
    {
        VAR4->VAR45 = VAR4->VAR37;
        VAR4->VAR46 = 1 << VAR8->VAR38;
    }
    else
    {
        VAR4->VAR45 = 2 * VAR4->VAR37 + 1;
        VAR4->VAR46 = 1 << (VAR8->VAR38 + 1);
    }
    if (VAR6->VAR27 == VAR28)
        FUN2(&VAR4->VAR20);
    if (VAR8->VAR47 == 0)
    {
        VAR4->VAR48 = FUN5(&VAR4->VAR20, VAR8->VAR49);
        if (VAR10->VAR50 == 1 && VAR18 == VAR42)
            VAR4->VAR51 = FUN7(&VAR4->VAR20);
    }
    if (VAR8->VAR47 == 1 && !VAR8->VAR52)
    {
        VAR4->VAR53[0] = FUN7(&VAR4->VAR20);
        if (VAR10->VAR50 == 1 && VAR18 == VAR42)
            VAR4->VAR53[1] = FUN7(&VAR4->VAR20);
    }
    if (VAR10->VAR54)
        VAR4->VAR55 = FUN2(&VAR4->VAR20);
    if (VAR4->VAR26 == VAR56)
        VAR4->VAR57 = FUN6(&VAR4->VAR20);
    VAR11 = FUN8(&VAR4->VAR58, VAR4->VAR59, &VAR4->VAR20, VAR10, VAR4->VAR26, VAR18);
    if (VAR11 < 0)
        return VAR11;
    if (VAR4->VAR26 != VAR29)
    {
        VAR11 = FUN9(VAR2, VAR4);
        if (VAR11 < 0)
        {
            VAR4->VAR59[1] = VAR4->VAR59[0] = 0;
            return VAR11;
        }
    }
    VAR4->VAR60.VAR61 = 0;
    for (VAR14 = 0; VAR14 < 2; VAR14++)
    {
        VAR4->VAR60.VAR62[VAR14] = 0;
        VAR4->VAR60.VAR63[VAR14] = 0;
    }
    if ((VAR10->VAR64 && VAR4->VAR26 == VAR65) || (VAR10->VAR66 == 1 && VAR4->VAR26 == VAR56))
        FUN10(&VAR4->VAR20, VAR8, VAR4->VAR59, VAR4->VAR26, &VAR4->VAR60);
    VAR4->VAR67 = 0;
    if (VAR6->VAR40)
    {
        VAR11 = FUN11(VAR2, VAR4, &VAR4->VAR20);
        if (VAR11 < 0 && (VAR2->VAR21->VAR68 & VAR69))
            return VAR23;
    }
    if (VAR4->VAR26 != VAR29 && VAR10->VAR70)
    {
        VAR13 = FUN3(&VAR4->VAR20);
        if (VAR13 > 2)
        {
            FUN4(VAR2->VAR21, VAR22, "", VAR13);
            return VAR23;
        }
        VAR4->VAR71 = VAR13;
    }
    VAR4->VAR72 = 0;
    VAR13 = VAR10->VAR73 + FUN7(&VAR4->VAR20);
    if (VAR13 > 51 + 6 * (VAR8->VAR74 - 8))
    {
        FUN4(VAR2->VAR21, VAR22, "", VAR13);
        return VAR23;
    }
    VAR4->VAR75 = VAR13;
    VAR4->VAR76[0] = FUN12(VAR10, 0, VAR4->VAR75);
    VAR4->VAR76[1] = FUN12(VAR10, 1, VAR4->VAR75);
    if (VAR4->VAR12 == VAR77)
        FUN6(&VAR4->VAR20);
    if (VAR4->VAR12 == VAR77 || VAR4->VAR12 == VAR78)
        FUN7(&VAR4->VAR20);
    VAR4->VAR79 = 1;
    VAR4->VAR80 = 0;
    VAR4->VAR81 = 0;
    if (VAR10->VAR82)
    {
        VAR13 = FUN3(&VAR4->VAR20);
        if (VAR13 > 2)
        {
            FUN4(VAR2->VAR21, VAR22, "", VAR13);
            return VAR23;
        }
        VAR4->VAR79 = VAR13;
        if (VAR4->VAR79 < 2)
            VAR4->VAR79 ^= 1;
        if (VAR4->VAR79)
        {
            VAR4->VAR80 = FUN7(&VAR4->VAR20) * 2;
            VAR4->VAR81 = FUN7(&VAR4->VAR20) * 2;
            if (VAR4->VAR80 > 12 || VAR4->VAR80 < -12 || VAR4->VAR81 > 12 || VAR4->VAR81 < -12)
            {
                FUN4(VAR2->VAR21, VAR22, "", VAR4->VAR80, VAR4->VAR81);
                return VAR23;
            }
        }
    }
    return 0;
}