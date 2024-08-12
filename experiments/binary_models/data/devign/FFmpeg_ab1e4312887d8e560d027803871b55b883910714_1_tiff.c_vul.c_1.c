static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR5 *VAR8, int VAR9, int VAR10, int VAR11)
{
    PutByteContext VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17;
    const VAR5 *VAR18 = VAR8;
    int VAR19 = ((VAR2->VAR19 * VAR2->VAR20) + 7) >> 3;
    const VAR21 *VAR22 = FUN2(VAR4->VAR23);
    int VAR24 = !(VAR22->VAR25 & VAR26) && VAR22->VAR27 >= 2;
    if (VAR2->VAR28)
        VAR19 /= VAR2->VAR29;
    if (VAR9 <= 0)
        return VAR30;
    if (VAR24)
    {
        int VAR31 = (((VAR2->VAR19 - 1) / VAR2->VAR32[0] + 1) * VAR2->VAR20 * VAR2->VAR32[0] * VAR2->VAR32[1] + 7) >> 3;
        FUN3(&VAR2->VAR33, &VAR2->VAR34, VAR31);
        if (VAR2->VAR33 == NULL)
        {
            FUN4(VAR2->VAR35, VAR36, "");
            return FUN5(VAR37);
        }
        VAR6 = VAR2->VAR33;
        VAR7 = 0;
        VAR19 = VAR2->VAR19 * VAR2->VAR32[1] + 2 * (VAR2->VAR19 / VAR2->VAR32[0]);
        FUN6(VAR19 <= VAR31);
        FUN6(VAR2->VAR20 == 24);
    }
    if (VAR2->VAR38 == VAR39 || VAR2->VAR38 == VAR40)
    {
        return FUN7(VAR2, VAR4, VAR6, VAR7, VAR8, VAR9, VAR19, VAR11, VAR10, VAR24);
        FUN4(VAR2->VAR35, VAR36, ""
                                       "");
        return FUN5(VAR41);
    }
    if (VAR2->VAR38 == VAR42)
    {
        return FUN8(VAR2, VAR4, VAR6, VAR7, VAR8, VAR9, VAR19, VAR11, VAR10, VAR24);
        FUN4(VAR2->VAR35, VAR36, "");
        return FUN5(VAR41);
    }
    if (VAR2->VAR38 == VAR43)
    {
        if (VAR2->VAR44)
        {
            if ((VAR17 = FUN9(VAR2, VAR8, VAR9)) < 0)
                return VAR17;
            VAR18 = VAR8 = VAR2->VAR45;
        }
        if (VAR9 > 1 && !VAR8[0] && (VAR8[1] & 1))
        {
            FUN4(VAR2->VAR35, VAR36, "");
        }
        if ((VAR17 = FUN10(VAR2->VAR46, 8, VAR8, VAR9, VAR47)) < 0)
        {
            FUN4(VAR2->VAR35, VAR36, "");
            return VAR17;
        }
        for (VAR14 = 0; VAR14 < VAR11; VAR14++)
        {
            VAR15 = FUN11(VAR2->VAR46, VAR6, VAR19);
            if (VAR15 < VAR19)
            {
                FUN4(VAR2->VAR35, VAR36, "", VAR15, VAR19);
                return VAR30;
            }
            if (VAR2->VAR20 < 8 && VAR2->VAR35->VAR48 == VAR49)
                FUN12(VAR2->VAR20, VAR6, 1, VAR6, 0, VAR19, 0);
            if (VAR24)
            {
                FUN13(VAR2, VAR4, VAR6, VAR10 + VAR14);
                VAR14 += VAR2->VAR32[1] - 1;
            }
            VAR6 += VAR7;
        }
        return 0;
    }
    if (VAR2->VAR38 == VAR50 || VAR2->VAR38 == VAR51 || VAR2->VAR38 == VAR52)
    {
        if (VAR24)
            return VAR30;
        return FUN14(VAR2, VAR6, VAR7, VAR8, VAR9, VAR19, VAR11);
    }
    FUN15(&VAR2->VAR53, VAR8, VAR9);
    FUN16(&VAR12, VAR6, VAR24 ? VAR2->VAR34 : (VAR7 * VAR11));
    for (VAR14 = 0; VAR14 < VAR11; VAR14++)
    {
        if (VAR8 - VAR18 > VAR9)
        {
            FUN4(VAR2->VAR35, VAR36, "");
            return VAR30;
        }
        if (FUN17(&VAR2->VAR53) == 0 || FUN18(&VAR12))
            break;
        FUN19(&VAR12, VAR7 * VAR14, VAR54);
        switch (VAR2->VAR38)
        {
        case VAR55:
            if (VAR18 + VAR9 - VAR8 < VAR19)
                return VAR30;
            if (!VAR2->VAR44)
            {
                FUN12(VAR2->VAR20 * (VAR2->VAR35->VAR48 == VAR49), VAR6, 1, VAR8, 0, VAR19, 0);
            }
            else
            {
                int VAR56;
                for (VAR56 = 0; VAR56 < VAR19; VAR56++)
                    VAR6[VAR56] = VAR57[VAR8[VAR56]];
            }
            VAR8 += VAR19;
            break;
        case VAR58:
            for (VAR15 = 0; VAR15 < VAR19;)
            {
                if (VAR18 + VAR9 - VAR8 < 2)
                {
                    FUN4(VAR2->VAR35, VAR36, "");
                    return VAR30;
                }
                VAR16 = VAR2->VAR44 ? (VAR59)VAR57[*VAR8++] : (VAR59)*VAR8++;
                if (VAR16 >= 0)
                {
                    VAR16++;
                    if (VAR15 + VAR16 > VAR19 || VAR18 + VAR9 - VAR8 < VAR16)
                    {
                        FUN4(VAR2->VAR35, VAR36, "");
                        return VAR30;
                    }
                    FUN12(VAR2->VAR20 * (VAR2->VAR35->VAR48 == VAR49), VAR6, 1, VAR8, 0, VAR16, VAR15);
                    VAR8 += VAR16;
                    VAR15 += VAR16;
                }
                else if (VAR16 != -128)
                {
                    VAR16 = (-VAR16) + 1;
                    if (VAR15 + VAR16 > VAR19)
                    {
                        FUN4(VAR2->VAR35, VAR36, "");
                        return VAR30;
                    }
                    VAR13 = *VAR8++;
                    FUN12(VAR2->VAR20 * (VAR2->VAR35->VAR48 == VAR49), VAR6, 0, NULL, VAR13, VAR16, VAR15);
                    VAR15 += VAR16;
                }
            }
            if (VAR2->VAR44)
            {
                int VAR56;
                for (VAR56 = 0; VAR56 < VAR19; VAR56++)
                    VAR6[VAR56] = VAR57[VAR6[VAR56]];
            }
            break;
        }
        if (VAR24)
        {
            FUN13(VAR2, VAR4, VAR6, VAR10 + VAR14);
            VAR14 += VAR2->VAR32[1] - 1;
        }
        VAR6 += VAR7;
    }
    return 0;
}