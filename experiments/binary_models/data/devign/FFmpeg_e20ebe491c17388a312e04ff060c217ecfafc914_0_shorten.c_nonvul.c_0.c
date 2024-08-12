static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    int VAR16, VAR17 = 0;
    int VAR18;
    if (VAR14->VAR19 == 0)
    {
        void *VAR20;
        VAR14->VAR19 = 8192;
        VAR20 = FUN2(VAR14->VAR21, &VAR14->VAR22, VAR14->VAR19 + VAR23);
        if (!VAR20)
        {
            FUN3(VAR2, VAR24, "");
            return FUN4(VAR25);
        }
        memset(VAR20, 0, VAR14->VAR22);
        VAR14->VAR21 = VAR20;
    }
    if (1 && VAR14->VAR19)
    {
        VAR11 = FUN5(VAR11, VAR14->VAR19 - VAR14->VAR26);
        VAR17 = VAR11;
        if (VAR14->VAR27 + VAR14->VAR26 + VAR11 + VAR23 > VAR14->VAR22)
        {
            memmove(VAR14->VAR21, &VAR14->VAR21[VAR14->VAR27], VAR14->VAR26);
            VAR14->VAR27 = 0;
        }
        if (VAR10)
            memcpy(&VAR14->VAR21[VAR14->VAR27 + VAR14->VAR26], VAR10, VAR11);
        VAR10 = &VAR14->VAR21[VAR14->VAR27];
        VAR11 += VAR14->VAR26;
        VAR14->VAR26 = VAR11;
        if (VAR11 < VAR14->VAR19 && VAR6->VAR3)
        {
            *VAR4 = 0;
            return VAR17;
        }
    }
    FUN6(&VAR14->VAR28, VAR10, VAR11 * 8);
    FUN7(&VAR14->VAR28, VAR14->VAR29);
    if (!VAR14->VAR30)
    {
        if ((VAR18 = FUN8(VAR14)) < 0)
            return VAR18;
        *VAR4 = 0;
        goto VAR31;
    }
    if (VAR14->VAR32)
    {
        *VAR4 = 0;
        return VAR6->VAR12;
    }
    VAR14->VAR33 = 0;
    while (VAR14->VAR33 < VAR14->VAR34)
    {
        unsigned VAR35;
        int VAR36;
        if (FUN9(&VAR14->VAR28) < 3 + VAR37)
        {
            *VAR4 = 0;
            break;
        }
        VAR35 = FUN10(&VAR14->VAR28, VAR37);
        if (VAR35 > VAR38)
        {
            FUN3(VAR2, VAR24, "", VAR35);
            *VAR4 = 0;
            break;
        }
        if (!VAR39[VAR35])
        {
            switch (VAR35)
            {
            case VAR38:
                VAR36 = FUN10(&VAR14->VAR28, VAR40);
                while (VAR36--)
                    FUN10(&VAR14->VAR28, VAR41);
                break;
            case VAR42:
            {
                unsigned VAR43 = FUN10(&VAR14->VAR28, VAR44);
                if (VAR43 > 31)
                {
                    FUN3(VAR2, VAR24, "", VAR43);
                    return VAR45;
                }
                VAR14->VAR43 = VAR43;
                break;
            }
            case VAR46:
            {
                unsigned VAR47 = FUN11(VAR14, FUN12(VAR14->VAR47));
                if (VAR47 > VAR14->VAR47)
                {
                    FUN3(VAR2, VAR24, "");
                    return VAR45;
                }
                if (!VAR47 || VAR47 > VAR48)
                {
                    FUN3(VAR2, VAR24, ""
                                                "",
                           VAR47);
                    return FUN4(VAR49);
                }
                VAR14->VAR47 = VAR47;
                break;
            }
            case VAR50:
                VAR14->VAR32 = 1;
                break;
            }
            if (VAR35 == VAR46 || VAR35 == VAR50)
            {
                *VAR4 = 0;
                break;
            }
        }
        else
        {
            int VAR51 = 0;
            int VAR52 = VAR14->VAR33;
            int32_t VAR53;
            if (VAR35 != VAR54)
            {
                VAR51 = FUN10(&VAR14->VAR28, VAR55);
                if (VAR14->VAR56 == 0)
                    VAR51--;
            }
            if (VAR14->VAR57 == 0)
                VAR53 = VAR14->VAR58[VAR52][0];
            else
            {
                int32_t VAR59 = (VAR14->VAR56 < 2) ? 0 : VAR14->VAR57 / 2;
                for (VAR16 = 0; VAR16 < VAR14->VAR57; VAR16++)
                    VAR59 += VAR14->VAR58[VAR52][VAR16];
                VAR53 = VAR59 / VAR14->VAR57;
                if (VAR14->VAR56 >= 2)
                    VAR53 = VAR14->VAR43 == 0 ? VAR53 : VAR53 >> VAR14->VAR43 - 1 >> 1;
            }
            if (VAR35 == VAR54)
            {
                for (VAR16 = 0; VAR16 < VAR14->VAR47; VAR16++)
                    VAR14->VAR60[VAR52][VAR16] = 0;
            }
            else
            {
                if ((VAR18 = FUN13(VAR14, VAR35, VAR52, VAR51, VAR53)) < 0)
                    return VAR18;
            }
            if (VAR14->VAR57 > 0)
            {
                int32_t VAR59 = (VAR14->VAR56 < 2) ? 0 : VAR14->VAR47 / 2;
                for (VAR16 = 0; VAR16 < VAR14->VAR47; VAR16++)
                    VAR59 += VAR14->VAR60[VAR52][VAR16];
                for (VAR16 = 1; VAR16 < VAR14->VAR57; VAR16++)
                    VAR14->VAR58[VAR52][VAR16 - 1] = VAR14->VAR58[VAR52][VAR16];
                if (VAR14->VAR56 < 2)
                    VAR14->VAR58[VAR52][VAR14->VAR57 - 1] = VAR59 / VAR14->VAR47;
                else
                    VAR14->VAR58[VAR52][VAR14->VAR57 - 1] = (VAR59 / VAR14->VAR47) << VAR14->VAR43;
            }
            for (VAR16 = -VAR14->VAR61; VAR16 < 0; VAR16++)
                VAR14->VAR60[VAR52][VAR16] = VAR14->VAR60[VAR52][VAR16 + VAR14->VAR47];
            FUN14(VAR14, VAR14->VAR60[VAR52]);
            VAR14->VAR33++;
            if (VAR14->VAR33 == VAR14->VAR34)
            {
                VAR9 *VAR62;
                VAR63 *VAR64;
                int VAR65;
                VAR8->VAR66 = VAR14->VAR47;
                if ((VAR18 = FUN15(VAR2, VAR8, 0)) < 0)
                    return VAR18;
                for (VAR65 = 0; VAR65 < VAR14->VAR34; VAR65++)
                {
                    VAR62 = ((VAR9 **)VAR8->VAR67)[VAR65];
                    VAR64 = ((VAR63 **)VAR8->VAR67)[VAR65];
                    for (VAR16 = 0; VAR16 < VAR14->VAR47; VAR16++)
                    {
                        switch (VAR14->VAR68)
                        {
                        case VAR69:
                            *VAR62++ = FUN16(VAR14->VAR60[VAR65][VAR16]);
                            break;
                        case VAR70:
                        case VAR71:
                            *VAR64++ = FUN17(VAR14->VAR60[VAR65][VAR16]);
                            break;
                        }
                    }
                }
                *VAR4 = 1;
            }
        }
    }
    if (VAR14->VAR33 < VAR14->VAR34)
        *VAR4 = 0;
VAR31:
    VAR14->VAR29 = FUN18(&VAR14->VAR28) - 8 * (FUN18(&VAR14->VAR28) / 8);
    VAR16 = FUN18(&VAR14->VAR28) / 8;
    if (VAR16 > VAR11)
    {
        FUN3(VAR14->VAR2, VAR24, "", VAR16 - VAR11);
        VAR14->VAR26 = 0;
        VAR14->VAR27 = 0;
        return VAR72;
    }
    if (VAR14->VAR26)
    {
        VAR14->VAR27 += VAR16;
        VAR14->VAR26 -= VAR16;
        return VAR17;
    }
    else
        return VAR16;
}