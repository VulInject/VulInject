static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR3 *VAR5 = NULL;
    int VAR6, VAR7, VAR8;
    FUN2(VAR2->VAR9, "", VAR2->VAR10);
    for (VAR6 = 0; VAR6 < VAR2->VAR11; VAR6++)
    {
        VAR4 = FUN3(VAR2, &VAR2->VAR12[VAR6], VAR13);
        if (VAR4)
            break;
    }
    if (!VAR4)
    {
        FUN4(VAR2->VAR9, VAR14, "");
        return VAR15;
    }
    for (VAR6 = 0; VAR6 < VAR4->VAR16; VAR6++)
    {
        VAR3 *VAR17 = NULL;
        VAR18 *VAR19 = NULL;
        VAR18 *VAR20 = NULL;
        VAR18 *VAR21 = NULL;
        VAR22 *VAR23 = NULL;
        VAR24 *VAR25 = NULL;
        VAR26 *VAR27 = NULL;
        const VAR28 *VAR29 = NULL;
        const VAR28 *VAR30 = NULL;
        VAR31 *VAR32;
        if (!(VAR19 = FUN3(VAR2, &VAR4->VAR33[VAR6], VAR34)))
        {
            FUN4(VAR2->VAR9, VAR14, "");
            continue;
        }
        if (!(VAR19->VAR35 = FUN3(VAR2, &VAR19->VAR36, VAR37)))
        {
            FUN4(VAR2->VAR9, VAR14, "");
            continue;
        }
        for (VAR7 = 0; VAR7 < VAR19->VAR35->VAR38; VAR7++)
        {
            VAR25 = FUN3(VAR2, &VAR19->VAR35->VAR39[VAR7], VAR40);
            if (!VAR25)
                continue;
            for (VAR8 = 0; VAR8 < VAR2->VAR11; VAR8++)
            {
                VAR5 = FUN3(VAR2, &VAR2->VAR12[VAR8], VAR41);
                if (!VAR5)
                    continue;
                if (!memcmp(VAR5->VAR42, VAR25->VAR43, 16))
                {
                    VAR17 = VAR5;
                    break;
                }
            }
            if (!VAR17)
            {
                FUN4(VAR2->VAR9, VAR14, "", VAR19->VAR44);
                break;
            }
            for (VAR8 = 0; VAR8 < VAR17->VAR16; VAR8++)
            {
                if (!(VAR21 = FUN3(VAR2, &VAR17->VAR33[VAR8], VAR34)))
                {
                    FUN4(VAR2->VAR9, VAR14, "");
                    return VAR15;
                }
                if (VAR21->VAR44 == VAR25->VAR45)
                {
                    VAR20 = VAR21;
                    break;
                }
            }
            if (!VAR20)
            {
                FUN4(VAR2->VAR9, VAR14, "", VAR19->VAR44);
                break;
            }
        }
        if (!VAR20)
            continue;
        VAR32 = FUN5(VAR2->VAR9, NULL);
        if (!VAR32)
        {
            FUN4(VAR2->VAR9, VAR14, "");
            return FUN6(VAR46);
        }
        VAR32->VAR47 = VAR20->VAR44;
        VAR32->VAR48 = VAR20;
        VAR32->VAR49 = VAR25->VAR49;
        if (VAR32->VAR49 == -1)
            VAR32->VAR49 = VAR50;
        VAR32->VAR51 = VAR25->VAR52;
        FUN7(VAR32, 64, VAR19->VAR53.VAR54, VAR19->VAR53.VAR55);
        if (!(VAR20->VAR35 = FUN3(VAR2, &VAR20->VAR36, VAR37)))
        {
            FUN4(VAR2->VAR9, VAR14, "");
            return VAR15;
        }
        FUN8(VAR2->VAR9, "", VAR20->VAR35->VAR56);
        VAR29 = FUN9(VAR57, &VAR20->VAR35->VAR56);
        VAR32->VAR58->VAR59 = VAR29->VAR47;
        VAR17->VAR23 = FUN3(VAR2, &VAR17->VAR60, VAR61);
        if (VAR17->VAR23)
        {
            if (VAR17->VAR23->VAR62 == VAR63)
            {
                for (VAR7 = 0; VAR7 < VAR17->VAR23->VAR64; VAR7++)
                {
                    VAR22 *VAR65 = FUN3(VAR2, &VAR17->VAR23->VAR66[VAR7], VAR67);
                    if (!VAR65)
                    {
                        FUN4(VAR2->VAR9, VAR14, "");
                        continue;
                    }
                    if (VAR65->VAR68 == VAR20->VAR44)
                    {
                        VAR23 = VAR65;
                        break;
                    }
                }
            }
            else if (VAR17->VAR23->VAR62 == VAR67)
                VAR23 = VAR17->VAR23;
        }
        if (!VAR23)
        {
            FUN4(VAR2->VAR9, VAR69, "", VAR20->VAR44, VAR32->VAR70);
            continue;
        }
        FUN8(VAR2->VAR9, "", VAR23->VAR71);
        FUN8(VAR2->VAR9, "", VAR23->VAR27);
        VAR27 = &VAR23->VAR27;
        if (FUN10(VAR27, VAR72))
        {
            FUN4(VAR2->VAR9, VAR69, "");
            for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
            {
                VAR73 *VAR74 = VAR2->VAR75[VAR8];
                if (VAR74->VAR62 == VAR76)
                {
                    VAR27 = &((VAR77 *)VAR74)->VAR78;
                    break;
                }
            }
        }
        VAR29 = FUN9(VAR79, &VAR23->VAR71);
        VAR32->VAR58->VAR80 = VAR29->VAR47;
        if (VAR23->VAR81)
        {
            VAR32->VAR58->VAR81 = VAR23->VAR81;
            VAR32->VAR58->VAR82 = VAR23->VAR82;
        }
        if (VAR32->VAR58->VAR59 == VAR83)
        {
            VAR30 = FUN9(VAR84, VAR27);
            if (VAR32->VAR58->VAR80 == VAR85)
                VAR32->VAR58->VAR80 = VAR30->VAR47;
            VAR32->VAR58->VAR86 = VAR23->VAR86;
            VAR32->VAR58->VAR87 = VAR23->VAR87;
            if (VAR32->VAR58->VAR80 == VAR88)
                VAR32->VAR58->VAR89 = VAR23->VAR89;
            VAR32->VAR90 = VAR91;
        }
        else if (VAR32->VAR58->VAR59 == VAR92)
        {
            VAR30 = FUN9(VAR84, VAR27);
            if (VAR32->VAR58->VAR80 == VAR85)
                VAR32->VAR58->VAR80 = VAR30->VAR47;
            VAR32->VAR58->VAR93 = VAR23->VAR93;
            VAR32->VAR58->VAR94 = VAR23->VAR95;
            VAR32->VAR58->VAR96 = VAR23->VAR96.VAR54 / VAR23->VAR96.VAR55;
            if (VAR32->VAR58->VAR80 == VAR97)
            {
                if (VAR23->VAR95 > 16 && VAR23->VAR95 <= 24)
                    VAR32->VAR58->VAR80 = VAR98;
                else if (VAR23->VAR95 == 32)
                    VAR32->VAR58->VAR80 = VAR99;
            }
            else if (VAR32->VAR58->VAR80 == VAR100)
            {
                if (VAR23->VAR95 > 16 && VAR23->VAR95 <= 24)
                    VAR32->VAR58->VAR80 = VAR101;
                else if (VAR23->VAR95 == 32)
                    VAR32->VAR58->VAR80 = VAR102;
            }
            else if (VAR32->VAR58->VAR80 == VAR103)
            {
                VAR32->VAR90 = VAR104;
            }
        }
        if (VAR32->VAR58->VAR59 != VAR105 && (*VAR27)[15] > 0x01)
        {
            FUN4(VAR2->VAR9, VAR106, "");
            VAR32->VAR90 = VAR104;
        }
    }
    return 0;
}