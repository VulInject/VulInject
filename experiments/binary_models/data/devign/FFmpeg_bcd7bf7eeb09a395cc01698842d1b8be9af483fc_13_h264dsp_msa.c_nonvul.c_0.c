static void FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint32_t VAR5)
{
    VAR1 *VAR6;
    v16u8 VAR7, VAR8, VAR9;
    v16u8 VAR10, VAR11;
    v16u8 VAR12, VAR13;
    v16u8 VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    v8i16 VAR22, VAR23, VAR24, VAR25;
    v8i16 VAR26, VAR27, VAR28, VAR29;
    v8i16 VAR30 = {0};
    v8i16 VAR31 = {0};
    v8i16 VAR32 = {0};
    v8i16 VAR33 = {0};
    v8i16 VAR34 = {0};
    v8i16 VAR35 = {0};
    v8i16 VAR36 = {0};
    v8i16 VAR37 = {0};
    v8i16 VAR38 = {0};
    v8i16 VAR39 = {0};
    v8i16 VAR40 = {0};
    v8i16 VAR41 = {0};
    v16i8 VAR42 = {0};
    v16u8 VAR43;
    VAR6 = VAR2 - 4;
    {
        v16u8 VAR44, VAR45, VAR46, VAR47, VAR48, VAR49, VAR50, VAR51;
        v16u8 VAR52, VAR53, VAR54, VAR55, VAR56, VAR57, VAR58, VAR59;
        FUN2(VAR6, VAR5, VAR44, VAR45, VAR46, VAR47, VAR48, VAR49, VAR50, VAR51);
        FUN2(VAR6 + (8 * VAR5), VAR5, VAR52, VAR53, VAR54, VAR55, VAR56, VAR57, VAR58, VAR59);
        FUN3(VAR44, VAR45, VAR46, VAR47, VAR48, VAR49, VAR50, VAR51, VAR52, VAR53, VAR54, VAR55, VAR56, VAR57, VAR58, VAR59, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21);
    }
    FUN4(VAR16, VAR22, VAR26);
    FUN4(VAR17, VAR23, VAR27);
    FUN4(VAR18, VAR24, VAR28);
    FUN4(VAR19, VAR25, VAR29);
    {
        v16u8 VAR60, VAR61;
        VAR9 = FUN5(VAR17, VAR18);
        VAR60 = FUN5(VAR16, VAR17);
        VAR61 = FUN5(VAR19, VAR18);
        VAR7 = (VAR62)FUN6(VAR3);
        VAR8 = (VAR62)FUN6(VAR4);
        VAR10 = (VAR9 < VAR7);
        VAR12 = (VAR60 < VAR8);
        VAR11 = VAR12 & VAR10;
        VAR12 = (VAR61 < VAR8);
        VAR11 = VAR12 & VAR11;
    }
    if (!FUN7(VAR11))
    {
        VAR43 = VAR7 >> 2;
        VAR43 = VAR43 + 2;
        VAR43 = (VAR9 < VAR43);
        {
            v16u8 VAR63;
            VAR63 = FUN5(VAR15, VAR17);
            VAR12 = (VAR63 < VAR8);
        }
        VAR12 = VAR43 & VAR12;
        VAR13 = FUN8(VAR12, 0xff);
        VAR12 = VAR12 & VAR11;
        VAR13 = VAR13 & VAR11;
        {
            v16u8 VAR64;
            VAR64 = (VAR62)FUN9((VAR65)VAR12, VAR42, 8);
            if (!FUN7(VAR64))
            {
                v8i16 VAR66;
                FUN10(VAR42, VAR14, VAR42, VAR15, VAR66, VAR30);
                FUN11(VAR66, VAR23, VAR24, VAR22, VAR30, VAR25, VAR32, VAR31, VAR30);
            }
        }
        {
            v16u8 VAR67;
            VAR67 = (VAR62)FUN9(VAR42, (VAR65)VAR12, 8);
            if (!FUN7(VAR67))
            {
                v8i16 VAR68;
                FUN12(VAR42, VAR14, VAR42, VAR15, VAR68, VAR36);
                FUN11(VAR68, VAR27, VAR28, VAR26, VAR36, VAR29, VAR38, VAR37, VAR36);
            }
        }
        if (!FUN7(VAR12))
        {
            v16u8 VAR69, VAR70, VAR71;
            FUN13(VAR38, VAR32, VAR37, VAR31, VAR36, VAR30, VAR69, VAR71, VAR70);
            VAR17 = FUN14(VAR17, VAR69, VAR12);
            VAR16 = FUN14(VAR16, VAR71, VAR12);
            VAR15 = FUN14(VAR15, VAR70, VAR12);
        }
        {
            v16u8 VAR72;
            VAR72 = (VAR62)FUN9((VAR65)VAR13, VAR42, 8);
            if (!FUN7(VAR72))
            {
                FUN15(VAR23, VAR25, VAR22, VAR32);
            }
        }
        {
            v16u8 VAR73;
            VAR73 = (VAR62)FUN9(VAR42, (VAR65)VAR13, 8);
            if (!FUN7(VAR73))
            {
                FUN15(VAR27, VAR29, VAR26, VAR38);
            }
        }
        if (!FUN7(VAR13))
        {
            v16u8 VAR69;
            VAR69 = (VAR62)FUN16((VAR65)VAR38, (VAR65)VAR32);
            VAR17 = FUN14(VAR17, VAR69, VAR13);
        }
        {
            v16u8 VAR74;
            VAR74 = FUN5(VAR20, VAR18);
            VAR12 = (VAR74 < VAR8);
        }
        VAR12 = VAR12 & VAR43;
        VAR13 = FUN8(VAR12, 0xff);
        VAR12 = VAR12 & VAR11;
        VAR13 = VAR13 & VAR11;
        {
            v16u8 VAR64;
            VAR64 = (VAR62)FUN9((VAR65)VAR12, VAR42, 8);
            if (!FUN7(VAR64))
            {
                v8i16 VAR75;
                FUN10(VAR42, VAR21, VAR42, VAR20, VAR75, VAR35);
                FUN11(VAR75, VAR24, VAR23, VAR25, VAR35, VAR22, VAR33, VAR34, VAR35);
            }
        }
        {
            v16u8 VAR67;
            VAR67 = (VAR62)FUN9(VAR42, (VAR65)VAR12, 8);
            if (!FUN7(VAR67))
            {
                v8i16 VAR76;
                FUN12(VAR42, VAR21, VAR42, VAR20, VAR76, VAR41);
                FUN11(VAR76, VAR28, VAR27, VAR29, VAR41, VAR26, VAR39, VAR40, VAR41);
            }
        }
        if (!FUN7(VAR12))
        {
            v16u8 VAR77, VAR78, VAR79;
            FUN13(VAR39, VAR33, VAR40, VAR34, VAR41, VAR35, VAR77, VAR78, VAR79);
            VAR18 = FUN14(VAR18, VAR77, VAR12);
            VAR19 = FUN14(VAR19, VAR78, VAR12);
            VAR20 = FUN14(VAR20, VAR79, VAR12);
        }
        {
            v16u8 VAR72;
            VAR72 = (VAR62)FUN9((VAR65)VAR13, VAR42, 8);
            if (!FUN7(VAR72))
            {
                FUN15(VAR24, VAR22, VAR25, VAR33);
            }
        }
        {
            v16u8 VAR73;
            VAR73 = (VAR62)FUN9(VAR42, (VAR65)VAR13, 8);
            if (!FUN7(VAR73))
            {
                FUN15(VAR28, VAR26, VAR29, VAR39);
            }
        }
        if (!FUN7(VAR13))
        {
            v16u8 VAR77;
            VAR77 = (VAR62)FUN16((VAR65)VAR39, (VAR65)VAR33);
            VAR18 = FUN14(VAR18, VAR77, VAR13);
        }
    }
    {
        v8i16 VAR80, VAR81, VAR82, VAR83, VAR84, VAR85, VAR86, VAR87, VAR88, VAR89;
        FUN17(VAR16, VAR15, VAR80, VAR82);
        FUN17(VAR18, VAR17, VAR81, VAR83);
        FUN17(VAR20, VAR19, VAR84, VAR87);
        FUN18(VAR81, VAR80, VAR85, VAR86);
        FUN18(VAR83, VAR82, VAR88, VAR89);
        VAR6 = VAR2 - 3;
        FUN19(VAR85, VAR85, 0, 1, 2, 3, VAR6, VAR5);
        FUN20(VAR84, 0, VAR6 + 4, VAR5);
        VAR6 += 4 * VAR5;
        FUN19(VAR86, VAR86, 0, 1, 2, 3, VAR6, VAR5);
        FUN20(VAR84, 4, VAR6 + 4, VAR5);
        VAR6 += 4 * VAR5;
        FUN19(VAR88, VAR88, 0, 1, 2, 3, VAR6, VAR5);
        FUN20(VAR87, 0, VAR6 + 4, VAR5);
        VAR6 += 4 * VAR5;
        FUN19(VAR89, VAR89, 0, 1, 2, 3, VAR6, VAR5);
        FUN20(VAR87, 4, VAR6 + 4, VAR5);
    }
}