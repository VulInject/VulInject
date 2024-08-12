static void FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint8_t VAR5, uint8_t VAR6, uint8_t VAR7, uint8_t VAR8, uint8_t VAR9, uint8_t VAR10, uint8_t VAR11, uint8_t VAR12, uint32_t VAR13)
{
    VAR1 *VAR14;
    v16u8 VAR15, VAR16, VAR17 = {0};
    v16u8 VAR18 = {0};
    v16u8 VAR19, VAR20;
    v16u8 VAR21, VAR22, VAR23, VAR24;
    v8i16 VAR25, VAR26, VAR27 = {0};
    v8i16 VAR28 = {0};
    v8i16 VAR29, VAR30, VAR31 = {0};
    v8i16 VAR32 = {0};
    v16u8 VAR33, VAR34, VAR35, VAR36, VAR37, VAR38, VAR39, VAR40;
    v8i16 VAR41, VAR42, VAR43, VAR44, VAR45, VAR46;
    v8i16 VAR47, VAR48, VAR49, VAR50, VAR51, VAR52;
    v8i16 VAR53, VAR54;
    v16i8 VAR55 = {0};
    v16u8 VAR56;
    VAR16 = (VAR57)FUN2(VAR3);
    VAR17 = (VAR57)FUN3((VAR58)VAR17, 0, (VAR58)VAR16);
    VAR16 = (VAR57)FUN2(VAR4);
    VAR17 = (VAR57)FUN3((VAR58)VAR17, 1, (VAR58)VAR16);
    VAR16 = (VAR57)FUN2(VAR5);
    VAR17 = (VAR57)FUN3((VAR58)VAR17, 2, (VAR58)VAR16);
    VAR16 = (VAR57)FUN2(VAR6);
    VAR17 = (VAR57)FUN3((VAR58)VAR17, 3, (VAR58)VAR16);
    if (!FUN4(VAR17))
    {
        VAR16 = (VAR57)FUN2(VAR7);
        VAR18 = (VAR57)FUN3((VAR58)VAR18, 0, (VAR58)VAR16);
        VAR16 = (VAR57)FUN2(VAR8);
        VAR18 = (VAR57)FUN3((VAR58)VAR18, 1, (VAR58)VAR16);
        VAR16 = (VAR57)FUN2(VAR9);
        VAR18 = (VAR57)FUN3((VAR58)VAR18, 2, (VAR58)VAR16);
        VAR16 = (VAR57)FUN2(VAR10);
        VAR18 = (VAR57)FUN3((VAR58)VAR18, 3, (VAR58)VAR16);
        VAR56 = (VAR55 < VAR17);
        {
            v16u8 VAR59, VAR60, VAR61, VAR62, VAR63, VAR64, VAR65, VAR66;
            v16u8 VAR67, VAR68, VAR69, VAR70, VAR71, VAR72, VAR73, VAR74;
            VAR14 = VAR2;
            VAR14 -= 4;
            FUN5(VAR14, VAR13, VAR59, VAR60, VAR61, VAR62, VAR63, VAR64, VAR65, VAR66);
            VAR14 += (8 * VAR13);
            FUN5(VAR14, VAR13, VAR67, VAR68, VAR69, VAR70, VAR71, VAR72, VAR73, VAR74);
            FUN6(VAR59, VAR60, VAR61, VAR62, VAR63, VAR64, VAR65, VAR66, VAR67, VAR68, VAR69, VAR70, VAR71, VAR72, VAR73, VAR74, VAR33, VAR34, VAR35, VAR36, VAR37, VAR38, VAR39, VAR40);
        }
        {
            v16u8 VAR75, VAR76, VAR77, VAR78;
            v16u8 VAR79;
            VAR75 = FUN7(VAR36, VAR37);
            VAR76 = FUN7(VAR35, VAR36);
            VAR77 = FUN7(VAR38, VAR37);
            VAR78 = (VAR57)FUN2(VAR11);
            VAR15 = (VAR57)FUN2(VAR12);
            VAR79 = (VAR75 < VAR78);
            VAR20 = (VAR76 < VAR15);
            VAR19 = VAR20 & VAR79;
            VAR20 = (VAR77 < VAR15);
            VAR19 = VAR20 & VAR19;
            VAR19 = VAR19 & VAR56;
        }
        if (!FUN4(VAR19))
        {
            v16i8 VAR80, VAR81;
            v8i16 VAR82, VAR83;
            VAR80 = VAR55 - (VAR84)VAR18;
            VAR81 = FUN8(VAR80, 0);
            FUN9(VAR81, VAR80, VAR82, VAR83);
            FUN10(VAR18, VAR53, VAR54);
            FUN10(VAR35, VAR42, VAR48);
            FUN10(VAR36, VAR43, VAR49);
            FUN10(VAR37, VAR44, VAR50);
            {
                v16u8 VAR85;
                v16u8 VAR86, VAR87;
                VAR85 = FUN7(VAR34, VAR36);
                VAR20 = (VAR85 < VAR15);
                VAR20 = VAR20 & VAR19;
                VAR86 = (VAR57)FUN11((VAR84)VAR20, VAR55, 8);
                if (!FUN4(VAR86))
                {
                    VAR41 = (VAR88)FUN12(VAR55, (VAR84)VAR34);
                    FUN13(VAR43, VAR44, VAR42, VAR41, VAR82, VAR53, VAR27);
                }
                VAR87 = (VAR57)FUN11(VAR55, (VAR84)VAR20, 8);
                if (!FUN4(VAR87))
                {
                    VAR47 = (VAR88)FUN14(VAR55, (VAR84)VAR34);
                    FUN13(VAR49, VAR50, VAR48, VAR47, VAR83, VAR54, VAR31);
                }
            }
            if (!FUN4(VAR20))
            {
                VAR21 = (VAR57)FUN15((VAR84)VAR31, (VAR84)VAR27);
                VAR35 = FUN16(VAR35, VAR21, VAR20);
                VAR20 = FUN17(VAR20, 1);
                VAR18 = VAR18 + VAR20;
            }
            {
                v16u8 VAR89;
                v16u8 VAR87, VAR86;
                VAR89 = FUN7(VAR39, VAR37);
                VAR20 = (VAR89 < VAR15);
                VAR20 = VAR20 & VAR19;
                VAR45 = (VAR88)FUN12(VAR55, (VAR84)VAR38);
                VAR86 = (VAR57)FUN11((VAR84)VAR20, VAR55, 8);
                if (!FUN4(VAR86))
                {
                    VAR46 = (VAR88)FUN12(VAR55, (VAR84)VAR39);
                    FUN13(VAR43, VAR44, VAR45, VAR46, VAR82, VAR53, VAR28);
                }
                VAR51 = (VAR88)FUN14(VAR55, (VAR84)VAR38);
                VAR87 = (VAR57)FUN11(VAR55, (VAR84)VAR20, 8);
                if (!FUN4(VAR87))
                {
                    VAR52 = (VAR88)FUN14(VAR55, (VAR84)VAR39);
                    FUN13(VAR49, VAR50, VAR51, VAR52, VAR83, VAR54, VAR32);
                }
            }
            if (!FUN4(VAR20))
            {
                VAR24 = (VAR57)FUN15((VAR84)VAR32, (VAR84)VAR28);
                VAR38 = FUN16(VAR38, VAR24, VAR20);
                VAR20 = FUN17(VAR20, 1);
                VAR18 = VAR18 + VAR20;
            }
            {
                v8i16 VAR90, VAR91;
                v8i16 VAR92, VAR93;
                v16i8 VAR94, VAR95;
                VAR94 = VAR55 - (VAR84)VAR18;
                VAR95 = FUN8(VAR94, 0);
                FUN18(VAR55, VAR18, VAR95, VAR94, VAR90, VAR91);
                FUN19(VAR44, VAR43, VAR42, VAR45, VAR91, VAR90, VAR25, VAR26);
                VAR92 = (VAR88)FUN14(VAR55, (VAR84)VAR18);
                VAR93 = (VAR88)FUN14(VAR95, VAR94);
                FUN19(VAR50, VAR49, VAR48, VAR51, VAR93, VAR92, VAR29, VAR30);
            }
            FUN20(VAR29, VAR25, VAR30, VAR26, VAR22, VAR23);
            VAR36 = FUN16(VAR36, VAR22, VAR19);
            VAR37 = FUN16(VAR37, VAR23, VAR19);
        }
        {
            v16i8 VAR96, VAR97, VAR98, VAR99;
            v8i16 VAR100, VAR101;
            v4i32 VAR102, VAR103, VAR104, VAR105;
            uint32_t VAR106, VAR107;
            uint16_t VAR108, VAR109;
            VAR14 = VAR2 - 3;
            FUN21(VAR35, VAR34, VAR96, VAR98);
            FUN21(VAR37, VAR36, VAR97, VAR99);
            FUN9(VAR39, VAR38, VAR100, VAR101);
            FUN22(VAR97, VAR96, VAR102, VAR103);
            FUN22(VAR99, VAR98, VAR104, VAR105);
            VAR106 = FUN23(VAR102, 0);
            VAR108 = FUN24(VAR100, 0);
            VAR107 = FUN23(VAR102, 1);
            VAR109 = FUN24(VAR100, 1);
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
            VAR106 = FUN23(VAR102, 2);
            VAR108 = FUN24(VAR100, 2);
            VAR107 = FUN23(VAR102, 3);
            VAR109 = FUN24(VAR100, 3);
            VAR14 += VAR13;
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
            VAR106 = FUN23(VAR103, 0);
            VAR108 = FUN24(VAR100, 4);
            VAR107 = FUN23(VAR103, 1);
            VAR109 = FUN24(VAR100, 5);
            VAR14 += VAR13;
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
            VAR106 = FUN23(VAR103, 2);
            VAR108 = FUN24(VAR100, 6);
            VAR107 = FUN23(VAR103, 3);
            VAR109 = FUN24(VAR100, 7);
            VAR14 += VAR13;
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
            VAR106 = FUN23(VAR104, 0);
            VAR108 = FUN24(VAR101, 0);
            VAR107 = FUN23(VAR104, 1);
            VAR109 = FUN24(VAR101, 1);
            VAR14 += VAR13;
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
            VAR106 = FUN23(VAR104, 2);
            VAR108 = FUN24(VAR101, 2);
            VAR107 = FUN23(VAR104, 3);
            VAR109 = FUN24(VAR101, 3);
            VAR14 += VAR13;
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
            VAR106 = FUN23(VAR105, 0);
            VAR108 = FUN24(VAR101, 4);
            VAR107 = FUN23(VAR105, 1);
            VAR109 = FUN24(VAR101, 5);
            VAR14 += VAR13;
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
            VAR106 = FUN23(VAR105, 2);
            VAR108 = FUN24(VAR101, 6);
            VAR107 = FUN23(VAR105, 3);
            VAR109 = FUN24(VAR101, 7);
            VAR14 += VAR13;
            FUN25(VAR106, VAR14);
            FUN26(VAR108, (VAR14 + 4));
            VAR14 += VAR13;
            FUN25(VAR107, VAR14);
            FUN26(VAR109, (VAR14 + 4));
        }
    }
}