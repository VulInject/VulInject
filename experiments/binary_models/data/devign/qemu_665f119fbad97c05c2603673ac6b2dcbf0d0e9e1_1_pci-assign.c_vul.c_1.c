static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR4, VAR2);
    VAR5 *VAR6 = VAR4->VAR7.VAR8;
    int VAR9, VAR10;
    FUN3(VAR2->VAR11 + VAR12, 0);
    FUN4(VAR2->VAR11 + VAR13, FUN5(VAR2->VAR11 + VAR13) & ~VAR14);
    VAR10 = FUN6(VAR2, VAR15, 0);
    if (VAR10 != 0 && FUN7(VAR16, VAR17))
    {
        if (!FUN8())
        {
            return -VAR18;
        }
        VAR4->VAR19.VAR20 |= VAR21;
        VAR9 = FUN9(VAR2, VAR15, VAR10, 10);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        VAR2->VAR22 = VAR10;
        FUN4(VAR2->VAR11 + VAR10 + VAR23, FUN5(VAR2->VAR11 + VAR10 + VAR23) & VAR24);
        FUN10(VAR2->VAR11 + VAR10 + VAR25, 0);
        FUN4(VAR2->VAR11 + VAR10 + VAR26, 0);
        FUN4(VAR2->VAR27 + VAR10 + VAR23, VAR28 | VAR29);
        FUN10(VAR2->VAR27 + VAR10 + VAR25, 0xfffffffc);
        FUN4(VAR2->VAR27 + VAR10 + VAR26, 0xffff);
    }
    VAR10 = FUN6(VAR2, VAR30, 0);
    if (VAR10 != 0 && FUN11(VAR16))
    {
        int VAR31;
        uint32_t VAR32;
        if (!FUN8())
        {
            return -VAR18;
        }
        VAR4->VAR19.VAR20 |= VAR33;
        VAR9 = FUN9(VAR2, VAR30, VAR10, 12);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        VAR2->VAR34 = VAR10;
        FUN4(VAR2->VAR11 + VAR10 + VAR35, FUN5(VAR2->VAR11 + VAR10 + VAR35) & VAR36);
        FUN4(VAR2->VAR27 + VAR10 + VAR35, VAR37 | VAR38);
        VAR32 = FUN12(VAR2->VAR11 + VAR10 + VAR39);
        VAR31 = VAR32 & VAR40;
        VAR32 &= ~VAR40;
        VAR4->VAR41 = VAR6[VAR31].VAR42 + VAR32;
        VAR4->VAR43 = FUN5(VAR2->VAR11 + VAR10 + VAR35);
        VAR4->VAR43 &= VAR36;
        VAR4->VAR43 += 1;
    }
    VAR10 = FUN6(VAR2, VAR44, 0);
    if (VAR10)
    {
        uint16_t VAR45;
        VAR9 = FUN9(VAR2, VAR44, VAR10, VAR46);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        FUN13(VAR4, VAR10, VAR46);
        VAR45 = FUN5(VAR2->VAR11 + VAR10 + VAR47);
        VAR45 &= (VAR48 | VAR49);
        FUN4(VAR2->VAR11 + VAR10 + VAR47, VAR45);
        FUN4(VAR2->VAR11 + VAR10 + VAR50, VAR51);
        FUN3(VAR2->VAR11 + VAR10 + VAR52, 0);
        FUN3(VAR2->VAR11 + VAR10 + VAR53, 0);
    }
    VAR10 = FUN6(VAR2, VAR54, 0);
    if (VAR10)
    {
        uint8_t VAR55, VAR56 = 0;
        uint16_t VAR57, VAR58, VAR59;
        uint32_t VAR60, VAR61;
        VAR55 = FUN14(VAR2->VAR11 + VAR10 + VAR62);
        VAR55 &= VAR63;
        if (VAR55 == 1)
        {
            VAR56 = 0x14;
        }
        else if (VAR55 == 2)
        {
            VAR56 = FUN15(0x3c, VAR64 - VAR10);
            if (VAR56 < 0x34)
            {
                FUN16("", VAR65, VAR54);
                return -VAR66;
            }
            else if (VAR56 != 0x3c)
            {
                FUN16(""
                             "",
                             VAR65, VAR54, VAR56);
            }
        }
        else if (VAR55 == 0)
        {
            uint16_t VAR67, VAR68;
            VAR67 = FUN5(VAR2->VAR11 + VAR69);
            VAR68 = FUN5(VAR2->VAR11 + VAR70);
            if (VAR67 == VAR71 && VAR68 == 0x10ed)
            {
                VAR56 = 0x3c;
            }
        }
        if (VAR56 == 0)
        {
            FUN16("", VAR65, VAR55);
            return -VAR66;
        }
        VAR9 = FUN9(VAR2, VAR54, VAR10, VAR56);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        FUN13(VAR4, VAR10, VAR56);
        VAR57 = FUN5(VAR2->VAR11 + VAR10 + VAR62);
        VAR57 = (VAR57 & VAR72) >> 4;
        if (VAR57 != VAR73 && VAR57 != VAR74 && VAR57 != VAR75)
        {
            FUN16(""
                         "",
                         VAR57);
            return -VAR66;
        }
        VAR60 = FUN12(VAR2->VAR11 + VAR10 + VAR76);
        VAR60 &= ~VAR77;
        FUN10(VAR2->VAR11 + VAR10 + VAR76, VAR60);
        VAR58 = FUN5(VAR2->VAR11 + VAR10 + VAR78);
        VAR58 = (VAR58 & (VAR79 | VAR80)) | VAR81 | VAR82;
        FUN4(VAR2->VAR11 + VAR10 + VAR78, VAR58);
        VAR58 = VAR83 | VAR84;
        FUN4(VAR2->VAR27 + VAR10 + VAR78, ~VAR58);
        FUN4(VAR2->VAR11 + VAR10 + VAR85, 0);
        VAR61 = FUN12(VAR2->VAR11 + VAR10 + VAR86);
        VAR61 &= (VAR87 | VAR88 | VAR89 | VAR90 | VAR91);
        FUN10(VAR2->VAR11 + VAR10 + VAR86, VAR61);
        VAR59 = FUN5(VAR2->VAR11 + VAR10 + VAR92);
        VAR59 &= (VAR93 | VAR94);
        FUN4(VAR2->VAR11 + VAR10 + VAR92, VAR59);
        if (VAR55 >= 2)
        {
            FUN10(VAR2->VAR11 + VAR10 + VAR95, 0);
            FUN4(VAR2->VAR11 + VAR10 + VAR96, 0);
            FUN4(VAR2->VAR11 + VAR10 + VAR97, 0);
            FUN4(VAR2->VAR11 + VAR10 + VAR98, 0);
            FUN4(VAR2->VAR11 + VAR10 + VAR99, 0);
            FUN10(VAR2->VAR11 + VAR10 + VAR100, 0);
        }
    }
    VAR10 = FUN6(VAR2, VAR101, 0);
    if (VAR10)
    {
        uint16_t VAR102;
        uint32_t VAR103;
        VAR9 = FUN9(VAR2, VAR101, VAR10, 8);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        FUN13(VAR4, VAR10, 8);
        VAR102 = FUN5(VAR2->VAR11 + VAR10 + VAR104);
        VAR102 &= (VAR105 | VAR106 | VAR107 | VAR108);
        FUN4(VAR2->VAR11 + VAR10 + VAR104, VAR102);
        VAR103 = FUN12(VAR2->VAR11 + VAR10 + VAR109);
        VAR103 &= ~(VAR110 | VAR111);
        VAR103 |= (FUN17(VAR2->VAR112) << 8) | VAR2->VAR113;
        VAR103 &= ~(VAR114 | VAR115 | VAR116);
        FUN10(VAR2->VAR11 + VAR10 + VAR109, VAR103);
    }
    VAR10 = FUN6(VAR2, VAR117, 0);
    if (VAR10)
    {
        VAR9 = FUN9(VAR2, VAR117, VAR10, 8);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        FUN13(VAR4, VAR10, 8);
        FUN18(VAR4, VAR10 + 2, 6);
    }
    for (VAR10 = 0; (VAR10 = FUN6(VAR2, VAR118, VAR10)); VAR10 += VAR119)
    {
        uint8_t VAR120 = FUN14(VAR2->VAR11 + VAR10 + VAR47);
        VAR9 = FUN9(VAR2, VAR118, VAR10, VAR120);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        FUN13(VAR4, VAR10, VAR120);
        FUN18(VAR4, VAR10 + 2, VAR120 - 2);
    }
    if ((FUN5(VAR2->VAR11 + VAR13) & VAR14) != (FUN19(VAR2, VAR13) & VAR14))
    {
        VAR4->VAR121[VAR13] |= VAR14;
    }
    return 0;
}