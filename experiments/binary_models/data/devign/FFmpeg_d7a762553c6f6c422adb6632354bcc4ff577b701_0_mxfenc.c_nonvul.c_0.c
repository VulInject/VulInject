static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    uint8_t VAR8[FUN2(VAR9)] = {0};
    const VAR10 *VAR11 = NULL;
    VAR12 *VAR13;
    int64_t VAR14 = 0;
    if (!VAR2->VAR15)
        return -1;
    if (VAR2->VAR16 == &VAR17 && VAR2->VAR15 != 1)
    {
        FUN3(VAR2, VAR18, "");
        return -1;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
    {
        VAR19 *VAR20 = VAR2->VAR21[VAR6];
        VAR22 *VAR23 = FUN4(sizeof(*VAR23));
        if (!VAR23)
            return FUN5(VAR24);
        VAR20->VAR5 = VAR23;
        if (((VAR6 == 0) ^ (VAR20->VAR25->VAR26 == VAR27)) && VAR2->VAR16 != &VAR17)
        {
            FUN3(VAR2, VAR18, "");
            return -1;
        }
        if (VAR20->VAR25->VAR26 == VAR27)
        {
            const VAR28 *VAR29 = FUN6(VAR20->VAR25->VAR30);
            AVRational VAR31, VAR32 = VAR20->VAR33;
            VAR23->VAR34 = 8;
            VAR23->VAR35 = 2;
            VAR23->VAR36 = 0xFF;
            if (VAR29)
            {
                VAR23->VAR34 = VAR29->VAR37[0].VAR38 + 1;
                VAR23->VAR35 = 1 << VAR29->VAR39;
            }
            switch (FUN7(VAR2, VAR20))
            {
            case VAR40:
                VAR23->VAR36 = 0;
                break;
            case VAR41:
                VAR23->VAR36 = 6;
                break;
            case VAR42:
                VAR23->VAR36 = 1;
                break;
            case VAR43:
                VAR23->VAR36 = 3;
                break;
            }
            VAR4->VAR44 = (VAR32.VAR45 + VAR32.VAR46 / 2) / VAR32.VAR46;
            VAR11 = FUN8(VAR2, VAR32);
            if (!VAR11)
            {
                FUN3(VAR2, VAR18, "", VAR32.VAR45, VAR32.VAR46);
                return FUN5(VAR47);
            }
            VAR4->VAR33 = VAR11->VAR33;
            VAR31 = FUN9(VAR4->VAR33);
            FUN10(VAR20, 64, VAR4->VAR33.VAR46, VAR4->VAR33.VAR45);
            if ((VAR7 = FUN11(VAR2, VAR20, VAR31)) < 0)
                return VAR7;
            VAR23->VAR48 = VAR20->VAR25->VAR49 ? VAR20->VAR25->VAR49 : VAR20->VAR25->VAR50;
            if (VAR2->VAR16 == &VAR51)
            {
                if ((VAR23->VAR48 == 50000000) && (VAR4->VAR33.VAR45 == 25))
                {
                    VAR23->VAR52 = 3;
                }
                else if ((VAR23->VAR48 == 49999840 || VAR23->VAR48 == 50000000) && (VAR4->VAR33.VAR45 != 25))
                {
                    VAR23->VAR52 = 5;
                }
                else if (VAR23->VAR48 == 40000000)
                {
                    if (VAR4->VAR33.VAR45 == 25)
                        VAR23->VAR52 = 7;
                    else
                        VAR23->VAR52 = 9;
                }
                else if (VAR23->VAR48 == 30000000)
                {
                    if (VAR4->VAR33.VAR45 == 25)
                        VAR23->VAR52 = 11;
                    else
                        VAR23->VAR52 = 13;
                }
                else
                {
                    FUN3(VAR2, VAR18, "");
                    return -1;
                }
                VAR4->VAR53 = VAR54;
                VAR4->VAR53 += 16 + 4 + (VAR55)VAR23->VAR48 * VAR4->VAR33.VAR46 / (8 * VAR4->VAR33.VAR45);
                VAR4->VAR53 += FUN12(VAR4->VAR53);
                VAR4->VAR53 += 16 + 4 + 4 + VAR11->VAR56[0] * 8 * 4;
                VAR4->VAR53 += FUN12(VAR4->VAR53);
                VAR23->VAR57 = 1;
            }
        }
        else if (VAR20->VAR25->VAR26 == VAR58)
        {
            if (VAR20->VAR25->VAR59 != 48000)
            {
                FUN3(VAR2, VAR18, "");
                return -1;
            }
            FUN10(VAR20, 64, 1, VAR20->VAR25->VAR59);
            if (VAR2->VAR16 == &VAR51)
            {
                if (VAR20->VAR52 != 1)
                {
                    FUN3(VAR2, VAR18, "");
                    return -1;
                }
                if (VAR20->VAR25->VAR60 != VAR61 && VAR20->VAR25->VAR60 != VAR62)
                {
                    FUN3(VAR2, VAR18, "");
                }
                VAR23->VAR52 = ((VAR22 *)VAR2->VAR21[0]->VAR5)->VAR52 + 1;
            }
            else if (VAR2->VAR16 == &VAR17)
            {
                AVRational VAR32 = FUN9(VAR4->VAR63);
                if (VAR20->VAR25->VAR60 != VAR61 && VAR20->VAR25->VAR60 != VAR62)
                {
                    FUN3(VAR2, VAR18, "");
                    return VAR64;
                }
                if (VAR20->VAR25->VAR65 != 1)
                {
                    FUN3(VAR2, VAR18, "");
                    return FUN5(VAR47);
                }
                VAR11 = FUN8(VAR2, VAR32);
                if (!VAR11)
                {
                    FUN3(VAR2, VAR18, "", VAR32.VAR45, VAR32.VAR46);
                    return FUN5(VAR47);
                }
                VAR4->VAR33 = VAR20->VAR33;
                if ((VAR7 = FUN11(VAR2, VAR20, FUN9(VAR11->VAR33))) < 0)
                    return VAR7;
                VAR4->VAR44 = (VAR32.VAR45 + VAR32.VAR46 / 2) / VAR32.VAR46;
                VAR4->VAR53 = (FUN13(VAR20->VAR25->VAR60) * VAR20->VAR25->VAR65) >> 3;
                VAR23->VAR52 = 2;
            }
            else
            {
                VAR4->VAR66 = 1;
            }
        }
        if (!VAR23->VAR52)
        {
            VAR23->VAR52 = FUN14(VAR20->VAR25->VAR60);
            if (VAR23->VAR52 == -1)
            {
                FUN3(VAR2, VAR18, ""
                                        "",
                       VAR6);
                return -1;
            }
        }
        VAR23->VAR67 = &VAR9[VAR23->VAR52].VAR67;
        memcpy(VAR23->VAR68, VAR9[VAR23->VAR52].VAR69, 15);
        VAR23->VAR68[15] = VAR8[VAR23->VAR52];
        FUN15(VAR2, "", VAR23->VAR68);
        if (!VAR8[VAR23->VAR52])
            VAR4->VAR70++;
        VAR8[VAR23->VAR52]++;
    }
    if (VAR2->VAR16 == &VAR51 || VAR2->VAR16 == &VAR17)
    {
        VAR4->VAR70 = 1;
    }
    if (!(VAR2->VAR71 & VAR72))
        FUN16(VAR2);
    for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
    {
        VAR22 *VAR23 = VAR2->VAR21[VAR6]->VAR5;
        VAR23->VAR68[13] = VAR8[VAR23->VAR52];
        if (!memcmp(VAR23->VAR68, VAR9[15].VAR69, 13))
            VAR23->VAR73 = (0x15 << 24) | FUN17(VAR23->VAR68 + 13);
        else
            VAR23->VAR73 = FUN17(VAR23->VAR68 + 12);
    }
    if (VAR13 = FUN18(VAR2->VAR74, "", NULL, 0))
        VAR14 = FUN19(VAR13->VAR75);
    if (VAR14)
        VAR4->VAR14 = FUN20(VAR14);
    VAR4->VAR76 = -1;
    VAR4->VAR77 = FUN4(sizeof(*VAR4->VAR77));
    if (!VAR4->VAR77)
        return FUN5(VAR24);
    VAR4->VAR77->VAR5 = FUN4(sizeof(VAR22));
    if (!VAR4->VAR77->VAR5)
        return FUN5(VAR24);
    VAR4->VAR77->VAR52 = -1;
    if (!VAR11)
        VAR11 = FUN8(VAR2, (VAR78){1, 25});
    if (FUN21(VAR2, VAR11->VAR56, VAR4->VAR33) < 0)
        return -1;
    return 0;
}