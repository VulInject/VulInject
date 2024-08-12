static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    int VAR8, VAR9;
    int64_t VAR10;
    VAR6->VAR11 = FUN2(VAR4, 2) + VAR12;
    if (VAR6->VAR11 == VAR13 && VAR6->VAR14 && VAR2->VAR15 == 0 && !(VAR6->VAR16 & VAR17))
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
        FUN3(VAR6->VAR18, VAR26, "", VAR2->VAR25);
        for (VAR2->VAR25 = 1; VAR2->VAR25 < 16; VAR2->VAR25++)
        {
            if (VAR6->VAR11 == VAR27 || (VAR6->VAR11 == VAR28 && VAR2->VAR29 == VAR30))
            {
                if ((FUN6(VAR4, VAR2->VAR25 + 6) & 0x37) == 0x30)
                    break;
            }
            else if ((FUN6(VAR4, VAR2->VAR25 + 5) & 0x1F) == 0x18)
                break;
        }
        FUN3(VAR6->VAR18, VAR26, "", VAR2->VAR25);
        if (VAR6->VAR18->VAR31.VAR32 && 4 * VAR6->VAR18->VAR31.VAR32 < 1 << VAR2->VAR25)
        {
            VAR6->VAR18->VAR31.VAR32 = 1 << VAR2->VAR25;
            VAR6->VAR18->VAR33 = FUN7(FUN8(VAR6->VAR18->VAR31, (VAR34){VAR6->VAR18->VAR35, 1}));
        }
    }
    if (VAR36)
        VAR9 = FUN4(VAR4);
    else
        VAR9 = FUN2(VAR4, VAR2->VAR25);
    if (VAR6->VAR11 != VAR13)
    {
        VAR6->VAR37 = VAR6->VAR33;
        VAR6->VAR33 += VAR8;
        VAR6->VAR38 = VAR6->VAR33 * VAR6->VAR18->VAR31.VAR32 + VAR9;
        if (VAR6->VAR39 & VAR40)
        {
            if (VAR6->VAR38 < VAR6->VAR41)
            {
                VAR6->VAR33++;
                VAR6->VAR38 += VAR6->VAR18->VAR31.VAR32;
            }
        }
        VAR6->VAR42 = VAR6->VAR38 - VAR6->VAR41;
        VAR6->VAR41 = VAR6->VAR38;
    }
    else
    {
        VAR6->VAR38 = (VAR6->VAR37 + VAR8) * VAR6->VAR18->VAR31.VAR32 + VAR9;
        VAR6->VAR43 = VAR6->VAR42 - (VAR6->VAR41 - VAR6->VAR38);
        if (VAR6->VAR42 <= VAR6->VAR43 || VAR6->VAR42 <= VAR6->VAR42 - VAR6->VAR43 || VAR6->VAR42 <= 0)
        {
            return VAR44;
        }
        FUN9(VAR6);
        if (VAR2->VAR45 == 0)
            VAR2->VAR45 = VAR6->VAR43;
        if (VAR2->VAR45 == 0)
            VAR2->VAR45 = 1;
        VAR6->VAR46 = (FUN10(VAR6->VAR41, VAR2->VAR45) - FUN10(VAR6->VAR41 - VAR6->VAR42, VAR2->VAR45)) * 2;
        VAR6->VAR47 = (FUN10(VAR6->VAR38, VAR2->VAR45) - FUN10(VAR6->VAR41 - VAR6->VAR42, VAR2->VAR45)) * 2;
        if (VAR6->VAR46 <= VAR6->VAR47 || VAR6->VAR47 <= 1)
        {
            VAR6->VAR47 = 2;
            VAR6->VAR46 = 4;
            if (!VAR6->VAR48)
                return VAR44;
        }
    }
    if (VAR6->VAR18->VAR31.VAR49)
        VAR10 = FUN10(VAR6->VAR38, VAR6->VAR18->VAR31.VAR49);
    else
        VAR10 = VAR50;
    if (VAR6->VAR18->VAR51 & VAR52)
        FUN3(VAR6->VAR18, VAR53, "" VAR54 "", VAR10);
    FUN5(VAR4, "");
    if (FUN4(VAR4) != 1)
    {
        if (VAR6->VAR18->VAR51 & VAR55)
            FUN3(VAR6->VAR18, VAR19, "");
        return VAR44;
    }
    if (VAR2->VAR56)
        FUN11(VAR2, VAR4);
    if (VAR2->VAR57 != VAR58 && (VAR6->VAR11 == VAR27 || (VAR6->VAR11 == VAR28 && VAR2->VAR29 == VAR30)))
    {
        VAR6->VAR59 = FUN4(VAR4);
    }
    else
    {
        VAR6->VAR59 = 0;
    }
    if (VAR2->VAR57 != VAR60)
    {
        if (VAR2->VAR29 != 1 || VAR6->VAR11 != VAR12)
        {
            FUN12(VAR4, 13);
            FUN5(VAR4, "");
            FUN12(VAR4, 13);
            FUN5(VAR4, "");
            FUN12(VAR4, 13);
            FUN5(VAR4, "");
            FUN12(VAR4, 13);
        }
        FUN13(VAR4);
        if (FUN4(VAR4) != 0)
            FUN12(VAR4, 8);
    }
    if (VAR2->VAR57 != VAR58)
    {
        FUN14(VAR4, VAR2->VAR61);
        if (VAR6->VAR11 != VAR12)
            FUN14(VAR4, VAR2->VAR62);
        if (VAR6->VAR11 == VAR13)
            FUN14(VAR4, VAR2->VAR63);
        if (FUN15(VAR4) < 3)
        {
            FUN3(VAR6->VAR18, VAR19, "");
            return VAR64;
        }
        VAR2->VAR65 = VAR66[FUN2(VAR4, 3)];
        if (!VAR6->VAR48)
        {
            VAR6->VAR67 = FUN4(VAR4);
            VAR6->VAR68 = FUN4(VAR4);
        }
        else
            VAR6->VAR68 = 0;
    }
    if (VAR6->VAR68)
    {
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR71, VAR72);
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR73, VAR72);
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR74, VAR72);
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR75, VAR72);
    }
    else
    {
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR71, VAR76);
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR73, VAR76);
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR74, VAR77);
        FUN16(VAR6->VAR69.VAR70, &VAR6->VAR75, VAR72);
    }
    if (VAR6->VAR11 == VAR28 && (VAR2->VAR29 == VAR78 || VAR2->VAR29 == VAR30))
    {
        if (FUN17(VAR2, VAR4) < 0)
            return VAR64;
        if (VAR2->VAR79)
            FUN3(VAR6->VAR18, VAR19, "");
        if (VAR2->VAR29 == VAR78)
            FUN3(VAR6->VAR18, VAR19, "");
    }
    if (VAR2->VAR57 != VAR58)
    {
        VAR6->VAR80 = VAR6->VAR81 = FUN2(VAR4, VAR6->VAR82);
        if (VAR6->VAR81 == 0)
        {
            FUN3(VAR6->VAR18, VAR19, "");
            return VAR64;
        }
        if (VAR6->VAR11 != VAR12)
        {
            VAR6->VAR83 = FUN2(VAR4, 3);
            if (VAR6->VAR83 == 0)
            {
                FUN3(VAR6->VAR18, VAR19, "");
                VAR6->VAR83 = 1;
                return VAR64;
            }
        }
        else
            VAR6->VAR83 = 1;
        if (VAR6->VAR11 == VAR13)
        {
            VAR6->VAR84 = FUN2(VAR4, 3);
            if (VAR6->VAR84 == 0)
            {
                FUN3(VAR6->VAR18, VAR19, "");
                VAR6->VAR84 = 1;
                return VAR64;
            }
        }
        else
            VAR6->VAR84 = 1;
        if (VAR6->VAR18->VAR51 & VAR55)
        {
            FUN3(VAR6->VAR18, VAR53, "" VAR54 "", VAR6->VAR81, VAR6->VAR83, VAR6->VAR84, VAR6->VAR11 == VAR12 ? "" : (VAR6->VAR11 == VAR27 ? "" : (VAR6->VAR11 == VAR13 ? "" : "")), VAR4->VAR85, VAR6->VAR48, VAR6->VAR68, VAR6->VAR67, VAR6->VAR86 ? "" : "", VAR6->VAR21, VAR2->VAR87, VAR2->VAR88, VAR6->VAR89, 1 - VAR6->VAR59, VAR6->VAR90, VAR2->VAR15 ? "" : "", VAR2->VAR65, VAR2->VAR61, VAR2->VAR62, VAR2->VAR63, VAR6->VAR38, VAR9);
        }
        if (!VAR2->VAR91)
        {
            if (VAR2->VAR57 != VAR60 && VAR6->VAR11 != VAR12)
                FUN13(VAR4);
        }
        else
        {
            if (VAR2->VAR92)
            {
                int VAR93 = FUN4(VAR4);
                if (VAR93)
                    FUN3(VAR6->VAR18, VAR19, "");
            }
            FUN12(VAR4, 2);
        }
    }
    if (VAR6->VAR90 == 0 && VAR2->VAR15 == 0 && VAR2->VAR94 == -1 && VAR6->VAR95 == 0)
    {
        FUN3(VAR6->VAR18, VAR26, "");
        VAR6->VAR14 = 1;
    }
    VAR6->VAR95++;
    VAR6->VAR96 = VAR97;
    VAR6->VAR98 = VAR99;
    if (VAR6->VAR39 & VAR100)
    {
        VAR6->VAR101 = VAR6->VAR102;
        VAR6->VAR103 = VAR6->VAR104;
    }
    return 0;
}