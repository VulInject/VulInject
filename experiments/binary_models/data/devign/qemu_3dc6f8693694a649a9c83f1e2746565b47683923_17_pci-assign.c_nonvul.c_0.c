static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = VAR6->VAR9.VAR10;
    int VAR11, VAR12;
    FUN3(VAR2->VAR13 + VAR14, 0);
    FUN4(VAR2->VAR13 + VAR15, FUN5(VAR2->VAR13 + VAR15) & ~VAR16);
    VAR12 = FUN6(VAR2, VAR17, 0);
    if (VAR12 != 0 && FUN7(VAR18, VAR19))
    {
        if (FUN8(VAR4) < 0)
        {
            return -VAR20;
        }
        VAR6->VAR6.VAR21 |= VAR22;
        VAR6->VAR23.VAR24 |= VAR25;
        VAR11 = FUN9(VAR2, VAR17, VAR12, 10, VAR4);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        VAR2->VAR26 = VAR12;
        FUN4(VAR2->VAR13 + VAR12 + VAR27, FUN5(VAR2->VAR13 + VAR12 + VAR27) & VAR28);
        FUN10(VAR2->VAR13 + VAR12 + VAR29, 0);
        FUN4(VAR2->VAR13 + VAR12 + VAR30, 0);
        FUN4(VAR2->VAR31 + VAR12 + VAR27, VAR32 | VAR33);
        FUN10(VAR2->VAR31 + VAR12 + VAR29, 0xfffffffc);
        FUN4(VAR2->VAR31 + VAR12 + VAR30, 0xffff);
    }
    VAR12 = FUN6(VAR2, VAR34, 0);
    if (VAR12 != 0 && FUN11(VAR18))
    {
        int VAR35;
        uint32_t VAR36;
        uint16_t VAR37;
        if (FUN8(VAR4) < 0)
        {
            return -VAR20;
        }
        VAR6->VAR6.VAR21 |= VAR38;
        VAR6->VAR23.VAR24 |= VAR39;
        VAR11 = FUN9(VAR2, VAR34, VAR12, 12, VAR4);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        VAR2->VAR40 = VAR12;
        VAR37 = (FUN5(VAR2->VAR13 + VAR12 + VAR41) & VAR42) + 1;
        VAR37 = FUN12(VAR37, VAR43);
        FUN4(VAR2->VAR13 + VAR12 + VAR41, VAR37 - 1);
        FUN4(VAR2->VAR31 + VAR12 + VAR41, VAR44 | VAR45);
        VAR36 = FUN13(VAR2->VAR13 + VAR12 + VAR46);
        VAR35 = VAR36 & VAR47;
        VAR36 &= ~VAR47;
        VAR6->VAR48 = VAR8[VAR35].VAR49 + VAR36;
        VAR6->VAR50 = VAR37 * sizeof(VAR51);
        VAR6->VAR37 = VAR37;
    }
    VAR12 = FUN6(VAR2, VAR52, 0);
    if (VAR12)
    {
        uint16_t VAR53;
        VAR11 = FUN9(VAR2, VAR52, VAR12, VAR54, VAR4);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        FUN14(VAR6, VAR12, VAR54);
        VAR53 = FUN5(VAR2->VAR13 + VAR12 + VAR55);
        VAR53 &= (VAR56 | VAR57);
        FUN4(VAR2->VAR13 + VAR12 + VAR55, VAR53);
        FUN4(VAR2->VAR13 + VAR12 + VAR58, VAR59);
        FUN3(VAR2->VAR13 + VAR12 + VAR60, 0);
        FUN3(VAR2->VAR13 + VAR12 + VAR61, 0);
    }
    VAR12 = FUN6(VAR2, VAR62, 0);
    if (VAR12)
    {
        uint8_t VAR63, VAR64 = 0;
        uint16_t VAR65, VAR66, VAR67;
        uint32_t VAR68, VAR69;
        VAR63 = FUN15(VAR2->VAR13 + VAR12 + VAR70);
        VAR63 &= VAR71;
        if (VAR63 == 1)
        {
            VAR64 = 0x14;
        }
        else if (VAR63 == 2)
        {
            VAR64 = FUN12(0x3c, VAR72 - VAR12);
            if (VAR64 < 0x34)
            {
                FUN16(VAR4, "", VAR62);
                return -VAR73;
            }
            else if (VAR64 != 0x3c)
            {
                FUN17(""
                            "",
                            VAR74, VAR62, VAR64);
            }
        }
        else if (VAR63 == 0)
        {
            uint16_t VAR75, VAR76;
            VAR75 = FUN5(VAR2->VAR13 + VAR77);
            VAR76 = FUN5(VAR2->VAR13 + VAR78);
            if (VAR75 == VAR79 && VAR76 == 0x10ed)
            {
                VAR64 = 0x3c;
            }
        }
        if (VAR64 == 0)
        {
            FUN16(VAR4, "", VAR63);
            return -VAR73;
        }
        VAR11 = FUN9(VAR2, VAR62, VAR12, VAR64, VAR4);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        FUN14(VAR6, VAR12, VAR64);
        VAR65 = FUN5(VAR2->VAR13 + VAR12 + VAR70);
        VAR65 = (VAR65 & VAR80) >> 4;
        if (VAR65 != VAR81 && VAR65 != VAR82 && VAR65 != VAR83)
        {
            FUN16(VAR4, ""
                             "",
                       VAR65);
            return -VAR73;
        }
        VAR68 = FUN13(VAR2->VAR13 + VAR12 + VAR84);
        VAR68 &= ~VAR85;
        FUN10(VAR2->VAR13 + VAR12 + VAR84, VAR68);
        VAR66 = FUN5(VAR2->VAR13 + VAR12 + VAR86);
        VAR66 = (VAR66 & (VAR87 | VAR88)) | VAR89 | VAR90;
        FUN4(VAR2->VAR13 + VAR12 + VAR86, VAR66);
        VAR66 = VAR91 | VAR92;
        FUN4(VAR2->VAR31 + VAR12 + VAR86, ~VAR66);
        FUN4(VAR2->VAR13 + VAR12 + VAR93, 0);
        VAR69 = FUN13(VAR2->VAR13 + VAR12 + VAR94);
        VAR69 &= (VAR95 | VAR96 | VAR97 | VAR98 | VAR99);
        FUN10(VAR2->VAR13 + VAR12 + VAR94, VAR69);
        VAR67 = FUN5(VAR2->VAR13 + VAR12 + VAR100);
        VAR67 &= (VAR101 | VAR102);
        FUN4(VAR2->VAR13 + VAR12 + VAR100, VAR67);
        if (VAR63 >= 2)
        {
            FUN10(VAR2->VAR13 + VAR12 + VAR103, 0);
            FUN4(VAR2->VAR13 + VAR12 + VAR104, 0);
            FUN4(VAR2->VAR13 + VAR12 + VAR105, 0);
            FUN4(VAR2->VAR13 + VAR12 + VAR106, 0);
            FUN4(VAR2->VAR13 + VAR12 + VAR107, 0);
            FUN10(VAR2->VAR13 + VAR12 + VAR108, 0);
        }
    }
    VAR12 = FUN6(VAR2, VAR109, 0);
    if (VAR12)
    {
        uint16_t VAR110;
        uint32_t VAR111;
        VAR11 = FUN9(VAR2, VAR109, VAR12, 8, VAR4);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        FUN14(VAR6, VAR12, 8);
        VAR110 = FUN5(VAR2->VAR13 + VAR12 + VAR112);
        VAR110 &= (VAR113 | VAR114 | VAR115 | VAR116);
        FUN4(VAR2->VAR13 + VAR12 + VAR112, VAR110);
        VAR111 = FUN13(VAR2->VAR13 + VAR12 + VAR117);
        VAR111 &= ~(VAR118 | VAR119);
        VAR111 |= FUN18(VAR2);
        VAR111 &= ~(VAR120 | VAR121 | VAR122);
        FUN10(VAR2->VAR13 + VAR12 + VAR117, VAR111);
    }
    VAR12 = FUN6(VAR2, VAR123, 0);
    if (VAR12)
    {
        VAR11 = FUN9(VAR2, VAR123, VAR12, 8, VAR4);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        FUN14(VAR6, VAR12, 8);
        FUN19(VAR6, VAR12 + 2, 6);
    }
    for (VAR12 = 0; (VAR12 = FUN6(VAR2, VAR124, VAR12)); VAR12 += VAR125)
    {
        uint8_t VAR126 = FUN15(VAR2->VAR13 + VAR12 + VAR55);
        VAR11 = FUN9(VAR2, VAR124, VAR12, VAR126, VAR4);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        FUN14(VAR6, VAR12, VAR126);
        FUN19(VAR6, VAR12 + 2, VAR126 - 2);
    }
    if ((FUN5(VAR2->VAR13 + VAR15) & VAR16) != (FUN20(VAR2, VAR15) & VAR16))
    {
        VAR6->VAR127[VAR15] |= VAR16;
    }
    return 0;
}