static void FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint32_t VAR5)
{
    v16u8 VAR6, VAR7, VAR8;
    v16u8 VAR9, VAR10;
    v16u8 VAR11, VAR12, VAR13;
    v16u8 VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    v16u8 VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    v8i16 VAR28, VAR29, VAR30, VAR31;
    v8i16 VAR32, VAR33, VAR34, VAR35;
    v8i16 VAR36 = {0};
    v8i16 VAR37 = {0};
    v8i16 VAR38 = {0};
    v8i16 VAR39 = {0};
    v8i16 VAR40 = {0};
    v8i16 VAR41 = {0};
    v8i16 VAR42 = {0};
    v8i16 VAR43 = {0};
    v8i16 VAR44 = {0};
    v8i16 VAR45 = {0};
    v8i16 VAR46 = {0};
    v8i16 VAR47 = {0};
    v16u8 VAR48;
    v16i8 VAR49 = {0};
    VAR9 = (VAR50)FUN2(VAR3);
    VAR10 = (VAR50)FUN2(VAR4);
    FUN3(VAR2 - (VAR5 << 1), VAR5, VAR22, VAR23, VAR24, VAR25);
    {
        v16u8 VAR51, VAR52, VAR53;
        VAR8 = FUN4(VAR23, VAR24);
        VAR51 = FUN4(VAR22, VAR23);
        VAR52 = FUN4(VAR25, VAR24);
        VAR53 = (VAR8 < VAR9);
        VAR12 = (VAR51 < VAR10);
        VAR11 = VAR12 & VAR53;
        VAR12 = (VAR52 < VAR10);
        VAR11 = VAR12 & VAR11;
    }
    if (!FUN5(VAR11))
    {
        VAR26 = FUN6(VAR2 + (2 * VAR5));
        VAR20 = FUN6(VAR2 - (VAR5 << 2));
        VAR21 = FUN6(VAR2 - (3 * VAR5));
        FUN7(VAR22, VAR28, VAR32);
        FUN7(VAR23, VAR29, VAR33);
        FUN7(VAR24, VAR30, VAR34);
        VAR48 = VAR9 >> 2;
        VAR48 = VAR48 + 2;
        VAR48 = (VAR8 < VAR48);
        VAR6 = FUN4(VAR21, VAR23);
        VAR12 = (VAR6 < VAR10);
        VAR12 = VAR12 & VAR48;
        VAR13 = FUN8(VAR12, 0xff);
        VAR12 = VAR12 & VAR11;
        VAR13 = VAR13 & VAR11;
        {
            v8u16 VAR54, VAR55;
            VAR31 = (VAR56)FUN9(VAR49, (VAR57)VAR25);
            VAR55 = (VAR58)FUN10((VAR57)VAR12, VAR49, 8);
            if (!FUN5((VAR50)VAR55))
            {
                v8i16 VAR59;
                FUN11(VAR49, VAR20, VAR49, VAR21, VAR59, VAR36);
                FUN12(VAR59, VAR29, VAR30, VAR28, VAR36, VAR31, VAR38, VAR37, VAR36);
            }
            VAR35 = (VAR56)FUN13(VAR49, (VAR57)VAR25);
            VAR54 = (VAR58)FUN10(VAR49, (VAR57)VAR12, 8);
            if (!FUN5((VAR50)VAR54))
            {
                v8i16 VAR60;
                FUN14(VAR49, VAR20, VAR49, VAR21, VAR60, VAR42);
                FUN12(VAR60, VAR33, VAR34, VAR32, VAR42, VAR35, VAR44, VAR43, VAR42);
            }
        }
        if (!FUN5(VAR12))
        {
            FUN15(VAR44, VAR38, VAR43, VAR37, VAR42, VAR36, VAR16, VAR15, VAR14);
            VAR23 = FUN16(VAR23, VAR16, VAR12);
            VAR22 = FUN16(VAR22, VAR15, VAR12);
            VAR21 = FUN16(VAR21, VAR14, VAR12);
            FUN17(VAR22, VAR2 - (2 * VAR5));
            FUN17(VAR21, VAR2 - (3 * VAR5));
        }
        {
            v8u16 VAR61, VAR62;
            VAR61 = (VAR58)FUN10((VAR57)VAR13, VAR49, 8);
            if (!FUN5((VAR50)VAR61))
            {
                FUN18(VAR29, VAR31, VAR28, VAR38);
            }
            VAR62 = (VAR58)FUN10(VAR49, (VAR57)VAR13, 8);
            if (!FUN5((VAR50)VAR62))
            {
                FUN18(VAR33, VAR35, VAR32, VAR44);
            }
        }
        if (!FUN5(VAR13))
        {
            VAR16 = (VAR50)FUN19((VAR57)VAR44, (VAR57)VAR38);
            VAR23 = FUN16(VAR23, VAR16, VAR13);
        }
        FUN17(VAR23, VAR2 - VAR5);
        VAR27 = FUN6(VAR2 + (3 * VAR5));
        VAR7 = FUN4(VAR26, VAR24);
        VAR12 = (VAR7 < VAR10);
        VAR12 = VAR12 & VAR48;
        VAR13 = FUN8(VAR12, 0xff);
        VAR12 = VAR12 & VAR11;
        VAR13 = VAR13 & VAR11;
        {
            v8u16 VAR54, VAR55;
            VAR55 = (VAR58)FUN10((VAR57)VAR12, VAR49, 8);
            if (!FUN5((VAR50)VAR55))
            {
                v8i16 VAR63;
                FUN11(VAR49, VAR27, VAR49, VAR26, VAR63, VAR41);
                FUN12(VAR63, VAR30, VAR29, VAR31, VAR41, VAR28, VAR39, VAR40, VAR41);
            }
            VAR54 = (VAR58)FUN10(VAR49, (VAR57)VAR12, 8);
            if (!FUN5((VAR50)VAR54))
            {
                v8i16 VAR64;
                FUN14(VAR49, VAR27, VAR49, VAR26, VAR64, VAR47);
                FUN12(VAR64, VAR34, VAR33, VAR35, VAR47, VAR32, VAR45, VAR46, VAR47);
            }
        }
        if (!FUN5(VAR12))
        {
            FUN15(VAR45, VAR39, VAR46, VAR40, VAR47, VAR41, VAR17, VAR18, VAR19);
            VAR24 = FUN16(VAR24, VAR17, VAR12);
            VAR25 = FUN16(VAR25, VAR18, VAR12);
            VAR26 = FUN16(VAR26, VAR19, VAR12);
            FUN17(VAR25, VAR2 + VAR5);
            FUN17(VAR26, VAR2 + 2 * VAR5);
        }
        {
            v8u16 VAR61, VAR62;
            VAR61 = (VAR58)FUN10((VAR57)VAR13, VAR49, 8);
            if (!FUN5((VAR50)VAR61))
            {
                FUN18(VAR30, VAR28, VAR31, VAR39);
            }
            VAR62 = (VAR58)FUN10(VAR49, (VAR57)VAR13, 8);
            if (!FUN5((VAR50)VAR62))
            {
                FUN18(VAR34, VAR32, VAR35, VAR45);
            }
        }
        if (!FUN5(VAR13))
        {
            VAR17 = (VAR50)FUN19((VAR57)VAR45, (VAR57)VAR39);
            VAR24 = FUN16(VAR24, VAR17, VAR13);
        }
        FUN17(VAR24, VAR2);
    }
}