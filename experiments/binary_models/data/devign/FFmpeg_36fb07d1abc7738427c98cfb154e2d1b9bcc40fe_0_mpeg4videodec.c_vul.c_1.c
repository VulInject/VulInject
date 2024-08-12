static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    int VAR8, VAR9;
    int64_t VAR10;
    VAR6->VAR11 = FUN2(VAR4, 2) + VAR12;
    if (VAR6->VAR11 == VAR13 && VAR6->VAR14 && VAR6->VAR15 == 0 && !(VAR6->VAR16 & VAR17))
    {
        FUN3(VAR6->VAR18, VAR19, "");
        VAR6->VAR14 = 0;
    }
    VAR6->VAR20 = VAR6->VAR21 && VAR6->VAR11 != VAR13;
    if (VAR6->VAR20)
        VAR6->VAR22 = VAR23;
    else
        VAR6->VAR22 = VAR24;
    VAR8 = 0;
    while (FUN4(VAR4) != 0)
        VAR8++;
    FUN5(VAR4, "");
    if (VAR2->VAR25 == 0 || !(FUN6(VAR4, VAR2->VAR25 + 1) & 1))
    {
        FUN3(VAR6->VAR18, VAR19, "");
        for (VAR2->VAR25 = 1; VAR2->VAR25 < 16; VAR2->VAR25++)
        {
            if (VAR6->VAR11 == VAR26 || (VAR6->VAR11 == VAR27 && VAR2->VAR28 == VAR29))
            {
                if ((FUN6(VAR4, VAR2->VAR25 + 6) & 0x37) == 0x30)
                    break;
            }
            else if ((FUN6(VAR4, VAR2->VAR25 + 5) & 0x1F) == 0x18)
                break;
        }
        FUN3(VAR6->VAR18, VAR19, "", VAR2->VAR25);
        if (VAR6->VAR18->VAR30.VAR31 && 4 * VAR6->VAR18->VAR30.VAR31 < 1 << VAR2->VAR25)
        {
            VAR6->VAR18->VAR30.VAR31 = 1 << VAR2->VAR25;
        }
    }
    if (VAR32)
        VAR9 = FUN4(VAR4);
    else
        VAR9 = FUN2(VAR4, VAR2->VAR25);
    if (VAR6->VAR11 != VAR13)
    {
        VAR6->VAR33 = VAR6->VAR30;
        VAR6->VAR30 += VAR8;
        VAR6->VAR34 = VAR6->VAR30 * VAR6->VAR18->VAR30.VAR31 + VAR9;
        if (VAR6->VAR35 & VAR36)
        {
            if (VAR6->VAR34 < VAR6->VAR37)
            {
                VAR6->VAR30++;
                VAR6->VAR34 += VAR6->VAR18->VAR30.VAR31;
            }
        }
        VAR6->VAR38 = VAR6->VAR34 - VAR6->VAR37;
        VAR6->VAR37 = VAR6->VAR34;
    }
    else
    {
        VAR6->VAR34 = (VAR6->VAR33 + VAR8) * VAR6->VAR18->VAR30.VAR31 + VAR9;
        VAR6->VAR39 = VAR6->VAR38 - (VAR6->VAR37 - VAR6->VAR34);
        if (VAR6->VAR38 <= VAR6->VAR39 || VAR6->VAR38 <= VAR6->VAR38 - VAR6->VAR39 || VAR6->VAR38 <= 0)
        {
            return VAR40;
        }
        FUN7(VAR6);
        if (VAR2->VAR41 == 0)
            VAR2->VAR41 = VAR6->VAR39;
        if (VAR2->VAR41 == 0)
            VAR2->VAR41 = 1;
        VAR6->VAR42 = (FUN8(VAR6->VAR37, VAR2->VAR41) - FUN8(VAR6->VAR37 - VAR6->VAR38, VAR2->VAR41)) * 2;
        VAR6->VAR43 = (FUN8(VAR6->VAR34, VAR2->VAR41) - FUN8(VAR6->VAR37 - VAR6->VAR38, VAR2->VAR41)) * 2;
        if (!VAR6->VAR44)
        {
            if (VAR6->VAR42 <= VAR6->VAR43 || VAR6->VAR43 <= 1)
                return VAR40;
        }
    }
    if (VAR6->VAR18->VAR30.VAR45)
        VAR10 = FUN8(VAR6->VAR34, VAR6->VAR18->VAR30.VAR45);
    else
        VAR10 = VAR46;
    if (VAR6->VAR18->VAR47 & VAR48)
        FUN3(VAR6->VAR18, VAR49, "" VAR50 "", VAR10);
    FUN5(VAR4, "");
    if (FUN4(VAR4) != 1)
    {
        if (VAR6->VAR18->VAR47 & VAR51)
            FUN3(VAR6->VAR18, VAR19, "");
        return VAR40;
    }
    if (VAR2->VAR52)
        FUN9(VAR2, VAR4);
    if (VAR2->VAR53 != VAR54 && (VAR6->VAR11 == VAR26 || (VAR6->VAR11 == VAR27 && VAR2->VAR28 == VAR29)))
    {
        VAR6->VAR55 = FUN4(VAR4);
    }
    else
    {
        VAR6->VAR55 = 0;
    }
    if (VAR2->VAR53 != VAR56)
    {
        if (VAR2->VAR28 != 1 || VAR6->VAR11 != VAR12)
        {
            FUN10(VAR4, 13);
            FUN11(VAR4);
            FUN10(VAR4, 13);
            FUN11(VAR4);
            FUN10(VAR4, 13);
            FUN11(VAR4);
            FUN10(VAR4, 13);
        }
        FUN11(VAR4);
        if (FUN4(VAR4) != 0)
            FUN10(VAR4, 8);
    }
    if (VAR2->VAR53 != VAR54)
    {
        FUN12(VAR4, VAR2->VAR57);
        if (VAR6->VAR11 != VAR12)
            FUN12(VAR4, VAR2->VAR58);
        if (VAR6->VAR11 == VAR13)
            FUN12(VAR4, VAR2->VAR59);
        if (FUN13(VAR4) < 3)
        {
            FUN3(VAR6->VAR18, VAR19, "");
            return -1;
        }
        VAR2->VAR60 = VAR61[FUN2(VAR4, 3)];
        if (!VAR6->VAR44)
        {
            VAR6->VAR62 = FUN4(VAR4);
            VAR6->VAR63 = FUN4(VAR4);
        }
        else
            VAR6->VAR63 = 0;
    }
    if (VAR6->VAR63)
    {
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR66, VAR67);
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR68, VAR67);
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR69, VAR67);
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR70, VAR67);
    }
    else
    {
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR66, VAR71);
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR68, VAR71);
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR69, VAR72);
        FUN14(VAR6->VAR64.VAR65, &VAR6->VAR70, VAR67);
    }
    if (VAR6->VAR11 == VAR27 && (VAR2->VAR28 == VAR73 || VAR2->VAR28 == VAR29))
    {
        if (FUN15(VAR2, VAR4) < 0)
            return VAR74;
        if (VAR2->VAR75)
            FUN3(VAR6->VAR18, VAR19, "");
        if (VAR2->VAR28 == VAR73)
            FUN3(VAR6->VAR18, VAR19, "");
    }
    if (VAR2->VAR53 != VAR54)
    {
        VAR6->VAR76 = VAR6->VAR77 = FUN2(VAR4, VAR6->VAR78);
        if (VAR6->VAR77 == 0)
        {
            FUN3(VAR6->VAR18, VAR19, "");
            return -1;
        }
        if (VAR6->VAR11 != VAR12)
        {
            VAR6->VAR79 = FUN2(VAR4, 3);
            if (VAR6->VAR79 == 0)
            {
                FUN3(VAR6->VAR18, VAR19, "");
                VAR6->VAR79 = 1;
                return -1;
            }
        }
        else
            VAR6->VAR79 = 1;
        if (VAR6->VAR11 == VAR13)
        {
            VAR6->VAR80 = FUN2(VAR4, 3);
            if (VAR6->VAR80 == 0)
            {
                FUN3(VAR6->VAR18, VAR19, "");
                VAR6->VAR80 = 1;
                return -1;
            }
        }
        else
            VAR6->VAR80 = 1;
        if (VAR6->VAR18->VAR47 & VAR51)
        {
            FUN3(VAR6->VAR18, VAR49, "" VAR50 "", VAR6->VAR77, VAR6->VAR79, VAR6->VAR80, VAR6->VAR11 == VAR12 ? "" : (VAR6->VAR11 == VAR26 ? "" : (VAR6->VAR11 == VAR13 ? "" : "")), VAR4->VAR81, VAR6->VAR44, VAR6->VAR63, VAR6->VAR62, VAR6->VAR82 ? "" : "", VAR6->VAR21, VAR2->VAR83, VAR2->VAR84, VAR6->VAR85, 1 - VAR6->VAR55, VAR6->VAR86, VAR6->VAR15 ? "" : "", VAR2->VAR60, VAR2->VAR57, VAR2->VAR58, VAR2->VAR59, VAR6->VAR34, VAR9);
        }
        if (!VAR2->VAR87)
        {
            if (VAR2->VAR53 != VAR56 && VAR6->VAR11 != VAR12)
                FUN11(VAR4);
        }
        else
        {
            if (VAR2->VAR88)
            {
                int VAR89 = FUN4(VAR4);
                if (VAR89)
                    FUN3(VAR6->VAR18, VAR19, "");
            }
            FUN10(VAR4, 2);
        }
    }
    if (VAR6->VAR86 == 0 && VAR6->VAR15 == 0 && VAR2->VAR90 == -1 && VAR6->VAR91 == 0)
    {
        FUN3(VAR6->VAR18, VAR92, "");
        VAR6->VAR14 = 1;
    }
    VAR6->VAR91++;
    VAR6->VAR93 = VAR94;
    VAR6->VAR95 = VAR96;
    if (VAR6->VAR35 & VAR97)
    {
        VAR6->VAR98 = VAR6->VAR99;
        VAR6->VAR100 = VAR6->VAR101;
    }
    return 0;
}