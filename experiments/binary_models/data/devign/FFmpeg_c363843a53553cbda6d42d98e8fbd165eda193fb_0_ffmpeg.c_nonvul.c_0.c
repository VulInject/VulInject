static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR6->VAR9;
    VAR10 *VAR11 = VAR6->VAR12 ? VAR6->VAR13 : VAR6->VAR14->VAR15;
    int VAR16;
    if (!VAR6->VAR14->VAR15->VAR17 && VAR6->VAR13->VAR17)
    {
        VAR6->VAR14->VAR15->VAR18 = FUN2(VAR6->VAR13->VAR17 + VAR19);
        if (VAR6->VAR14->VAR15->VAR18)
        {
            memcpy(VAR6->VAR14->VAR15->VAR18, VAR6->VAR13->VAR18, VAR6->VAR13->VAR17);
            VAR6->VAR14->VAR15->VAR17 = VAR6->VAR13->VAR17;
        }
    }
    if ((VAR11->VAR20 == VAR21 && VAR22 == VAR23) || (VAR11->VAR20 == VAR24 && VAR25 < 0))
        VAR4->VAR26 = VAR4->VAR27 = VAR28;
    if (!(VAR11->VAR20 == VAR21 && VAR11->VAR15))
    {
        if (VAR6->VAR29 >= VAR6->VAR30)
        {
            FUN3(VAR4);
            return;
        }
        VAR6->VAR29++;
    }
    if (VAR11->VAR20 == VAR21)
    {
        int VAR31;
        VAR32 *VAR33 = FUN4(VAR4, VAR34, NULL);
        VAR6->VAR35 = VAR33 ? FUN5(VAR33) : -1;
        VAR6->VAR36 = VAR33 ? VAR33[4] : VAR37;
        for (VAR31 = 0; VAR31 < FUN6(VAR6->VAR38); VAR31++)
        {
            if (VAR33 && VAR31 < VAR33[5])
                VAR6->VAR38[VAR31] = FUN7(VAR33 + 8 + 8 * VAR31);
            else
                VAR6->VAR38[VAR31] = -1;
        }
    }
    if (VAR8)
        FUN8(VAR4);
    while (VAR8)
    {
        AVPacket VAR39 = *VAR4;
        VAR40 *VAR41 = FUN9(VAR6->VAR42, VAR8->VAR43->VAR44, NULL, 0);
        int VAR45 = FUN10(VAR8, VAR11, VAR41 ? VAR41->VAR46 : NULL, &VAR39.VAR47, &VAR39.VAR48, VAR4->VAR47, VAR4->VAR48, VAR4->VAR49 & VAR50);
        FF_DISABLE_DEPRECATION_WARNINGS if (VAR45 == 0 && VAR39.VAR47 != VAR4->VAR47 && VAR39.VAR51)
        {
            FF_ENABLE_DEPRECATION_WARNINGS VAR32 *VAR52 = FUN11(VAR39.VAR48 + VAR19);
            if (VAR52)
            {
                memcpy(VAR52, VAR39.VAR47, VAR39.VAR48);
                memset(VAR52 + VAR39.VAR48, 0, VAR19);
                VAR39.VAR47 = VAR52;
                VAR39.VAR53 = NULL;
                VAR45 = 1;
            }
            else
                VAR45 = FUN12(VAR54);
        }
        if (VAR45 > 0)
        {
            VAR4->VAR55 = NULL;
            VAR4->VAR56 = 0;
            FUN3(VAR4);
            VAR39.VAR53 = FUN13(VAR39.VAR47, VAR39.VAR48, VAR57, NULL, 0);
            if (!VAR39.VAR53)
                FUN14(1);
        }
        else if (VAR45 < 0)
        {
            VAR39 = *VAR4;
            FUN15(NULL, VAR58, "", VAR8->VAR43->VAR44, VAR4->VAR59, VAR11->VAR15 ? VAR11->VAR15->VAR44 : "");
            FUN16("", VAR45);
            if (VAR60)
                FUN14(1);
        }
        *VAR4 = VAR39;
        VAR8 = VAR8->VAR61;
    }
    if (!(VAR2->VAR62->VAR49 & VAR63))
    {
        if (VAR4->VAR27 != VAR28 && VAR4->VAR26 != VAR28 && VAR4->VAR27 > VAR4->VAR26)
        {
            FUN15(VAR2, VAR64, "" VAR65 "" VAR65 "", VAR4->VAR27, VAR4->VAR26, VAR6->VAR66, VAR6->VAR14->VAR67);
            VAR4->VAR26 = VAR4->VAR27 = VAR4->VAR26 + VAR4->VAR27 + VAR6->VAR68 + 1 - FUN17(VAR4->VAR26, VAR4->VAR27, VAR6->VAR68 + 1) - FUN18(VAR4->VAR26, VAR4->VAR27, VAR6->VAR68 + 1);
        }
        if ((VAR11->VAR20 == VAR24 || VAR11->VAR20 == VAR21) && VAR4->VAR27 != VAR28 && VAR6->VAR68 != VAR28)
        {
            int64_t VAR69 = VAR6->VAR68 + !(VAR2->VAR62->VAR49 & VAR70);
            if (VAR4->VAR27 < VAR69)
            {
                int VAR71 = VAR69 - VAR4->VAR27 > 2 || VAR11->VAR20 == VAR21 ? VAR64 : VAR72;
                FUN15(VAR2, VAR71, ""
                                    "" VAR65 "" VAR65 "",
                       VAR6->VAR66, VAR6->VAR14->VAR67, VAR6->VAR68, VAR4->VAR27);
                if (VAR60)
                {
                    FUN15(NULL, VAR73, "");
                    FUN14(1);
                }
                FUN15(VAR2, VAR71, "" VAR65 ""
                                    "",
                       VAR69);
                if (VAR4->VAR26 >= VAR4->VAR27)
                    VAR4->VAR26 = FUN19(VAR4->VAR26, VAR69);
                VAR4->VAR27 = VAR69;
            }
        }
    }
    VAR6->VAR68 = VAR4->VAR27;
    VAR6->VAR74 += VAR4->VAR48;
    VAR6->VAR75++;
    VAR4->VAR59 = VAR6->VAR67;
    if (VAR76)
    {
        FUN15(NULL, VAR77, ""
                                  "",
               FUN20(VAR6->VAR13->VAR20), FUN21(VAR4->VAR26), FUN22(VAR4->VAR26, &VAR6->VAR14->VAR78), FUN21(VAR4->VAR27), FUN22(VAR4->VAR27, &VAR6->VAR14->VAR78), VAR4->VAR48);
    }
    VAR16 = FUN23(VAR2, VAR4);
    if (VAR16 < 0)
    {
        FUN16("", VAR16);
        VAR79 = 1;
        FUN24(VAR6, VAR80 | VAR81, VAR81);
    }
    FUN3(VAR4);
}