static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0, VAR6, VAR7 = 0;
    VAR8 *VAR9 = NULL;
    FUN2(VAR4);
    while (!VAR7 && !VAR2->VAR10)
    {
        VAR11 *VAR12;
        AVPacket VAR13;
        VAR5 = FUN3(VAR2, &VAR13);
        if (VAR5 < 0)
        {
            if (VAR5 == FUN4(VAR14))
                return VAR5;
            for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
            {
                VAR12 = VAR2->VAR16[VAR6];
                if (VAR12->VAR17 && VAR12->VAR18)
                    FUN5(VAR2, NULL, VAR12->VAR19);
            }
            break;
        }
        VAR5 = 0;
        VAR12 = VAR2->VAR16[VAR13.VAR20];
        if (VAR13.VAR21 != VAR22 && VAR13.VAR23 != VAR22 && VAR13.VAR21 < VAR13.VAR23)
        {
            FUN6(VAR2, VAR24, "", VAR13.VAR20, FUN7(VAR13.VAR21), FUN7(VAR13.VAR23), VAR13.VAR25);
        }
        if (VAR2->VAR26 & VAR27)
            FUN6(VAR2, VAR28, "", VAR13.VAR20, FUN7(VAR13.VAR21), FUN7(VAR13.VAR23), VAR13.VAR25, VAR13.VAR29, VAR13.VAR30);
        if (VAR12->VAR18 && !VAR12->VAR17 && !(VAR2->VAR30 & VAR31))
        {
            VAR12->VAR17 = FUN8(VAR12->VAR32->VAR33);
            if (!VAR12->VAR17)
            {
                FUN6(VAR2, VAR34, ""
                                          "",
                       FUN9(VAR12->VAR32->VAR33));
                VAR12->VAR18 = VAR35;
            }
            else if (VAR12->VAR18 == VAR36)
                VAR12->VAR17->VAR30 |= VAR37;
            else if (VAR12->VAR18 == VAR38)
                VAR12->VAR17->VAR30 |= VAR39;
            else if (VAR12->VAR18 == VAR40)
                VAR12->VAR17->VAR30 |= VAR41;
        }
        if (!VAR12->VAR18 || !VAR12->VAR17)
        {
            *VAR4 = VAR13;
            FUN10(VAR2, VAR12, NULL, VAR4);
            if ((VAR2->VAR42->VAR30 & VAR43) && (VAR4->VAR30 & VAR44) && VAR4->VAR23 != VAR22)
            {
                FUN11(VAR2, VAR12->VAR19);
                FUN12(VAR12, VAR4->VAR45, VAR4->VAR23, 0, 0, VAR46);
            }
            VAR7 = 1;
        }
        else if (VAR12->VAR47 < VAR48)
        {
            if ((VAR5 = FUN5(VAR2, &VAR13, VAR13.VAR20)) < 0)
                return VAR5;
        }
        else
        {
            FUN13(&VAR13);
        }
        if (VAR4->VAR30 & VAR44)
            VAR12->VAR49 = 0;
        if (VAR12->VAR49)
        {
            FUN13(&VAR13);
            if (VAR7)
            {
                *VAR4 = VAR13;
            }
            VAR7 = 0;
        }
    }
    if (!VAR7 && VAR2->VAR10)
        VAR5 = FUN14(&VAR2->VAR10, &VAR2->VAR50, VAR4);
    if (VAR5 >= 0)
    {
        VAR11 *VAR12 = VAR2->VAR16[VAR4->VAR20];
        int VAR51 = 0;
        if (VAR12->VAR52 && VAR4->VAR21 != VAR22)
        {
            int64_t VAR21 = VAR4->VAR21 - (FUN15(VAR4->VAR21) ? VAR53 : 0);
            int64_t VAR54 = FUN16(VAR12, VAR21);
            int VAR29 = FUN16(VAR12, VAR4->VAR29);
            int64_t VAR55 = VAR54 + VAR29;
            if (VAR29 > 0 && VAR55 >= VAR12->VAR52 && VAR54 < VAR12->VAR56)
                VAR51 = FUN17(VAR55 - VAR12->VAR52, VAR29);
        }
        if (VAR12->VAR57 || VAR51)
        {
            VAR58 *VAR59 = FUN18(VAR4, VAR60, 10);
            if (VAR59)
            {
                FUN19(VAR59, VAR12->VAR57);
                FUN19(VAR59 + 4, VAR51);
                FUN6(VAR2, VAR28, "", VAR12->VAR57);
            }
            VAR12->VAR57 = 0;
        }
        if (VAR12->VAR61)
        {
            for (VAR6 = 0; VAR6 < VAR12->VAR62; VAR6++)
            {
                VAR63 *VAR64 = &VAR12->VAR65[VAR6];
                VAR58 *VAR66;
                if (FUN20(VAR4, VAR64->VAR67, NULL))
                    continue;
                VAR66 = FUN18(VAR4, VAR64->VAR67, VAR64->VAR25);
                if (!VAR66)
                {
                    FUN6(VAR2, VAR24, "");
                    continue;
                }
                memcpy(VAR66, VAR64->VAR68, VAR64->VAR25);
            }
            VAR12->VAR61 = 0;
        }
        if (!(VAR2->VAR30 & VAR69))
            FUN21(VAR4);
    }
    FUN22(VAR2, "", VAR70, &VAR9);
    if (VAR9)
    {
        VAR2->VAR71 |= VAR72;
        FUN23(&VAR2->VAR9, VAR9, 0);
        FUN24(&VAR9);
        FUN25(VAR2, "", NULL, VAR70);
    }
    if (VAR2->VAR26 & VAR27)
        FUN6(VAR2, VAR28, ""
                                "",
               VAR4->VAR20, FUN7(VAR4->VAR21), FUN7(VAR4->VAR23), VAR4->VAR25, VAR4->VAR29, VAR4->VAR30);
    return VAR5;
}