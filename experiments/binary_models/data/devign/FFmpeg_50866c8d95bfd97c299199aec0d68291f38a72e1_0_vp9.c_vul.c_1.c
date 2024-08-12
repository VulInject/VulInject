static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16 = -1, VAR17, VAR18;
    ptrdiff_t VAR19 = 0, VAR20 = 0;
    VAR12 = FUN2(VAR2, VAR7, VAR8, &VAR16);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    else if (!VAR12)
    {
        if (!VAR10->VAR21[VAR16]->VAR22[0])
        {
            FUN3(VAR2, VAR23, "", VAR16);
            return VAR24;
        }
        VAR12 = FUN4(VAR4, VAR10->VAR21[VAR16]);
        if (VAR12 < 0)
            return VAR12;
        *VAR5 = 1;
        return 0;
    }
    VAR7 += VAR12;
    VAR8 -= VAR12;
    VAR10->VAR25 = VAR4;
    FUN5(VAR10->VAR25);
    if ((VAR12 = FUN6(VAR2, VAR10->VAR25, VAR10->VAR26 ? VAR27 : 0)) < 0)
        return VAR12;
    VAR10->VAR25->VAR28 = VAR10->VAR29;
    VAR10->VAR25->VAR30 = VAR10->VAR29 ? VAR31 : VAR32;
    memset(VAR10->VAR33, 0, VAR10->VAR34);
    memset(VAR10->VAR35, 0, VAR10->VAR34);
    if (VAR10->VAR29 || VAR10->VAR36)
        memset(VAR10->VAR37, VAR38, VAR10->VAR34 * 2);
    else
        memset(VAR10->VAR37, VAR39, VAR10->VAR34);
    memset(VAR10->VAR40, 0, VAR10->VAR41 * 16);
    memset(VAR10->VAR42[0], 0, VAR10->VAR41 * 8);
    memset(VAR10->VAR42[1], 0, VAR10->VAR41 * 8);
    memset(VAR10->VAR43, 0, VAR10->VAR34);
    for (VAR13 = 0; VAR13 < VAR10->VAR44.VAR45; VAR13++)
    {
        FUN7(&VAR10->VAR44.VAR46, &VAR10->VAR44.VAR47, VAR13, VAR10->VAR44.VAR48, VAR10->VAR49);
        for (VAR14 = 0; VAR14 < VAR10->VAR44.VAR50; VAR14++)
        {
            int64_t VAR51;
            if (VAR14 == VAR10->VAR44.VAR50 - 1 && VAR13 == VAR10->VAR44.VAR45 - 1)
            {
                VAR51 = VAR8;
            }
            else
            {
                VAR51 = FUN8(VAR7);
                VAR7 += 4;
                VAR8 -= 4;
            }
            if (VAR51 > VAR8)
                return VAR24;
            FUN9(&VAR10->VAR52[VAR14], VAR7, VAR51);
            if (FUN10(&VAR10->VAR52[VAR14], 128))
                return VAR24;
            VAR7 += VAR51;
            VAR8 -= VAR51;
        }
        for (VAR17 = VAR10->VAR44.VAR46; VAR17 < VAR10->VAR44.VAR47; VAR17 += 8, VAR19 += VAR10->VAR25->VAR53[0] * 64, VAR20 += VAR10->VAR25->VAR53[1] * 32)
        {
            VAR54 *VAR55 = VAR10->VAR55;
            ptrdiff_t VAR56 = VAR19, VAR57 = VAR20;
            for (VAR14 = 0; VAR14 < VAR10->VAR44.VAR50; VAR14++)
            {
                FUN7(&VAR10->VAR44.VAR58, &VAR10->VAR44.VAR59, VAR14, VAR10->VAR44.VAR60, VAR10->VAR41);
                memset(VAR10->VAR61, 0, 8);
                memset(VAR10->VAR62, 0, 8);
                if (VAR10->VAR29 || VAR10->VAR36)
                    memset(VAR10->VAR63, VAR38, 16);
                else
                    memset(VAR10->VAR63, VAR39, 8);
                memset(VAR10->VAR64, 0, 16);
                memset(VAR10->VAR65, 0, 16);
                memset(VAR10->VAR66, 0, 8);
                memcpy(&VAR10->VAR67, &VAR10->VAR52[VAR14], sizeof(VAR10->VAR67));
                for (VAR18 = VAR10->VAR44.VAR58; VAR18 < VAR10->VAR44.VAR59; VAR18 += 8, VAR56 += 64, VAR57 += 32, VAR55++)
                {
                    memset(VAR55->VAR68, 0, sizeof(VAR55->VAR68));
                    if ((VAR12 = FUN11(VAR2, VAR17, VAR18, VAR55, VAR56, VAR57, VAR69)) < 0)
                        return VAR12;
                }
                memcpy(&VAR10->VAR52[VAR14], &VAR10->VAR67, sizeof(VAR10->VAR67));
            }
            if (VAR17 + 8 < VAR10->VAR70)
            {
                memcpy(VAR10->VAR71[0], VAR10->VAR25->VAR7[0] + VAR19 + 63 * VAR10->VAR25->VAR53[0], 8 * VAR10->VAR34);
                memcpy(VAR10->VAR71[1], VAR10->VAR25->VAR7[1] + VAR20 + 31 * VAR10->VAR25->VAR53[1], 4 * VAR10->VAR34);
                memcpy(VAR10->VAR71[2], VAR10->VAR25->VAR7[2] + VAR20 + 31 * VAR10->VAR25->VAR53[2], 4 * VAR10->VAR34);
            }
            if (VAR10->VAR72.VAR73)
            {
                VAR56 = VAR19;
                VAR57 = VAR20;
                VAR55 = VAR10->VAR55;
                for (VAR18 = 0; VAR18 < VAR10->VAR34; VAR18 += 8, VAR56 += 64, VAR57 += 32, VAR55++)
                    FUN12(VAR2, VAR55, VAR17, VAR18, VAR56, VAR57);
            }
        }
    }
    if (VAR10->VAR74)
    {
        if (VAR10->VAR75)
        {
            memcpy(VAR10->VAR76[VAR10->VAR77].VAR78, VAR10->VAR79.VAR78, sizeof(VAR10->VAR79.VAR78));
            VAR10->VAR76[VAR10->VAR77].VAR80 = VAR10->VAR79.VAR80;
        }
        else
        {
            FUN13(VAR10);
        }
    }
    FUN14(VAR81 *, VAR10->VAR82[0], VAR10->VAR82[1]);
    for (VAR15 = 0; VAR15 < 8; VAR15++)
        if (VAR10->VAR26 & (1 << VAR15))
        {
            FUN5(VAR10->VAR21[VAR15]);
            VAR12 = FUN4(VAR10->VAR21[VAR15], VAR10->VAR25);
            if (VAR12 < 0)
                return VAR12;
        }
    if (VAR10->VAR83)
        FUN5(VAR10->VAR25);
    else
        *VAR5 = 1;
    return 0;
}