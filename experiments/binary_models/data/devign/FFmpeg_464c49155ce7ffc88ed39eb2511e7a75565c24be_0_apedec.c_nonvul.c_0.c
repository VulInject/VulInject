static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR9 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19, VAR20, VAR21;
    int VAR22;
    FUN2(VAR12->VAR23 >= 0);
    if (!VAR12->VAR23)
    {
        uint32_t VAR24, VAR25;
        int VAR26;
        if (!VAR6->VAR27)
        {
            *VAR4 = 0;
            return 0;
        }
        if (VAR6->VAR27 < 8)
        {
            FUN3(VAR2, VAR28, "");
            return VAR29;
        }
        VAR26 = VAR6->VAR27 & ~3;
        if (VAR26 != VAR6->VAR27)
        {
            FUN3(VAR2, VAR30, ""
                                          "");
        }
        if (VAR12->VAR31 < 3950)
            VAR26 += 2;
        FUN4(&VAR12->VAR3, &VAR12->VAR32, VAR26);
        if (!VAR12->VAR3)
            return FUN5(VAR33);
        VAR12->VAR34.FUN6((VAR35 *)VAR12->VAR3, (const VAR35 *)VAR10, VAR26 >> 2);
        memset(VAR12->VAR3 + (VAR26 & ~3), 0, VAR26 & 3);
        VAR12->VAR36 = VAR12->VAR3;
        VAR12->VAR37 = VAR12->VAR3 + VAR26;
        VAR24 = FUN7(&VAR12->VAR36);
        VAR25 = FUN7(&VAR12->VAR36);
        if (VAR12->VAR31 >= 3900)
        {
            if (VAR25 > 3)
            {
                FUN3(VAR2, VAR28, "");
                VAR12->VAR3 = NULL;
                return VAR29;
            }
            if (VAR12->VAR37 - VAR12->VAR36 < VAR25)
            {
                FUN3(VAR2, VAR28, "");
                return VAR29;
            }
            VAR12->VAR36 += VAR25;
        }
        else
        {
            if ((VAR21 = FUN8(&VAR12->VAR38, VAR12->VAR36, VAR12->VAR37 - VAR12->VAR36)) < 0)
                return VAR21;
            if (VAR12->VAR31 > 3800)
                FUN9(&VAR12->VAR38, VAR25 * 8);
            else
                FUN9(&VAR12->VAR38, VAR25);
        }
        if (!VAR24 || VAR24 > VAR39)
        {
            FUN3(VAR2, VAR28, "" VAR40 "", VAR24);
            return VAR29;
        }
        if (FUN10(VAR12) < 0)
        {
            FUN3(VAR2, VAR28, "");
            return VAR29;
        }
        VAR12->VAR23 = VAR24;
    }
    if (!VAR12->VAR3)
    {
        *VAR4 = 0;
        return VAR6->VAR27;
    }
    VAR22 = FUN11(VAR12->VAR41, VAR12->VAR23);
    if (VAR12->VAR31 < 3930)
        VAR22 = VAR12->VAR23;
    FUN12(&VAR12->VAR42, &VAR12->VAR43, 2 * FUN13(VAR22, 8) * sizeof(*VAR12->VAR42));
    if (!VAR12->VAR42)
        return FUN5(VAR33);
    memset(VAR12->VAR42, 0, VAR12->VAR43);
    VAR12->VAR44[0] = VAR12->VAR42;
    VAR12->VAR44[1] = VAR12->VAR42 + FUN13(VAR22, 8);
    VAR8->VAR45 = VAR22;
    if ((VAR21 = FUN14(VAR2, VAR8, 0)) < 0)
        return VAR21;
    VAR12->VAR46 = 0;
    if ((VAR12->VAR47 == 1) || (VAR12->VAR48 & VAR49))
        FUN15(VAR12, VAR22);
    else
        FUN16(VAR12, VAR22);
    FUN17();
    if (VAR12->VAR46)
    {
        VAR12->VAR23 = 0;
        FUN3(VAR2, VAR28, "");
        return VAR29;
    }
    switch (VAR12->VAR50)
    {
    case 8:
        for (VAR20 = 0; VAR20 < VAR12->VAR47; VAR20++)
        {
            VAR14 = (VAR9 *)VAR8->VAR3[VAR20];
            for (VAR19 = 0; VAR19 < VAR22; VAR19++)
                *VAR14++ = (VAR12->VAR44[VAR20][VAR19] + 0x80) & 0xff;
        }
        break;
    case 16:
        for (VAR20 = 0; VAR20 < VAR12->VAR47; VAR20++)
        {
            VAR16 = (VAR15 *)VAR8->VAR3[VAR20];
            for (VAR19 = 0; VAR19 < VAR22; VAR19++)
                *VAR16++ = VAR12->VAR44[VAR20][VAR19];
        }
        break;
    case 24:
        for (VAR20 = 0; VAR20 < VAR12->VAR47; VAR20++)
        {
            VAR18 = (VAR17 *)VAR8->VAR3[VAR20];
            for (VAR19 = 0; VAR19 < VAR22; VAR19++)
                *VAR18++ = VAR12->VAR44[VAR20][VAR19] << 8;
        }
        break;
    }
    VAR12->VAR23 -= VAR22;
    *VAR4 = 1;
    return !VAR12->VAR23 ? VAR6->VAR27 : 0;
}