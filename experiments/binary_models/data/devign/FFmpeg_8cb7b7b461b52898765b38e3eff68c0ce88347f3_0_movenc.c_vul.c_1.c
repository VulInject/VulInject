int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR6->VAR12[VAR4->VAR13];
    VAR14 *VAR15 = VAR11->VAR15;
    unsigned int VAR16 = 0;
    int VAR17 = VAR4->VAR17;
    VAR18 *VAR19 = NULL;
    if (VAR6->VAR20 & VAR21)
    {
        int VAR22;
        if (VAR6->VAR23 > 0)
        {
            if (!VAR11->VAR24)
            {
                if ((VAR22 = FUN2(&VAR11->VAR24)) < 0)
                    return VAR22;
            }
            VAR9 = VAR11->VAR24;
        }
        else
        {
            if (!VAR6->VAR24)
            {
                if ((VAR22 = FUN2(&VAR6->VAR24)) < 0)
                    return VAR22;
            }
            VAR9 = VAR6->VAR24;
        }
    }
    if (VAR15->VAR25 == VAR26)
    {
        static uint16_t VAR27[16] = {13, 14, 16, 18, 20, 21, 27, 32, 6, 0, 0, 0, 0, 0, 0, 1};
        int VAR28 = 0;
        while (VAR28 < VAR17 && VAR16 < 100)
        {
            VAR28 += VAR27[(VAR4->VAR29[VAR28] >> 3) & 0x0F];
            VAR16++;
        }
        if (VAR16 > 1)
        {
            FUN3(VAR2, VAR30, "");
            return -1;
        }
    }
    else if (VAR11->VAR31)
        VAR16 = VAR17 / VAR11->VAR31;
    else
        VAR16 = 1;
    if (VAR11->VAR32 == 0 && VAR15->VAR33 > 0)
    {
        VAR11->VAR32 = VAR15->VAR33;
        VAR11->VAR34 = FUN4(VAR11->VAR32);
        memcpy(VAR11->VAR34, VAR15->VAR35, VAR11->VAR32);
    }
    if (VAR15->VAR25 == VAR36 && VAR11->VAR32 > 0 && *(VAR18 *)VAR11->VAR34 != 1)
    {
        if (VAR11->VAR37 >= 0 && VAR11->VAR37 < VAR6->VAR38)
        {
            FUN5(VAR4->VAR29, &VAR19, &VAR17);
            FUN6(VAR9, VAR19, VAR17);
        }
        else
        {
            VAR17 = FUN7(VAR9, VAR4->VAR29, VAR4->VAR17);
        }
    }
    else if (VAR15->VAR25 == VAR39 && VAR11->VAR32 > 6 && (FUN8(VAR11->VAR34) == 1 || FUN9(VAR11->VAR34) == 1))
    {
        if (VAR11->VAR37 >= 0 && VAR11->VAR37 < VAR6->VAR38)
        {
            FUN10(VAR4->VAR29, &VAR19, &VAR17, 0, NULL);
            FUN6(VAR9, VAR19, VAR17);
        }
        else
        {
            VAR17 = FUN11(VAR9, VAR4->VAR29, VAR4->VAR17, 0, NULL);
        }
    }
    else
    {
        FUN6(VAR9, VAR4->VAR29, VAR17);
    }
    if ((VAR15->VAR25 == VAR40 || VAR15->VAR25 == VAR41) && !VAR11->VAR32)
    {
        VAR11->VAR32 = VAR17;
        VAR11->VAR34 = FUN4(VAR17);
        if (!VAR11->VAR34)
            return FUN12(VAR42);
        memcpy(VAR11->VAR34, VAR4->VAR29, VAR17);
    }
    if (VAR11->VAR43 >= VAR11->VAR44)
    {
        unsigned VAR45 = 2 * (VAR11->VAR43 + VAR46);
        if (FUN13(&VAR11->VAR47, VAR45, sizeof(*VAR11->VAR47)))
            return FUN12(VAR42);
        VAR11->VAR44 = VAR45;
    }
    VAR11->VAR47[VAR11->VAR43].VAR48 = FUN14(VAR9) - VAR17;
    VAR11->VAR47[VAR11->VAR43].VAR16 = VAR16;
    VAR11->VAR47[VAR11->VAR43].VAR17 = VAR17;
    VAR11->VAR47[VAR11->VAR43].VAR49 = VAR16;
    VAR11->VAR47[VAR11->VAR43].VAR50 = VAR4->VAR50;
    if (!VAR11->VAR43 && VAR11->VAR51 != VAR52)
    {
        VAR11->VAR47[VAR11->VAR43].VAR50 = VAR11->VAR51 + VAR11->VAR53;
    }
    if (!VAR11->VAR43 && VAR11->VAR51 == VAR52 && !VAR6->VAR54 && VAR2->VAR55 == VAR56)
    {
        VAR11->VAR47[VAR11->VAR43].VAR50 = VAR11->VAR51 = 0;
    }
    if (VAR11->VAR51 == VAR52)
    {
        VAR11->VAR51 = VAR4->VAR50;
        if (VAR4->VAR50 && VAR6->VAR20 & VAR57)
            FUN3(VAR2, VAR58, "" VAR59 ""
                                      ""
                                      "",
                   VAR4->VAR13, VAR4->VAR50);
    }
    VAR11->VAR53 = VAR4->VAR50 - VAR11->VAR51 + VAR4->VAR60;
    if (VAR4->VAR61 == VAR52)
    {
        FUN3(VAR2, VAR58, "");
        VAR4->VAR61 = VAR4->VAR50;
    }
    if (VAR4->VAR50 != VAR4->VAR61)
        VAR11->VAR20 |= VAR62;
    VAR11->VAR47[VAR11->VAR43].VAR63 = VAR4->VAR61 - VAR4->VAR50;
    VAR11->VAR47[VAR11->VAR43].VAR20 = 0;
    if (VAR15->VAR25 == VAR64)
    {
        FUN15(VAR4, VAR11, VAR6->VAR23);
    }
    else if (VAR4->VAR20 & VAR65)
    {
        if (VAR6->VAR66 == VAR67 && VAR15->VAR25 == VAR68 && VAR11->VAR43 > 0)
        {
            FUN16(VAR4, &VAR11->VAR47[VAR11->VAR43].VAR20);
            if (VAR11->VAR47[VAR11->VAR43].VAR20 & VAR69)
                VAR11->VAR20 |= VAR70;
        }
        else
        {
            VAR11->VAR47[VAR11->VAR43].VAR20 = VAR71;
        }
        if (VAR11->VAR47[VAR11->VAR43].VAR20 & VAR71)
            VAR11->VAR72++;
    }
    VAR11->VAR43++;
    VAR11->VAR73 += VAR16;
    VAR6->VAR74 += VAR17;
    if (VAR11->VAR37 >= 0 && VAR11->VAR37 < VAR6->VAR38)
        FUN17(VAR2, VAR4, VAR11->VAR37, VAR11->VAR43, VAR19, VAR17);
    FUN18(VAR19);
    return 0;
}