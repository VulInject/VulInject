static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR6, VAR2);
    VAR7 *VAR8 = VAR6->VAR9.VAR10;
    int VAR11, VAR12;
    VAR3 *VAR13 = NULL;
    FUN3(VAR2->VAR14 + VAR15, 0);
    FUN4(VAR2->VAR14 + VAR16, FUN5(VAR2->VAR14 + VAR16) & ~VAR17);
    VAR12 = FUN6(VAR2, VAR18, 0);
    if (VAR12 != 0 && FUN7(VAR19, VAR20))
    {
        FUN8(&VAR13);
        if (VAR13)
        {
            FUN9(VAR4, VAR13);
            return -VAR21;
        }
        VAR6->VAR22.VAR23 |= VAR24;
        VAR11 = FUN10(VAR2, VAR18, VAR12, 10, &VAR13);
        if (VAR11 < 0)
        {
            FUN9(VAR4, VAR13);
            return VAR11;
        }
        VAR2->VAR25 = VAR12;
        FUN4(VAR2->VAR14 + VAR12 + VAR26, FUN5(VAR2->VAR14 + VAR12 + VAR26) & VAR27);
        FUN11(VAR2->VAR14 + VAR12 + VAR28, 0);
        FUN4(VAR2->VAR14 + VAR12 + VAR29, 0);
        FUN4(VAR2->VAR30 + VAR12 + VAR26, VAR31 | VAR32);
        FUN11(VAR2->VAR30 + VAR12 + VAR28, 0xfffffffc);
        FUN4(VAR2->VAR30 + VAR12 + VAR29, 0xffff);
    }
    VAR12 = FUN6(VAR2, VAR33, 0);
    if (VAR12 != 0 && FUN12(VAR19))
    {
        int VAR34;
        uint32_t VAR35;
        FUN8(&VAR13);
        if (VAR13)
        {
            FUN9(VAR4, VAR13);
            return -VAR21;
        }
        VAR6->VAR22.VAR23 |= VAR36;
        VAR11 = FUN10(VAR2, VAR33, VAR12, 12, &VAR13);
        if (VAR11 < 0)
        {
            FUN9(VAR4, VAR13);
            return VAR11;
        }
        VAR2->VAR37 = VAR12;
        FUN4(VAR2->VAR14 + VAR12 + VAR38, FUN5(VAR2->VAR14 + VAR12 + VAR38) & VAR39);
        FUN4(VAR2->VAR30 + VAR12 + VAR38, VAR40 | VAR41);
        VAR35 = FUN13(VAR2->VAR14 + VAR12 + VAR42);
        VAR34 = VAR35 & VAR43;
        VAR35 &= ~VAR43;
        VAR6->VAR44 = VAR8[VAR34].VAR45 + VAR35;
        VAR6->VAR46 = FUN5(VAR2->VAR14 + VAR12 + VAR38);
        VAR6->VAR46 &= VAR39;
        VAR6->VAR46 += 1;
    }
    VAR12 = FUN6(VAR2, VAR47, 0);
    if (VAR12)
    {
        uint16_t VAR48;
        VAR11 = FUN10(VAR2, VAR47, VAR12, VAR49, &VAR13);
        if (VAR11 < 0)
        {
            FUN9(VAR4, VAR13);
            return VAR11;
        }
        FUN14(VAR6, VAR12, VAR49);
        VAR48 = FUN5(VAR2->VAR14 + VAR12 + VAR50);
        VAR48 &= (VAR51 | VAR52);
        FUN4(VAR2->VAR14 + VAR12 + VAR50, VAR48);
        FUN4(VAR2->VAR14 + VAR12 + VAR53, VAR54);
        FUN3(VAR2->VAR14 + VAR12 + VAR55, 0);
        FUN3(VAR2->VAR14 + VAR12 + VAR56, 0);
    }
    VAR12 = FUN6(VAR2, VAR57, 0);
    if (VAR12)
    {
        uint8_t VAR58, VAR59 = 0;
        uint16_t VAR60, VAR61, VAR62;
        uint32_t VAR63, VAR64;
        VAR58 = FUN15(VAR2->VAR14 + VAR12 + VAR65);
        VAR58 &= VAR66;
        if (VAR58 == 1)
        {
            VAR59 = 0x14;
        }
        else if (VAR58 == 2)
        {
            VAR59 = FUN16(0x3c, VAR67 - VAR12);
            if (VAR59 < 0x34)
            {
                FUN17(VAR4, "", VAR57);
                return -VAR68;
            }
            else if (VAR59 != 0x3c)
            {
                FUN18(""
                             "",
                             VAR69, VAR57, VAR59);
            }
        }
        else if (VAR58 == 0)
        {
            uint16_t VAR70, VAR71;
            VAR70 = FUN5(VAR2->VAR14 + VAR72);
            VAR71 = FUN5(VAR2->VAR14 + VAR73);
            if (VAR70 == VAR74 && VAR71 == 0x10ed)
            {
                VAR59 = 0x3c;
            }
        }
        if (VAR59 == 0)
        {
            FUN17(VAR4, "", VAR58);
            return -VAR68;
        }
        VAR11 = FUN10(VAR2, VAR57, VAR12, VAR59, &VAR13);
        if (VAR11 < 0)
        {
            FUN9(VAR4, VAR13);
            return VAR11;
        }
        FUN14(VAR6, VAR12, VAR59);
        VAR60 = FUN5(VAR2->VAR14 + VAR12 + VAR65);
        VAR60 = (VAR60 & VAR75) >> 4;
        if (VAR60 != VAR76 && VAR60 != VAR77 && VAR60 != VAR78)
        {
            FUN17(VAR4, ""
                             "",
                       VAR60);
            return -VAR68;
        }
        VAR63 = FUN13(VAR2->VAR14 + VAR12 + VAR79);
        VAR63 &= ~VAR80;
        FUN11(VAR2->VAR14 + VAR12 + VAR79, VAR63);
        VAR61 = FUN5(VAR2->VAR14 + VAR12 + VAR81);
        VAR61 = (VAR61 & (VAR82 | VAR83)) | VAR84 | VAR85;
        FUN4(VAR2->VAR14 + VAR12 + VAR81, VAR61);
        VAR61 = VAR86 | VAR87;
        FUN4(VAR2->VAR30 + VAR12 + VAR81, ~VAR61);
        FUN4(VAR2->VAR14 + VAR12 + VAR88, 0);
        VAR64 = FUN13(VAR2->VAR14 + VAR12 + VAR89);
        VAR64 &= (VAR90 | VAR91 | VAR92 | VAR93 | VAR94);
        FUN11(VAR2->VAR14 + VAR12 + VAR89, VAR64);
        VAR62 = FUN5(VAR2->VAR14 + VAR12 + VAR95);
        VAR62 &= (VAR96 | VAR97);
        FUN4(VAR2->VAR14 + VAR12 + VAR95, VAR62);
        if (VAR58 >= 2)
        {
            FUN11(VAR2->VAR14 + VAR12 + VAR98, 0);
            FUN4(VAR2->VAR14 + VAR12 + VAR99, 0);
            FUN4(VAR2->VAR14 + VAR12 + VAR100, 0);
            FUN4(VAR2->VAR14 + VAR12 + VAR101, 0);
            FUN4(VAR2->VAR14 + VAR12 + VAR102, 0);
            FUN11(VAR2->VAR14 + VAR12 + VAR103, 0);
        }
    }
    VAR12 = FUN6(VAR2, VAR104, 0);
    if (VAR12)
    {
        uint16_t VAR105;
        uint32_t VAR106;
        VAR11 = FUN10(VAR2, VAR104, VAR12, 8, &VAR13);
        if (VAR11 < 0)
        {
            FUN9(VAR4, VAR13);
            return VAR11;
        }
        FUN14(VAR6, VAR12, 8);
        VAR105 = FUN5(VAR2->VAR14 + VAR12 + VAR107);
        VAR105 &= (VAR108 | VAR109 | VAR110 | VAR111);
        FUN4(VAR2->VAR14 + VAR12 + VAR107, VAR105);
        VAR106 = FUN13(VAR2->VAR14 + VAR12 + VAR112);
        VAR106 &= ~(VAR113 | VAR114);
        VAR106 |= (FUN19(VAR2->VAR115) << 8) | VAR2->VAR116;
        VAR106 &= ~(VAR117 | VAR118 | VAR119);
        FUN11(VAR2->VAR14 + VAR12 + VAR112, VAR106);
    }
    VAR12 = FUN6(VAR2, VAR120, 0);
    if (VAR12)
    {
        VAR11 = FUN10(VAR2, VAR120, VAR12, 8, &VAR13);
        if (VAR11 < 0)
        {
            FUN9(VAR4, VAR13);
            return VAR11;
        }
        FUN14(VAR6, VAR12, 8);
        FUN20(VAR6, VAR12 + 2, 6);
    }
    for (VAR12 = 0; (VAR12 = FUN6(VAR2, VAR121, VAR12)); VAR12 += VAR122)
    {
        uint8_t VAR123 = FUN15(VAR2->VAR14 + VAR12 + VAR50);
        VAR11 = FUN10(VAR2, VAR121, VAR12, VAR123, &VAR13);
        if (VAR11 < 0)
        {
            FUN9(VAR4, VAR13);
            return VAR11;
        }
        FUN14(VAR6, VAR12, VAR123);
        FUN20(VAR6, VAR12 + 2, VAR123 - 2);
    }
    if ((FUN5(VAR2->VAR14 + VAR16) & VAR17) != (FUN21(VAR2, VAR16) & VAR17))
    {
        VAR6->VAR124[VAR16] |= VAR17;
    }
    return 0;
}