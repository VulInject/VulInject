static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    const int VAR14 = 1 << VAR2->VAR15;
    const int VAR16 = VAR2->VAR17->VAR18;
    VAR19 *VAR20 = VAR12->VAR20, *VAR21;
    VAR22 *VAR23 = VAR12->VAR23;
    VAR22 **VAR24 = VAR12->VAR24;
    VAR22 **VAR25 = VAR24;
    VAR22 **VAR26 = VAR24 + VAR14;
    int VAR27 = 0, VAR28 = -1, VAR29, VAR30, VAR31, VAR32 = 0;
    VAR5 *VAR33 = VAR12->VAR34;
    memset(VAR33, 0xff, 65536 * sizeof(*VAR33));
    memset(VAR24, 0, 2 * VAR14 * sizeof(*VAR24));
    VAR25[0] = VAR23 + VAR14;
    VAR25[0]->VAR35 = 0;
    VAR25[0]->VAR36 = 0;
    VAR25[0]->VAR37 = VAR8->VAR38;
    VAR25[0]->VAR39 = VAR8->VAR39;
    VAR25[0]->VAR40 = VAR8->VAR40;
    if (VAR16 == VAR41 || VAR16 == VAR42 || VAR16 == VAR43)
        VAR25[0]->VAR39 = VAR8->VAR44;
    if (VAR16 == VAR45)
        VAR25[0]->VAR37 = VAR8->VAR46;
    if (VAR16 == VAR47)
    {
        if (VAR8->VAR37 == 0)
        {
            VAR25[0]->VAR37 = 127;
            VAR25[0]->VAR39 = 0;
        }
        else
        {
            VAR25[0]->VAR37 = VAR8->VAR37;
            VAR25[0]->VAR39 = VAR8->VAR48;
        }
    }
    for (VAR29 = 0; VAR29 < VAR9; VAR29++)
    {
        VAR22 *VAR49 = VAR23 + VAR14 * (VAR29 & 1);
        VAR22 **VAR50;
        int VAR51 = VAR4[VAR29 * VAR10];
        int VAR52 = 0;
        memset(VAR26, 0, VAR14 * sizeof(VAR22 *));
        for (VAR30 = 0; VAR30 < VAR14 && VAR25[VAR30]; VAR30++)
        {
            const int VAR53 = (VAR30 < VAR14 / 2) ? 1 : 0;
            const int VAR37 = VAR25[VAR30]->VAR37;
            int VAR54;
            if (VAR16 == VAR45)
            {
                const int VAR48 = ((VAR25[VAR30]->VAR39 * VAR8->VAR55) + (VAR25[VAR30]->VAR40 * VAR8->VAR56)) / 64;
                const int VAR57 = (VAR51 - VAR48) / VAR37;
                const int VAR58 = FUN2(VAR57 - VAR53, -8, 6);
                const int VAR59 = FUN2(VAR57 + VAR53, -7, 7);
                for (VAR54 = VAR58; VAR54 <= VAR59; VAR54++)
                {
                    const int VAR60 = VAR54 & 0xf;
                    int VAR61 = VAR48 + VAR54 * VAR37;
                    int VAR62;
                    uint32_t VAR35;
                    int VAR63;
                    VAR22 *VAR50;
                    VAR5 *VAR64;
                    VAR61 = FUN3(VAR61);
                    VAR62 = VAR51 - VAR61;
                    VAR35 = VAR25[VAR30]->VAR35 + VAR62 * VAR62;
                    if (VAR35 < VAR25[VAR30]->VAR35)
                        goto VAR65##VAR66;
                    VAR64 = &VAR33[(VAR67)VAR61];
                    if (*VAR64 == VAR32)
                        goto VAR65##VAR66;
                    if (VAR52 < VAR14)
                    {
                        VAR63 = VAR52++;
                    }
                    else
                    {
                        VAR63 = (VAR14 >> 1) + (VAR52 & ((VAR14 >> 1) - 1));
                        if (VAR35 > VAR26[VAR63]->VAR35)
                            goto VAR65##VAR66;
                        VAR52++;
                    }
                    *VAR64 = VAR32;
                    VAR50 = VAR26[VAR63];
                    if (!VAR50)
                    {
                        FUN4(VAR27 < VAR68 << VAR2->VAR15);
                        VAR50 = VAR49++;
                        VAR26[VAR63] = VAR50;
                        VAR50->VAR36 = VAR27++;
                    }
                    VAR50->VAR35 = VAR35;
                    VAR50->VAR37 = VAR69;
                    VAR50->VAR40 = VAR25[VAR30]->VAR39;
                    VAR50->VAR39 = VAR61;
                    VAR20[VAR50->VAR36].VAR60 = VAR60;
                    VAR20[VAR50->VAR36].VAR70 = VAR25[VAR30]->VAR36;
                    while (VAR63 > 0)
                    {
                        int VAR71 = (VAR63 - 1) >> 1;
                        if (VAR26[VAR71]->VAR35 <= VAR35)
                            break;
                        FUN5(VAR22 *, VAR26[VAR71], VAR26[VAR63]);
                        VAR63 = VAR71;
                    }
                    VAR65##VAR66:;
                    FUN6(VAR72, FUN7(16, (VAR73[VAR60] * VAR37) >> 8));
                }
            }
            else if (VAR16 == VAR41 || VAR16 == VAR42 || VAR16 == VAR43)
            {
                const int VAR48 = VAR25[VAR30]->VAR39;
                const int VAR57 = (VAR51 - VAR48) * 4 / VAR74;
                int VAR58 = FUN2(VAR57 - VAR53, -7, 6);
                int VAR59 = FUN2(VAR57 + VAR53, -6, 7);
                if (VAR58 <= 0)
                    VAR58--;
                if (VAR59 < 0)
                    VAR59--;
                for (VAR54 = VAR58; VAR54 <= VAR59; VAR54++)
                {
                    const int VAR60 = VAR54 < 0 ? 7 - VAR54 : VAR54;
                    int VAR61 = VAR48 + (VAR74 * VAR75[VAR60]) / 8;
                    FUN6(VAR66, VAR69);
                }
                FUN8(VAR76, VAR77[VAR37], FUN2(VAR37 + VAR78[VAR60], 0, 88));
            }
            else
            {
                FUN8(VAR79, VAR37, FUN2((VAR37 * VAR80[VAR60]) >> 8, 127, 24567));
            }
        }
        VAR50 = VAR25;
        VAR25 = VAR26;
        VAR26 = VAR50;
        VAR32++;
        if (VAR32 == 255)
        {
            memset(VAR33, 0xff, 65536 * sizeof(*VAR33));
            VAR32 = 0;
        }
        if (VAR25[0]->VAR35 > (1 << 28))
        {
            for (VAR30 = 1; VAR30 < VAR14 && VAR25[VAR30]; VAR30++)
                VAR25[VAR30]->VAR35 -= VAR25[0]->VAR35;
            VAR25[0]->VAR35 = 0;
        }
        if (VAR29 == VAR28 + VAR68)
        {
            VAR21 = &VAR20[VAR25[0]->VAR36];
            for (VAR31 = VAR29; VAR31 > VAR28; VAR31--)
            {
                VAR6[VAR31] = VAR21->VAR60;
                VAR21 = &VAR20[VAR21->VAR70];
            }
            VAR28 = VAR29;
            VAR27 = 0;
            memset(VAR25 + 1, 0, (VAR14 - 1) * sizeof(VAR22 *));
        }
    }
    VAR21 = &VAR20[VAR25[0]->VAR36];
    for (VAR29 = VAR9 - 1; VAR29 > VAR28; VAR29--)
    {
        VAR6[VAR29] = VAR21->VAR60;
        VAR21 = &VAR20[VAR21->VAR70];
    }
    VAR8->VAR48 = VAR25[0]->VAR39;
    VAR8->VAR39 = VAR25[0]->VAR39;
    VAR8->VAR40 = VAR25[0]->VAR40;
    VAR8->VAR38 = VAR25[0]->VAR37;
    VAR8->VAR37 = VAR25[0]->VAR37;
    VAR8->VAR46 = VAR25[0]->VAR37;
}