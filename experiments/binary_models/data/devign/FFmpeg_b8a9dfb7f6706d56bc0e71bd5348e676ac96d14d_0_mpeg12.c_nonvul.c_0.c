static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR5 *VAR11;
    const VAR5 *VAR12;
    uint32_t VAR13;
    int VAR14, VAR15;
    VAR16 *VAR17 = VAR3;
    VAR18 *VAR19 = &VAR9->VAR20;
    FUN2(VAR2, "");
    if (VAR7 == 0 || (VAR7 == 4 && FUN3(VAR6) == VAR21))
    {
        if (VAR19->VAR22 == 0 && VAR19->VAR23)
        {
            *VAR17 = *(VAR16 *)VAR19->VAR23;
            VAR19->VAR23 = NULL;
            *VAR4 = sizeof(VAR16);
        }
        return VAR7;
    }
    if (VAR19->VAR24 & VAR25)
    {
        int VAR26 = FUN4(&VAR19->VAR27, VAR6, VAR7);
        if (FUN5(&VAR19->VAR27, VAR26, (const VAR5 **)&VAR6, &VAR7) < 0)
            return VAR7;
    }
    VAR12 = VAR6;
    VAR11 = VAR6 + VAR7;
    if (VAR9->VAR28 % 2 == 1)
    {
        VAR9->VAR28++;
        if (VAR2->VAR24 & VAR29)
        {
            *VAR4 = sizeof(VAR30);
            goto VAR31;
        }
    }
    if (VAR9->VAR32 == 0 && VAR2->VAR33 == FUN6(""))
        FUN7(VAR2);
    VAR9->VAR34 = 0;
    for (;;)
    {
        VAR13 = -1;
        VAR12 = FUN8(VAR12, VAR11, &VAR13);
        if (VAR13 > 0x1ff)
        {
            if (VAR19->VAR35 != VAR36 || VAR2->VAR37 <= VAR38)
            {
                if (VAR2->VAR39 > 1)
                {
                    int VAR40;
                    VAR2->FUN9(VAR2, VAR41, (void **)&(VAR19->VAR42[0]), NULL, VAR9->VAR34);
                    for (VAR40 = 0; VAR40 < VAR9->VAR34; VAR40++)
                        VAR19->VAR43 += VAR19->VAR42[VAR40]->VAR43;
                }
                if (FUN10(VAR2, VAR17))
                {
                    if (VAR19->VAR44 || VAR19->VAR22)
                        *VAR4 = sizeof(VAR30);
                }
            }
            return FUN11(0, VAR12 - VAR6 - VAR19->VAR27.VAR45);
        }
        VAR15 = VAR11 - VAR12;
        if (VAR2->VAR46 & VAR47)
        {
            FUN12(VAR2, VAR48, "", VAR13, VAR12 - VAR6, VAR15);
        }
        switch (VAR13)
        {
        case VAR49:
            FUN13(VAR2, VAR12, VAR15);
            break;
        case VAR50:
            FUN14(VAR2, VAR12, VAR15);
            break;
        case VAR51:
            FUN15(VAR2, VAR12, VAR15);
            break;
        case VAR52:
            FUN16(VAR2, VAR12, VAR15);
            break;
        case VAR53:
            VAR19->VAR54 = 0;
            FUN17(VAR2, VAR12, VAR15);
            break;
        default:
            if (VAR13 >= VAR55 && VAR13 <= VAR56)
            {
                int VAR57 = VAR13 - VAR55;
                if (VAR19->VAR44 == NULL)
                {
                    if (VAR19->VAR35 == VAR36)
                        break;
                }
                if (VAR2->VAR58 && VAR19->VAR35 == VAR36)
                    break;
                if ((VAR2->VAR37 >= VAR59 && VAR19->VAR35 == VAR36) || (VAR2->VAR37 >= VAR60 && VAR19->VAR35 != VAR61) || VAR2->VAR37 >= VAR62)
                    break;
                if (VAR2->VAR58 >= 5)
                    break;
                if (!VAR9->VAR32)
                    break;
                if (VAR19->VAR63 == VAR64)
                {
                    if (VAR57 < VAR2->VAR65 || VAR57 >= VAR19->VAR66 - VAR2->VAR67)
                        break;
                }
                if (VAR19->VAR68)
                {
                    VAR19->VAR68 = 0;
                    if (FUN18(VAR19) < 0)
                        return -1;
                }
                if (!VAR19->VAR69)
                {
                    FUN12(VAR2, VAR70, "");
                    return -1;
                }
                if (VAR2->VAR39 > 1)
                {
                    int VAR71 = (VAR19->VAR66 * VAR9->VAR34 + VAR2->VAR39 / 2) / VAR2->VAR39;
                    if (VAR71 <= VAR57)
                    {
                        VAR18 *VAR42 = VAR19->VAR42[VAR9->VAR34];
                        VAR42->VAR72 = VAR57;
                        VAR42->VAR73 = VAR19->VAR66;
                        if (VAR9->VAR34)
                        {
                            VAR19->VAR42[VAR9->VAR34 - 1]->VAR73 = VAR57;
                            FUN19(VAR42, VAR19);
                        }
                        FUN20(&VAR42->VAR74, VAR12, VAR15 * 8);
                        VAR9->VAR34++;
                    }
                    VAR12 += 2;
                }
                else
                {
                    VAR14 = FUN21(VAR9, VAR57, &VAR12, VAR15);
                    FUN22();
                    if (VAR14 < 0)
                    {
                        if (VAR19->VAR75 >= 0 && VAR19->VAR76 >= 0)
                            FUN23(VAR19, VAR19->VAR75, VAR19->VAR76, VAR19->VAR77, VAR19->VAR57, VAR78 | VAR79 | VAR80);
                    }
                    else
                    {
                        FUN23(VAR19, VAR19->VAR75, VAR19->VAR76, VAR19->VAR77 - 1, VAR19->VAR57, VAR81 | VAR82 | VAR83);
                    }
                }
            }
            break;
        }
    }
}